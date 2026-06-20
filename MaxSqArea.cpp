#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max
using namespace std;

// Function to find the maximum square area of 1s
int maxSquareArea(const vector<vector<int>>& land) {
    if (land.empty() || land[0].empty()) return 0;

    int rows = land.size();
    int cols = land[0].size();
    
    // dp[i][j] stores the side length of the maximum square ending at (i, j)
    vector<vector<int>> dp(rows, vector<int>(cols, 0));
    int max_side = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Base case: If we are on the first row or column, 
            // the max square side ending here is just the value itself.
            if (i == 0 || j == 0) {
                dp[i][j] = land[i][j];
            } 
            // If the current cell is good land (1), check its neighbors
            else if (land[i][j] == 1) {
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
            } 
            // If it's bad land (0), no square can end here
            else {
                dp[i][j] = 0;
            }

            // Update the largest side length found so far
            max_side = max(max_side, dp[i][j]);
        }
    }

    // Return the area (side * side)
    return max_side * max_side;
}



//**METHOD 2


int maxSquareAreaExpansion(const vector<vector<int>>& land) {
    if (land.empty() || land[0].empty()) return 0;

    int rows = land.size();
    int cols = land[0].size();
    int max_side = 0;

    // 1. Go through each index (i, j)
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            
            // If it's 0, move to the next index
            if (land[i][j] == 0) continue;

            // If it's 1, start with a square of side length 1
            int k = 1;
            bool can_expand = true;

            // Try to grow the square dynamically outward
            while (i + k < rows && j + k < cols) {
                
                // Check the diagonal element first
                if (land[i + k][j + k] != 1) {
                    can_expand = false;
                    break;
                }

                // If diagonal is 1, check all elements UP and LEFT from it
                for (int x = 0; x < k; ++x) {
                    // Check elements up to row 'i' and left to column 'j'
                    if (land[i + x][j + k] != 1 || land[i + k][j + x] != 1) {
                        can_expand = false;
                        break;
                    }
                }

                // If any 0 was found on the outer crust, stop expanding
                if (!can_expand) {
                    break;
                }

                // Perfect crust found! Expand the square size
                k++;
            }

            // Update max_side if a bigger perfect square was found
            max_side = max(max_side, k);
        }
    }

    // Return the maximum area found
    return max_side * max_side;
}

int main() {
    // Testing with the matrix we discussed
    vector<std::vector<int>> land = {
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0}
    };

    int max_area1 = maxSquareAreaExpansion(land);
    
    cout << "The maximum area found using your expansion method is: " 
              << max_area1 << endl;
    
    int max_area2 = maxSquareArea(land);
    
    cout << "The maximum area of good land the farmer can farm is: " 
              << max_area2 << endl;

    return 0;
}