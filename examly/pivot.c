#include <stdio.h>
int *arr_input(int size)
{
    static int arr[100];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int left(int arr[], int l)
{
    int l_val = 0;
    for (int i = 0; i < l; i++)
    {

        l_val = l_val + arr[i];
    }
    return l_val;
}
int right(int arr[], int r, int size)
{
    int r_val = 0;
    for (int i = r + 1; i < size; i++)
    {
        r_val = r_val + arr[i];
    }
    return r_val;
}
int pivot(int arr[], int size)
{
    if (size <= 1)
        return -1;

    for (int i = 0; i < size; i++)
    {
        if (left(arr, i) == right(arr, i, size))
        {
            return arr[i];
        }
    }
}

void main()
{
    // int size;
    // scanf("%d", &size);
    // int *arr = arr_input(size);

    // display(arr, size);
    int size = 6;
    int arr[] = {2, 7, 3, 5, 2, 2};
    // display(arr, size);
    printf("%d", pivot(arr, size));
}