#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout<<"size: "<<v.size() <<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    vector<int> v2=v;
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);

}
