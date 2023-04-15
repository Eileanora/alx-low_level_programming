#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ans;
	unsigned int i, sz;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ans  = malloc(new_size);
	if (ans == NULL)
		return (NULL);
	if (ptr == NULL)
		return (ans);


	sz = old_size < new_size ? old_size : new_size;
	for (i = 0; i < sz; i++)
		ans[i] = ((char *)ptr)[i];
	free(ptr);
	return (ans);
}
