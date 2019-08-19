//~ -->increment/decrement operators:
				//~ ++,--
				//~ 
	//~ -->two type:
			//~ -->pre
					//~ -->pre increment
					//~ ex:a=10;
						//~ ++a;
						//~ a=11
					//~ -->pre decrement
							//~ ex:a=6;
							//~ printf("%d",--a);//5
							//~ a=5
						//~ 
			//~ -->post
					//~ -->post increment
						//~ ex:a=5
							//~ printf("%d",a++);//5-->6
							//~ a++;//7
							//~ printf("%d",a);//7
						//~ 
					//~ -->post decrement
						//~ ex:a=7;
						//~ printf("%d",a--);//7
						//~ printf("%d",a);//6
						//~ 
						//~ 
						//~ 
#include<stdio.h>
int main(){
	int a=10;
	//pre increment
	++a;
	printf("%d\n",a);//11
	//post increment
	//~ a++;
	printf("%d\n",a++);//11
	printf("%d\n",a);//12
	//pre decrement
		--a;
		printf("%d\n",a);//11
	//post decrement
		printf("%d\n",a--);//11
		printf("%d\n",a);//10
	return 0;
}
