# [Diamond Of Stars](https://www.naukri.com/code360/problems/diamond-of-stars_893297)

This repository contains the solution approach to the **Diamond of stars pattern**

## Problem Description

You are given an integer `n`. Your task is to print the following pattern for the `n` number of rows with first row containing the minimum number of stars and subsequent rows increasing till `n/2` and decreasing afterwards.

### Example Output

For `n=5`, the output should look like this:

```
  *
 ***
*****
 ***
  *
```

### Constraints

- `2<=n`
- `n%2!=0`

## Solution Approach

To create a Diamond Pattern, we follow these steps:

1. **Input Handling**:
- Take an integer input `n` from the user. This represents the number of rows in the diamond.
2. **Implementation**:
- Calculate the middle point a using the formula `n / 2 + 1` to divide the pattern into two parts.
- Use nested loops to:
  - Print spaces for alignment.
  - Print asterisks to form the triangle and inverted triangle.
- First loop builds the upper half of the diamond.
- Second loop builds the lower half of the diamond.
3. **Output**: Display the diamond pattern.

## Algorithm

1. Take input `n` (number of rows).
2. Compute `a = n / 2 + 1` to find the middle row.
3. Upper Triangle:
  -  Iterate from `i = 1` to `a`:
    - Print `a - i` spaces.
    - Print `2 * i - 1` asterisks.
4. Lower Inverted Triangle:
  - Iterate from `i = a - 1` to `1`:
    - Print `a - i` spaces.
    - Print `2 * i - 1` asterisks.

## Pseudocode

```
FUNCTION pattern(n, a)
    FOR i FROM 1 TO a
        PRINT (a - i) spaces
        PRINT (2 * i - 1) asterisks
        PRINT newline
    END FOR

    FOR i FROM a - 1 TO 1
        PRINT (a - i) spaces
        PRINT (2 * i - 1) asterisks
        PRINT newline
    END FOR
END FUNCTION
```
This will print a diamond with `n` rows, where each row starts with a certain number of spaces followed by a increasing number of stars, creating the desired pattern.