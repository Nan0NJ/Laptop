#include <stdio.h>
void CheckBiggest(int a,int b, int c);
void CheckSmallest(int a, int b, int c);
int main(){
	int Num1,Num2,Num3;
	printf("Enter 1st Number: ");
	scanf("%d",&Num1);
	printf("Enter 2nd Number: ");
	scanf("%d",&Num2);
	printf("Enter 3rd Number: ");
	scanf("%d",&Num3);
	CheckBiggest(Num1,Num2,Num3);
	CheckSmallest(Num1,Num2,Num3);
	double average = (Num1+Num2+Num3)/3;
	printf("The sum is %d+%d+%d=%d\n",Num1,Num2,Num3,Num1+Num2+Num3);
	printf("The average is is (%d+%d+%d)/3=%lf\n",Num1,Num2,Num3,average);
	return 0;
}
void CheckBiggest(int a, int b, int c){
	if(a>b && a>c)
		printf("%d is the biggest!\n",a);
	else if(b>=a && b>=c)
		printf("%d is the biggest!\n",b);
	else if(c>=a && c>=b)
		printf("%d is the biggest!\n",c);
	else
		printf("Error");
}
void CheckSmallest(int a, int b, int c){
	if(a<b && a<c)
		printf("%d is the smallest!\n",a);
	else if(b<=a && b<=c)
		printf("%d is the smallest!\n",b);
	else if(c<=a && c<=b)
		printf("%d is the smallest!\n",c);
	else
		printf("Error");
}