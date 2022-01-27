
class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int size = mountainArr.length();
        int l = 0, r = size - 1;
        int min = size;
        while(l <= r){
            int mid = l + (r-l)/2;
            int val = mountainArr.get(mid);
            int l_ = mid ? mountainArr.get(mid-1) : val - 1;
            if(val > l_){
                if(val == target)
                    return mid;
                else if(val > target)
                    r = mid - 1;
                else {
                    l = mid + 1;
                }
                    
            }
            else{
                r = mid - 1;
            }
        }
        l = 0;
        r = size - 1;
        min = size;
        while(l <= r){
            int mid = l + (r-l)/2;
            int val = mountainArr.get(mid);
            int r_ = mid != (size-1) ? mountainArr.get(mid+1) : val - 1;
            if(val > r_){
                if(val == target)
                    return mid;
                else if(val > target)
                    l = mid + 1;
                else {
                   r = mid - 1;
                }
                    
            }
            else{
                l = mid + 1;
            }
        }
        return -1;
    }
};

