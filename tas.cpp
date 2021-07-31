#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int* vector= new int[n];
    for(int i = 0; i < n; i++){
        cin >> vector[i];
    }
    int* vectora = new int[n];
    int nstr = 0;
    int stsr = 1;
    int j = 0;
    for(int k = 0; k < n; j++){
        if(vector[k] == 1){
            nstr += 1;
            vectora[j] = stsr;
            stsr = 0;
            j += 1;
        }
        if(k == (n-1)){
            vectora[j] = stsr;
        }
    }
}