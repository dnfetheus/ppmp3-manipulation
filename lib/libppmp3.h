#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct pixel{
     unsigned char r;
     unsigned char g;
     unsigned char b;
} pixel;

typedef struct image{
     int width;
     int height;
     unsigned char maximum;
     pixel **pixels;
} ppm_p3_image;

pixel** create_pixels(int width, int height);
ppm_p3_image* create_image(int width, int height, unsigned char maximum, pixel **pixels);
ppm_p3_image* load_image(char name[]);
void free_image(ppm_p3_image *image);
void write_image(ppm_p3_image *image, char name[]);
ppm_p3_image* grayscale(ppm_p3_image *image);
ppm_p3_image* rotate(ppm_p3_image *image, int mode);
ppm_p3_image* change_brightness(ppm_p3_image *image, float percent);