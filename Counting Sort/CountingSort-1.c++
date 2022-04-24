# include <iostream>
using namespace std;
// counting sort sorting algorithm
void CountingSort(int input_array[],int s, int r)
{
	int output_array[s];
	int count_array[r];
	
	// initialize all elements to 0 in count array
	for(int i=0;i<r;i++)
		count_array[i]=0;
		
	// to take a count of all elements in the input array
	for(int i=0;i<s;i++)
		++count_array[input_array[i]];
	
	// cummulative count of count array to get the 
	// positions of elements to be stored in the output array
	for(int i=1;i<r;i++)
		count_array[i]=count_array[i]+count_array[i-1];
	
	// placing input array elements into output array in proper
	//  positions such that the result is a sorted array in ASC order
	for(int i=0;i<s;i++)
		output_array[--count_array[input_array[i]]] = input_array[i];
	
	// copy output array elements to input array
	for(int i=0;i<s;i++)
		input_array[i]=output_array[i];
}

int main()
{
	int size=0;
	int range = 10;
	cout<<"Enter Size of array: "<<endl;
	cin>>size;
	int myarray[size];
	cout<<"Enter "<<size<<" integers in any order in range of 0-9: "<<endl;
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
	CountingSort(myarray,size,range);  // counting sort called
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
Enter 5 integers in any order in range of 0-9: 
5 4 3 2 1
Before Sorting
5 4 3 2 1
After Sorting
1 2 3 4 5

output-2:
Enter Size of array: 
7
Enter 7 integers in any order in range of 0-9: 
1 2 3 7 6 5 4
Before Sorting
1 2 3 7 6 5 4
After Sorting
1 2 3 4 5 6 7

*/