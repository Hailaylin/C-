#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<char>TargetCharacters;
    list<char>ListOfCharacters;
    char a,b;
    int s;
    cout<<"Please input the list string:"<<endl;
    cin>>a;
    TargetCharacters.insert(TargetCharacters.begin(),a);
    cout<<"Please input the target string:"<<endl;
    cin>>b;
    ListOfCharacters.insert(ListOfCharacters.begin(),b);
    list<char>::iterator PositonOfNulls=search(ListOfCharacters.begin(),ListOfCharacters.end(),TargetCharacters.begin(),TargetCharacters.end());
    if(PositonOfNulls!=ListOfCharacters.end())
        cout<<"Found!"<<endl;
    else
        cout<<"Not Found!"<<endl;
    return 0;
}