#include<stdio.h>
int number(int a){
	int result =1; 
	for(int i=1;i<=a;i++){
		 result*=i; 
	}
	printf("giai thua cua %d la %d\n",a,result); 
	return result; 
} 
int main(){
	number(5);
	 return 0; 
} 
