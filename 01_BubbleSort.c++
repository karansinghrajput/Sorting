#include<iostream>

using namespace std;

// This is my Array element print Function.
void printArray(int arr[] , int num)
{
     cout<<"All sorted array here"<<endl;
    for(int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}

 // Sort array using bubble Sorting technique.
void BubbleSort(int arr[],int size)
{
    int temp;
    
    for(int i = 0; i < size-1; i++)
    {
       for(int j = i+1; j < size; j++)
       {
          if(arr[i] > arr[j])
          {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
       }
    }

}

int main(){
    
    int num;
    cout<<"Enter the number throw keyboard"<<endl;
    cin>>num;
    int arr[num];
     
     cout<<"inser the elemnt of array"<<endl;
    for(int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }

    BubbleSort(arr,num);
    printArray(arr,num);



    return 0;
}