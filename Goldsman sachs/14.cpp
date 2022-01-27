
class Solution {
public:

int minSubArrayLen(int target, vector<int>& nums) {
    int i=0,j=0; int sum=0, res=INT_MAX;
    for(;j<nums.size(); j++){
        sum+=nums[j];
        while(sum>=target && i<=j){
            res=min(res,j-i+1);
            sum-=nums[i];
            i++;
        }  
    }
    if(res==INT_MAX) return 0;
    
    return res;
}
};

