#include<stdio.h>
void main(){
	int i,j,a[3][3],t=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<i;j++){
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
}
