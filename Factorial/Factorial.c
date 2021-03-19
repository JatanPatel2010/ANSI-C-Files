#include <stdio.h>
main()
{
    /*i variable is the input and j has the previous numbers of i.*/
    int i, j;
    int k = 1;
    printf("Enter the number to find factorial of: ");
    scanf("%d", &i);
    for (j = 1; j < i + 1; ++j)
    {
        k = k * j;

    }
    printf("factorial of %d is %d", i, k);
}
