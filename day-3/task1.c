//~ 1).input:1500 cm 
	//~ hint:
	   //~ 1 m = 100 cm
	   //~ 1 km = 100000 cm//1000 m
	//~ output:Meters =15m
	   //~ Kilometers=0.015km 
#include<stdio.h>
int main() {
	int cm;
	scanf("%d",&cm);
	int m=cm/100;
	float km=cm/100000.0;
	printf("%d cm=%d m\n",cm,m);
	printf("%d cm=%.3f km",cm,km);
	return 0;
}
