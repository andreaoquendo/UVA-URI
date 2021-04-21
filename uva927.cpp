#include <bits/stdc++.h>
using namespace std;

long long a[21];

long long power(long long base, long long e){
    long long res=1;
    while(e--){
        res*=base;
    }
    return res;
}

int main() {
	int test;
    scanf("%d", &test);
	while(test--){
	    int num, i=0;
	    cin >> num;
	    while(i<=num){
	        cin >> a[i];
	        i++;
	    }
	    
	    long long d, k, tim=1;
	    cin >> d;
	    cin >> k;
	    for(int j=d; j<k; j+=tim*d){
	        tim++;
	    }
	    long long sum=0;
	    for(int j=0; j<=num;j++){
	        sum+=a[j]*power(tim, j);
	    }
	    cout << sum <<"\n";
	}
	return 0;
}