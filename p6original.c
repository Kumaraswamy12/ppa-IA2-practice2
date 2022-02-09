#include <stdio.h>
#include <stdlib.h>
void input_string(char a[])
{
    printf("Enter the word\n");
    scanf("%s", a);
}
char *str_reverse(char a[])
{
    char *b;
    b = (char *)malloc(15 * sizeof(char));
    int c = 0, i;
    for (i = 0; a[i] != '\0'; i++)
        c++;
    c -= 1;
    for (i = 0; a[i] != '\0'; i++)
        b[i] = a[c - i];
    return b;
}
void output(char a[], char *reverse)
{
    printf("The reverse of word %s is %s\n", a, reverse);
}
int main()
{
    char a[15], *reverse;
    input_string(a);
    reverse = str_reverse(a);
    output(a, reverse);
    return 0;
}