/**
 * @file 03_02.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-09
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include<iostream>
using namespace std;

class Student{
    private:
        int age;
        int no;
        float score;
        static float sum;
        static float aver;
        static int count;
    public:
        Student(int no1=0, int age1=0 , float score=0);
        void show();
        void total(){
            count++;
        }
        static double average(){
            return aver=sum/count;
        }
};

float Student::sum=0;
float Student::aver=0;
int Student::count=0;


Student::Student(int no1, int age1, float score1){
    age = age1;
    no = no1;
    score = score1;
    sum+=score;
}

int main()
{
	int n;
	cout<<"Please input the number of students:";
	cin>>n;
	Student *p=new Student[n];
	for(int i=0; i<n; i++) 
	{
		int num,age;
		float score;
		cin>>num>>age>>score;
		p[i]=Student(num,age,score);
		p[i].total();
	}
	cout<<"The average score of "<<n<<" student is "<<Student::average()<<endl;
	
	if(p!=NULL)	delete []p;
	return 0;
}