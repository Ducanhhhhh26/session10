#include<stdio.h>
int main(){
	int arr[5]={3,1,5,7,4};
	for(int i=0;i<5;i++){
		for(int j=0;j<5-1-i;j++){
			if(arr[j]>arr[j+1]){
				int key;
				key=arr[j+1];
				arr[j+1]=arr[j];
				arr[j] =key; 
			} 
		} 
		}

		for(int i=0;i<5;i++){
			printf("%d\t",arr[i]); 
		} 
		return 0; 
}
