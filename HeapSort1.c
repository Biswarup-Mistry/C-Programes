//heapSort
#include<stdio.h>
#include<conio.h>

void swap(int arr[],int i,int j){
	int k;
	k=arr[i];
	arr[i]=arr[j];
	arr[j]=k;
}

void Max_Heapify(int arr[],int i,int heapsize){
	int l,r;
	l=2*i+1;
	r=2*i+2;
	int largest;
	if((l<=heapsize)&&(arr[l]>arr[i])){
		largest=l;
	}
	else{
		largest=i;
	}
	if((r<=heapsize)&&(arr[r]>arr[largest])){
		largest=r;
	}
	if(largest!=i){
		swap(arr,i,largest);
		Max_Heapify(arr,largest,heapsize);
	}
}

void Build_Heap(int arr[],int heapsize){
	for(int i=((heapsize/2)-1);i>=0;i--){
		Max_Heapify(arr,i,heapsize);
	}
}

void heapsort(int arr[],int heapsize){
	int m=heapsize;
	Build_Heap(arr,m);
	for (int i=heapsize;i>=1;i--){
		swap(arr,0,i);
		heapsize=heapsize-1;
		Max_Heapify(arr,0,heapsize);
	}
}

int main(){
	int i,n;
	printf("\nHeapSort Algorithm\nEnter the size of the Array :\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Elements into the Array :\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int heapsize=n-1;
	heapsort(arr,heapsize);
	printf("After sorting the array with HeapSort :\n");
	for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}