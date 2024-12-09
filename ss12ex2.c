#include<stdio.h>

void mang(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("arr[%d] la %d \n",i,arr[i]); 
	} 
} 

int main(){
	int number[]={1,2,3,4,5};
	int size=sizeof(number) /sizeof(number[0]); 
	mang(number,size); 
	return 0; 
} 
