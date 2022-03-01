//Mergesort Using C programming

#include<stdio.h>
#include<conio.h>

void merge(int arr[],int low,int mid,int high,int c[],int k){
		int i=low;
		int j=mid+1;
		while((i<=mid)&&(j<=high)){
			if(arr[i]<arr[j]){
				c[k]=arr[i];
				i++;
				k++;
			}
			else{
				c[k]=arr[j];
				j++;
				k++;
			}
		}
		if((i>mid)&&(j<=high)){
			while(j<=high){
				c[k]=arr[j];
				k++;
				j++;
			}
		}
		else if((i<=mid)&&(j>high)){
			while(i<=mid){
				c[k]=arr[i];
				i++;
				k++;
			}
		}
		for (int p=0;p<k;p++){
			arr[low+p]=c[p];
		}
}


void mergeSort(int arr[],int low,int high,int c[],int k){
	if(low<high){
		int mid=((low+high)/2);
		mergeSort(arr,low,mid,c,k);
		mergeSort(arr,mid+1,high,c,k);
		merge(arr,low,mid,high,c,k);
	}
}


int main(){
	int k=0;
	printf("Mergesort :\n");
	printf("Enter the Array Size :\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	int c[n];
	for(int i=0;i<n;i++){
		c[i]=0;
	}
	printf("Enter the Elements :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int b=n;
	mergeSort(arr,0,b,c,k);

	printf("After Sorting the Elements of the array using Mergesort :\n");
	for(int i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}	
	return 0;
}
