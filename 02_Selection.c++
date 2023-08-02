#include<iostream>

using namespace std;

// prinFunction.
void printArray(int arr[] , int num)
{
     cout<<"All sorted array here"<<endl;
    for(int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// SelectionSort Function
void SelectionSort(int arr[],int size)
{

    for(int i=0; i<size; i++)
    {
        int MIN_Idx = i;
        
       for(int j = i+1; j<size; j++)
       {
        if(arr[j] < arr[MIN_Idx])
        {
            MIN_Idx = j;
        }
       }
       swap(arr[i] , arr[MIN_Idx]); 
    }
}

int main(){

     int arr[] = {2,1,4,3,6,7,5};
     int size = sizeof(arr)/sizeof(arr[0]);

     SelectionSort(arr,size); //Function Call
     printArray(arr,size); // Function Call


    return 0;
}