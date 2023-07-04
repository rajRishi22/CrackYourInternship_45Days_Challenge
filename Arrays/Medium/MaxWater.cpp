class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int i=0,j=height.size()-1;
        while(i<j){
            area=max(area,min(height[i],height[j])*abs(j-i));
            int h=min(height[i],height[j]);
            while(height[i]<=h && i<j) i++;
            while(height[j]<=h && i<j) j--;
        }
       
        return area;
    }
};
