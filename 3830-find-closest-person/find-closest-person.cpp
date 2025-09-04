class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dist1=0,dist2=0;
        dist1=abs(z-x);
        dist2=abs(z-y);
        if(dist1==dist2) return 0;
        return dist1<dist2?1:2;
    }
};