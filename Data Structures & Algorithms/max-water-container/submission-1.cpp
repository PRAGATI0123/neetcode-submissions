class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0; //this is the answer which will used in comparison later
        int n = heights.size();

        int left = 0, right = n-1;
        while(left < right){
            int width = right - left ;
            int ht = min(heights[right], heights[left]);
            int area = width * ht;

            maxWater = max(maxWater, area);

            heights[left] < heights[right]? left++ : right-- ; // ternary operator
        }
   return maxWater;
        
    }
};
//main login here is to which height we should increment or decrement , so here using two pointers, simply increment or decrement based on the minimun height , if left < right , then left++ and if right< left then right--.
