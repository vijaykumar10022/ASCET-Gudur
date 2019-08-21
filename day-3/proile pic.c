#include<stdio.h>
int main(){
	int l,i,t;
	scanf("%d",&l);
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int w,h;
		scanf("%d%d",&w,&h);
		if(w<l||h<l){
			printf("upload another pic\n");
		}
		else{
			if(w==h){
				printf("accepted\n");
			}
			else{
				printf("crop it\n");
			}
		}
	}
	return 0;
}

