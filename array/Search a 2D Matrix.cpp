/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 
 Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/ 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = matrix[i].size() - 1;
        while(i < matrix.size() && j >= 0){
            if(matrix[i][j]==target)
                return true;
            else if(target > matrix[i][j] )
                i++;
            else 
                j--;
        }
        return false;
    }
};
