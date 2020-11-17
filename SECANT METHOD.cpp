#include<stdio.h>
#include<conio.h>
#include<math.h>
#define ESP 0.0001
#define F(x) (x)* sin(x-2)/(x-1)
int main()
{
  float x1,x2,x3,f1,f2,t;
  //clrscr();
  printf("\nEnter the value of x1: ");
  scanf("%f",&x1);
  printf("\nEnter the value of x2: ");
  scanf("%f",&x2);
  printf("\n______________________________________________\n");
  printf("\n    x1\t  x2\t  x3\t     f(x1)\t f(x2)");
  printf("\n______________________________________________\n");
  do
  {
  f1=F(x1);
  f2=F(x2);
  x3=x2-((f2*(x2-x1))/(f2-f1));
  printf("\n%f   %f   %f   %f   %f",x1,x2,x3,f1,f2);
  x1=x2;
  x2=x3;
  if(f2<0)
    t=fabs(f2);
  else
    t=f2;
  }while(t>ESP);
printf("\n______________________________________________\n");
printf("\n\nApp.root = %f",x3);
getch();
}
