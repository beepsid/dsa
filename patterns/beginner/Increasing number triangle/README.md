# [Increasing Number Triangle](https://www.naukri.com/code360/problems/increasing-number-triangle_6581893?leftPanelTabValue=PROBLEM)

## Problem Description:
Given an integer `n`, print a pattern that forms a right triangle with consecutive numbers. Each row `i` (where `i` ranges from `1` to `n`) contains numbers starting from the next consecutive number in sequence, creating an increasing pattern across rows.

### Example:
For `n = 5`, the output should be:

```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```


## Algorithm:

### Steps to Solve the Problem:

1. **Input the Number of Rows (`n`)**:
   - Accept an integer `n`, which represents the number of rows in the pattern.

2. **Initialize the Starting Number**:
   - Set `num` to `1`. This variable will keep track of the next number to print in the sequence.

3. **Outer Loop**:
   - Loop through each row `i` from `1` to `n`. This loop controls the row number, determining how many numbers to print in each row.

4. **Inner Loop**:
   - For each row `i`, loop through `j` from `1` to `i`. In each iteration, print the current value of `num`.
   - After printing, increment `num` by `1` to get the next number in the sequence.

5. **Move to the Next Line**:
   - After printing all numbers for the current row, print a newline to start a new row.

6. **Repeat**:
   - Continue this process until all `n` rows have been printed.

### Example Walkthrough:

For `n = 3`, the steps would be:
- **Row 1**: Print `1`
- **Row 2**: Print `2 3`
- **Row 3**: Print `4 5 6`

The resulting pattern would be:

```
1
2 3
4 5 6
```


### Pseudocode:

```plaintext
Start
    Read integer n (number of rows)
    Set num = 1 (initialize starting number)
    For i = 1 to n:
        For j = 1 to i:
            Print num (on the same line, with a space after it)
            Increment num by 1
        Print newline (to start the next row)
End
```

### Time Complexity:

- The outer loop runs n times, and the inner loop runs up to i times for each row.
- The total number of operations is the sum of the first n numbers, which results in a time complexity of O(n^2).

### Expected Output:

For `For n = 5`, the expected output is:

```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```