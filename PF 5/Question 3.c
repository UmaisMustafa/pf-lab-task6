#include<stdio.h>
int main(){
	int percentage;
	printf("Enter your percentage:");
	scanf("%d",&percentage);
	(percentage>=90 && percentage<=100)? printf("Grade is A\n"):
		(percentage>=80&& percentage<=89)? printf("Grade is B\n"):
			(percentage>70 && percentage<=79)? printf("Grade is C\n"):
				(percentage>=60 && percentage<=69)? printf("Grade is D\n"):
					(percentage<60 && percentage>=0)? printf("Grade is F\n"): printf("Invalid percentage");
						
}
