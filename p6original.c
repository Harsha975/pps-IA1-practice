#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("enter the two string\n");
  scanf("%s%s",a,b);
}
int str_cmp(char *a,char *b)
{
  int i;
  for(i=0; a[i] || b[i]!='\0';i++)
  {
    if(a[i]==b[i])
    continue;
    else if(a[i]>b[i])
    {
    return 1;
    break;
    }
    else if (a[i]<b[i])
    {
    return 2;
    break;
    }
    else
    {
    return 3;
    break;
    }
  }  
}
void output(char *a,char *b,int result)
{
if (result==1)
printf("%s is greater than %s",a,b);
else if (result==2)
printf("%s is greater than %s",b,a);
else 
printf("both are same word");
}
int main()
{
  int i;
  i=10;
  char a[i],b[i];
  input_two_string(a,b);
  int result;
  result=str_cmp(a,b);
  output(a,b,result);
  return 0;
}