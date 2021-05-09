#include<iostream>
using namespace std;

int main(){
    long long sum=1,n=1,d;
	while(n<2021)
	{
		sum=sum*n;
		n=n+2;
	 } 
    cout<<sum<<endl;
    return 0;
}
