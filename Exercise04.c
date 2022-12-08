#include <stdio.h>
void Fibonnacci(int n);
int main(){
	int n;
	int a[n];
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n<0){
		printf("Error: Negative number. \n");
		return 1;
	}
	Fibonnacci(n);
}
void Fibonnacci(int n){
	int a=0,b=1;
	printf("%d %d ", a,b);
	for(int i=1; i<=n; i++)
	{
		int fib=a+b;
		a=b;
		b=fib;
		printf("%d ", fib);
	}
	printf("\n");
}