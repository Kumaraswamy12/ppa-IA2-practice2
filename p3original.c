#include <stdio.h>
int input_number()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    return a;
}
int is_composite(int n)
{
    int c = 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            c++;
    return c;
}
void output(int n, int composite)
{
    if (composite > 0)
        printf("%d is a composite number\n", n);
    else
        printf("%d is a prime number\n", n);
}
int main()
{
    int n, c;
    n = input_number();
    c = is_composite(n);
    output(n, c);
    return 0;
}
