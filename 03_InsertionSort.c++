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

void InsertionSort(int arr[],int size)
{
   int i,j,current;
   for(i = 1; i<size; i++)
   {
     current = arr[i];
     j = i - 1;

     while(j >= 0 && arr[j] > current)
     {
        arr[j+1] = arr[j];
        j = j-1; 
     }
      arr[j+1] = current;
   }
}

int main(){
    
     int arr[] = {2,1,4,3,6,7,5};
     int size = sizeof(arr)/sizeof(arr[0]);
     InsertionSort(arr,size);
     printArray(arr,size);;
    return 0;
}