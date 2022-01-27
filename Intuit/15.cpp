
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(),piles.end());
        int k=0,hrs;
        int l = 1,r=max;
        int result= r;
        while(l <= r){
            k = (l+r)/2;
            int hrs =0;
            for(auto &b:piles){
                hrs += ceil(1.0 * b / k);;
              
            }
            if(hrs <= h){
                result = k;
                r = k-1;
            }
            else l = k+1;
        }
        return result;
    }
};
