#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, p, rfp=1;
    string s;

   while(cin>>n>>p, n||p){
       
       int best=-1;
       string bprop="none";
       float bd;
       
       for(int i=0; i<n; i++){
           cin.ignore();
           getline(cin, s);
       }
       
       while(p--){
            string prop;
            getline(cin, prop);
            float d;
            int r;
            scanf("%f %d", d, r);
            if(r > best || (r/n == best && d < bd)){
                best = r;
                bprop= prop;
                bd = d;
            }
            for(int k=0; k < r; k++){
                getline(cin, s);
            }
        }
        cout <<"RFP #" << rfp <<"\n" <<bprop<<"\n";
        rfp++;

   }
    return 0;
}