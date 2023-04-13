/*
 * @authors : Kambale Muteya Cedric & Munguahana Bujiriri David
 * file : prog.c
 * */

#include <stdio.h>
// min function of two function 
int  min(int a, int b){;
	return (a > b ) ? b : a;
}

// sum of an arr
int sum(int arr[], int len){
	int sum=0;
    for(int i=0; i<len; i++){
         sum+=arr[i];     
    }
 	return sum;
}

int main(){
	printf("This is a c file created after learning git \n\n"); 

	printf("the min of 5 et 7 is: %d \n",min(5,9));
	
	int arr[] = {2, 4, 6};
	printf("arr sum in our prog is: %d",sum(arr,3));


}
