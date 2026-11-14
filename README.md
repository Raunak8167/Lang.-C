# C Programming Repository

A personal collection of C programs, exercises, and experiments created while learning and practising the C programming language. The repository grows as new concepts and problem-solving exercises are added.

## Repository structure

| Folder | Contents |
|---|---|
| `01-Basics/` | Basic syntax and input/output |
| `02-Pattern-Printing/` | Pattern-printing exercises using loops |
| `03-Arrays/` | Array input/output, searching, reversing, pairs, triplets, and array problems |
| `04-Practice-Sets/` | Day-wise practice questions, kept in their original sequence |
| `05-Functions/` | User-defined functions, recursion, number problems, and function-based exercises |
| `06-Two-Dimensional-Arrays/` | Matrix operations, transposition, rotation, and 2D-array exercises |
| `07-Miscellaneous/` | Small experiments that do not fit the main topic folders |

The repository currently contains **102 C source files**.

## Compile and run

Use GCC or another C compiler. Compile each exercise separately because most source files are standalone programs with their own `main()` function.

Compile:

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

For programs that use functions from `math.h`, add `-lm` when required by your compiler:

```bash
gcc -std=c11 path/to/program.c -o program -lm
```

## Work in progress

Some exercises are intentionally retained as incomplete practice tasks. Files ending in `_todo.c` are placeholders or unfinished implementations. A few matrix exercises are also partial implementations; check the source before treating them as complete.

## Repository conventions

- Keep C source code as the main content.
- Compile programs locally; executables and build output should not be committed.
- Add new exercises to the most relevant topic folder.
- Use descriptive filenames for new programs.
- Keep day-wise assignments grouped under `04-Practice-Sets/`.

