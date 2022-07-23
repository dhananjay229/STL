#include<iostream>

using namespace std;

int main(){
	
	// pair 1
	pair<int, char> p;
	p.first = 10;
	p.second = 'D';
	
	//pair2
	pair<int,char> p2(p);
	
	cout << p2.first<<endl;
	cout << p2.second<<endl;
	
	
	return 0;
}
