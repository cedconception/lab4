/*
 * @authors : Kambale Muteya Cedric & Munguahana Bujiriri David
 * file : prog.c
 * */

#include <stdio.h>
int a,m, min;
printf("enter the number \n");
scanf("%d",&min);
do{
scanf("%d",&a); 
if((a<min)&&(a!=9))
	min=a;
}
while(a!=9);
int main(){
	printf("This is a c file created after learning git"); 
	printf("the min is: %d",min);
}
