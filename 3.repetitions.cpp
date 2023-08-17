#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
    string str;

    cin >> str;
    ll maxi = INT_MIN, len = 1;

    for(int i = 1; i <str.length(); i++){
        if(str[i-1] == str[i]){
            len++;
        }
        else{
            maxi = max(maxi, len);
            len = 1;
        }
    }       
             maxi = max(maxi, len);
            len = 1;
            cout << maxi << endl;
}

