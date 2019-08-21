//~ input:1
		//~ vijay -->501
	  //~ 2
		//~ kumar -->502
	  //~ 3
		//~ hari -->503
	  //~ 4
		//~ ravi -->504
	  //~ 5
		//~ kiran -->505
	  //~ 6 
		//~ madhu -->506
	  //~ 7 
		//~ sandya--->507
	  //~ 8
		//~ swathi -->508
		//~ 
	 //~ 
	 //~ 
	 //~ 
	 //~ 10
#include<stdio.h>
int main(){
	int option=1;
	while(option){
		scanf("%d",&option);
		switch(option){
			case 1:printf("Vijay-->50%d\n",option);
				   break;
			case 2:printf("kumar-->50%d\n",option);
				   break;
			case 3:printf("hari-->50%d\n",option);
				   break;
			case 4:printf("kiran-->50%d\n",option);
				   break;
			case 5:printf("manoj-->50%d\n",option);
				   break;
			case 6:printf("swathi-->50%d\n",option);
				   break;
			case 7:printf("harini-->50%d\n",option);
				   break;
			case 8:printf("madhu-->50%d\n",option);
				   break;
			case 9:printf("vamsi-->50%d\n",option);
				   break;
			case 10:printf("kavitha-->50%d\n",option);
				   break;
			default:printf("Data not found");
		}
	}
	return 0;
}
