#include "shell.h"

/**
 * main - the program begin execution at this point
 * @argc: the number of arguments
 * @argv: the array of pointer
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int *path_of_betty_local = "/home/anthony/Betty";
	int iterator;
	int count_errors_in_betty = 0;
	int outcome;

	if (argc < 2)
	{
		fprintf(stderr, "Error: Usage: %s <file1.c> [<file2.c> ...]\n", argv[0]);
		return (-1);
	}

	iterator = 0;
	while (iterator < argc)
	{
		char number_of_command[600];
		/*snprint is used to format the command in path_of_betty_local, the betty script and the current file being checked*/
		snprintf(number_of_command, sizeof(number_of_command), "%ls /betty-\style.pl %s", path_of_betty_local, argv[iterator]);
		/*the access function is used to check if a file exist annd the argument F_Ok is used to check the access mode of the file*/
		if (access(argv[iterator], F_OK) == -1)
			fprintf(stderr, "file %s does not exist\n", argv[iterator]);
		
		printf("debuging: %s\n", argv[iterator]);
		/*the system function is used to execute number of command and run the betty styles on the current file*/
		outcome = system(number_of_command);

		if (!outcome)
		{
			printf("%s The file is in Betty style mode\n", argv[iterator]);
		}
		else
		{
			printf("%s This file is Not in Betty style mode\n", argv[iterator]);
			count_errors_in_betty++;
		}

		if (count_errors_in_betty > 0)
			printf("betty error: %d\n", count_errors_in_betty);
			return (0);

		iterator++;
	}
}
