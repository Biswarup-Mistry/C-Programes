//Implimentation of Queue using Array in C language

#include<stdio.h>
#include<conio.h>

int main(){
	int n,p;
	printf("Implimentation of Queue using Array :\nEnter the Size of the Queue :\n");
	scanf("%d",&n);
	int low,top;
	low=0;
	top=0;
	int q[n];	
	for(int j=0;j<n;j++){
		q[j]=0;
	}
	do{
		printf("0.Exit\n1.Enter the Elements into the Queue\n2.Extract form Queue\n3.Show Queue\n");
		scanf("%d",&p);
		switch(p){
			case 0:
			break;
			case 1:
				if(top==(n)){
					printf("Queue Overflow...\n");
				
				}
				else{
					printf("Enter the Element now :\n");
					scanf("%d",&q[top]);
					top++;
				}
			break;
			case 2:
				if(top==0){
					printf("Empty Queue...\n");
				}
				else if(low==n){
					printf("Extracted Element : %d\n",q[low]);
					q[low]=0;
					top=0;
					low=0;
				}
				else {
					printf("Extracted Element : %d\n",q[low]);
					q[low]=0;
					low++;
					if(top==low){
						top=0;
						low=0;
					}
				}
			break;
			case 3:
				if(low==top){
					printf("Empty Queue...\n");
				}
				else{
					for(int i=0;i<n;i++){
						if(i==low){
							printf("q[%d] = %d <--low\n",i,q[i]);
						}
						else if(i==top){
							printf("q[%d] = %d <--top\n",i,q[i]);
						}
						else
							printf("q[%d] = %d \n",i,q[i]);
					}
				}
			break;
			default:	
			printf("Wrong Choise... Enter Again...\n");
			break;
		}
	}while(p!=0);
	return 0;
}