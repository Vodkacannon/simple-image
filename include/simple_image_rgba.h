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
