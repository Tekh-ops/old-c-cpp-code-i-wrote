#include <stdio.h>

int func(int arr1[])
{
    int address1, address2;
    printf("Inside func function\n");
    address2 = arr1 + 1;
    address1 = arr1;
    printf("%d\n", address2 - address1);
    return 0;
}

int main()
{
    int arr[3] = {2, 3, 123};
    int address1, address2;
    func(arr);
    address2 = arr + 1;
    address1 = arr;
    printf("Inside func function\n");
    printf("%d\n", address2 - address1);

    return 0;
}