//~ input:8
	  //~ 7 1 9 8 4 2 6 22
	  //~ 11
//~ output:8 is found at location 4
		// 11 is not found
#include<stdio.h>
int main(){
	int size;
	printf("Enter Array size:");
	scanf("%d",&size);//reding size
	int array[size];
	//~ printf("%d",sizeof(array));	
	int i;
	for(i=0;i<=size-1;i++){
		scanf("%d",&array[i]);
	}
	int search,count=0;
	printf("Enter Your Searching Element:");
	scanf("%d",&search);
	for(i=0;i<=size-1;i++){
		if(search==array[i]){
			count++;
			break;
		}
	}
	if(count==0){
		printf("%d Element not fount in an array\n",search);
	}
	else{
		printf("%d is Found At Location %d\n",search,i+1);
	}
	return 0;
}
