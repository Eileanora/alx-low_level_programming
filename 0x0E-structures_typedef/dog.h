#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif
