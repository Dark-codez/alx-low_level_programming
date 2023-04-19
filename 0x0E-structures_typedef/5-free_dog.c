#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This is to free memory
 *@d: array
 * Description: Free memory used by struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
