#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int accA = 0;
    int accB = 0;
    while (a > 0 && b > 0){
        accA += 1;
        a--;
        b--;
    }
    cout << accA << " ";
    if(a == 0){
        while(b > 1){
            accB += 1;
            b -= 2;
        }
        cout << accB;
    }else{
        while(a > 1){
            accB += 1;
            a -= 2;
        }
        cout << accB;
    }
}