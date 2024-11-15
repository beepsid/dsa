# [Hollow Square or rectangle](https://prepinsta.com/c-program/print-hollow-square-star-pattern/)

This repository contains the solution approach to the **Hollow Square or rectangle Problem**, a common programming challenge.

## Problem Description

Given an integer `n`, print a Hollow Square or rectangle of `n` sides. Each row contains spaces and star (`*`) symbols, forming a complete Hollow Square or rectangle.

### Example Output

For `n = 4`, the output should look like this:

```
****
*  *
*  *
****
```

### Constraints

- `2 <= n`

## Algorithm

To create this Hollow Square or rectangle pattern, we follow these steps:

1. **Loop through each row**: For each row `i` (from 0 up to `n`), check which row needs to filled completely and which one is to be left hollow .
- **First Row**: `(i == 0)` and **Last Row** `(i == n-1)`: Print `*n` times.
- **Middle Rows**: `(0 < i < n-1)`:
    - Print a `*` for the first column.
    - Print `n-2` spaces in the middle.
    - Print a `*` for the last column.
3. **Repeat**: Continue for all rows to complete the square.
4. **Output**: Display the Hollow Square or rectangle pattern.

## Pseudocode

Here’s a pseudocode representation of the solution:

```
function pattern(n):
    for i from 0 to n-1:        
        if i == 0 or i == n-1:  
            for j from 0 to n-1: 
                print "*"
        else: 
            print "*"             
            for j from 0 to n-2:  
                print " "
            print "*"             
        move to next line        
```

### Expected Output:

For `For n = 5`, the expected output is:

```
*****
*   *
*   *
*   *
*****
```