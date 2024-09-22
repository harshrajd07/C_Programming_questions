#include <stdio.h>
void lar(int n);
int main()
{
    int n;
    printf("Enter array size ");
    scanf("%d", &n);
    printf("Enter %d elements ", n);
    lar(n);
}

void lar(int n)
{
    int a[n], i, max = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        if (a[i] > max)
        {
            max = a[i];
        }
    printf("The largest element is : %d", max);
    return;
}