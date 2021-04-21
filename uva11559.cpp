#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, B, H, W;
    
    while(cin >> N >> B >> H >> W){
    
        int lower=B+1;
        for(int i=0; i < H; i++){
            
            int p;
            cin>>p;
            
            for(int j=0; j<W; j++){
                int w;
                cin >> w;
                if(w >=N && p*N <= lower)
                    lower = p*N;
            }
        }
        
        if(lower<=B)
            printf("%d\n", lower);
        else
            printf("stay home\n");
    }
    return 0;
}