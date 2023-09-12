#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type of data describing a dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
*dog_t - Typedef for struct dog
*/

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _Strlen(char *s);

#endif /* DOG_H */
