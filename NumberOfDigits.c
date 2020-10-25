#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Entet the No. : ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("your no. is 0");
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        printf("The no. %d have %d digits", n, count);
    }
    return 0;
}