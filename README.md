# Sorting-Algorithms-Part-2
<b>Topics</b>
* 1.Merge Sort Algorithm (with Example) with C++ Code | Sorting Algorithms
* 2.Quick Sort Algorithm (with Example) with C++ Code | Sorting Algorithms 
* 3.Counting Sort Algorithm with C++ Code | Sorting Algorithms 
* 4.Radix Sort Algorithm with C++ Code | Sorting Algorithms 
* 5.Shell Sort Algorithm with C++ Code | Sorting Algorithms 
##
# 1.Merge Sort Algorithm (with Example) with C++ Code | Sorting Algorithms | Data Structures & Algorithms
<b>Merge Sort :-</b>
* Merge Sort Algorithm is a Divide & Conquer algorithm. It divides input array in two halves, calls itself for the two halves(recursively) and then merges the two sorted halves. A separate merge() function is used for merging two halves. Merge sort is one of the most efficient sorting algorithms.
* Time Complexity: O(nlog(n))
* Merge Sort is one of the most popular sorting algorithms that is based on <b>the principle of Divide and Conquer Algorithm.</b>

![merge-sort-algorithm-featured-image](https://user-images.githubusercontent.com/80576654/164886190-9339341f-d217-4e8c-913f-3765c1b384cd.jpg)


### Working :–
<b>There are 3 Phases (4 major steps) in the Merge Sort Algorithm –</b>

<b>a.Division Phase – Divide the array(list) into 2 halves by finding the midpoint of the array(list).</b>
* 1.Midpoint (m) = (left + right)/ 2
* 2.Here left is the starting index & right is the last index of the array(list)
 
<b>b.Recursion Phase –</b>
 * 1.Call Merge Sort on the left sub-array (sub-list)
 * 2.Call Merge Sort on the right sub-array (sub-list)
 
<b>c.Merge Phase –</b>
 * 1.Call merge function to merge the divided sub-arrays back to the original array.
 * 2.Perform sorting of these smaller sub arrays before merging them back.

### Merge Sort Algorithm(Pseudo Code) –
    mergeSort(arr[],l,r)  //arr is array, l is left, r is right
    {
    if(l<r)
    {
      midpoint = (l+r)/2
      mergeSort(arr,l,m)
      mergeSort(arr,m+1,r)
      merge(arr,l,m,r)
    }
    }

### Merge Sort Complexity
    Time              Complexity	 
    Best	             O(n*log n)
    Worst	            O(n*log n)
    Average         	 O(n*log n)
    Space Complexity	 O(n)
    Stability	        Yes
 ### Time Complexity
* Best Case Complexity: O(n*log n)

* Worst Case Complexity: O(n*log n)

* Average Case Complexity: O(n*log n)

### Space Complexity
* The space complexity of merge sort is O(n).

### Merge Sort Applications
* Inversion count problem
* External sorting
* E-commerce applications
##


# 2.Quick Sort Algorithm (with Example) with C++ Code | Sorting Algorithms | Data Structures & Algorithms
<b>Quick Sort Algorithm :-</b>
* Quick Sort Algorithm is a <b>Divide & Conquer algorithm</b>. It divides input array in two partitions, calls itself for the two partitions(recursively) and performs in-place sorting while doing so. A separate <b>partition()</b> function is used for performing this in-place sorting at every iteration. Quick sort is one of the most efficient sorting algorithms.

* >> Time Complexity: θ(nlog(n))
* >> Space Complexity: O(log(n))

![quick-sort-sorting-algorithm-featured-image](https://user-images.githubusercontent.com/80576654/164886922-8251bfe5-d292-4da0-bade-9931bb249939.jpg)

<b>Working :–</b>
#### There are 2 Phases (3 major steps) in the Quick Sort Algorithm –

<b>a.Division Phase – Divide the array(list) into 2 halves by finding the pivot point to perform the partition of the array(list).</b>
*  1.The in-place sorting happens in this partition process itself.
<b>b.Recursion Phase :–</b>
*  1.Call Quick Sort on the left partition (sub-list)
*  2.Call Quick Sort on the right partition (sub-list)

## Quick Sort Algorithm(Pseudo Code) –
![quick-sort-algorithm-pseudocode](https://user-images.githubusercontent.com/80576654/164887007-ccd30651-9362-4eec-b62a-1a7af6e11a8d.png)

## Quick Sort Partition Function(Pseudo Code) –
![partition-function-in-quick-sort-algorithm](https://user-images.githubusercontent.com/80576654/164887039-d8397e29-1679-4cdd-950d-074ae60ddc3f.png)

### Quicksort Complexity
    Time              Complexity	 
    Best	             O(n*log n)
    Worst	            O(n2)
    Average	          O(n*log n)
    Space Complexity	 O(log n)
    Stability        	No
## 1. Time Complexities
<b>a.Worst Case Complexity [Big-O]:</b> O(n2)</b>
* It occurs when the pivot element picked is either the greatest or the smallest element.
* This condition leads to the case in which the pivot element lies in an extreme end of the sorted array. One sub-array is always empty and another sub-array contains n - 1 elements. Thus, quicksort is called only on this sub-array.
* However, the quicksort algorithm has better performance for scattered pivots.
 
<b>b.Best Case Complexity [Big-omega]: O(n*log n)</b>
* It occurs when the pivot element is always the middle element or near to the middle element. 
 
<b>c.Average Case Complexity [Big-theta]: O(n*log n)</b>
* It occurs when the above conditions do not occur.

<b>2. Space Complexity</b>
* The space complexity for quicksort is O(log n).

## Quicksort Applications
<b>Quicksort algorithm is used when</b>
* The programming language is good for recursion
* Time complexity matters
* Space complexity matters

# 3.Counting Sort Algorithm with C++ Code | Sorting Algorithms | Data Structures & Algorithms
<b>Count/Counting Sort :–</b>
* Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.
* <b>Time Complexity: O(n+k)</b> where n is the number of elements in input array and k is the range of input.
* <b>Auxiliary Space: O(n+k)</b>

<b>Working :–</b>
* Step 1 – Take input array & range(no of unique integer values involved)
* Step 2 – Create the output array of size same as input array. Create count array with size equal to the range & initialize values to 0.
* Step 3 – Count each element in the input array and place the count at the appropriate index of the count array
* Step 4 – Modify the count array by adding the previous counts(cumulative). The modified count array indicates the position of each object/element in the output array.
* Step 5 – Output each object from the input array into the sorted output array followed by decreasing its count by 1.
* Step 6 – Print the sorted output array.

### Couting Sort Algorithm –
    1.take input_array[size]
    2.create output_array[size]
    3.take range (or no of unique elements)
    4.create count_array[range] & initialize all values to 0
         1.for(int i=0 to i<range)
           1.count_array[i] = 0
    5.Count each element & place it in the count_array
      1.for(int i = 0 to i<size)
         1.++count_array[input_array[i]]
    6.Modify count_array[] to store previous counts (cumulative)
         1. for(int i = 1 to i < range)
              1.count_array[i]=count_array[i]+count_array[i-1]
    7.Place elements from input_array[] to output_array[] using this count_array[] that has the actual positions of elements
                        1.for(int i=0 to i<size)
                           1. output_array[–count_array[input_array[i]]] = input_array[i]
   8. Transfer sorted values from output_array[] to input_array[]
            1.for(i=0 to i<size)
                2.input_array[i]=output_array[i]
