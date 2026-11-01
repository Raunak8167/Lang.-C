# C Programming Journey

A topic-wise collection of C programs, lecture exercises, pattern problems, and practice sets. This repository records the progression from basic syntax and control flow to functions and problem-solving.

The repository currently contains **74 C source files**. Some are completed exercises; a small number are works in progress and are identified below.

## Repository structure

| Folder | Contents |
|---|---|
| `01-Basics` | Introductory programs and input/output |
| `02-Pattern-Printing` | Pattern-printing exercises |
| `03-Arrays` | Array and character-array practice |
| `04-Practice-Sets` | Programs grouped by original practice day |

The original practice-day grouping is retained inside `04-Practice-Sets` so the history of the exercises remains understandable. Some filenames such as `Problem1.c` are intentionally retained from the original practice sets.

## How to compile and run

You need a C compiler such as GCC.

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

## Topics represented

- Basic input and output
- Operators and expressions
- Conditional logic
- Loops and pattern printing
- Arrays and character arrays
- Small problem-solving exercises

The collection will expand as more topics are covered, including functions, recursion, multidimensional arrays, and pointers.

## Repository conventions

- Keep C source files as the primary content.
- Compile programs locally; generated executables and build output should not be committed.
- Use descriptive filenames for new exercises.
- Keep independent exercises in separate files because each may define its own `main()`.
- Preserve the day-wise grouping in `04-Practice-Sets/`.

## About

A personal C programming practice repository maintained alongside undergraduate computer science studies. It is intended as a record of concepts learned, problems attempted, and progress over time.
