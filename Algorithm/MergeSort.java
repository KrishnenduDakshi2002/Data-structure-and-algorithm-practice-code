


public class MergeSort {

    public static void sort(int arr[],int startIndex,int midIndex,int endIndex)
    {
        int merged[] = new int[endIndex - startIndex+1];
        int index1 = startIndex;
        int index2 = midIndex+1;
        int indexOfMerged = 0;

        while(index1 <=midIndex && index2 <= endIndex)
        {
            if(arr[index1] <= arr[index2])
            {
                merged[indexOfMerged++] = arr[index1++];
            }else{
                
                merged[indexOfMerged++] = arr[index2++];
            }
        }
        
        while(index1 <= midIndex)
        {
            merged[indexOfMerged++] = arr[index1++];

        }

        while(index2 <= endIndex)
        {
            merged[indexOfMerged++] = arr[index2++];

        }

        for(int i=0,j=startIndex;i<merged.length;i++,j++)
        {
            arr[j]= merged[i];
        }
    }
    public static void mergesort(int arr[], int startIndex,int endIndex)
    {
        if(startIndex >= endIndex)
        {
            return;
        }
        int midIndex = startIndex + (endIndex - startIndex)/2;
        mergesort(arr, startIndex, midIndex);
        mergesort(arr, midIndex+1, endIndex);
        sort(arr,startIndex,midIndex,endIndex);
    }

    public static void main(String args[]){

        int arr[]={6,3,9,5,2,8};
        int size = arr.length;


        mergesort(arr, 0, size-1);


        for(int i : arr)
        {
            System.out.println(i);

        }
    
    }
}