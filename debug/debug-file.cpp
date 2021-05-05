#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> an;
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    //an[0]=a1, an[1]=a2;
    an.push_back(a1);
    an.push_back(a2);
    //getchar();
    string str_multi;
    int multi = 0;
    for (int i=0; i<n && n>=an.size(); ++i) {   //i为数组下标
        str_multi.clear();
        multi = an[i] * an[i+1];
        str_multi = to_string(multi);
        //cout << " str_multi:" <<str_multi << endl;
        if(str_multi.length()==2) {     //判断乘积的位数
            an.push_back(stoi(str_multi.substr(0,1)));
            an.push_back(stoi(str_multi.substr(1,1)));
        }
        else if(str_multi.length()==1){
            an.push_back(stoi(str_multi.substr(0,1)));
        }
    }
    
    for(int i=0; i<n-1; i++) {
        cout << an[i] << " ";
    }
    cout << an[n-1];
    return 0;
}

