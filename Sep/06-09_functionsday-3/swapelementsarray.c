//swap   #include <stdio.h>

void swap(int a[], int b[], int n);

int main()
{
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter %d elements for 1st array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter %d elements for 2nd array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    swap(a, b, n);

    printf("After swapping:\n");
    printf("1st array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n2nd array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

void swap(int a[], int b[], int n)
{
    int temp, i;
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}