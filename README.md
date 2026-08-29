# Sorting Algorithms in C++

## Project Overview

This project implements and demonstrates different **sorting algorithms in C++**. The program takes an array of integers from the user and sorts it using the selected sorting technique.

The following sorting algorithms are implemented:

* Selection Sort
* Insertion Sort
* Bubble Sort
* Quick Sort
* Merge Sort
* Heap Sort
* BST Sort (Tree Sort)

The program uses a `vector<int>` to store the input array and provides separate functions for each sorting algorithm.

---

## 👨‍💻 Author

**Praveen Singh**
<br>
**IIT JAMMU MTECH CSE**

---

## 🛠️ Technologies Used

* **Language:** C++
* **Compiler:** GCC / G++
* **Data Structures:** Arrays, Vectors, Binary Search Tree
* **IDE:** Visual Studio Code / CodeBlocks / Any C++ IDE

---

# 📂 Project Structure

```text
ALL-Sortings/
│
├── Sortings.cpp
└── README.md
```

---

# 🔢 Sorting Algorithms Implemented

## 1. Selection Sort

Selection Sort repeatedly finds the **minimum element** from the unsorted part of the array and places it at the beginning.

### Working

1. Start from index `0`.
2. Find the smallest element in the remaining array.
3. Swap it with the current element.
4. Move to the next position.
5. Repeat until the array is sorted.

### Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n²)           |
| Average | O(n²)           |
| Worst   | O(n²)           |

**Space Complexity:** `O(1)`

---

## 2. Insertion Sort

Insertion Sort builds the sorted array **one element at a time**.

### Working

1. Consider the first element as sorted.
2. Take the next element as `temp`.
3. Compare it with elements on the left.
4. Shift larger elements one position to the right.
5. Insert `temp` at its correct position.

### Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n)            |
| Average | O(n²)           |
| Worst   | O(n²)           |

**Space Complexity:** `O(1)`

Insertion Sort works particularly well for **small or nearly sorted arrays**.

---

## 3. Bubble Sort

Bubble Sort repeatedly compares elements and swaps them when they are in the wrong order.

### Working

For example:

```text
5  2  4  1
```

Compare:

```text
5 > 2 → swap
2  5  4  1
```

Continue comparing elements until the array becomes sorted.

### Complexity

For the implementation used in this project:

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n²)           |
| Average | O(n²)           |
| Worst   | O(n²)           |

**Space Complexity:** `O(1)`

---

# 4. Quick Sort

Quick Sort is a **divide-and-conquer** sorting algorithm.

The implementation chooses the **last element as the pivot**.

### Working

1. Select the last element as the pivot.
2. Find elements smaller than the pivot.
3. Place them before the pivot.
4. Place the pivot at its correct position.
5. Recursively sort the left and right portions.

Example:

```text
Array:
8  3  1  7  4

Pivot = 4
```

After partitioning:

```text
3  1  4  7  8
      ↑
    Pivot
```

Then Quick Sort is applied recursively to the left and right parts.

### Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n log n)      |
| Average | O(n log n)      |
| Worst   | O(n²)           |

**Space Complexity:** `O(log n)` average due to recursion.

---

# 5. Merge Sort

Merge Sort is another **divide-and-conquer** algorithm.

It divides the array into smaller parts, sorts them, and then merges the sorted parts.

### Working

For:

```text
8  3  5  1
```

Divide:

```text
8  3     |     5  1
```

Again divide:

```text
8 | 3    |    5 | 1
```

Sort and merge:

```text
3  8     |     1  5
```

Final merge:

```text
1  3  5  8
```

### Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n log n)      |
| Average | O(n log n)      |
| Worst   | O(n log n)      |

**Space Complexity:** `O(n)`

---

# 6. Heap Sort

Heap Sort uses a **Binary Heap** to sort the array.

This project uses a **Max Heap**.

### Working

First, the array is converted into a Max Heap.

For a node at index `i`:

```text
Left Child  = 2*i + 1
Right Child = 2*i + 2
```

The largest element is placed at the root.

Then:

1. Swap the root with the last element.
2. Reduce the heap size.
3. Heapify the remaining heap.
4. Repeat until the array is sorted.

### Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n log n)      |
| Average | O(n log n)      |
| Worst   | O(n log n)      |

**Space Complexity:** `O(1)` apart from recursion used by `Heapify`.

---

# 7. BST Sort / Tree Sort

