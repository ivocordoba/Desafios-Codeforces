#include <bits/stdc++.h>
using namespace std;

int main(){
    string one = "I hate it";
    string two = "I love it";
    string three = "I hate that";
    string four = "I love that";
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i == n && i%2 != 0){
            cout << one; 
            break;
        }else if(i==n && i%2 == 0){
            cout << two;
            break;
        }
        if(i%2 != 0){
            cout << three << " ";
        }else if(i%2 == 0){
            cout << four << " ";
        }
    }
}
