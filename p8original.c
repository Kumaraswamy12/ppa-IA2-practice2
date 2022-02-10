#include <stdio.h>
typedef struct _triangle
{
     float base, altitude, area;
} Triangle;
int input_n()
{
     int n;
     printf("Enter the number of triangles\n");
     scanf("%d", &n);
     return n;
}
Triangle input_triangle()
{
     Triangle q;
     scanf("%f%f", &q.base, &q.altitude);
     return q;
}
void input_n_triangles(int n, Triangle t[n])
{
     for (int i = 0; i < n; i++)
     {
          printf("Enter the base and altitude of triangle%d\n", i+1);
          t[i] = input_triangle();
     }
}
void find_area(Triangle *t)
{
     t->area = (t->base * t->altitude) / 2.0;
}
void find_areas_n(int n, Triangle t[n])
{
     for (int i = 0; i < n; i++)
          find_area(&t[i]);
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
     Triangle c;
     c=t[0];
     for (int i = 1; i <n ; i++)
          if (c.area < t[i].area)
               c = c;
          else
               c = t[i];
     return c;
}
void output(int n, Triangle t[n], Triangle smallest)
{
     printf("the smallest of triangles with base and height\n");
     for (int i = 0; i < n; i++)
          printf("%f\t%f\n", t[i].base, t[i].altitude);
     printf("is\nThe triangle with base=%f height=%f\n", smallest.base, smallest.altitude);
     printf("The area of triangle with base=%f height=%f is %f\n", smallest.base, smallest.altitude, smallest.area);
}
int main()
{
     int n;
     n = input_n();
     Triangle t1, t[n];
     input_n_triangles(n, t);
     find_areas_n(n, t);
     t1 = find_smallest_triangle(n, t);
     output(n, t, t1);
     return 0;
}
