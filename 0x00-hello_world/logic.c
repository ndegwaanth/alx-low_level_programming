#include "main.h"
int shell(void);

/**
 * logical_operator - handles and(&&) operator and or(||) operator
 * @param: the command to be passed
 * Return: 0 (success)
*/
char *logical_operator(char *param)
{
	struct alias variable;
	int m;
	char *arguments[BUFFER];
	char *command;
	pid_t child_process;

	variable.count = 0;
	variable.and_gate_operator = "&&";
	variable.or_gate_operator = "||";
	variable.and = 0;
	variable.or = 0;
	variable.iterator = 1;

	command = strtok(param, "\t\n");
	for (; !command;)
	{
		arguments[0] = command;
		variable.count++;
		command = strtok(NULL, "\t\n");
	}
	arguments[variable.count] = NULL;
	m = 0;
	while (m < variable.count)
	{
		if (strcmp(arguments[m], variable.and_gate_operator))
		{
			arguments[m] = NULL;
			variable.and = variable.iterator;
		}
		if (strcmp(arguments[m], variable.or_gate_operator))
		{
			arguments[m] = NULL;
			variable.or = variable.iterator;
		}

		m++;
	}
	child_process = fork();
	if (child_process == -1)
	{
		perror("Error in the child process");
		exit(EXIT_FAILURE);
	}
	if (child_process == 0)
	{
		execvp(arguments[0], arguments);
		perror("execvp");
		exit(100);
	}
	else if (child_process > 0)
	{
		int process_status;

		waitpid(child_process, &process_status, 0);
		if (variable.and)
		{
			if (WIFEXITED(process_status) == 0)
			{
				printf("The process run properly %d", WEXITSTATUS(process_status));
			}
		}
		else if (variable.or)
		{
			if (WIFEXITED(process_status) == 0)
			{
				printf("The process run properly %d", WEXITSTATUS(process_status));
			}
		}
	}

	return (param);
}
