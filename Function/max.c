#include "max.h"

int max (int number_1,int number_2,int number_3)
{
	int highest;
	count++;
	   if (number_1 > number_2){
		highest = number_1;
	}
	   else 
		highest = number_2;

	   if (number_3 > highest){
		highest = number_3;
	}
	return highest;
}