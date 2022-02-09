#include<stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
  Triangle o;
  printf("Enter the Base and altitude\n");
  scanf("%f%f",&o.base,&o.altitude);
  return o;
}
void find_area(Triangle *t)
{
  t->area=(t->base*t->altitude)/2.0;
}
void output(Triangle t)
{
  printf("The area of triangle with base=%f and altitude=%f is %f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
