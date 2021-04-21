#include <bits/stdc++.h>
using namespace std;

bool cmp(char a, char b);

int main() {
	int num;
	string seq;
	scanf("%d", &num);
	while(num--){
	   cin >> seq;
	   
	   sort(seq.begin(), seq.end(),cmp);
	   do{
	   cout << seq <<"\n";
	   }while(next_permutation(seq.begin(), seq.end(), cmp));
	} 
	   

	return 0;
}

bool cmp(char a, char b)
{
    if(tolower(a)==tolower(b))
        return a < b;
    return tolower(a) < tolower(b);
}