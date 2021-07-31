#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* vector = new int[n];
    for(int i = 0; i < n; i++){
        cin >> vector[i];
    }
    int counterO = 0;
    int counterK = 0;
    for(int k = 0; k < n; k++){
        counterK += vector[k];
        if(counterK < 0){
            counterO += abs(counterK);
            counterK = 0;
        }
    }
    delete[] vector;
    cout << counterO;
}