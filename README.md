# C Programming Journey

A topic-wise collection of C programs, lecture exercises, pattern problems, and practice sets. This repository records the progression from basic syntax and control flow to functions and problem-solving.

The repository currently contains **74 C source files**. Some are completed exercises; a small number are works in progress and are identified below.

## Repository structure

| Folder | Contents |
|---|---|
| `01-Basics/` | Introductory programs, including input and output |
| `02-Pattern-Printing/` | Pattern-printing exercises using loops and nested loops |
| `03-Arrays/` | Array declarations, traversal, character arrays, and related practice |
| `04-Practice-Sets/` | Daily practice exercises grouped by the original practice day |
| `05-Functions/` | Function arguments, return values, recursion, number problems, and reusable logic |

### Functions folder

The function exercises currently cover:

- Function definitions, arguments, and return values
- Odd/even and prime-number checks
- Recursive factorial and Fibonacci sequence generation
- Power calculation without `pow()`
- GCD and LCM
- Armstrong numbers and prime numbers in a range
- Permutations and combinations
- Pascal's triangle
- Decimal/base conversion
- Swapping values through pointer parameters
- A menu-driven calculator and a sine-series approximation

The original practice-set folders are kept grouped by day. This preserves their learning sequence rather than mixing them into unrelated topic folders.

## Compile and run

Install GCC or another C compiler.

Compile a source file:

```bash
gcc -std=c11 path/to/program.c -o program
```

Run on Linux/macOS:

```bash
./program
```

Run on Windows PowerShell:

```powershell
gcc -std=c11 path/to/program.c -o program.exe
./program.exe
```

Some programs use functions from `math.h` (for example, `pow()`, `sin()`, or `acos()`). On GCC toolchains that require explicit math-library linking, add `-lm`:

```bash
gcc -std=c11 path/to/program.c -o program -lm
```

For example:

```bash
gcc -std=c11 01-Basics/Input-Output/sum.c -o sum
```

Compile one exercise at a time. Most files contain their own `main()` function and are intended to run as separate programs.

## Review notes and work in progress

The newly added function exercises were reviewed without rewriting their original logic. These items need attention as the exercises are completed:

- `05-Functions/print_n_to_1.c` currently contains only the standard I/O include; its program is not implemented yet.
- `05-Functions/palindrome_function.c` currently has an empty `palindrome()` function and no complete program.
- `05-Functions/arithmetic_operations_using_functions.c` does not guard against division by zero. Its subtraction function currently returns the absolute difference rather than signed `a - b`.
- `05-Functions/factorial_recursive.c` and `05-Functions/permutation_and_combination.c` need input-range checks; factorial and combination calculations can overflow their current integer types.
- `05-Functions/number_base_conversion.c` is intended for bases 2 through 9, but does not validate the base or each input digit. Negative decimal values are not handled by its current conversion loop.
- `05-Functions/menu_driven_calculator.c` performs integer division, so fractional quotients are truncated. Its power and root operations also convert floating-point results to `long long`.
- Several exercises use fixed-width integer types. Large inputs may overflow even when the algorithm is otherwise correct.

These are review observations, not changes applied to the source files. Treat the exercises as learning code, not production-ready utilities.

## Repository conventions

- Keep C source files as the primary content.
- Compile programs locally; generated executables and build output should not be committed.
- Use descriptive filenames for new exercises.
- Keep independent exercises in separate files because each may define its own `main()`.
- Preserve the day-wise grouping in `04-Practice-Sets/`.

## About

A personal C programming practice repository maintained alongside undergraduate computer science studies. It is intended as a record of concepts learned, problems attempted, and progress over time.
