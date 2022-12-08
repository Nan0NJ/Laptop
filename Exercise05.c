#include <stdio.h>
int Palindrom(int n);
int main(){
	int n;
	printf("Insert a number:");
	scanf("%d", &n);
	//printf("Reverse %d\n", );
	if(Palindrom(n)==n)
		printf("It is a Palindrom\n");
	else
		printf("It's not a Palindrom\n");
	return 0;
}
int Palindrom(int n){
	int rev=0;
	while(n>0)
	{
		int dig = n%10;
		rev = rev*10 + dig;
		n/=10;
	}
	return rev;
}