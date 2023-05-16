#include<stdio.h>
#define raws 4
#define columns 3

int main(void){
	int boxes[raws][columns]={0};
	int i,j,volume=0;
	
	for (i=0;i<raws;i++){
		for(j=0;j<columns;j++){
			printf("Enter box %d measurements: ",i+1);
			scanf("%d",&boxes[i][j]);
		}printf("\n");
	}
	
	for (i=0;i<raws;i++){
		volume=1;
		for(j=0;j<columns;j++){
			volume=volume*boxes[i][j];
		}
		printf("\nvolume of box %d : %d",i+1,volume);
	}
	
	
	
	return 0;
}
