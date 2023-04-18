#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struc that stores all the information of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: struct called "dog" that stores
 * its name, age and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
