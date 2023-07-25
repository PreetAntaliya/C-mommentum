#include<stdio.h>

void main(){
	int a,b,c,d;
	printf("Enter Value Of A:-");
	scanf("%d", &a);
	printf("Enter Value Of B :-");
	scanf("%d", &b);
	printf("Enter Value Of C:-");
	scanf("%d", &c);
	printf("Enter Value Of D:-");
	scanf("%d", &d);
	
	if(a==b && b==c && c==d){
		printf("A = %d All Are Same", a);	
	}else{
		if(a>b){
		if(a>c){
			if(a>d){
				printf("A = %d is Largest", a);
			}else{
				printf("D = %d is Largest", d);
			}
		}else{
			if(c>d){
				printf("C = %d is Largest", c);
			}else{
				printf("D = %d is Largest", d);
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("B = %d is Largest", b);
			}else{
				printf("D = %d is Largest", d);
			}
		}else{
			if(c>d){
				printf("C = %d is Largest", c);
			}else{
				printf("D = %d is Largest", d);
			}
		}
	}
	}
}
