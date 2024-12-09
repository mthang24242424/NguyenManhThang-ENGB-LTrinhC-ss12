#include<stdio.h>
int prime(int a){
	int count=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			count++; 
		} 
	}
	if(count==2){
		printf("day la so nguyen to"); 
	} else{
		printf("day ko phai so nguyen to"); 
	}
	return 0; 
} 
int main(){
	int a; 
	printf("nhap so ban muon kiem tra: ");
	scanf("%d",&a);
	prime(a); 
	return 0; 
} 
