#include<stdio.h>
int main(){
	float totalpurchase;
	char membership_status;
	printf("Enter the total purchase and membership status:");
	scanf("%f\n%c",&totalpurchase,&membership_status);
	(totalpurchase > 100 && membership_status=='Y'|| membership_status=='y')? printf("Eligible for discount"):printf("Not eligible for discount");
}

