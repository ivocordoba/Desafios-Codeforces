#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int* vector = new int[n];
    for(int i = 0; i < n; i++){
        cin >> vector[i];
    }
    int t = 0;
    int* vectorT = new int[n];
    for(int l = 0; l < n; l++){
        if((vector[l]+k) <= 5){
            vectorT[t] = vector[l];
            t += 1;
        }
    }
    delete[] vector;
    if (t >= 3){
        cout << (t/3);
    }else{
        cout << 0;
    }


}