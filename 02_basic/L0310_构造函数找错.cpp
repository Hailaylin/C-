/*
	题号：L0310        题目:构造函数（找错）        得分：0  
  
作业提交截止时间：2021/4/17 0:00:00	 
 	
题目内容：
练习书上的例3.10，改正其中的错误。
*/
#include<iostream>
using namespace std;

class Location{
    private:
        int x;
        int y;
    public:

        Location(int m =0, int n=0){
            x=m;
            y=n;
        }
        void Init(int initX, int initY){
            x = initX;
            y = initY;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
};

int main(){
    Location A3;
    A3.Init(785, 980);
    cout << A3.getX() << " " << A3.getY() << endl;
}