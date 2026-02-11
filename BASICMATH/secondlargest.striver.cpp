class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
      //for 1 to n, lar,sl, 1,2,3,3,5 || 10 2 8 
      int lar=a[0];
      int sl=-1; //default if no sl exists return -1
      for(int i=1;i<n;i++) //O(n)
      {
        if(a[i]>lar)
        {
            sl=lar;
            lar=a[i];
        }
        else if(a[i]<lar && a[i]>sl) //3<3 and 3>2 still false it just skip and move to next iteration 
        {
            sl=a[i];
        }
      }
      return sl;
    }
};