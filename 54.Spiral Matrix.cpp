class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> ans;
        int row = matrix.size()-1;
        int col = matrix[0].size()-1;
        int count = 0;
        int total = row * col;

        int startingrow = 0;
        int endingrow = row;
        int startingcol = 0;
        int endingcol = col;

        while (startingrow <= endingrow && startingcol <= endingcol) { 
            for (int index = startingcol; index <= endingcol; index++) {
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;

            for (int index = startingrow; index <= endingrow; index++) {
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;

            if(startingrow <= endingrow){
            for (int index = endingcol; index >= startingcol; index--) { 
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
            }

            if(startingcol <= endingcol){
            for (int index = endingrow; index >= startingrow; index--) {
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;
            }
        }
        return ans;
    }
};