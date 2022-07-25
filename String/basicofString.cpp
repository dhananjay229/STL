#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s0;
	string s1("hello");
	string s2 = "Hello World";
	string s3(s2);
	string s4 = s3;
	char a[] = {'a','b','c','\0'};
	string s5(a);
	
	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	
	if(s0.empty()){
		cout<<"s0 is an empty string"<<endl;
	}
	
	//Append
	s0.append("I Love C++");
	cout<<s0<<endl;
	s0 += " and Python";
	cout<<s0<<endl;	
	
	
	//Remove
	cout<<s0.length()<<endl; 
	s0.clear();
	cout<<s0.length()<<endl;
	
	
	//Compare two string
	s0 = "Apple";
	s1 = "Mango";
	cout<<s0.compare(s1)<<endl; // return an integer 
	
	
	//Find Substrings
	string s = "I want to have apple juice";
	int idx = s.find("apple");
	cout<<idx<<endl;
	
	
	//Remove a word from the string
	
	string word = "apple";
	int len = word.length();
	cout<<s<<endl;
	s.erase(idx,len);
	cout<<s<<endl;
	
	//Iterators
	for(auto it = s1.begin(); it!=s1.end();it++){
		cout<<(*it)<<":";
	}
	cout<<endl;
	
	
	//For each loop
	for(auto c:s1){
		cout<<c<<":";
	}
	
	
	return 0;
}






