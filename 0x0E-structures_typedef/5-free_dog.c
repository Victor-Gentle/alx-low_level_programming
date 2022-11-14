#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog memory
 * @d: Dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Stat
