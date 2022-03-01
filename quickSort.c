//Quick Sort Using C language

#include<stdio.h>
#include<conio.h>

int partition(int arr[],int low,int high){
	int i=low;
	int j=high;
	int temp=0;
	int p=arr[i];
	while(i<j){
		while(p>=arr[i]){
			i++;
		}
		while(p<arr[j]){
			j--;
		}
		if(i<j){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	return (j);
}

void quickSort(int arr[],int low,int high){
	if(low<high){
		int p=partition(arr,low,high);
		quickSort(arr,low,p-1);
		quickSort(arr,p+1,high);
	}	
}

int main(){
	int n;
	printf("Quick Sort :\nEnter the size of the array :\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements :\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	quickSort(arr,0,(n-1));
	printf("After sorting the elements of the arrray using Quick Sort :\n");
	for (int i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}	
	return 0;
}