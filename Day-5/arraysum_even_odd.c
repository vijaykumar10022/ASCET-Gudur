//~ input:10
	   //~ 8 7 1  2 9 7 5 10 55 11
//~ output:
	  //~ Even Values:8 2 10 
	  //~ odd Values:7 1 9 7 5 55 11
	  //~ Even Sum:20
	  //~ Odd Sum:95
	  //~ 
	   //~ 
#include<stdio.h>
int main(){
	int size;
	printf("Enter Array Size:");
	scanf("%d",&size);//Size reding
	int array[size];//memory allocation
	int i;
	printf("Enter Array Values:");
	for(i=0;i<=size-1;i++){//inserting values
		scanf("%d",&array[i]);
	}
	int e_sum=0,o_sum=0;
	printf("Even Values Are:");
	for(i=0;i<=size-1;i++){
		if(array[i]%2==0){
			printf("%d ",array[i]);
			e_sum=e_sum+array[i];
		}
	}
	printf("\nOdd Values are:");
	for(i=0;i<=size-1;i++){
		if(array[i]%2!=0){
			printf("%d ",array[i]);
			o_sum=o_sum+array[i];
		}
	}
	printf("\nEven Sum:%d",e_sum);
	printf("\nOdd Sum:%d",o_sum);
	return 0;
}
