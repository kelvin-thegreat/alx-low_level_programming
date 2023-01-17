#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of the  dog
 * @owner: owner's dog
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
