
// to basically ye problem subset sum ki trh h 
// but isme line 22 mei. || iski jgh + sign lga dia h
// bcoz usme hme sirf check krna tha ki h ya ni isme hme btana h ki kitne h 
//

#include <bits/stdc++.h>

using namespace std;

int SubsetSum(int arr[],int n,int sum){
    int dp[n+1][sum+1];
    
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0) dp[i][j]=0;
            if(j==0) dp[i][j]=1;
        }
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    int arr[]={2,3,6,8,10};
    
    cout<<SubsetSum(arr,5,10);

    return 0;
}
