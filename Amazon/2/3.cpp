class Solution {
 public:
   vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
       // your code here
       multiset<int> st;
       vector<int> ans;
       
       for(int i=0; i<k; i++){
           st.insert(arr[i]);
       }
       
       ans.push_back(*st.rbegin());
       
       for(int i=k; i<n; i++){
           st.erase(st.find(arr[i-k]));
           st.insert(arr[i]);
           
           ans.push_back(*st.rbegin());
       }
       
       return ans;
   }
};
