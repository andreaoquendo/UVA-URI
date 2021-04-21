#include <bits/stdc++.h>
using namespace std;
//all sums and multiplications must be less or 20

int main() {
    
    int m=1;
    for(int w=1; w<2000; w++){
        if(w*w*w*w > 2*pow(10,9)) break;
        for(x=w; w<2000-w;x++){
            if(w*x*x*x > 2*pow(10,9)) break;
            for(y=x; y<2000-w-x; y++){
                if(w*x*y*y > 2*pow(10,9)) break;
                
                long long sum=w+x+y;
                long long m=x*w*y;
                
            }        
            
        }
    }
    
    
	return 0;
}