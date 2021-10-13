#pragma once

struct pixel_rgb
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

struct image_rgb
{
	struct pixel_rgb* buffer_x;
	struct pixel_rgb* buffer_y;
};

struct image_rgba
{
	struct pixel_rgba* buffer_x;
	struct pixel_rgba* buffer_y;
};

void image_rgb_delete(struct image_rgb* my_image);

void image_rgb_delete(struct image_rgb* my_image);

void image_rgb_get_buffer_x_size(struct image_rgb* my_image);

void image_rgb_get_buffer_y_size(struct image_rgb* my_image);

void image_rgb_set_pixel(struct image_rgb* my_image, struct pixel_rgb* my_pixel, int pixel_position_y, int pixel_position_z);

void image_rgb_set_to_color(struct image_rgb* my_image, struct pixel_rgb* my_pixel);
