#include<stdio.h>

int func (int** arr1[])
{
    int address_1,address_2;
    printf("Inside function func\n");
    address_2 = &arr1 + 1;
    address_1 = &arr1;
    printf("%d\n" , address_2 - address_1);
}    

int main()
{
    int arr[3] = {2,3,123};
    int address_1,address_2;
    func(arr);
    address_2 = &arr + 1;
    address_1 = &arr;
    printf("Inside main function\n");
    printf("%d\n" , address_2-address_1);
    return 0;
}