#include<stdio.h>
int main(){
	int age;
	char status;
	printf("Enter your age and your citizenship status:");
	scanf("%d\n%c",&age,&status);
	if(status=='P'||status=='p'){
		if(age>=18){
			printf("you are eligible to vote");
		}else
		printf("You are not eligible to vote");
	}else if(status=='N'|| status=='n')
	printf("you are not eligible to vote");
	else
	printf("Invalid input");
}
