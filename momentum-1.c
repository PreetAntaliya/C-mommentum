#include<stdio.h>

void main(){
	int a;
	
	printf("Enter a Number :-");
	scanf("%d", &a);
	
	(a%2 == 0) ? printf("Number Is Even - %d", a) : printf("Number Is Odd - %d", a);	
}
