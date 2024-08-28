class Solution {
public:
    int row[4] = {1, -1, 0, 0};
    int col[4] = {0, 0, 1, -1};
    int r, c;

    bool valid(int i, int j) { return i < r && i >= 0 && j < c && j >= 0; }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        r = image.size();
        c = image[0].size();
        int curr = image[sr][sc];
        if (curr == color)
            return image;

        queue<pair<int, int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;

        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for (int k = 0; k < 4; k++) {
                int new_i = i + row[k];
                int new_j = j + col[k];
                if (valid(new_i, new_j) && image[new_i][new_j] == curr) {
                    q.push({new_i, new_j});
                    image[new_i][new_j] = color;
                }
            }
        }
        return image;
    }
};
