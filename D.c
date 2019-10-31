#include<stdio.h>
#include<stdlib.h>


int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int adjacencyMatrix[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			adjacencyMatrix[i][j]=0;
		}
	}
	int x,y;
	for(int i=0;i<m;i++){
		scanf("%d %d",&x,&y);
		adjacencyMatrix[x-1][y-1]=1;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",adjacencyMatrix[i][j]);
		}
		printf("\n");
	}
	int reflexive=1;
	for(int i=0;i<n;i++){
		if(adjacencyMatrix[i][i]==0){
			reflexive = 0;
			break;
		}
	}

	int symmetric = 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			if(adjacencyMatrix[i][j]!=adjacencyMatrix[j][i]){
				symmetric=0;
				break;
			}
			
		}
	}

	int transitive = 1;

	for(int i=0;i<n;i++){
		int flag2 = 0;
		for(int j=0;j<n;j++){
			int flag1 = 0;
			for(int k=0;k<n;k++){
				if(adjacencyMatrix[i][j]==1 && adjacencyMatrix[j][k]==1){
					if(adjacencyMatrix[i][k]!=1){
						transitive=0;
						flag1 =1;
						break;
					}
				}
			}
			if(flag1==1){
				flag2 = 1;
				break;
			}
		}
		if(flag2==1){
			break;
		}
	}

	if(reflexive==1){
		printf("reflexive \n");
	}
	if(symmetric==1){
		printf("symmetric \n");
	}
	if(transitive==1){
		printf("transitive \n");
	}
	if(reflexive==0 && symmetric==0 && transitive==0){
		printf("-1");
	}
	
}