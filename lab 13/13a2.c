#include<stdio.h>
void main(){
	int i,j;
	for(i=5;i>=0;i--){
		for(j=0;j<i;j++){
			printf("%d",j+1);
		}
		printf("\n");
	}
}
