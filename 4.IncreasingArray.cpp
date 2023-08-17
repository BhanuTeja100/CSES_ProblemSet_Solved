#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
    ll n, num=0;

    cin >> n;
    vector<int> v(n, 0);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=1; i<n; i++){
        if(v[i]-v[i-1] < 0){
            num += abs(v[i] - v[i-1]);
            v[i] = v[i-1];
        }
    }

    cout << num << endl;
}

