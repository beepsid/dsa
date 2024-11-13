# Pattern Printing (Right Triangle of Numbers)

## Problem Description:
Given an integer `n`, print a pattern that forms a right triangle with numbers. Each row `i` (where `i` ranges from 1 to `n`) contains numbers starting from 1 up to `i`.

### Example:
For `n = 5`, the output should be:


1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


## Algorithm:

### Steps to Solve the Problem:

1. **Input the Number of Rows (`n`)**:
   - Accept an integer `n` which represents the number of rows to be printed in the pattern.

2. **Outer Loop**:
   - Loop through `i` from 1 to `n`. This will represent the current row. For each iteration of `i`, you'll print a row of numbers starting from 1 up to `i`.

3. **Inner Loop**:
   - For each value of `i` (current row), loop through `j` from 1 to `i`.
   - Print the value of `j` in the current row.

4. **Move to the Next Line**:
   - After printing all the numbers in a row (from 1 to `i`), move to the next line to start printing the next row.

5. **Repeat**:
   - Continue this process for each row until you have printed `n` rows.

### Example Walkthrough:

For `n = 4`, the steps would be:
- **Row 1**: Print `1`
- **Row 2**: Print `1 2`
- **Row 3**: Print `1 2 3`
- **Row 4**: Print `1 2 3 4`

### Pseudocode:

```plaintext
Start
    Read integer n (number of rows)
    For i = 1 to n:
        For j = 1 to i:
            Print j (on the same line, with a space after it)
        Print newline (to start the next row)
End
```

### **Time Complexity:**

- The outer loop runs `n` times, and the inner loop runs `i` times (for each row).
- The total number of operations is the sum of the first `n` numbers, which is O(n^2)

### **Expected Output:**

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
