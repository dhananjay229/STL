#include<iostream>
#include<list>
using namespace std;

int main(){
    
    //List of Create a Graph Data Structure
    
    list<pair<int,int> >*l;
    int n; 
    cin>>n;
    
    l = new list<pair<int,int> > [n];
    
    int e;
    cin>>e;
    for(int i=0; i<e; i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }
    
    //Print the linked list
    for(int i=0; i<n; i++){
        //Print every linked list
        cout<<"Linked List";
        for(auto xp:l[i]){
            cout<<"("<<xp.first<<","<<xp.second<<")";
        }
        cout<<endl;
    }
    
    return 0;
}







