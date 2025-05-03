## Sorting Algorithms

This project is about learning to write sorting algorithms and to understand their time complexity.

## Files

* [sort.h](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/sort.h), the header file.

* [print_array.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/print_array.c), the definition of a function printing an array.

* [print_list.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/print_list.c), the definition of a function printing a binary tree.

* [0-bubble_sort.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/0-bubble_sort.c), a function sorting an array using bubble sorting algorithm.

* [1-insertion_sort_list.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/1-insertion_sort_list.c), a function sorting a doubly linked list using insertion sorting algorithm.

* [2-selection_sort.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/2-selection_sort.c), a function sorting an array using selection sorting algorithm.

* [3-quick_sort.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/3-quick_sort.c), a function sorting an array using quick sorting algorithm.

* [100-shell_sort.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/100-shell_sort.c), a function sorting an array using shell sorting algorithm.

* [102-counting_sort.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/102-counting_sort.c), a function sorting an array using counting sorting algorithm.

* [103-merge_sort.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/103-merge_sort.c), a function sorting an array using merge sorting algorithm.

* [105-radix_sort.c](https://github.com/gwendalminguy/holbertonschool-sorting_algorithms/tree/main/105-radix_sort.c), a function sorting an array using radix sorting algorithm.

## Algorithms

| **Names** | **Time Complexity** | **Description** |
| :-------- | :-----------------: | :-------------- |
| [Bubble Sort](https://en.wikipedia.org/wiki/Bubble_sort) | O(n^2) | Sorts an array by comparing each element with the next one, swapping them if necessary. |
| [Insertion Sort](https://en.wikipedia.org/wiki/Insertion_sort) | O(n^2) | Sorts an array by comparing each element with the previous one, swapping them if necessary. |
| [Selection Sort](https://en.wikipedia.org/wiki/Selection_sort) | O(n^2) | Sorts an array by finding the smallest element on each iteration, swapping it at the beginning. |
| [Quick Sort](https://en.wikipedia.org/wiki/Quicksort) | O(nlog(n)) | Sorts an array by finding the final position of a pivot, and partitioning other elements to sort them recursively. |
| [Shell Sort](https://en.wikipedia.org/wiki/Shellsort) | / | Sorts an array by comparing elements separated by a gap using insertion sort, and reducing the gap on each iteration. |
| [Counting Sort](https://en.wikipedia.org/wiki/Counting_sort) | O(n+k) | Sorts an array by counting the number of occurances of each element, and computing their final position. |
| [Merge Sort](https://en.wikipedia.org/wiki/Merge_sort) | O(nlog(n)) | Sorts recursively the left half and the right half of an array, and merges them in the right order. |
| [Radix Sort](https://en.wikipedia.org/wiki/Radix_sort) | / | Sorts an array by comparing each significant digit of all elements, using counting sort. |
