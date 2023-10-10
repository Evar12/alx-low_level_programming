#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - best friend of humankind
 * @name: doggo's name
 * @age: doggo's age
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;/*  new type dog_t as a new name for the type struct dog*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
