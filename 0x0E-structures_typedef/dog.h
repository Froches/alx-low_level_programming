#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct containing information about a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: This struct contains information about a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif	/* DOG_H */
