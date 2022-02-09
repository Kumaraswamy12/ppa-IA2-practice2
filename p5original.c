#include <stdio.h>
#include <math.h>
float input()
{
    float a;
    printf("Enter the value\n");
    scanf("%f", &a);
    return a;
}
float my_sqrt(float n)
{
    float s = n / 2, t = 0.0;
    while (fabs(s - t) > .000001)
    {
        t = s;
        s = (n / t + t) / 2;
    }
    return s;
}
void output(float n, float sqrt_result)
{
    printf("The sqrt of %f is %f\n", n, sqrt_result);
}
int main()
{
    float n, sqrt_result;
    n = input();
    sqrt_result = my_sqrt(n);
    output(n, sqrt_result);
    return 0;
}
