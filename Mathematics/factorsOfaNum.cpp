#include<bits/stdc++.h>
using namespace std;

set<int> FactorsOfNUm(int n){
    set<int> a;
    for(int i= 1; i <= sqrt(n); i++){
        if(n%i == 0){
            a.insert(i);
            if( i != sqrt(n)){
                a.insert(n/i);
            }
        }

    }
    return a;
}

int main(){
    int n;
    cin >> n;
    set<int> a = FactorsOfNUm(n);
    for(auto i = a.begin(); i != a.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}