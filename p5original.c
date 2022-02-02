#include<stdio.h>
float input()
{
  float s;
  printf("enter the number");
  scanf("%f",&s);
  return s;
}
float my_sqrt(float n)
{
  int i;
  float x;
  x=n;
  for(i=0;i<10;i++)
  x=(x+n/x)/2;
  return x;
}
void output(float n,float sqrt_result)
{
  printf("the sqrt of %f is %f",n,sqrt_result);
}
int main()
{
  float n,sqrt_result;
  n=input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
  return 0;
}