

class Solution {
  public:
    string colName (long long int n) {
        string s = "";
        while(n != 0) {
            // To make the number 0 indexed
            n--;
            int r = n % 26;
            s = string(1, r + 'A') + s;
            n = n / 26;
        }
        return s;
    }
};

