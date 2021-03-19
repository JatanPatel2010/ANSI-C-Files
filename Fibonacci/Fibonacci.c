#include <stdio.h>
main()
{
    int input, current;
    int fibonacci = 1;
    int oBeforeFibonacci = 1;
    int tBeforeFibonacci = 0;
    printf("Enter the number to find fibonacci series number count (Should be less than 46 for accurate results): ");
    scanf("%d", &input);
    printf("fibonacci series for given count %d is 1, ", input);
    for (current = 1; current < input + 1; ++current)
    {
        fibonacci = oBeforeFibonacci + tBeforeFibonacci;
        tBeforeFibonacci = oBeforeFibonacci;
        oBeforeFibonacci = fibonacci;
        printf("%d, ", fibonacci);
        }
}
