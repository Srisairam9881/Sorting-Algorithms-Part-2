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
	int range;
    cout<<"Enter range of numbers: ";
    cin>>range;
	cout<<"Enter Size of array: "<<endl;
	cin>>size;
	int myarray[size];
	cout<<"Enter "<<size<<" integers in any order in range of 0- "<<range-1<<": "<<endl;
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
Enter range of numbers: 20
Enter Size of array: 
5
Enter 5 integers in any order in range of 0- 19: 
19 12 13 9 6
Before Sorting
19 12 13 9 6
After Sorting
6 9 12 13 19

output-2:
Enter range of numbers: 40
Enter Size of array: 
5
Enter 5 integers in any order in range of 0- 39: 
39 38 37 36 35
Before Sorting
39 38 37 36 35
After Sorting
35 36 37 38 39

*/