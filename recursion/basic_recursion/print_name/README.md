# [Print Name N Times]

This repository contains the solution approach to the **Print Name N Times Problem**, a fundamental recursion programming challenge.

## Problem Description

Given an integer `n` and a string `name`, print the given name exactly `n` times using recursion. This is a basic recursion problem that demonstrates the concept of recursive function calls and base cases.

### Example Output

For `n = 3` and `name = "Alice"`, the output should look like this:

```
Alice
Alice
Alice
```

### Constraints

- `1 <= n <= 1000`
- `name` can be any valid string

## Algorithm

To solve this problem using recursion, we follow these steps:

1. **Base Case**: If the current count exceeds `n`, stop the recursion and return.
2. **Recursive Case**: 
   - Print the name
   - Make a recursive call with incremented counter
3. **Initial Call**: Start the recursion with counter = 1

## Solution Approach

The recursive approach works by:

1. **Function Definition**: Create a recursive function `rec(i, n, name)` where:
   - `i` is the current iteration counter
   - `n` is the target number of times to print
   - `name` is the string to print

2. **Base Case**: When `i > n`, return from the function (stop recursion)

3. **Recursive Step**: 
   - Print the name
   - Call the function again with `i + 1`

4. **Initial Call**: Start with `rec(1, n, name)`

## Pseudocode

Here's a pseudocode representation of the solution:

```
function rec(i, n, name):
    if i > n:
        return
    print name
    rec(i + 1, n, name)

function main():
    read n
    read name
    rec(1, n, name)
```

### Time Complexity:
- **Time Complexity**: O(n) - The function is called exactly n times
- **Space Complexity**: O(n) - Due to the recursion call stack

### Expected Output:

For `n = 5` and `name = "John"`, the expected output is:

```
John
John
John
John
John
```

## Key Concepts

This problem demonstrates:
- **Recursion fundamentals**: Base case and recursive case
- **Function call stack**: How recursive calls are managed
- **Parameter passing**: Passing values through recursive calls
- **Termination condition**: Preventing infinite recursion