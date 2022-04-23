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
