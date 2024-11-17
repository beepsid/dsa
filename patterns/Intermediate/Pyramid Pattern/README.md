# [Pyramid Pattern](https://www.geeksforgeeks.org/programs-printing-pyramid-patterns-python/)

This repository contains the solution approach to the **Pyramid Pattern**.

## Problem Description

Given an integer `n`, print a pyramid of `n` rows. Each row consists of spaces and stars (`*`), with the first row containing the minimum number of stars and subsequent rows incresing in both stars at the rate of odd numbers. 

### Example Output

For `n = 5`, the output should look like this:

```
    *
   ***
  *****
 *******
*********
```

### Constraints

- `1 <= n`

## Solution Approach

To create this Pyramid Pattern, we follow these steps:

1. **Input Handling**: 
- Take an integer input `n` from the user. This represents the number of rows in the pyramid.
2. **Row Construction**: 
- Use a loop to iterate through the rows, where the variable `i` represents the current row number (from `1` to `n`).
3. **Calculate and Print Spaces**: 
- For each row `i`, calculate the number of leading spaces needed to align the stars properly.
    - The number of spaces is equal to n - i.
- Use a nested loop to print these spaces. This creates the necessary padding to center the stars.
4. **Calculate and Print Stars**: 
- After printing the spaces, calculate the number of stars needed in the current row:
    - The number of stars in row `i` is `2 * i - 1`.
- Use another nested loop to print the stars (`*`) for the current row.
5. **Move to the Next Line**: 
- After printing spaces and stars for a row, use a print() statement to move to the next line.
6. **Repeat for All Rows**: 
- Repeat steps 3–5 for all rows until the pyramid is complete.

## Algorithm

1. **Input the number of rows (`n`):**
- Prompt the user to input the number of rows for the pyramid.
2. **Outer loop for rows:**
   - Loop from `i = 1` to `n`(inclusive). This determines the current row.
3. **Inner loop for spaces:**
- For each row `i`, loop from `j = 0` to `n - i - 1`.
- Print a space (`" "`) for each iteration. This aligns the stars properly.
4. **Inner loop for stars:**
- For each row `i`, loop from `k = 1` to `2 * i - 1`.
- Print a star (`"*"`) for each iteration.
5. Move to the next line:
- After printing spaces and stars for the current row, print a newline (`print()`).
6. Repeat steps 3–5 for each row until the pyramid is complete.

## Pseudocode

Here’s a pseudocode representation of the solution:

```plaintext
function pattern(n):
    for i from 1 to n:                
        for j from 0 to n - i - 1:     
            print " " without newline
        for k from 1 to 2 * i - 1:     
            print "*" without newline
        print newline                  
end function

n = input("Enter the number of rows: ")
pattern(n)
```

This will print a pyramid with `n` rows, where each row starts with a certain number of spaces followed by a increasing number of stars, creating the desired pattern.