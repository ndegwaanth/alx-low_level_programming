#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defination of dog trait
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: this program offer the trait a dog can have
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
