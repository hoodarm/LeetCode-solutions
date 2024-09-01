#include <bits/stdc++.h>
using namespace std;

vector <int> twoSum (vector <int>& nums, int target){
   vector <int> result;
   for (int i = 0 ; i<nums.size()-1; i++){
      for (int j = i+1; j<nums.size(); j++){
         if ((nums[i]+nums[j])==target){
            result.push_back(i);
            result.push_back(j);
         } 
      }
   }
   return result;
}

int main(){
   vector<int> input =  {2,4,1,3,5,7};
   int target = 8;
   vector <int> result= twoSum (input, target);
   for (int i = 0; i<2; i++)
      cout << result[i] << endl;
}