#include<stdio.h>
int main(){
	char c;
	int a=20;
	int b=10;
	printf("give the operator");
	scanf("%c",&c);
	switch (c){
		case '+' :
			printf("%d",a+b);
			break;
		case '-' :
			printf("%d",a-b);
			break;
		case '*' :
			printf("%d",a*b);
			break;
		case '/' :
			printf("%d",a/b);
			break;
		default :
			printf("invalid");
	}}
