class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x, y;
        
        // Find rook
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(board[i][j] == 'R') {
                    x = i;
                    y = j;
                }
            }
        }

        int count = 0;
        vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
        
        for(auto d : dir) {
            int i = x + d.first;
            int j = y + d.second;
            
            while(i >= 0 && i < 8 && j >= 0 && j < 8) {
                if(board[i][j] == 'B') break;
                if(board[i][j] == 'p') {
                    count++;
                    break;
                }
                i += d.first;
                j += d.second;
            }
        }
        
        return count;
    }
};