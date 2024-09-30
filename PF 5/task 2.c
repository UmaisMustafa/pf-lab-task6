#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter values of a,b and c:");
	scanf("%f\n%f\n%f",&a,&b,&c);
	if(a>0 && b>0 && c>0){
		if(a+b+c==180)
		printf("It is a triangle");
		else
		printf("It is not a triangle");
	}else
	printf("Invalid input");
}
