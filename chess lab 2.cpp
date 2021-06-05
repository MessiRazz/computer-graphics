#include<stdio.h>
#include<graphics.h>
int main(){
	int gd=DETECT ,gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
	line(150,150,750,150);
	line(150,150,150,750);
	line(150,750,750,750);
	line(750,150,750,750);
	line(450,150,450,750);
	line(150,450,750,450);
	line(225,150,225,750);
	line(300,150,300,750);
	line(375,150,375,750);
	line(525,150,525,750);
	line(600,150,600,750);
	line(675,150,675,750);
	line(150,225,750,225);
	line(150,300,750,300);
	line(150,375,750,375);
	line(150,525,750,525);
	line(150,600,750,600);
	line(150,675,750,675);
	getch();
	closegraph();
}
