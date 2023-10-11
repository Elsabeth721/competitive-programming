class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int size=sizeof(arr)/sizeof(int);
        selectionSort(arr, size);
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<n-1;i++){
           int minvalue=i;
           for(int j=i+1;j<n;j++){
               if(arr[minvalue]>arr[j]){
                   minvalue=j;
               }
           }
           int temp=arr[i];
           arr[i]=arr[minvalue];
           arr[minvalue]=temp;
       }
    }
};

// } Driver Code Ends
