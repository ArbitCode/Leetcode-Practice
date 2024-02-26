class Solution {
    
    /*
    rec1: x1,y1,x2,y2
    rec2: x3,y3,x4,y4
           0  1  2  3
                 
    x1-----------x2
             x3--------x4
         x2 > x3
         min(x2, x4) > max(x1, x3);
         min(rec1[2],rec2[2]) > max(rec1[0], rec2[0]);
         min(rec1[3],rec2[3]) > max(rec1[1], rec2[1]);
    
    */
public:
    bool checkOverLap(vector<int> &rec1, vector<int> &rec2, long long &area)
    {
        
        bool isLength = min(rec1[2], rec2[2]) > max(rec1[0], rec2[0]);
        bool isHeight = min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]);
        if(isLength && isHeight){
            int intersectLenght = min(rec1[2], rec2[2]) - max(rec1[0], rec2[0]);
            int intersectHeight = min(rec1[3], rec2[3]) - max(rec1[1], rec2[1]);
            long long squareSide = min(intersectLenght, intersectHeight);
            area = squareSide * squareSide;
            return true;
        }
        return false;
    }
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int n = bottomLeft.size();
        vector<vector<int>> rectangles(n, vector<int>(4));
        for(int i = 0; i < n; i++){
            rectangles[i][0] = bottomLeft[i][0]; //x1 //x3
            rectangles[i][1] = bottomLeft[i][1]; //y1 //y3
            rectangles[i][2] = topRight[i][0];   //x2 //x4
            rectangles[i][3] = topRight[i][1];   //y2 //y4
        }
        
        long long maxArea = 0;
        
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                // if i,j overlap
                long long area = 0;
                if(checkOverLap(rectangles[i], rectangles[j], area))
                    maxArea = max(area, maxArea);
            }
        }
        return maxArea;
        
    }
};