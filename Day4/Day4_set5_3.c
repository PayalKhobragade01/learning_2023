#include <stdio.h>
#define N 1000

int main()
{
    int arr[N];
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rarr[N];  
    for (int i = 0; i<n; i++)
    {
        rarr[i] = arr[n-i-1];
    }
    printf("Reversed array: ");
    for (int i = 0; i<n; i++)
    {
        printf("%d ", rarr[i]);
    }
    return 0;
}