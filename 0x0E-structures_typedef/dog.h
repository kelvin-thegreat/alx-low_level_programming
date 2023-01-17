/**
 * struct dog - Struct dog
 *
 * @name: name of the dog
 * @age: The dog's age
 * @owner: owner of the dog
 * @d: pointer to Struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
