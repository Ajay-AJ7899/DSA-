//brute force method would be first sort then pick last element but tc=O(nlogn)

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int lar=arr[0]
        for(int i=1;i<nums;i++) //O(n)
        {
            if(arr[i]>lar)
            {
                lar=arr[i]
            }
        }
        return lar;
    }
};