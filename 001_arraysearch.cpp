class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int i;
    int search(int arr[], int N, int X){
        for(i=0; i<N; i++){
            if(arr[i] == X){
                return i;
            }
        }
        return -1;
    }
};
    
