  #include<bits/stdc++.h>
  using namespace std; 

 int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>dp(n,1); 
        int len_of_LIS =0;  
        
         for(int i=0; i<n; i++){
             for(int j=i+1; j<n; j++){
                 if(nums[i] < nums[j]){
                     dp[j] = max(dp[j], dp[i]+1);
                 }
             } 
        len_of_LIS = max(len_of_LIS, dp[i]);
         }  
         
         return len_of_LIS;
    }
    int main()
{
	 vector<int>nums = {2,1,7,3,11,5,27,89}; 
     int maxLen = lengthOfLIS(nums); 
     cout<<maxLen<<endl;
}