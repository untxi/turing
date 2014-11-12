/*  ACÁ SÓLO CÓDIGO COMENTADO */
/* PARA GUARDAR NOTAS SOBRE CÓDIGO O LINEAS QUE NOS PUEDEN SERVIR

para correr la máquina y abortarla, teclas que podemos usar
KEY_HOME
KEY_UP
KEY_PGUP
KEY_LEFT
KEY_CENTER
KEY_RIGHT
KEY_END
KEY_DOWN
KEY_PGDN
KEY_INSERT
KEY_DELETE

Paa mostrar la imagen de turing, conseguir graphics.h
#include "graphics.h"
void printimage(
    const char* title=NULL,
    double width_inches=7, double border_left_inches=0.75, double border_top_inches=0.75,
    int left=0, int right=0, int right=INT_MAX, int bottom=INT_MAX
    );

Para guardar una imagen que ha sido dibujada, getimage

Syntax
#include <graphics.h>
void getimage(int left, int top, int right, int bottom, void *bitmap);
Description
getimage copies an image from the screen to memory.
left, top, right, and bottom define the screen area to which the rectangle is copied. bitmap points to the area in memory where the bit image is stored. The first two words of this area are used for the width and height of the rectangle; the remainder holds the image itself.

Return Value
None.

Example
// getimage example

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <alloc.h>

void save_screen(void *buf[4]);
void restore_screen(void *buf[4]);

int maxx, maxy;
int main(void)
{
   int gdriver=DETECT, gmode, errorcode;
   void *ptr[4];

   // autodetect the graphics driver and mode
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();  // check for any errors
   if (errorcode != grOk) {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));

      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   maxx = getmaxx();
   maxy = getmaxy();

   // draw an image on the screen
   rectangle(0, 0, maxx, maxy);
   line(0, 0, maxx, maxy);
   line(0, maxy, maxx, 0);
   save_screen(ptr);           // save the current screen
   getch();                    // pause screen
   cleardevice();              // clear screen
   restore_screen(ptr);        // restore the screen
   getch();                    // pause screen

   closegraph();
   return 0;
}

void save_screen(void *buf[4])
{
   unsigned size;
   int ystart=0, yend, yincr, block;
   yincr = (maxy+1) / 4;
   yend = yincr;

   // get byte size of image
   size = imagesize(0, ystart, maxx, yend);
   for (block=0; block<=3; block++) {
      if ((buf[block] = farmalloc(size)) == NULL) {
         closegraph();
         printf("Error: not enough heap space in save_screen().\n");
         exit(1);
      }
     getimage(0, ystart, maxx, yend, buf[block]);

     ystart = yend + 1;
     yend += yincr + 1;
   }
}

void restore_screen(void *buf[4])
{
   int ystart=0, yend, yincr, block;
   yincr = (maxy+1) / 4;
   yend = yincr;
   for (block=0; block<=3; block++) {
      putimage(0, ystart, buf[block], COPY_PUT);
      farfree(buf[block]);
      ystart = yend + 1;

      yend += yincr + 1;
   }
}

*/
