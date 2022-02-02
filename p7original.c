#include<stdio.h>
struct _complex
{
  float real, imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
  Complex s;
  printf("enter the complex numbers\n");
  scanf("%f%f ",&s.real,&s.imaginary);
  return s;
}
Complex add(Complex a,Complex b)
{
  Complex d;
  d.real=a.real+b.real;
  d.imaginary=a.imaginary+b.imaginary;
  return d;
}
void output(Complex a,Complex b,Complex c)
{
  printf("%f+%fi    %f+%fi  is  %f+%fi",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}