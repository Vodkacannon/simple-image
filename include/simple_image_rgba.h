#pragma once

struct pixel_rgba
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct image_rgba
{
	struct pixel_rgba* buffer_x;
	struct pixel_rgba* buffer_y;
};

void image_rgba_delete(struct image_rgba* my_image);

void image_rgba_delete(struct image_rgba* my_image);

void image_rgba_get_buffer_x_size(struct image_rgba* my_image);

void image_rgba_get_buffer_y_size(struct image_rgba* my_image);

void image_rgba_set_to_color(struct image_rgba* my_image, struct pixel_rgba* my_pixel);
