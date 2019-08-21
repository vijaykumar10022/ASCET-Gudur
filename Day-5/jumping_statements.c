#include<stdio.h>
int main(){
	//break
	//~ int i;
	//~ for(i=1;i<=100;i++){
		//~ if(i==51){
			//~ break;
		//~ }
		//~ else{
			//~ printf("182H1A05%d\n",i);
		//~ }
	//~ }
	//Continue
	int i;
	for(i=1;i<=100;i++){
		if((i==35)||(i==45)||(i==78)||(i==96)){
			continue;
		}
		else{
			printf("182H1A05%d\n",i);
		}
	}
	return 0;
}
