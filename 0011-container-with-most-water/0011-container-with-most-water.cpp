class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int x=0;
        int y= height.size()-1;
        
        while(x<y){
            area= max(area,(y-x)*min(height[x],height[y]));
            if(height[x]<height[y]){
                x++;
            }
            else{
                y--;
            }
        }
        return area;
    }
};