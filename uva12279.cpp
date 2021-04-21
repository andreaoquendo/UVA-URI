#include <bits/stdc++.h>
using namespace std;

int main()
{
     int N, c=0;
     while(cin>>N, N){
         int x, sum=0;
         while(N--){
            cin>>x;
            if(x) sum+=1;
            else sum-=1;
         }
        c++;
        printf("Case %d: %d\n", c, sum);
     }
    return 0;
}