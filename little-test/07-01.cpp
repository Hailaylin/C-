#include<iostream>
#include<iomanip>
using namespace std;

template<typename T>
void input(T *arr, int n)
{
    int i=0;
    while(n--){
        cin >> arr[i++];
    }    
}

template<typename T>
void output(T *arr, int n)
{
    int i=0;
    while(n--){
        cout << setw(10) << arr[i++];
    }
    cout << endl;
}

template<typename T>
void sort(T *arr, int n)
{
    int i, j;
    for (i=1; i<=n-1; i++){
        for (j=0; j<=n-i-1; j++){
            if(arr[j]<arr[j+1]){
                T tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
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