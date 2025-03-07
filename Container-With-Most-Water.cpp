class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0,end=height.size()-1;
        int max_area=INT_MIN;
        while(st<end){
            int area=min(height[st],height[end])*(end-st);
            if(area>max_area){
                max_area=area;
            }
            else if(height[st]<height[end])st++;
            else end--;
        }
        return max_area;
    }
};