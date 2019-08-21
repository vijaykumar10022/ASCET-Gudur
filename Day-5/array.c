//~ datatype arrayname[size];//initialization or syntax
//~ location --->	1	2	3	4	5
//~ int student[5]={501,502,503,504,505}
//~ index-->		0	1	2	3	4
//~ Address-->		100 104 108 112 116
//~ 
//~ int a=40;a=2000
//~ int b=30;b=6000
//~ 
//~ 
			//~ student[3]=504
			//~ student[2]=503
			//~ 
			//~ location 2-->student[1]=502
//~ 
//~ 
//~ Steps:
		//~ -->To read Size
		//~ -->allocate size to array(memory allocation) or array declaration
		//~ -->insert values or elements in to array
		//~ -->Access Those values(choice)






#include<stdio.h>
int main(){
	//static declaration
	//~ int student[20]={501,502,503,504,505,506,509,507};
	//~ int i;
	//~ for(i=0;i<=20-1;i++){
		//~ printf("%d\n",student[i]);
	//~ }
	//Dynamic mechanism
	//~ int size;
	//~ printf("Enter Array Size:");
	//~ scanf("%d",&size);//10
	//~ int student[size];//student[10]//40 bytes
	//~ int i;
	//~ printf("Enter Array Values:");
	//~ for(i=0;i<=size-1;i++){
		//~ scanf("%d",&student[i]);
	//~ }
	//~ for(i=0;i<=size-1;i++){
		//~ printf("location-->%d,index-->%d,Address-->%p,values-->%d\n",i+1,i,&student[i],student[i]);
	//~ }
	printf("%d",'A');
	return 0;
}
