//heapsort using C language
#include<stdio.h>
#include<conio.h>


void swap(int a[],int i,int j){
	int k;
	k=a[i];
	a[i]=a[j];
	a[j]=k;
	
}


void Max_Heapify(int a[],int i,int heapsize){
	int l,r;
	l=2*i+1; //3
	r=2*i+2; //4
	int largest;
	if((l<=heapsize)&&(a[l]>a[i])){
		largest=l;
	}
	else{
		largest=i;
	}
	if((r<=heapsize)&&(a[r]>a[largest])){
		largest=r;
	}
	if(largest!=i){
		swap(a,i,largest);
		Max_Heapify(a,largest,heapsize);
	}
}


void Build_Heap(int a[], int heapsize){
	int i;
	int k=heapsize;
	printf("In Build Heap k=%d\n",((k/2)-1));
	for(i=((heapsize/2)-1);i>=0;i--){
		printf("Build heap itaration i=%d\n",i);
		Max_Heapify(a,i,heapsize);
	}
	printf("complete Build_Heap\n");
	printf("Array after build heap\n");
	for (int j=heapsize;j>=0;j--){
		printf("%d\n",a[j]);
	}
}


void HeapSort(int a[], int n){
	int heapsize=n;
	Build_Heap(a,heapsize);
	for (int i=heapsize;i>=1;i--){
		swap(a,0,i);
		heapsize=heapsize-1;
		Max_Heapify(a,0,heapsize);
	}
}

int main(){
	printf("Heapsort Using C language\n");
	int n;
	printf("\nEnter the size of array : \n");
	scanf("%d",&n);
	int a[n];
	//int m=n;
	int heapsize=n-1;
	printf("Enter the Elements of the Array :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	HeapSort(a,heapsize);
	printf("After sorting the Array using HeapSort : \n");
	for (int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}	
	return 0;
}
