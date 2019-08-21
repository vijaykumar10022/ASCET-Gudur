//~ Funtion using arrays:
		//~ -->read array-->size,array
		//~ -->display array-->size,array
		//~ -->Choice
//~ -->Read array(inserting values into array)
//~ -->Display array(displaying values from array)
//~ -->Searchin(find searching element)
#include<stdio.h>
//reading elements in to array
void read_array(int size,int array[]){
	int i;
	for(i=0;i<=size-1;i++){
		scanf("%d",&array[i]);
	}
}
//Display elements from array
void display_array(int size,int array[]){
	int i;
	for(i=0;i<=size-1;i++){
		printf("%d ",array[i]);
	}
}
//Searching element in array
void search_array(int search,int size,int array[]){
	int i;
	for(i=0;i<=size-1;i++){
		if(search==array[i]){
			printf("%d is found at location %d\n",search,i+1);
			break;
		}
	}
}
int main(){
	int size;
	printf("Enter Array Size:");
	scanf("%d",&size);
	int array[size];
	read_array(size,array);//read
	display_array(size,array);//display
	int search;
	printf("\nEnter Searching Element:");
	scanf("%d",&search);
	search_array(search,size,array);//search
	printf("\nEnter Searching Element:");
	scanf("%d",&search);
	search_array(search,size,array);
	return 0;
}
