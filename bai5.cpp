#include<stdio.h>
int main(){
	int item;
	int flag =-1; 
	int arr[8]={2,1,4,5,9,5,7,6};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Moi ban nhap phan tu can tim kiem\n");
	scanf("%d",&item);
	for(int i =0;i<length;i++){
	if(arr[i]==item){
		flag = i;
		printf("Phan tu %d nam o vi tri %d\n",item,i); 
}
	}
	if(flag ==-1){
		printf("Phan tu %d khong nam trong mang",item); 
	} 
	return 0; 
} 
