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
####There are 2 Phases (3 major steps) in the Quick Sort Algorithm –

<b>a.Division Phase – Divide the array(list) into 2 halves by finding the pivot point to perform the partition of the array(list).</b>
*  1.The in-place sorting happens in this partition process itself.
<b>b.Recursion Phase :–</b>
*  1.Call Quick Sort on the left partition (sub-list)
*  2.Call Quick Sort on the right partition (sub-list)

## Quick Sort Algorithm(Pseudo Code) –
![quick-sort-algorithm-pseudocode](https://user-images.githubusercontent.com/80576654/164887007-ccd30651-9362-4eec-b62a-1a7af6e11a8d.png)

## Quick Sort Partition Function(Pseudo Code) –
![partition-function-in-quick-sort-algorithm](https://user-images.githubusercontent.com/80576654/164887039-d8397e29-1679-4cdd-950d-074ae60ddc3f.png)

