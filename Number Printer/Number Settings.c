#include <stdio.h>
main()
{
    /*i variable is the input count and j is the current count.*/
    int i, j;
    printf("Enter the number of numbers to be printed on the screen: ");
    scanf("%d", &i);
    for (j = 1; j < i + 1; ++j)
    {
        printf("%d,  ", j);
    }
}
