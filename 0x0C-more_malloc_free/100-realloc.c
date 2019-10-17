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
	unsigned int i;
	
	if (new_size == 0 && ptr != NULL) 
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(new_size));
	else if (new_size == old_size)
		return (ptr);
	else
	{	
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		for (i = 0; i <= new_size; i++)
		{
			ptr = new;
			++ptr;
			++new;
		}

	}
return (new);
}
