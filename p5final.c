include<stdio.h>
int input(int*a,int*b,int*c)
{
  printf("enter the 3 values");
  scanf("%d%d%d",a,b,c);
}
int comp(int a,int b,int c,int*big)
{
  if ((a>b)&&(a>c))
  *big=a;
  else if ((b>a)&&(b>c))
  *big=b;
  else
  *big=c;
}
int output( int big)
{
  printf("biggest number is %d",big);
}
int main ()
{
  int x,y,z,big;
  input (&x,&y,&z);
  comp(x,y,z,&big);
  output(big);
  return 0;
}