#include "simple_image.h"

void delete_image_rgba(struct image_rgba* my_image)
{
	free(my_image);
}
