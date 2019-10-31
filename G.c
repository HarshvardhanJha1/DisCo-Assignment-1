#include<stdio.h>
#include<stdlib.h>

int power2(int n){
	int prod = 1;
	for(int i=1;i<=n;i++){
		prod*=2;
	}
	return prod;
}



int main(){
	int n;
	scanf("%d",&n);
	int size = power2(n);
	int binaryArray[size][n];
	for(int i=0;i<size;i++){
		for(int j=0;j<n;j++){
			binaryArray[i][j]=0;
		}
	}
	for(int i=0;i<size;i++){
		int temp=i;
		int ind=n-1;
		while(temp>0){
			int a = temp%2;
			binaryArray[i][ind]=a;
			ind--;
			temp/=2;
		}

	}
	int answerArray[size][n];
	for(int i=0;i<size;i++){
		for(int j=0;j<n;j++){
			answerArray[i][j]=0;
		}
	}
	int jumps=0;
	for(int i=0;i<size-1;i++){
		int f=0;
		for(int j=i+1;j<size;j++){
			int count=0;
			for(int k=0;k<n;k++){
				if(binaryArray[i][k]!=binaryArray[j][k]){
					count++;
				}
			}
			if(count==1){
				jumps++;
				answerArray[i][f]=j;
				f++;
			}
		}
	}
	printf("%d\n",jumps);
	for(int i=0;i<size;i++){
		printf("%d: ",i);
		for(int j=0;j<n;j++){
			if(answerArray[i][j]!=0){
				printf("%d ",answerArray[i][j]);
			}

		}
		printf("\n");
		
	}

	

	
}