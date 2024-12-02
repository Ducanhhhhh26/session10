#include<stdio.h>
int main(){
	int arr[5]={5,2,6,3,8};
	for(int i=0;i<5;i++){
	int minIndex=i; 
		for(int j=i;j<5;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j; 
			}	
		}
		if(minIndex!=i){
			int temp;
			temp=arr[minIndex];
			arr[minIndex]=arr[i];
			arr[i]=temp; 
		} 
	} 
	for(int i=0;i<5;i++){
	 
	printf("%d\t",arr[i]); 
}
return 0; 
} 
