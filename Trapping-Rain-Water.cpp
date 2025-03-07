class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        int st=0,en=height.size()-1;
        int left=height[st];
        int right=height[en];
        while(st<en){
            left=max(left,height[st]);
            right=max(right,height[en]);
            sum+=(left-height[st])+(right-height[en]);
            if(height[st]<height[en]){
                st++;
            }
            else{
                en--;
            }
        }
        return sum;
    }
};