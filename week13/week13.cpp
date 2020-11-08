#include <stdio.h>

int main()
{
    int arr1[100];
    int n = 0, i = 0, j = 0, tmp = 0;
    printf("size : ");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("input %d :", i+1);
        scanf_s("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] < arr1[j])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\norder num : ");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    return 0;
}