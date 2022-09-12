class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=-10000,res=0;
        for(int i=0;i<nums.size();++i){
            res+=nums[i];
            if(mx<res){mx=res;}
            if(res<0){res=0;}
        }
        return mx;
    }
};
