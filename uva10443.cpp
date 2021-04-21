#include <bits/stdc++.h>
using namespace std;

char grid[200][200];
char out[200][200];

void verify_one(int px, int py, int x, int y){
   out[px][py]=grid[px][py];
   char defeat;
   if(grid[px][py]=='R'){
       defeat='P';
       if((px-1>=0 && grid[px-1][py]==defeat) ||
            (py-1>=0 && grid[px][py-1]==defeat) ||
            (py+1<y && grid[px][py+1]==defeat) ||
            (px+1<x && grid[px+1][py]==defeat))
            out[px][py] = defeat;
   }
   if(grid[px][py]=='P'){
       defeat='S';
       if((px-1>=0 && grid[px-1][py]==defeat) ||
            (py-1>=0 && grid[px][py-1]==defeat) ||
            (py+1<y && grid[px][py+1]==defeat) ||
            (px+1<x && grid[px+1][py]==defeat))
            out[px][py] =defeat;

   }
   if(grid[px][py]=='S'){
       defeat='R';
       if((px-1>=0 && grid[px-1][py]==defeat) ||
            (py-1>=0 && grid[px][py-1]==defeat) ||
            (py+1<y && grid[px][py+1]==defeat) ||
            (px+1<x && grid[px+1][py]==defeat))
            out[px][py] =defeat;
   }
 
   
}

void verify_all(int x, int y){
    for(int i=0; i<x; i++){
        for(int j=0;j<y;j++)
            verify_one(i, j, x, y);
    }
}

void copy_array(int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            grid[i][j]=out[i][j];
    }
}

void print_array(int r, int c){
    for(int x=0; x<r; x++){
        for(int y=0; y<c; y++)
            printf("%c", grid[x][y]);
        printf("\n");
        }
        
}
void print_out(int r, int c){
    for(int x=0; x<r; x++){
        for(int y=0; y<c; y++)
            printf("%c", out[x][y]);
        printf("\n");
        }
        
}

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t;i++){
        int r, c, n;
        scanf("%d %d %d", &r, &c, &n);
    
    	for(int j=0; j<r; j++){
    	    scanf("%s", grid[j]);
    	}
    	
        for(int j=0; j<n;j++){
            verify_all(r, c);
            copy_array(r, c);
        }
        if(i>0) printf("\n");
        print_array(r, c);
        

    }
	return 0;
}