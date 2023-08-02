#include<iostream>

using namespace std;

void printArray(int arr[] , int num)
{
    for(int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}

  void merge(int arr[], int first,int mid, int last)
  {
    int an = mid - first + 1;
    int bn = last - mid;
    int a[an],b[bn];

    for(int i=0; i<an; i++)
    {
        a[i] = arr[first + i];
    }

    for(int j=0; j<bn; j++)
    {
        b[j] = arr[mid+1+j];
    }
  
   int i = 0,j = 0, k = first;
  
    while( i < an && j < bn)
    {
        if(a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    while(i < an)
    {
        arr[k++] = a[i++];
    }

    while(j < bn)
    {
        arr[k++] = b[j++];
    }
  }

 void MergeSort(int arr[],int first , int last)
 {
    // base case.
    if(first >= last) return;

    int mid = first + (last - first)/2;
    MergeSort(arr,first,mid);
    MergeSort(arr,mid+1,last);
    merge(arr,first,mid,last);
 }

int main(){
    
    int arr[] = {2,1,4,3,6,7,5};
   int size = sizeof(arr)/sizeof(arr[0]);

   cout<<"The unsorted array"<<endl;
   printArray(arr,size);

  cout<<"\n";
  cout<<"The Sorted Array"<<endl;
   MergeSort(arr,0,size-1);
   printArray(arr,size);


    return 0;
}