#include "min.h"

int min(int number_1,int number_2,int number_3)
{
	int lowest;
	count++;
	  if (number_1 < number_2){
	     lowest = number_1;	
	}
	  else 
	     lowest = number_2;
	  
          if (number_3 < lowest){
	     lowest = number_3; 
	}
	return lowest;
}