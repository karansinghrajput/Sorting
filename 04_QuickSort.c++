#include<iostream>

using namespace std;

void printArray(int arr[] , int num)
{
     cout<<"All sorted array here"<<endl;
    for(int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}

 int partation(int arr[],int first,int last)
 {
    int pivot = arr[last];
    int i = first - 1;
    
    for(int j = first; j<=last; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[i+1],arr[last]);
    return i + 1;
 }


void QuickSort(int arr[],int first,int last)
{
    if(first>=last) return;

    int pi = partation(arr,first,last);
    QuickSort(arr,first,pi-1);
    QuickSort(arr,pi+1,last);
}
int main(){
    
   int arr[] = {2,1,4,3,6,7,5};
   int size = sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr,0,size);
    printArray(arr,size);
   

    return 0;
}