#include<iostream>
using namespace std;

int main(){
    int n;
    double sum=0, *p;
    cin >> n;
    p = new double[n];
    for (int i=0; i<n; i++){
        cin >> *(p+i);
        sum+=*(p+i);
    }
    cout <<"aver=" << sum/n;
}