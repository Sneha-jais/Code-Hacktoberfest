//leetcode link is: https://leetcode.com/problems/pascals-triangle/submissions/
//Coding ninja link is: https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> row(numRows);
        
        for(int i=0;i<numRows;i++){
         row[i].resize(i+1);
         row[i][0]=row[i][i]=1;
            for(int j=1;j<i;j++){
                row[i][j]=row[i-1][j-1]+row[i-1][j];
            }
        }
        return row;
        
    }
};
