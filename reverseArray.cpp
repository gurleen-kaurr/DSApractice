#include<bits/stdc++.h>
using namespace std ;

vector<int> reverse(vector<int> v){
    int start=0;
    int end = v.size()-1;

    while(start<=end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}
int main(){

vector<int> v ;

v.push_back(11);
v.push_back(7);
v.push_back(3);
v.push_back(12);
v.push_back(4);

vector<int> ans = reverse(v);

cout<<"Reverse of the array:";

for(int i=0;i<v.size(); i++){
    cout<<v[i]<<" ";
}
cout<<endl;

return 0;
}