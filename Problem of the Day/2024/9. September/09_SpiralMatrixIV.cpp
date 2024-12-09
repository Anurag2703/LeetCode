// Level: MEDIUM

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
            // Intialize vector matrix with -1
            vector<vector<int>>ans(m, vector<int>(n, -1));
            int t=0, b=m-1, l=0, r=n-1;
            ListNode *curr = head;

            // Traversing the matrix in spiral order
            while(curr!=nullptr && t<=b && l<=r){
                // Filling top row(left -> right)
                for(int i=l; i<=r && curr!=nullptr; i++){
                    ans[t][i] = curr->val;
                    curr = curr->next;
                }
                
                t++;

                // Filling right column(top -> bottom)
                for(int i=t; i<=b && curr!=nullptr; i++){
                    ans[i][r] = curr->val;
                    curr = curr->next;
                }

                r--;

                // Filling bottom row(right -> left)
                for(int i=r; i>=l && curr!=nullptr; i--){
                    ans[b][i] = curr->val;
                    curr = curr->next;
                }

                b--;

                // Fill left column (bottom to top)
                for(int i=b; i>=t && curr!=nullptr; i--){
                    ans[i][l] = curr->val;
                    curr = curr->next;
                }

                l++;
            }

            return ans;
        }
};