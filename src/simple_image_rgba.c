#include "simple_image_rgba.h"

void image_rgba_create(struct image_rgba* my_image, const int width, const int height)
{
	my_image->buffer_x = (struct image_rgba*) malloc(my_image->buffer_x->pixel_rgba * width);
	my_image->buffer_x = (struct image_rgba*) malloc(my_image->buffer_x->pixel_rgba * height);
}

void image_rgba_delete(struct image_rgba* my_image)
{
	free(my_image);
}

void image_rgba_get_buffer_x_size(struct image_rgba* my_image)
{
	return sizeof(my_image->buffer_x) / sizeof(my_image->buffer_x[0]);
}

void image_rgba_get_buffer_y_size(struct image_rgba* my_image)
{
	return sizeof(my_image->buffer_y) / sizeof(my_image->buffer_y[0]);
}

void image_rgba_set_to_color(struct image_rgba* my_image, struct pixel_rgba* my_pixel)
{
	int size_x = image_rgba_get_buffer_x_size(&my_image);
	int size_y = image_rgba_get_buffer_x_size(&my_image);
	
	for(int x = size_x - 1; x > 0; --x)
	{
		for(int y = size_y - 1; y > 0; --y)
		{
			my_image->buffer_x[x] = { my_pixel->r, my_pixel->g, my_pixel->b, my_pixel->a };
			my_image->buffer_y[y] = { my_pixel->r, my_pixel->g, my_pixel->b, my_pixel->a };
		}
	}
}
