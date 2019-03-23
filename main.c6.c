#include <stdio.h>
main()
{
int a, b, max;
printf("Input first number: ");
scanf("%d", &a);
printf("Input second number: ");
scanf("%d", &b);

if (a > b)
    max = a;
else
    max = b;

printf("The largest number is %d", max);
}
