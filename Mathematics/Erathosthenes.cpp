#include<bits/stdc++.h>
using namespace std;

void AllPrimesUptoN(int n){
    vector<int> a(n+1 ,1);
    a[0] = a[1] = 0;
    for(int i =2; i <= n; i++){
        if(a[i] == 1){
            for(int j =2; (i*j) <= n; j++){
                a.at(i*j) = 0;
            }
        }
    }
    cout << "all prime nos. upto n are \n";
    for(int i =2; i<= n; i++){
        if(a[i] != 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    AllPrimesUptoN(n); 
}