

class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int count = 0;
        for (int i = 0; i < p.size(); i++) {
            unordered_map<int, int> d;
            for (int j = 0; j < p.size(); j++) {
                int dist = pow(p[j][1] - p[i][1], 2) + pow(p[j][0] - p[i][0], 2);
                if (d[dist] > 0) {
                    count += d[dist] << 1;
                }
                d[dist]++;
            }
        }
        return count;
    }
};


