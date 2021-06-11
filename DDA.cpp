#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main(){
	int gd=DETECT ,gm;
initgraph(&gd, &gm, " ");
int x,y,x1,y1,i,dx,dy;
float steps,xinc,yinc,x2,y2;
printf("enter the two end points of line 1:\n");
scanf("%d%d%d%d",&x,&y,&x1,&y1);
dx=x1-x;
dy=x1-y;
if(abs(dx)>abs(dy)){

steps=abs(dx);
}
else{
steps=abs(dy);
}

xinc=round(dx/steps);
yinc=round(dy/steps);
x2=x;
y2=y;
for(i=0;i<steps;i++){
	putpixel (x2,y2,4);
	x2=(int)x2+xinc;
	y2=(int)y2+yinc;
	
}
getch();
closegraph();
}
