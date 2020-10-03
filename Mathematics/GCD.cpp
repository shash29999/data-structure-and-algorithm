#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    int divident = (a > b)? a:b;
    int divisor = (a >b )? b : a;

    while(divisor != 0){
        int remainder = (divident % divisor);
        divident = divisor;
        divisor = remainder;
    }
    return divident;
}

int main(){
    int a,b;
    cin >> a >>b;
    cout << GCD(a, b) << endl;
}