#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to a string containing the dog's name
 * @age: Dog's age in years (float)
 * @owner: Pointer to a string containing the owner's name
 *
 * Description: This structure defines a dog with a name, an age,
 * and an owner. It is used to store information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
