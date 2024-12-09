#include<stdio.h>

void mang(int arr[],int size){
	int max=arr[0]; 
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i]; 
		} 
	} 
	printf("so lon nhat cua mang la %d",max); 
} 

int main(){
	int number[]={1,11,9,4,7};
	int size=sizeof(number) /sizeof(number[0]); 
	mang(number,size); 
	return 0; 
} 
