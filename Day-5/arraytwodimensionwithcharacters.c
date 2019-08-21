//~ datatype arrayname[r_size][c_size];
//~ int array[3][3]={{1,2,3},{4,5,6},{9,8,7}}
//~ 
	//~ array[0][0]-->1
	//~ array[0][1]
#include<stdio.h>
void read_array(int s1,int s2,int array[][3]){
	int i,j;
	int as=65;
	for(i=0;i<=s1-1;i++){
		for(j=0;j<=s2-1;j++){
			array[i][j]=as;
			as++;
		}
	}
}
void display_array(int s1,int s2,int array[][3]){
	int i,j;
	for(i=0;i<=s1-1;i++){
		for(j=0;j<=s2-1;j++){
			printf("%c-->(%d%d) ",array[i][j],i,j);
		}
		printf("\n");
	}
}
int main(){
	int size1,size2;
	printf("Enter Two Sizes:");
	scanf("%d%d",&size1,&size2);
	int array[size1][size2];
	read_array(size1,size2,array);
	display_array(size1,size2,array);
	return 0;
}
