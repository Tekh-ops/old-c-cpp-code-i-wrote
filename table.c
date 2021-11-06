#include <stdio.h>

/*codes for multiplicatin table*/
int main(void)
{

   int num1, num2, result;
   int upper, lower, step;
   lower = 1;
   upper = 10;

   printf("Enter the number which you want the multiplication table\n");
   scanf("%d", &num1);
   num2 = 1;

   while (lower <= upper)
   {
      result = num1 * num2;
      printf("\n%d\t", result);
      num2 = num2 + 1;
      lower++;
   }

   return 0;
}