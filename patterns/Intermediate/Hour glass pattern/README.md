# [Hour Glass Pattern](https://www.geeksforgeeks.org/hour-glass-pattern/)

This repository contains the solution approach to the **Hour glass pattern**

## Problem Description

You are given an integer `n`. Your task is to print the following hourglass pattern for the `n` number of rows from start to bottom and continue in that pattern.

## Example output

For `n=5`, the output should look like this:

```
 1 2 3 4 5
  2 3 4 5
   3 4 5
    4 5
     5
    4 5
   3 4 5
  2 3 4 5
 1 2 3 4 5
 ```

 ### Constraint

-  `2<=n`

## Solution Approach

1. **Input**: The user provides the total number of rows (`n`).

2. **Pattern Structure**:
- **Upper Triangle**:
    - Each row starts with an increasing number of spaces.
    = Numbers are printed in descending order, starting from the row index `i` up to `n`.
- **Lower Inverted Triangle**:
    - Mirrors the upper triangle but with decreasing spaces and increasing rows.
3. **Processing**:
    - For both parts, loops are used to control spaces and numbers in each row.
4. **Output**: A diamond-shaped numeric pattern is displayed.

## Algorithm

1. **Input**
- Prompt the user to enter the number of rows, `n`.

2. **Generate the Upper Triangle**
- Use a loop `i` from `1` to `n` (inclusive):
    - Print `i` spaces.
    - Print numbers from `i` to `n` with a space between them.
    - Move to the next line.

3. **Generate the Lower Inverted Triangle**
- Use a loop `i` from `n-1` to `1` (inclusive):
    - Print `i` spaces.
    - Print numbers from `i` to `n` with a space between them.
    - Move to the next line.
4. **End**
- Exit the program after completing the pattern.

## Pseudocode

```
FUNCTION pattern(n)
    FOR i FROM 1 TO n
        PRINT i spaces
        FOR k FROM i TO n
            PRINT k with a trailing space
        END FOR
        PRINT newline
    END FOR

    FOR i FROM n-1 TO 1
        PRINT i spaces
        FOR k FROM i TO n
            PRINT k with a trailing space
        END FOR
        PRINT newline
    END FOR
END FUNCTION

```

This will print a hourglass with `n` rows, where each row starts with a certain number of spaces followed by a increasing numbers, creating the desired pattern.