#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
	
	unordered_map<string, vector<string> > phonebook;
	
	phonebook["Rahul"].push_back("9110");
	phonebook["Dk"].push_back("9625");
	phonebook["Suraj"].push_back("8210");
	phonebook["Karan"].push_back("9764");
	phonebook["Ram"].push_back("7282");
	
	for(auto p:phonebook){
		cout<<" Name "<<p.first<<" -> ";
		for(string s:p.second){
			cout<<s<<" ";
		}
		cout<<endl;
	}
	
	string name;
	cin>>name;
	
	if(phonebook.count(name)==0){
		cout<<"Absent";
	}
	else{
		for(string s:phonebook[name]){
			cout<<s<<endl;
		}
	}
	
	
	return 0;
}
