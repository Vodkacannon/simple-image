struct pixel_rgb
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

struct pixel_rgba
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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