BST Sort, also called **Tree Sort**, uses a **Binary Search Tree (BST)** to sort the elements.

### Working

### Step 1: Insert elements into BST

Each element is inserted according to the BST property:

```text
Left subtree < Root < Right subtree
```

For example:

```text
Input:
5  3  7  2  4
```

BST:

```text
        5
       / \
      3   7
     / \
    2   4
```

### Step 2: Perform Inorder Traversal

Inorder traversal follows:

```text
LEFT → ROOT → RIGHT
```

For the above tree:

```text
2  3  4  5  7
```

### Step 3: Copy the result

The sorted elements are copied back into the original vector.

### Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best/Average | O(n log n)      |
| Worst        | O(n²)           |

The worst case can occur when the BST becomes skewed.

**Space Complexity:** `O(n)`

---

# 📊 Comparison of Sorting Algorithms

| Algorithm      |       Best |    Average |      Worst |     Space |
| -------------- | ---------: | ---------: | ---------: | --------: |
| Selection Sort |      O(n²) |      O(n²) |      O(n²) |      O(1) |
| Insertion Sort |       O(n) |      O(n²) |      O(n²) |      O(1) |
| Bubble Sort    |      O(n²) |      O(n²) |      O(n²) |      O(1) |
| Quick Sort     | O(n log n) | O(n log n) |      O(n²) | O(log n)* |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) |      O(n) |
| Heap Sort      | O(n log n) | O(n log n) | O(n log n) |     O(1)* |
| BST Sort       | O(n log n) | O(n log n) |      O(n²) |      O(n) |

`*` Additional recursion stack may be required.

---

# ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/praveen-exec/ALL-Sortings.git
```

### 2. Open the project

```bash
cd ALL-Sortings
```

### 3. Compile

```bash
g++ sorting.cpp -o sorting
```

### 4. Run

```bash
./sorting
```

---

# 💻 Example Input

```text
Enter the size of array: 6
64 25 12 22 11 5
```

If BST Sort is enabled:

```cpp
bstSort(arr);
```

### Output

```text
Sorted Array: 5 11 12 22 25 64
```

---

# 🔄 Selecting a Sorting Algorithm

The program contains separate function calls in `main()`.

For example:

### Selection Sort

```cpp
Selection_Sort(arr, n);
```

### Insertion Sort

```cpp
Insertion_Sort(arr, n);
```

### Bubble Sort

```cpp
Bubble_Sort(arr, n);
```

### Quick Sort

```cpp
Quick_Sort(arr, 0, n - 1);
```

### Merge Sort

```cpp
Merge_Sort(arr, 0, n - 1);
```

### Heap Sort

```cpp
HeapSort(arr, n);
```

### BST Sort

```cpp
bstSort(arr);
```

Only the desired sorting function needs to be uncommented.

---

# 🧠 Important Concepts Used

This project demonstrates several important DSA concepts:

* Arrays
* Vectors
* Swapping
* Loops
* Recursion
* Divide and Conquer
* Partitioning
* Binary Heap
* Heapify
* Binary Search Tree
* BST Insertion
* Inorder Traversal
* Time Complexity
* Space Complexity

---

# 🎯 Learning Objectives

Through this project, the following concepts can be understood:

1. How different sorting algorithms work.
2. Difference between iterative and recursive algorithms.
3. Divide-and-conquer techniques.
4. How Quick Sort performs partitioning.
5. How Merge Sort divides and merges arrays.
6. How a Max Heap is constructed.
7. How Heap Sort uses heapify.
8. How a BST can be used for sorting.
9. How inorder traversal produces sorted elements in a BST.
10. Comparison of sorting algorithms based on time and space complexity.

---

# 🚀 Future Improvements

Possible improvements include:

* Add user input to select the sorting algorithm.
* Add execution-time comparison.
* Add number of comparisons and swaps.
* Add randomized pivot selection for Quick Sort.
* Improve Bubble Sort using an early-termination flag.
* Implement iterative Heapify.
* Properly free dynamically allocated BST nodes.
* Add visualization of sorting steps.

---

# 📜 License

This project is created for **educational and academic purposes**.

---

## ⭐ Conclusion

This project provides implementations of seven important sorting techniques in C++. It demonstrates how different approaches such as **selection, insertion, swapping, divide-and-conquer, heaps, and binary search trees** can be used to arrange elements in sorted order.

Understanding these algorithms and their complexity is an important foundation for **Data Structures and Algorithms (DSA)**.
