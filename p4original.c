#include<stdio.h>
int input ()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int comp(int a,int b, int c)
{
  if ((a>b)&&(a>c))
  return a;
  else if ((b>a)&&(b>c))
  return b;
  else
  return c;

}
int output(int biggest)
{
  printf("biggest number is %d",biggest);
}
int main ()
{
  int x,y,z,biggest;
  x=input();
  y=input();
  z=input();
  biggest=comp(x,y,z);
  output(biggest);
  return 0;
}