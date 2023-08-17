#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
    ll n, sum = 0, num;
    cin >> n;
    
    for(int i=1; i<n; i++){
        cin >> num;

        sum += num;
    }

    cout << (n*(n+1) / 2) - sum << endl;
   
    }



