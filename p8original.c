
#include<stdio.h>
struct _complex
{
float real,imaginary;
};typedef struct _complex complex;
int get_n()
{
  int a;
  printf("enter the size of array");
  scanf("%d",&a);
  return a;
}
void input_n_complex(int n,complex c[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter the complex numbers\n");
    scanf("%f%f",&c[i].real,&c[i].imaginary);
  }
}
complex add_n_complex(int n,complex c[n])
{
  complex s;
  s.real=0;
  s.imaginary=0;

  int i;
  for(i=0;i<n;i++)
  {
    s.real+=c[i].real;
    s.imaginary+=c[i].imaginary;
  }
  return s;
}
void output(int n,complex c[n],complex result)
{
  int i;
  for (i=0;i<n-1;i++)
  {
    printf("%f+%fi+",c[i].real,c[i].imaginary);
  }
  printf("%f+%fi is %f+%fi",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
}
int main()
{
  int n;
  n=get_n();
  complex c[n];
  input_n_complex(n,c);
  complex result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}