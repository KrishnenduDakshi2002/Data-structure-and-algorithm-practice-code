public class quicksort {

    public static int partition(int arr[],int low,int high) {
        int pivot = arr[high];
        int i = low -1;

        for(int j=low;j< high;j++)
        {
            if(arr[j] < pivot)
            {
                i = i+1;
                //swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i]= pivot;
        arr[high] = temp;

        return i;
    }
    public static void QuickSort(int arr[],int low ,int high) {
        if(low < high)
        {
            int pivotIndex = partition(arr,low ,high);

            QuickSort(arr, low, pivotIndex-1);
            QuickSort(arr, pivotIndex+1, high);
        }
    }
    public static void main(String[] args) {

    int arr[]={12,-1,3,34,45,23,2,3,105,5};
    int size = arr.length;
    
    QuickSort(arr, 0, size-1);

    for(int i : arr)
    {
        System.out.println(i);
    }
    }
}

/*  
    Merge sort 
    
    -> worst case complexity : O(logn)
    
    
    
    
    Quick sort
    -> worst case complexity : O(n^2)  // occurs when our smallest or largest element becomes pivot
    -> average : O(nlogn)
    */