#include<stdio.h>
#define size 10
int main(){
	int fib[size]={0,1};
	int i;
	
	for(i=0;i<size-2;i++){
		fib[i+2]=fib[i]+fib[i+1];
	}
	for(i=0;i<size;i++){
		printf("%d\t",fib[i]);
	}
	
	
	
	return 0;
}
