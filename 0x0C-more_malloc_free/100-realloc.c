#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - Reallocates memory block
  * @ptr: previous pointer
  * @old_size: old size of previous pointer
  * @new_size: new size for our pointer
  * Return: New resized Pointer
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	old = ptr;
	if (new == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
		free(ptr);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
		free(ptr);
	}
	return (new);
	return (ptr);
}
