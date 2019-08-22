//~ input: exec 11 20 58 78 96 32
				//~ 11
//~ output:minimum number 11
#include<stdio.h>
#include<stdlib.h>
int main(int c,char **data){
		int size=c-1;
		int array[size];
		int i;
		for(i=0;i<=size-1;i++){
			array[i]=atoi(data[i+1]);
		}
		printf("\nArray Values Are:");
		for(i=0;i<=size-1;i++){
			printf("%d ",array[i]);
		}
		int min=array[0];
		for(i=0;i<=size-1;i++){
			if(min>array[i]){
				min=array[i];
			}
		}
		printf("\nMinimu =%d",min);
		int max=array[0];
		for(i=0;i<=size-1;i++){
			if(max<array[i]){
				max=array[i];
			}
		}
		printf("\nMaximum =%d",max);
	return 0;
}
