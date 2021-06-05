
    

#include<stdio.h>

#include<graphics.h>

#include<conio.h>


int main(){

int gd = DETECT,gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");


circle(600, 400, 50);
setbkcolor(RED);
circle(600, 400, 120);
circle(600, 400, 190);
circle(600, 400, 260);
circle(600, 400, 330);
//circle(600, 400, 400);

getch();

closegraph();

return 0;

}



