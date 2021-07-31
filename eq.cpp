#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int b;
    int flag; 
    int flag2;
    for(int b = 2; b < 10^9; b++){
        int a = (n+b);
        for(int k = 2; k < a; k++){
            if(a%k == 0){
                flag2 += 1;
                break;
            }
        }
        if(flag2 > 1){
            flag = 1;
        }
        if(flag == 1){
            cout << a << " " << b;    
            break;                                
        }
    }
}
