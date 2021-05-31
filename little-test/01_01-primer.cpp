#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int x){
    int k=sqrt(x), i;
    for (i=2; i<=k; i++){
        if(x%i==0)
            return false;    //应该是能有公因数就不是素数，逻辑反了，应该是false而非true
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    while(x<2){
        cout << "Please reinput n(n>=2):";
        cin >> x;
    }
    if(isPrime(x))
        cout << x << " is a prime number." << endl;
    else
        cout << x << " is not a prime number." << endl;
}