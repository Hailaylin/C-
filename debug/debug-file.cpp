#include <iostream>
#include <iomanip>
using namespace std;

template<typename I>

I input(I x[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
}

template<typename S>

S sort(S x[],int n)
{
    int k, t;
    for (int i=0; i < n-1; i++)
    {
        k = i;
        for (int j =i+1; j < n; j++)
        {
            if(x[j]>x[k])
            {
                k = j;
               
            }
             t = x[k]; x[k] = x[i]; x[i] = t;
        }
    }
}

template<typename O>

O output(O x[],int n)
{
    for(int i=0;i<n;i++)
    {
       cout<<setw(6)<<x<<endl;
    }
    cout<<endl;
}
int main()
{
	int a[5];
	float b[5];
	
	input(a,5);
	sort(a,5);
	output<int>(a,5);
	input<float>(b,5);
	sort<float>(b,5);
	output(b,5);
}