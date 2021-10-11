#include "simple_image.h"

void delete_image_rgba(struct image_rgb* my_image)
{
	free(my_image);
}

void image_rgb_get_buffer_x_length(struct image_rgb* my_image)
{
	return sizeof(my_image->buffer_x / my_image)
}

void image_rgb_set_to_color(struct image_rgb* my_image)
{
	int size = image_rgb_get_buffer_x_length(&my_image);
	
	for(int x = image_rgb_get_buffer_x_length; x < size; size++)
	{
		//pussy.
	}
}
