#include "simple_image.h"

void delete_image_rgba(struct image_rgb* my_image)
{
	free(my_image);
}

void image_rgb_get_buffer_x_size(struct image_rgb* my_image)
{
	return sizeof(my_image->buffer_x / my_image)
}

void image_rgb_get_buffer_y_size(struct image_rgb* my_image)
{
	return sizeof(my_image->buffer_x / my_image)
}

void image_rgb_set_to_color(struct image_rgb* my_image, struct pixel_rgb* my_pixel)
{
	int size = image_rgb_get_buffer_x_size(&my_image);
	
	for(int x = image_rgb_get_buffer_x_size; x > 0; --x)
	{
		for(int y = image_rgb_get_buffer_y_size; y > 0; --y)
		{
			my_image->buffer_x[x] = {my_pixel->r, my_pixel->g, my_pixel->b};
			my_image->buffer_y[y] = {my_pixel->r, my_pixel->g, my_pixel->b};
		}
	}
}
