#include <stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the array size\n");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[])
{
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int sum_composite_numbers(int n, int a[])
{
    int sum = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                c++;
        }
        if (c > 2)
            sum += a[i];
        c = 0;
    }
    return sum;
}
void output(int sum)
{
    printf("The sum of composite numbers=%d\n", sum);
}
int main()
{
    int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}