#include<stdio.h>
int perfectNumber(int a){
	int sum=0;
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			sum+=i; 
		} 
	}
	if(sum==a){
		printf("day la so hoan hao"); 
	} else{
		printf("day ko phai so hoan hao"); 
	}
	 
} 
int main(){
	int a; 
	printf("nhap so ban muon kiem tra: ");
	scanf("%d",&a);
	perfectNumber(a); 
	return 0; 
} 
