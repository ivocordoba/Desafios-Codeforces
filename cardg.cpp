#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;
    string vector[5];
    for(int i = 0; i < 5; i++){
        cin >> vector[i];
    }
    string vectorN[5];
    string vectorS[5];
    for(int k = 0; k < 5; k++){
        vectorN[k] = vector[k].substr(0,1);
        vectorS[k] = vector[k].substr(1,2);
    }
    string n = t.substr(0,1);
    string s = t.substr(1,2);
    int flag = 0;
    for(int l = 0; l < 5; l++){
        if(vectorN[l] == n || vectorS[l] == s){
            cout << "YES";
            break; 
        }
        flag += 1;
    }
    if(flag == 5){
        cout << "NO";
    }

}
