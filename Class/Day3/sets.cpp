
// sets
#include <iostream>
#include<set>
using namespace std;
int main() {
set<int> s;
s.insert(0);
s.emplace(2);
s.emplace(4);
s.emplace(6);
s.emplace(8);
s.emplace(10);
for(auto it : s){
    cout<<it*it<<" ";
}
if(s.find(7)!=s.end()){
    cout<<"found";
}
else{
    cout<<"not found";
}
    return 0;
}
