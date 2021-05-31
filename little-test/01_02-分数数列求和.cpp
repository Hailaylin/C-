#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n ;
    double temp;
    cin >> n;
    double fz=2, fm=1, sum=0;
    for(int i=0; i<n; i++){
        sum+=fz/fm;
        temp = fz;
        fz = fz + fm;
        fm = temp;
    }
    cout << fixed << setprecision(2) << sum;
}