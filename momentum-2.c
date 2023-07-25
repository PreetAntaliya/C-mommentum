#include<stdio.h>

void main(){
	char value;
	printf("Enter Value :-");
	scanf("%c", &value);
	
	if(isalpha(value)){
		printf("Alphabet");
	}else if(isdigit(value)){
		printf("Number");
	}else{
		printf("special Charecter");
	}
}
