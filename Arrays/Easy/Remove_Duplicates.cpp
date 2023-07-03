class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> set1;
       for(int i=0;i<nums.size();i++){
           set1.insert(nums[i]);
       }
       nums.clear();
       for(int i: set1){
           nums.push_back(i);
       }
       return nums.size(); 
    }
};
