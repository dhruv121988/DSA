class Solution {
public:
    bool dfs(vector<vector<int>>& arr, vector<int>& visited,
             vector<int>& path_visited, int index) {

        visited[index] = 1;
        path_visited[index] = 1;

        for (int i = 0; i < arr[0].size(); i++) {

            if (arr[index][i] == 1) {

                if (visited[i] == 0) {
                    bool b = dfs(arr, visited, path_visited, i);

                    // If cycle is there
                    if (b == false) {
                        return false;
                    }
                } else if (visited[i] == 1 && path_visited[i] == 1) {
                    // Cycle
                    return false;
                }
            }
        }

        // BACKTRACKING
        path_visited[index] = 0;
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> arr(numCourses, vector<int>(numCourses, 0));
        vector<int> path_visited(numCourses, 0);
        vector<int> visited(numCourses, 0);

        for (int i = 0; i < prerequisites.size(); i++) {
            int r = prerequisites[i][0];
            int c = prerequisites[i][1];

            arr[c][r] = 1; //IMP
        }

        bool ans = true;

        for (int i = 0; i < arr[0].size(); i++) {

            if (visited[i] == 0) {
                ans = dfs(arr, visited, path_visited, i);
            }

            if (ans == false) {

                return false;
            }
        }

        return true;
    }
};