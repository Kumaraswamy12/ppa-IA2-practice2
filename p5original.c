#include <stdio.h>
int input()
{
    int a;
    printf("Enter the value\n");
    scanf("%d", &a);
    return a;
}
int gcd(int a, int b)
{
    int c;
    for (int i = 1; i < a || i < b; i++)
        if (a % i == 0 && b % i == 0)
            c = i;
    return c;
}
void output(int a, int b, int gcd)
{
    printf("input: %d\t%d\toutput: %d\n", a, b, gcd);
}
int main()
{
    int n1, n2, hcf;
    n1 = input();
    n2 = input();
    hcf = gcd(n1, n2);
    output(n1, n2, hcf);
    return 0;
}