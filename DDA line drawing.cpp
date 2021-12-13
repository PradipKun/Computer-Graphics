#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd, &gm, (char*) " ");
	int x0,y0,x1,y1,i,dx,dy;
	float steps, xinc, yinc, x ,y;
	
	printf("Enter starting points of line:");
	scanf("%d %d",&x0,&y0);
	printf("Enter the end points of line:");
	scanf("%d %d",&x1,&y1);
	
	dx=x1-x0;
	dy=y1-y0;
	if(abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps=abs(dy);
	
	xinc=dx/steps;
	yinc=dy/steps;
	x=x0, y=y0;
	for(i=0;i<steps;i++)
	{
		putpixel(round(x), round(y), 3);
		x=x+xinc;
		y=y+yinc;
	}
	getch();
	closegraph();	
	return 0;
}





