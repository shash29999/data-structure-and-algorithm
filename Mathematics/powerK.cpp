#include<bits/stdc++.h>
using namespace std;

int powerK(int n, int k){
    if(k == 1)  return n;
    int num;
    if(k%2 ==0){
        num = powerK(n, k/2);
    }
    else{
        num = powerK(n. k/1)
    }
    return num*num;
}

int main(){
    int n; cin >> n;
    int k; cin>>k;
    cout << powerK(n, k);
}