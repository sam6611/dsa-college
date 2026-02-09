#include <bits/stdc++.h>
using namespace std;
// twice counter GFG
class Solution {
  public:
    int countWords(string list[], int n) {
        unordered_map<string,int> sat;
        for(int i=0;i<n;i++){
            sat[list[i]]++;
        }
        int count=0;
        for(auto s: sat){
            if(s.second==2){
                count++;
            }
        }
        return count;
    }
};