#include <stdio.h>

int cube(int *p)
{
    return *p * *p * *p;
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCubes of all elements is: \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", cube(&a[i][j]));
        }
        printf("\n");
    }

    return 0;
}