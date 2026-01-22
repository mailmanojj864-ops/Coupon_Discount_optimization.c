const char* checkCoupon(int n, int x, int y, int prices[]) {
    int normalSum = 0;
    int discountedSum=x;
    
    for(int i=0;i<n;i++)
    {
        normalSum+=prices[i];
        
        if(prices[i]>y)
          discountedSum+=prices[i]-y;
    }
    
    if(discountedSum<normalSum)
      return "COUPON";
    else
      return "NO COUPON";
}
