
class Solution {
	private:
		vector<vector<int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
		int rows, cols;
		vector<vector<int>> benchmark;

	public:
		vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
			this->rows = heights.size();
			this->cols = heights[0].size();
			this->benchmark = heights;
			vector<vector<int>> res;
			vector<vector<bool>> pacific(rows, vector<bool>(cols, false));
			vector<vector<bool>> atlantic(rows, vector<bool>(cols, false));
			for (int i=0; i<rows; i++) {
				dfs(i, 0, pacific);
				dfs(i, cols-1, atlantic);
			}
			for (int i=0; i<cols; i++) {
				dfs(0, i, pacific);
				dfs(rows-1, i, atlantic);
			}
			for (int i=0; i<rows; i++) {
				for (int j=0; j<cols; j++) {
					if (pacific[i][j] && atlantic[i][j]) res.push_back({i, j});
				}
			}

			return res;
		}

		void dfs(int row, int col, vector<vector<bool>>& matrix) {
			matrix[row][col] = true;
			for (auto dir : dirs) {
				int X = row + dir[0];
				int Y = col + dir[1];
				if (X>=0 && X<rows && Y>=0 && Y<cols && !matrix[X][Y] && benchmark[X][Y] >= benchmark[row][col]) {
					dfs(X, Y, matrix);
				} 
			}

			return;
		}

};
