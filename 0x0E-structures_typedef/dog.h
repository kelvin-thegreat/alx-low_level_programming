#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - Struct dog
 *
 * @name: name of the dog
 * @age: The dog's age
 * @owner: owner of the dog
 * @d: pointer to Struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* #ifndef DOG_STRUCT */
