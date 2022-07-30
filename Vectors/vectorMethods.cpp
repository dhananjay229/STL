#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> d{1,2,3,10,15};
	//Push back 
	d.push_back(16);
	
	//Pop back
	d.pop_back();
	
	//Insert some element in the middle;
	d.insert(d.begin()+3,100);
	
	//Erase some element
	d.erase(d.begin()+3);
	d.erase(d.begin()+2,d.begin()+5);
	
	//Size
	cout<<d.size()<<endl;
	coutd.capacity()<<endl;
	
	//resize
	d.resize(18);
	cout<<d.capacity()<<endl;
	
	//clear
	d.clear();
	
	//Empty
	if(d.empty()){
		cout<<"This is an empty vector";
	}
	
	cout<<d.size()<<endl;
	
	//Front
	cout<<d.front()<<endl;
	cout<<d.back<<endl;
	
	
	for(int x:d){
		cout<<x<<" ";
	}
	
	
	
	
	
	
	return 0;
}
