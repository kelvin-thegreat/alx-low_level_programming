#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - struture of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

typedef struct dog
{
        char *name;
        float age;
        char *owner;

} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* #ifndef DOG_STRUCT */

