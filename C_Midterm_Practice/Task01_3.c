#include <stdio.h>
// Task 1 * ~ Alternating Given an integer n, we can print the numbers from 1 to n.
int main() {
	int NumLow=1,NumMax;
	printf("Insert the length from 1 to: ");
	scanf("%d", &NumMax);//getting user input
	if(NumMax<=1)//condition if user puts a value lower than 1
	{
		printf("Error: Hold for Rule n>=1\n");
		return 1;
	}
	for(int index1=1; index1<=NumMax/2; index1++)
	{
		printf("%d, ",index1);
		printf("%d, ",NumMax-index1+1);
	}//endforloop
	for(int index1=NumMax/2+1; index1<=NumMax; index1++)
	{
		printf("%d, ",index1);
		if(index1==NumMax)
			printf("%d ",NumMax-index1+1);
		else
			printf("%d, ",NumMax-index1+1);
	}//endforloop
	return 1;
}