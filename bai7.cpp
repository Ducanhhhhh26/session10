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
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m-1;j++){
			for(int k=j+1;k<m;k++){		 
			int key;
			if(arr[i][j]>arr[i][k]){		 
			key = arr[i][k];
			arr[i][k]=arr[i][j];
			arr[i][j]=key; 
		} 
	}
}
}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",arr[i][j]); 
		} 
		printf("\n"); 
	} 
	 return 0; 
} 
