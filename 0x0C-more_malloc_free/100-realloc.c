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
	void *new;
	/*unsigned int i;*/

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
	if (new == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		ptr = malloc(new_size);
	}
	if (new_size < old_size)
	{
		ptr = new;
	}
	free(new);
	return (ptr);
}
