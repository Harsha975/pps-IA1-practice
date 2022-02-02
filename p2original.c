#include<stdio.h>
int input()
{
  int a;
  printf("enter the number ");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int large;
  large=a>b?(a>c?a:c):(b>c?b:c);
  return large;
}
void output(int a,int b,int c,int large)
{
printf("the highest value is %d",large);

}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(a,b,c,large);
  return 0;

}