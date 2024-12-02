#include<stdio.h>
int main(){
	int n,m; 
	printf("moi ban nhap so dong va so cot: ");
	scanf("%d %d",&n,&m);
	int arr[n][m]={};
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("arr[%d][%d] = ",i,j); 
			scanf("%d",&arr[i][j]); 
		} 
	} 
	
	for(int i=0;i<n-1;i++){
	
			for(int k=i+1;k<m;k++){		 
			int key;
			if(arr[i][i]>arr[k][k]){		 
			key = arr[i][i];
			arr[k][k]=arr[i][i];
			arr[i][i]=key; 
		} 
	}
}
	for(int i=0;i<n;i++){

			printf("%d\t",arr[i][i]);
		} 
		printf("\n"); 

	 return 0; 
} 
