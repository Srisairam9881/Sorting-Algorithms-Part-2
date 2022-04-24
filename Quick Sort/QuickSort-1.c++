# include <iostream>
using namespace std;
// quick sort sorting algorithm
int Partition(int arr[], int s, int e)
{
 int pivot = arr[e];
 int pIndex = s;
 
 for(int i = s;i<e;i++)
 {
 if(arr[i]<pivot)
 {
 int temp = arr[i];
 arr[i] = arr[pIndex];
 arr[pIndex] = temp;
 pIndex++;
 }
 }
 
 int temp = arr[e];
 arr[e] = arr[pIndex];
 arr[pIndex] = temp;
 
 return pIndex;
}
 
void QuickSort(int arr[], int s, int e)
{
 if(s<e)
 {
 int p = Partition(arr,s, e);
 QuickSort(arr, s, (p-1));  // recursive QS call for left partition
 QuickSort(arr, (p+1), e);  // recursive QS call for right partition
 }
}
 
int main()
{
 
 int size=0;
 cout<<"Enter Size of array: "<<endl;
 cin>>size;
 int myarray[size];
 
 cout<<"Enter "<<size<<" integers in any order: "<<endl;
 for(int i=0;i<size;i++)
 {
 cin>>myarray[i];
 }
 cout<<"Before Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 cout<<endl;
 
 QuickSort(myarray,0,(size-1));  // quick sort called
 
 cout<<"After Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 
 return 0;
}
/*
output-1:
Enter Size of array: 
5 
Enter 5 integers in any order: 
5 4 3 2 1
Before Sorting
5 4 3 2 1
After Sorting
1 2 3 4 5

output-2:
Enter Size of array: 
7
Enter 7 integers in any order: 
1 2 3 7 6 5 4
Before Sorting
1 2 3 7 6 5 4
After Sorting
1 2 3 4 5 6 7

*/