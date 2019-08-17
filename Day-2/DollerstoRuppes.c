//Dollers to Ruppes
//~ input:6.47
//~ output:495
#include<stdio.h>
int main(){
	float dollers;
	printf("Enter Dollers to convert Rupees:");
	scanf("%f",&dollers);
	float rupees=dollers*74.5;
	printf("%f Dollers = %f Ruppes",dollers,rupees);
	return 0;
}
