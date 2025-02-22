

#### **📜 Overview**  
This program implements **Binary Search** in C. It first **sorts the array using Bubble Sort**, then searches for a user-provided number using **Binary Search**.

#### **📂 File Structure**  
- `main()` → Takes input from the user and calls the sorting and searching functions.  
- `bubble_sort()` → Sorts the array using the Bubble Sort algorithm.  
- `binary_search()` → Searches for the element using Binary Search.

#### **⚙️ How It Works**  
1. The user enters the number of elements and the array values.  
2. The program **sorts** the array using Bubble Sort.  
3. The user enters a number to search.  
4. The program performs **Binary Search** and displays the result.

#### **🛠️ Compilation & Execution**  
```sh
gcc binary_search.c -o binary_search
./binary_search
```

#### **📥 Sample Input & Output**
```
Enter range of number to be entered - 5
Enter 1th number 50
Enter 2th number 10
Enter 3th number 30
Enter 4th number 70
Enter 5th number 40
Sorting......... 
Enter the number to search - 
30
Number found at 3th position
```


