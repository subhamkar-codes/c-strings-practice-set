# C Strings - Practice Set (Chapter 8)

Solutions to 9 practice problems on strings from The Ultimate C Handbook.

## Problems

| # | File | Problem |
|---|------|---------|
| 1 | `02_problem2.c` | Take string input using `%c` and `%s`, confirm strings are equal |
| 2 | `03_problem3.c` | Write your own version of `strlen()` |
| 3 | `04_problem4.c` | Write a `slice()` function to slice a string between positions m and n |
| 4 | `05_problem5.c` | Write your own version of `strcpy()` |
| 5 | `06_problem6.c` | Encrypt a string by adding 1 to ASCII value of each character |
| 6 | `07_problem7.c` | Decrypt the string encrypted in problem 6 |
| 7 | `08_problem8.c` | Count occurrence of a given character in a string |
| 8 | `09_problem9.c` | Check whether a given character is present in a string or not |

## Concepts covered
- String input handling (`%c` vs `%s`)
- Recreating standard library functions (`strlen`, `strcpy`) from scratch
- String manipulation — slicing, character search, occurrence counting
- Simple encryption/decryption using ASCII arithmetic

## How to run
```bash
gcc <filename>.c -o output
./output
