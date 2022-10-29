/*Problem Link- https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). 
Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can
move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and
rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

Example:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isvalid(int x,int y,int n){
        return (x>=0 && y>=0 && x<n && y<n);
    }
    int dx[4]={1,-1,0,0},
        dy[4]={0,0,1,-1};
    char dir[4]={'D','U','R','L'};
    void helper(int x,int y,string &curr,vector<string> &ans,vector<vector<int>> &m,int n,vector<vector<bool>> &vis){
        if(x==n-1 && y==n-1){ans.push_back(curr); return;}
        vis[x][y]=true;
        for(int k=0;k<4;k++){
            int i=x+dx[k],j=y+dy[k]; char c=dir[k];
            if(isvalid(i,j,n) && !vis[i][j] && m[i][j]==1){
                curr+=c;
                helper(i,j,curr,ans,m,n,vis);
                curr.pop_back();
            }
        }
        vis[x][y]=false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans; string curr="";
        if(m[0][0]==0 || m[n-1][n-1]==0){return ans;}
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        helper(0,0,curr,ans,m,n,vis);
        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
