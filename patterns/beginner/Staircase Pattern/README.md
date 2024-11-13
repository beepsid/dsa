# Staircase Problem

This repository contains the solution approach to the **Staircase Problem**, a common programming challenge.

## Problem Description

Given an integer `n`, print a staircase of `n` steps that is right-aligned. Each row of the staircase contains spaces and hash (`#`) symbols, forming a right-aligned staircase.

### Example Output

For `n = 4`, the output should look like this:

```
   #
  ##
 ###
####
```

### Constraints

- `1 <= n <= 100`

## Solution Approach

To create this right-aligned staircase pattern, we follow these steps:

1. **Loop through each row**: For each row `i` (from 1 up to `n`), calculate how many spaces and hashes are needed.
2. **Calculate spaces**: Each row `i` should have `n - i` leading spaces.
3. **Calculate hashes**: Each row `i` should have `i` hashes following the spaces.
4. **Print each row**: Print spaces and hashes together for each row, creating the staircase effect.

This approach ensures that each row is aligned to the right and that the number of steps (rows) matches `n`.

## Algorithm

1. **Initialize** a loop from `i = 1` to `i = n` (inclusive).
2. **For each row**:
   - Calculate the number of spaces as `n - i`.
   - Calculate the number of hashes as `i`.
   - Print the row with `n - i` spaces followed by `i` hashes.
3. Repeat until all rows are printed.

## Pseudocode

Here’s a pseudocode representation of the solution:

```
function staircase(n):
    for i from 1 to n:
        spaces = n - i
        hashes = i
        print (spaces * " ") + (hashes * "#")
```


In this pseudocode:
- `spaces * " "` creates a string of spaces for alignment.
- `hashes * "#"` creates a string of hashes for the staircase steps.

This will print a right-aligned staircase with `n` rows, where each row adds one more hash and one less space, resulting in the desired staircase pattern.