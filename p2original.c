#include <stdio.h>
int input_side()
{
    int a;
    printf("enter the side value\n");
    scanf("%d", &a);
    return a;
}
int check_scalene(int a, int b, int c)
{
    int s;
    if (a == b || b == c || c == a)
        return s = 1;
    else
        return s = 0;
}
void output(int a, int b, int c, int isscalene)
{
    if (isscalene == 0)
        printf("The triangle with sides %d\t%d\t%d is scalene Triangle\n", a, b, c, isscalene);
    else if (isscalene == 1)
        printf("The triangle with sides %d\t%d\t%d is not scalene Triangle\n", a, b, c, isscalene);
}
int main()
{
    int x, y, z, c;
    x = input_side();
    y = input_side();
    z = input_side();
    c = check_scalene(x, y, z);
    output(x, y, z, c);
    return 0;
}
