/**
 * @file L0608_类模板Stack.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0608        题目:类模板Stack        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.8，程序运行结果如书上所示。
 */

#include<iostream>
using namespace std;

const int size = 10;

template<typename T>
class Stack{
    private:
        T stck[size];
        int tos;
    public: 
        Stack() {}
        void init() { tos = 0;}
        void push(T ch);
        T pop();        
};

template<typename T>
void Stack<T>::push(T ch){
    if(tos == size) {
        cout  << "Stack is full";
        return;
    }
    stck[tos]=ch;
    tos++;
}

template<typename T>
T Stack<T>::pop(){
    if(0 == tos) {
        cout << "Stack is empty";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    Stack<char> s;
    int i;
    s.init();
    s.push('a');
    s.push('b');
    s.push('c');
    for(i = 0; i<3; i++){
        cout << "pop s:" << s.pop() << endl;
    }
    Stack<int> is;
    is.init();
    is.push(1);
    is.push(2);
    is.push(3);
    for(i = 0; i<3; i++){
        cout << "pop is:" << is.pop() << endl;
    }
}