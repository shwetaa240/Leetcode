class Solution {
    public int digitFrequencyScore(int n) {

        int sum=0,num=n;
        while(num!=0)
        {
            sum+=num%10;
            num/=10;
        }
        
        return sum;
    }
}