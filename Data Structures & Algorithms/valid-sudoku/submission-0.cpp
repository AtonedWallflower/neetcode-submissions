class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<int> unique;
        bool ans=true;
        int size=0;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    unique.insert(board[i][j]);
                    size++;
                }
            }
            if(unique.size()!=size){
                ans=false;
                break;
            }
            unique.clear();
            size=0;
        }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    unique.insert(board[j][i]);
                    size++;
                }
            }
            if(unique.size()!=size){
                ans=false;
                break;
            }
            unique.clear();
            size=0;
        }
        for(int r=0;r<9;r+=3){
            for(int c=0;c<9;c+=3){
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        if(board[i+r][j+c]!='.'){
                            unique.insert(board[i+r][j+c]);
                            size++;
                        }
                    }
                    
                }
                if(unique.size()!=size){
                        ans=false;
                        break;
                    }
                unique.clear();
                size=0;
            }
        }
        return ans;
    }
};
