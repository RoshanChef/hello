#include<iostream>
#include<set>
using namespace std;

int main()
{

    // implementation BST
    // sorted order 
    set<int> s; 
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(int val : s){
        cout<<val<<" ";
    }cout<<endl;

    // s.erase(s.begin();
    // s.erase(s.begin() , s.end());
    cout<<"present or not  ? "<<s.count(1)<<endl;

    // returns iterator ...
    set<int> ::iterator itr =s.find(2); 

    for(auto it = itr; it!= s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    for(int val : s){
        cout<<val<<" ";
    }cout<<endl;






    return 0; 
}