#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define b(i,a,n) for(int i = a; i < n; i++)

int main(){
    int n, k;
    cin >> n >> k;
    b(i, 0, k){
        if(n%10 != 0){
            n -= 1;
        }else{
            n = (n/10);
        }
    }
    cout << n;
}