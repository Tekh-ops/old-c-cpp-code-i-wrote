#include<stdio.h>
#include"bubble_sort.h"

int binarySearch(int [],int,int,int);

int main()
{
    int index,exam_num,val,flag=0;

    int exam_nos[10] = {61222,23122,88888,43112,99999,32322,61223,87199,12341,51212};
    int n = sizeof(exam_nos)/sizeof(exam_nos[0]); 

    printf("Enter your examination number\n");
    scanf("%d",&exam_num);

    bubbleSort(exam_nos, n); 
    val = binarySearch(exam_nos,0,10,exam_num);

    if (exam_nos[val]==exam_num)    
    {
        printf("Congrats,you have successfully passed in all subjects of the First Year.\n");
    }
    else
    {
        printf("Sorry,your number is not present in the list of the candidates who have successfully passed First Year");
    }
    
    return 0;
}

int binarySearch(int list[],int right,int left,int key)
{
    int midpt;
    do
    {
        midpt=(left+right)/2;
        if (key<list[right]||key>list[left-1])
        {
            return -1;
        }

        if (key ==list[midpt])
            return midpt;
        
        else if(key>list[midpt])
            right=midpt;

        else
            left=midpt;

    } while (1);
}