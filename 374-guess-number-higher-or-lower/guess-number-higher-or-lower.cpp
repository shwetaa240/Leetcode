/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1,u=n,mid,val;
        while(l<=u)
        {
            mid=l+(u-l)/2;
            val=guess(mid);
            if(val==0)
           return mid;
           else if(val==-1)
           u=mid-1;
           else
           l=mid+1; 
        }
        return mid;
    }
};