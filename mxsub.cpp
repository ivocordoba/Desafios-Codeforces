#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* array = new int[n];
    for (int k = 0; k < n; k++){
        cin >> array[k];
    }
    int best = 0;
    for(int a = 0; a < n; a++){
        int sum = 0;
        for(int b = a; b < n; b++){
            sum += array[b];
            best = max(sum, best);
        }
    }
    cout << best;
}