#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
    ll n;

    cin >> n;

    if( n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
    }
    else if(n == 1){
        cout << 1 << endl;
    }

    else{
        for(int i=2; i<=n; i=i+2){
            cout << i << " ";
        }
        for(int i=1; i<=n; i=i+2){
            cout << i << " ";
    }

    cout << endl;
    
}

}

