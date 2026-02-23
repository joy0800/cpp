#include<iostream>
using namespace std;

class parent{
public:
	void show1(){
		cout<<"This is parent class"<<endl;
	}
};

class child : public parent{
public:
	void show2(){
		cout<<"This is child class"<<endl;
	}
};

int main(){
	parent p;
	child c;
	
	cout<<"using base class pointer :"<<endl;
	
	parent *bp;
	bp = &p;
	bp->show1();
	
	bp = &c;
	bp->show1();
	
	cout<<"using derived class pointer :"<<endl;
	
	child *cp=&c;
	cp->show1();
	cp->show2();
	
	return 0;
}