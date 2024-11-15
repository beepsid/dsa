# Reverse Scalene Triangle Pattern

This repository contains the solution approach to the **Reverse Scalene Triangle Pattern**, a common programming challenge.

## Problem Description

Given an integer `n`, print a reverse scalene triangle of `n` rows. Each row consists of spaces and stars (`*`), with the first row containing the maximum number of stars and subsequent rows decreasing in both stars and spaces. 

### Example Output

For `n = 5`, the output should look like this:

```
    *****
   ****
  ***
 **
*
```


### Constraints

- `1 <= n <= 100`

## Solution Approach

To create this reverse scalene triangle pattern, we follow these steps:

1. **Loop through each row**: For each row `i` (from `n` down to 1), calculate how many spaces and stars are needed.
2. **Calculate spaces**: Each row `i` should have `n - i` leading spaces.
3. **Calculate stars**: Each row `i` should have `i` stars.
4. **Print each row**: Print spaces followed by stars for each row, creating the reverse scalene triangle effect.

This approach ensures that each row is aligned correctly, and the number of stars decreases as the rows progress.

## Algorithm

1. **Initialize** a loop from `i = n` down to `i = 1`.
2. **For each row**:
   - Calculate the number of spaces as `n - i`.
   - Print `i` stars, preceded by `n - i` spaces.
3. Repeat until all rows are printed.

## Pseudocode

Here’s a pseudocode representation of the solution:

```plaintext
function reverse_scalene_triangle(n):
    for i from n down to 1: 
        spaces = n - i 
        print (spaces * " ") + (i * "*")
```


In this pseudocode:
- `spaces * " "` creates a string of spaces for alignment.
- `i * "*"` creates a string of stars for the current row.

This will print a reverse scalene triangle with `n` rows, where each row starts with a certain number of spaces followed by a decreasing number of stars, creating the desired pattern.