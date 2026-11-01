# C Programming Journey

A practical collection of C programs, exercises, pattern problems, and experiments created while learning the C programming language.

This repository documents both the concepts being studied and progress made through hands-on problem solving.

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
gcc path/to/program.c -o program
```

Run on Linux/macOS:

```bash
./program
```

Run on Windows PowerShell:

```powershell
gcc path/to/program.c -o program.exe
./program.exe
```

For example:

```bash
gcc 01-Basics/Input-Output/sum.c -o sum
```

## Topics represented

- Basic input and output
- Operators and expressions
- Conditional logic
- Loops and pattern printing
- Arrays and character arrays
- Small problem-solving exercises
- Functions

The collection will expand as more topics are covered, including functions, recursion, multidimensional arrays, and pointers.

## Repository principles

- Keep C source code as the primary artifact.
- Compile programs locally; generated executables are not committed.
- Prefer descriptive filenames when the purpose of a program is clear.
- Keep practice solutions simple and preserve the learning process.

## About

This is a personal learning repository maintained alongside undergraduate computer science studies. It is intended as a transparent record of practice, experimentation, and improvement.
