#include<stdio.h>
#define raws 2
#define columns 3
int main(){
	int rainfall[raws][columns]={0};
	int maxrainfall[raws];
	int i,j,max;
	
	for(i=0;i<raws;i++){
		for(j=0;j<columns;j++){
			printf("Enter rainfall day %d , citty %d : ",i+1,j+1);
			scanf("%d",&rainfall[i][j]);
		}
		puts("");
	}
	
	
	max=rainfall[0][0];
	
	for(i=0;i<raws;i++){
		max=0;
		for(j=0;j<columns;j++){
			if(max<rainfall[i][j]){
				max=rainfall[i][j];
			}
		}
		maxrainfall[i]=max;
	}
	
	
	for(i=0;i<raws;i++){
		printf("\nday %d maxrainfall is %d",i+1,maxrainfall[i]);
	}
	

	return 0;
}
