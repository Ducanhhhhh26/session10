#include<stdio.h>
int main(){
	int arr[]={2,5,6,8,9,2,4,3,2};
	int count=0; 
	int n; 
	printf("moi ban nhap vao mot so nguyen: ");
	scanf("%d",&n);
	for(int i=0;i<9;i++){
		if(arr[i]==n){
			count++; 
			printf(" phan tu %d ton tai o vi tri %d\n \n ",n,i); 
		} 
	} 
	printf("Gia tri phan tu %d xuat hien %d lan",n,count);
	return 0; 
} 
