#include <stdio.h>

int main()
{
	int choice;
	int num1,num2,result;
	enum{Addition=1,Subtraction=2,Multiplication=3,Divison=4};

	printf("\nEnter the choice\n");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multipllication");
	printf("\n4.Division");
	printf("\nEnter your choice\n");
	scanf("%d",&choice);

	printf("\n\nEnter the number 1\n");
	scanf("%d",&num1);
	printf("\n\nEnter the number 2\n");
	scanf("%d",&num2);

	switch(choice)
     {
		 case Addition:result=num1+num2;
		               printf("The addition of two numbers is=%d\n",result);
					   break;

		 case Subtraction:result=num1-num2;
		                  printf("The subtraction of two numbers is=%d\n",result);
						  break;

		 case Multiplication:result=num1*num2;
		                     printf("The multiplication of two numbers is=%d\n",result);
							 break;

         case Divison:if(2!=0);
		 break;
		                result=num1/num2;
						printf("The division of two numbers is=%d\n",result);
						break;

		 default:
		 printf("The entered value id invalid");											 				  			   
	 }
return 0;
} 
