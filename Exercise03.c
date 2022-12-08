#include <stdio.h>
int factoriel(int n);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<0){
		printf("Error: Negative number. \n");
		return 1;
	}
	printf("The factoriel %d\n", factoriel(n));
	return 0;
}
int factoriel(int n){
	if(n==0)
		return 1;
	else
		return n*factoriel(n-1);
}