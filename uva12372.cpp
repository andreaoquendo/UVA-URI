#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, L, W, H, i=0;
    cin >> T;
    while(i<T){
        cin>>L>>W>>H;
        printf("Case %d: ", i+1);
        if(L<=20 && W<=20 && H<=20){
            printf("good\n");
        }
        else
            printf("bad\n");
        i++;
    }

    return 0;
}
