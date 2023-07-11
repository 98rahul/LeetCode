
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        { vector<int>v;
           for(int i=0;i<nums.size()-1;i++)
     {    
        for(int j=i+1;j<nums.size();j++)
        { 
         if((nums[i]+nums[j])==target)
              { v.push_back(i);
                   v.push_back(j);
                     }
        }
         
           }
           return v;
        }
      }
};
// https://leetcode.com/problems/unique-number-of-occurrences/description/
bool uniqueOccurrences(vector<int>& arr) {

        auto len = max_element(arr.begin(), arr.end());
        vector<int> heap(*len+1,0);
        for(int i =0; i<arr.size();i++){
            heap[arr[i]]++;
        }
    auto it=1;
        for(auto& i : heap){
            auto result = std::find(heap.begin() + it, heap.end(), i);
            it++;
            if(result != heap.end()){
                return false;
            }
        }
        return true;
        
    }

