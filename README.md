# SORTING ALGORITHMS & BIG O
This is an Alogrithm project written in C by **Dinobi Udeh** during the Full Stack Software Engineering studies at ALX.

## Header Files
- [sort.h] (https://www.github.com/Di-nobi/sorting_alogrithms/sort.h) : Header File containing definitions and prototypes for all functions written for the project.
Data Structure:
````
typedef struct listint_s
{
      const int n;
      struct listint_s *prev;
      struct listint_s *next;
} listint_t;

````
Function Prototypes:
| **Files** | **Prototypes** |
| --------- | -------------- |
| 0-bubble_sort.c| void bubble_sort(int *array, size_t size); |
| print_array.c | void print_array(const int *array, size_t size); |
| print_list.c | void print_list(const listint_t *list); |
| 1-insertion_sort_list | void insertion_sort_list(listint_t **list); |
| 2-selection_sort.c | void selection_sort(int *array, size_t size); |
| 3-quick_sort.c | void quick_sort(int *array, size_t size); |
| 100-shell_sort.c | void shell_sort(int *array, size_t size); |
| 101-cocktail_sort_list.c | void shell_sort(int *array, size_t size); |
| 102-counting_sort.c | void counting_sort(int *array, size_t size); |
| 103-merge_sort.c | void merge_sort(int *array, size_t size); |
| 104-heap_sort.c | void heap_sort(int *array, size_t size); |
| 105-radix_sort.c | void radix_sort(int *array, size_t size); |
| 106-bitonic_sort.c | void bitonic_sort(int *array, size_t size); |
| 107-quick_sort_hoare.c | void quick_sort_hoare(int *array, size_t size); |

# Tasks 📜
- **0-bubble_sort.c**: This is a function written in C that sorts an array of integers in ascending order using the Bubble Sort Algorithm.
- **0-O**: File containing the best, average and worst case time complexity
