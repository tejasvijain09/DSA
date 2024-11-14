class Solution{
public:
    int findGcd(int divisor,int dividend,int *x,int *y)
    {
        if(divisor==0)
        {
            *x=0;
            *y=1;
            return dividend;
        }
        int x1,y1;
        int ans=findGcd(dividend%divisor, divisor, &x1, &y1);
        *x=y1-(dividend/divisor)*x1;
	*y=x1;
        return ans;
    }
    vector<int> gcd(int divisor, int dividend){
        // code here
        int x,y;
        int gcd= findGcd(divisor, dividend, &x, &y);
        return {gcd,x,y};
        
    }
};
