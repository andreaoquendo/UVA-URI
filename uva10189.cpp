#include <bits/stdc++.h>
using namespace std;

char mx[101][101];

void print_matrix(int x, int y){
    for(int i=0; i < x ; i++){
        for(int j=0; j<y;j++){
            printf("%c", mx[i][j]);
        }
        printf("\n");
    }
}

void mine(int x, int y, int px, int py){
    for(int i=px-1; i<=px+1; i++){
        if(i < 0 || i >=x) continue;
        for(int j=py-1; j<=py+1; j++){
            if(j < 0 || j >=y || (px==i && py==j) || mx[i][j]=='*') continue;
            mx[i][j]+=1;
        }
    }
}

int main() {
	
	int n=1, m=1, num=1;
    while(true){
    	scanf("%d %d", &n, &m);
    	if(n == 0 || m==0) break;
    	char x;
    	for(int i=0; i<n; i++){
    	    for(int j=0; j< m; j++){
    	        cin>>x;
    	        mx[i][j]=x;    	    
    	    }
    	}
    	if(num>1) printf("\n");
    	printf("Field #%d:\n", num);
    	num++;
    	
    	for(int i=0; i<n; i++){
    	    for(int j=0; j< m; j++){
    	        if(mx[i][j]=='.') mx[i][j]='0';
    	    }
    	}
    	
    	for(int i=0; i<n; i++){
    	    for(int j=0; j< m; j++){
    	        if(mx[i][j]=='*'){
    	            mine(n, m, i, j);
    	        }
    	    }
    	}
    	print_matrix(n, m);
    }
	return 0;
}