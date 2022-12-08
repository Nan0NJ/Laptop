#include <stdio.h>
void Ex1();
void Ex2();
int main(){
	//Ex1();
	Ex2();
	return 0;
}
void Ex1(){
	int a;
	float b;
	double c;
	printf("Enter an integer: ");
	scanf("%d",&a);
	printf("Enter a float: ");
	scanf("%f",&b);
	printf("Enter a double: ");
	scanf("%lf",&c);
	printf("The sum is %lf\n", a+b+c);
}
void Ex2(){
	int pNum,counter=0;
	printf("Enter a number:");
	scanf("%d", &pNum);
	for(int i=1; i<=pNum; i++)
	{
		if(pNum%i==0)
			counter++;
	}
	if(counter==2)
		printf("It is a prime number");
	else
		printf("It is not a prime number");
}