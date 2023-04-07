int recur(int n,int m, string s1, string s2){
        
        if(n==0 || m==0) return 0;
        
        if(s1[n-1]==s2[m-1]){
            return 1+recur(n-1,m-1,s1,s2);
        }
        else{
            return 0;
        }
        return recur(n-1,m,s1,s2);
            return recur(n,m-1,s1,s2);
        
    }
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        
        return recur(n,m,S1,S2);
        
    }
