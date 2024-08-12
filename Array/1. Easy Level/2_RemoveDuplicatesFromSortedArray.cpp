class Solution {
    public:
        int removeDuplicates(vector<int>& arr) {
            int n = size(arr);
            int position = 0;
            int currValue = INT_MIN;
            for(int i=0;i<n;i++){

            // if current value and arr[i] is not same
            // place it in position 

                if(currValue!=arr[i]){
                    
                    currValue= arr[i];
                    arr[position++] = currValue;
                }
                else{
                    continue;
                }
            }
        return position;
        }
};