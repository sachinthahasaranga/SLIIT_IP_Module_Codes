#include<stdio.h>
#define mov 3
#define rat 4
int main(){
	int ratings[mov][rat];
	int j,i,number;
	float total,average,max;
	
	for(i=0;i<mov;i++){
		for(j=0;j<rat;j++){
			printf("enter movie %d rating  ",i+1);
			scanf("%d",&ratings[i][j]);
		}
	}
	for(i=0;i<mov;i++){
		for(j=0;j<rat;j++){
			printf("%d\t",ratings[i][j]);
		}puts("");
	}puts("");
	
	average=0;
	
	for(i=0;i<mov;i++){
		total=0;
		
		for(j=0;j<rat;j++){
			total=total+ratings[i][j];
		}
		average=total/rat;
		
		if (average>max){
			max=average;
			number=i+1;
		}
		
		printf("Movie %d average : %.2f\n",i+1,average);
	}
	
	printf("highest average move number : %d",number);
	
	return 0;
}
