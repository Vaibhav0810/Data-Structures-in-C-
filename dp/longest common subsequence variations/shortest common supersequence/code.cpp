 //my appraach

int shortestCommonSupersequence(string s1, string s2, int n, int m)
    {
        
        int dp[n+1][m+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 && j==0) dp[i][j]=0;
                else if(i==0 && j!=0) dp[i][j]=j;
                else if(j==0 && i!=0) dp[i][j]=i;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+1;
                }
            }
        }
        return dp[n][m];
    }


// aditya verma approach (easY)
// hm lcs mei longest to nikalhi rhe h isme min nikalna h to bs longest nikalkr n+m mei se minus

int shortestCommonSupersequence(string s1, string s2, int n, int m)
    {
        
        int dp[n+1][m+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0) dp[i][j]=0;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return n+m-dp[n][m];
    }
