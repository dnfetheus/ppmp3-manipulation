#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct pixel{
     unsigned char r;
     unsigned char g;
     unsigned char b;
 } pixel;

 typedef struct image{
     int width, height;
     unsigned char maximum;
     pixel **pixels;
 } ppm_p3_image;

pixel** create_pixels(int width, int height);
void load_pixels(ppm_p3_image *image, FILE *file);
ppm_p3_image* create_image(int width, int height, unsigned char maximum, pixel **pixels);
ppm_p3_image* load_image(char name[]);
void write_image(ppm_p3_image *image, char name[]);
void grayscale(ppm_p3_image *image);
