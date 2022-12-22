#include <graphics.h>
#include <conio.h>
int main()
{
   int gd = DETECT, GM, I, X, Y;
   initgraph(&gd, &gm, NULL);
   x = getmaxx() / 3;
   y = getmaxx() / 3;
   setbkcolor(0);
   setcolor(11);
   for (int i = 1; i <= 8; i++)
   {
      setfillstyle(10, i);
      delay(60);
      circle(x, y, i * 20);
      floodfill(x - 2 + i * 20, y, 11);
   }

   getch();
   closegraph();
}
