# [Hollow Diamond Pattern](https://www.geeksforgeeks.org/cpp-program-to-print-hollow-star-pyramid-diamond-shape-pattern/)

This repository contains the solution approach to the **Hollow Diamond Pattern**.

You are given an integer `n`. Your task is to print the following pattern for the `n` number of rows with first row containing the minimum number of stars and subsequent rows increasing till `n/2` and decreasing afterwards.

### Example Output

For `n=5`, the output should look like this:

```
  *
 * *
*   *
 * *
  *
```

### Constraints

- `2<=n`
- `n%2!=0`

## Solution Approach

To create a Hollow Diamond Pattern, we follow these steps:

1. **Input Handling**:
- Take an integer input `n` from the user. This represents the number of rows in the diamond.
2. **Implementation**:
- Calculate the middle point a using the formula `n / 2 + 1` to divide the pattern into two parts.
- Use nested loops to:
  - Print spaces for alignment.
  - Print asterisks to form the triangle and inverted triangle.
- First loop builds the upper half of the diamond.  
- Second loop builds the lower half of the diamond.
3. **Output**: Display the hollow diamond pattern.

## Algorithm

1. **Input Handling**:
   - Read the input `n` which represents the number of rows.
   - If `n` is even, increment it by 1 to make it odd.

2. **Loop through Rows**:
   - Loop `i` from 0 to `n-1` to handle each row.

3. **Loop through Columns**:
   - For each row `i`, loop `j` from 0 to `n-1` to handle each column.

4. **Determine Character to Print**:
   - For the upper half of the diamond (`i < n // 2`):
     - Print `*` if `j` is at the position `n // 2 - i` or `n // 2 + i`.
     - Otherwise, print a space.
   - For the lower half of the diamond (`i >= n // 2`):
     - Print `*` if `j` is at the position `i - n // 2` or `n - 1 - i + n // 2`.
     - Otherwise, print a space.

5. **Print New Line**:
   - After each row, print a newline character.

6. **Return Empty String**:
   - Return an empty string at the end of the function.

## Pseudocode

```
For i from 0 to n-1:
    For j from 0 to n-1:
        If i < n // 2:
            If j == n // 2 - i or j == n // 2 + i:
                Print '*'
            Else:
                Print ' '
        Else:
            If j == i - n // 2 or j == n - 1 - i + n // 2:
                Print '*'
            Else:
                Print ' '
    Print newline
Return empty string
```

This will print the hollow diamond pattern for the given `n` number of rows.