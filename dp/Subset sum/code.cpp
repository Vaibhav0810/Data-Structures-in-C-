// to isme phle hm vo matrix bnayenge to isme sum n array ki value ka matrix bnayenge

// aur base case mei ye scene ho skta h ki ya to sum 0 ho ya array ka size 0 ho to uss hisab se base case likh denge

// if(sum==0) return 1;
// if(arr.size()==0 && sum>0) return 0;

bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        
        bool t[arr.size()+1][sum+1];
  
  // ab isme array initialise krenge to jaise knapsack mei 0 lgaa diaa tha idhr bhi aise ni krna sochna hota h krte vkt
  // vo values put krke sochte h ki agr array ka size 0 h aur sum 0 h to vo possible h 
  // agr array ka size 1 h aur sum 0 to bhi possible h empty array
  // iss lie saari neeche vali true
  // aise hi right mei agr sum 1 h aur array ka size 0 to vo possible ni h to uske lie sbme false
  
        
        for(int i=0;i<arr.size()+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    t[i][j]=false;
                }
                if(j==0){
                    t[i][j]=true;
                }
            }
        }
        
  
  // ab knapsack mei max ka sceene lia tha bt isme kuch max ni h 
  // to isme hm aur lenge ki isse le ya ni aise
        for(int i=1;i<arr.size()+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[arr.size()][sum];
    }
