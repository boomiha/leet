int* countBits(int n, int* returnSize) 
{
    *returnSize=n+1;
    int* ans=(int*)malloc( (*returnSize) * sizeof(int));
    ans[0]=0;
    for(int i=0;i<=n;i++)
    {
        ans[i]=((i&1)+ans[i>>1]);
    }
    return ans;

    
}