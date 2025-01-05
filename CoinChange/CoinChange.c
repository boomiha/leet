int coinChange(int* coins, int coinsSize, int amount) 
{
    if (amount == 0) return 0;
    int dp[amount+ 1];  //dp array

    for (int i = 0; i <= amount; i++) //every element in dp array as amount+1
    {
        dp[i] = amount+1;
    }
    dp[0] = 0;             // Base- 0 coins are needed to make amount 0
    for (int a = 1; a <= amount; a++) {
        for (int c = 0; c < coinsSize; c++) {
            if (a - coins[c] >= 0 ) // >=0 i.e, should not be negative inorder to continue searching
            {
                dp[a] = dp[a] < dp[a - coins[c]] + 1 ? dp[a] : dp[a - coins[c]] + 1;
            }
        }
    }
      return dp[amount] != amount + 1 ? dp[amount] : -1;
}