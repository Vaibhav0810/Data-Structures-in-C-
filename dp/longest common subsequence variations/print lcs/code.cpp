
#include<bits/stdc++.h>
using namespace std;

// phle isme lsc nikalenge uske bdd niche se ik ik krke peeche aayenge agr same h to ans mei push ni to bak max pr jaayenge 
// end mei reverse krke return

// upr se iislie ni krskte bcoz pta ni chlega kis direction mei jaana h


vector<char> LCS(int n,int m, string s1,string s2){
    
    
    int dp[n+1][m+1];
    
    
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
                
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int i=n,j=m;
    vector<char>ans;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else j--;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s1="ABCDGH",s2="AEDFHR";
    vector<char>ans = LCS(6,6,s1,s2);
    for(auto it:ans) cout<<it;
    
}
