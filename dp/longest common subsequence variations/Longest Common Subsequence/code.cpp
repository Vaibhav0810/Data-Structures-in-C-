class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
    
    // int recur(int n,int m, string s1,string s2,vector<vector<int>>&dp){
    //     if(n==0 || m==0) return 0;
    //     if(dp[n][m]!=-1) return dp[n][m];
    //     if(s1[n-1]==s2[m-1]){
    //         return dp[n][m]= 1+recur(n-1,m-1,s1,s2,dp);
    //     }
    //     else{
    //         return dp[n][m]=max(recur(n-1,m,s1,s2,dp),recur(n,m-1,s1,s2,dp));
    //     }
        
    // }
    
    // int lcs(int x, int y, string s1, string s2)
    // {
    //     // your code here
        
    //     // recursion
    //     vector<vector<int>>dp (x+1,vector<int>(y+1,-1));
    //     return recur(x,y,s1,s2,dp);
        
    // }
    
    // top down
    
    //
    
        int lcs(int x,int y, string s1, string s2){
            
            int dp[x+1][y+1]={0};
            
            for(int i=0;i<x+1;i++){
                for(int j=0;j<y+1;j++){
                    if(i==0 || j==0) dp[i][j]=0;
                }
            }
            
            for(int i=1;i<x+1;i++){
                for(int j=1;j<y+1;j++){
                    if(s1[i-1]==s2[j-1]){
                        dp[i][j]=1+dp[i-1][j-1];
                    }
                    else{
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            return dp[x][y];
        }
    
};
