#include <bits/stdc++.h>
using namespace std;

int main(){
    int y; 
    cin >> y;
    for(int i = (y+1); i <= 10000; i++){
        int vectorD[4];
        int f = i;
        for(int k = 0; k < 4; k++){
            vectorD[k] = (f%10);
            f = ((f-(f%10))/10);
        }
        for(int l = 0; l < 4; l++){
            int counter = 0;
            for(int t=l+1; t < 4; t++){
                if(vectorD[l] == vectorD[t]){
                    counter += 1;
                    f = counter;
                    break;
                }
            }
        }
        if(f == 0){
            for(int m = 3; m >= 0; m--){
                cout << vectorD[m];
            }
            break;
            }
    }
}