class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        
        if(n<2){
            return -1; 
        }
         int largest = arr[0]; 
    int secondLargest = INT_MIN; 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest )

        {
            secondLargest = largest     ;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i] > secondLargest) 
        {
            secondLargest = arr[i];
        }
    }
     
    return secondLargest ; 
        
    }
};