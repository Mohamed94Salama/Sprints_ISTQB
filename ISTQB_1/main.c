#include <stdio.h>
#include <stdlib.h>

//Software Engineer Name: Mohamed Ehab

//All inputs are unsigned character

/*
- Define your global variables if needed here:
actual_result
expected_result
- Please concider the memoery optimization.
*/




/*
- Define your functional prototypes used here:
sum
unittest
- Please concider optimum Misra C when writing your functions.
*/

int sum(unsigned char num_1,unsigned char num_2);
void unittest(int Expected_Result, int Actual_Result);



int main()
{
//Please declare your initializations here.
	unsigned char num_1;
	unsigned char num_2;
	
	int Expected_Result; 
	int Actual_Result; 


//Please define your infinite loop here.
while(1)
{

//Please insert your screen visualization here.


//Please write an expression that takes 2 numbers from the user here (concider screen readability).
		printf("Enter the first number : ");
		scanf("%d",&num_1);
		
		
		printf("Enter the second number : ");
		scanf("%d",&num_2);	

//Please write an expression that calls the two function, the activation logic function and the unit test function in sequence.
		printf("Enter the Expected result :");
		scanf("%d",&Expected_Result);
		
		/* Getting the actual result */
		Actual_Result = sum(num_1,num_2);
		unittest(Expected_Result,Actual_Result);
}

    return 0;
}


//Please write the functional description of the sum function here:

int sum(unsigned char num_1,unsigned char num_2)
{
	return (num_1+num_2);
}
//Pleas write the functional description of the unittest function here:

void unittest(int Expected_Result, int Actual_Result)
{
	if(Expected_Result==Actual_Result)
	{
		printf("Test Case Passed\n");
	}else
	{
		printf("Test Case Failed\n");
	}
}