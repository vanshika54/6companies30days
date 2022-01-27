

class Solution {
public:
  int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0,ans=INT_MAX;
        for(int x:weights) {high+=x;low=max(low,x);}
        while(low<=high)
        {
            int maxAllowed=(low+high)/2;
            int daysReqd=0,allowedWt=0;
            for(int x:weights)
            {
                if(allowedWt+x>maxAllowed)
                {
                    daysReqd++;allowedWt=x;
                }
                else
                {
                    allowedWt+=x;
                }
            }
            daysReqd++;
            if(daysReqd<=days)
            {
                ans=min(ans,maxAllowed);high=maxAllowed-1;
            }
            else
                low=maxAllowed+1;
        }
        return ans;
    }
};

