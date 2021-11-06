#include <stdio.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter your first and last name separated by space\n");
	scanf("%[^] %s",str1,str2);
	printf("First name : %s\nLast name : %s\n",str1,str2);
	return 0;
}