class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>ans;
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     if(mp.find(target-nums[i])!=mp.end()){
        //         ans.push_back(mp[target-nums[i]]);
        //         ans.push_back(i);
        //         return ans;
        //     }
        //         mp[nums[i]]=i;
        // }
        // return ans;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
                    
            }
        }
        return ans;
	}
            
};