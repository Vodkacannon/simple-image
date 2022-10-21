#include "simple_image_rgb.h"
#include <time.h>
#include <stdlib.h>

srand(time(NULL));   // Initialization, should only be called once.


void image_rgb_delete(struct image_rgb* my_image)
{
	free(my_image);
}

void image_rgb_get_buffer_x_size(struct image_rgb* my_image)
{
	return sizeof(my_image->buffer_x) / sizeof(my_image->buffer_x[0]);
}

void image_rgb_get_buffer_y_size(struct image_rgb* my_image)
{
	return sizeof(my_image->buffer_y) / sizeof(my_image->buffer_y[0]);
}

void image_rgb_set_pixel(struct image_rgb* my_image, struct pixel_rgb* my_pixel, int pixel_position_y, int pixel_position_z)
{
	my_image->buffer_x[pixel_positon_x] = { my_pixel->r, my_pixel->g, my_pixel->b };
	my_image->buffer_y[pixel_positon_y] = { my_pixel->r, my_pixel->g, my_pixel->b };
}

void image_rgb_set_to_color(struct image_rgb* my_image, struct pixel_rgb* my_pixel)
{
	int size_x = image_rgb_get_buffer_x_size(&my_image);
	int size_y = image_rgb_get_buffer_y_size(&my_image);
	
	for(int x = size_x - 1; x > 0; --x)
	{
		for(int y = size_y - 1; y > 0; --y)
		{
			my_image->buffer_x[x] = { my_pixel->r, my_pixel->g, my_pixel->b };
			my_image->buffer_y[y] = { my_pixel->r, my_pixel->g, my_pixel->b };
		}
	}
}

void image_rgb_set_to_color_noise(struct image_rgb* my_image)
{
	int size_x = image_rgb_get_buffer_x_size(&my_image);
	int size_y = image_rgb_get_buffer_y_size(&my_image);
	
	for(int x = size_x - 1; x > 0; --x)
	{
		for(int y = size_y - 1; y > 0; --y)
		{
			//TODO: limit range to [0, 255].
			//my_image->buffer_x[x] = { rand(), rand(), rand() };
			//my_image->buffer_y[y] = { rand(), rand(), rand() };
		}
	}
}
