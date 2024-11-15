# [Inverted Star Triangle](https://www.geeksforgeeks.org/python-print-inverted-star-pattern/)

This repository contains the solution approach to the **Inverted Star Problem**, a common programming challenge.

## Problem Description

Given an integer `n`, print a reverted triangle of `n` steps that is right-aligned. Each row of the inverted triangle contains spaces and hash (`*`) symbols, forming a right-aligned inverted triangle.

### Example Output

For `n = 4`, the output should look like this:

```
****
 ***
  **
   *
```

### Constraints

- `1 <= n <= 100`

## Solution Approach

To create this right-aligned inverted triangle pattern, we follow these steps:

1. **Loop through each row**: For each row `i` (from 0 up to `n`), calculate how many spaces and stars are needed.
2. **Calculate spaces**: Each row `i` should have `exactly i` leading spaces.
3. **Calculate stars**: Each row `i` should have `n-i` stars following the spaces.
4. **Print each row**: Print spaces and stars together for each row, creating the inverted triangle effect.

This approach ensures that each row is aligned to the right and that the number of steps (rows) matches `n`.

## Algorithm

1. **Initialize** a loop from `i = 0` to `i = n` (inclusive).
2. **For each row**:
   - Calculate the number of spaces as `i`.
   - Calculate the number of stars as `n-i`.
   - Print the row with `i` spaces followed by `n-i` stars.
3. Repeat until all rows are printed.

## Pseudocode

Here’s a pseudocode representation of the solution:

```
function inverted triangle(n):
    for i from 0 to n:
        spaces = i
        stars = n-1
        print (spaces * " ") + (stars * "*")
```


In this pseudocode:
- `spaces * " "` creates a string of spaces for alignment.
- `stars * "*"` creates a string of stars for the inverted triangle steps.

This will print a right-aligned inverted triangle with `n` rows, where each row adds one more hash and one less space, resulting in the desired inverted triangle pattern.