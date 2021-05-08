/**
 * 
 *
 * int arr[5]={1,2,3,4,5};
 *  *(*(&arr+1)-1)  
 */

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,0};
    cout << "arr=\t"<< arr << endl;
    cout << "arr+1=\t" << arr+1 << endl;
    cout << "arr2=\t" << arr2 << endl;
    cout << "*(arr+1)=\t" << *(arr+1) << endl;
    cout << "&arr=\t" << &arr << endl;
    cout << "&arr+1\t" << &arr+1 << endl;
    cout << "*(&arr+1)=\t" << *(&arr+1) << endl;
    cout << "*(*(&arr+1))=\t" << *(*(&arr+1)) << endl;
    //cout << *(*(&arr[0]+1)-1) << endl; //"*" 的操作数必须是指针，但它具有类型 "int"
    //cout << *(*(arr+1)-1) << endl; //"*" 的操作数必须是指针，但它具有类型 "int"
    cout << "*(*(&arr+1)-1)=\t" << *(*(&arr+1)-1) << endl;
    cout << "*(*(&arr+1)+1)=\t" << *(*(&arr+1)+1) << endl;
    cout << "*(*(&arr+1)+2)=\t" << *(*(&arr+1)+2) << endl;
}

