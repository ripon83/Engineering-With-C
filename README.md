# Engineering with the C Language: A Practical Guide for Programming and Programs

## Authored by Dr. Ripon Patgiri, National Institute of Technology Silchar 

<img src="https://cs.nits.ac.in/storage/FacultyDetails/IMG_1753450953688389c9983fc.jpg" align="right" width="150">

<br><br><br><br><br>

This book is designed for engineering students and teachers to help them learn the C programming language in depth. 
You can find the videos of this book at <a href="https://www.youtube.com/@dr.patgiri" target="_blank">YouTube</a>

## A program repository

This repository contains the C programs accompanying **Chapters 2–14** of *Engineering With the C Language*. The programs are organized chapter by chapter and numbered in the same sequence as the book/source material.

## Repository at a Glance

- **Chapters covered:** 2–14
- **Total C programs:** 1933
- **Companion input/data files:** 20
- **Language:** C
- **File naming convention:** `chapter.program-number.program-name.c`

For example, `8.1.pointer-initialization.c` means the first extracted program from Chapter 8.

## Chapter Index

| Chapter | Topic | Programs |
|---:|---|---:|
| 2 | [Data Types and Variables](#chapter-2--data-types-and-variables) | 106 |
| 3 | [Operators](#chapter-3--operators) | 204 |
| 4 | [Control Statements](#chapter-4--control-statements) | 155 |
| 5 | [Loops](#chapter-5--loops) | 107 |
| 6 | [Functions](#chapter-6--functions) | 125 |
| 7 | [Recursions](#chapter-7--recursions) | 107 |
| 8 | [Pointers](#chapter-8--pointers) | 116 |
| 9 | [Arrays](#chapter-9--arrays) | 272 |
| 10 | [Multidimensional Arrays / Matrix](#chapter-10--multidimensional-arrays--matrix) | 269 |
| 11 | [Strings](#chapter-11--strings) | 160 |
| 12 | [Structures and Union](#chapter-12--structures-and-union) | 170 |
| 13 | [File Management](#chapter-13--file-management) | 100 |
| 14 | [Random Numbers](#chapter-14--random-numbers) | 42 |

## How to Compile and Run

Using GCC:

```bash
gcc program.c -o program
./program
```

Some examples intentionally demonstrate compilation errors, undefined behavior, implementation-dependent behavior, or common programming mistakes. Those files are retained for learning and should not automatically be treated as production-ready code.

---

## Chapter 2 — Data Types and Variables

**Programs:** 106

| No. | Program file | Program / topic |
|---:|---|---|
| 2.1 | [`2.1.character-data-type.c`](chapter2_Data%20types/2.1.character-data-type.c) | Character Data Type |
| 2.2 | [`2.2.character-data-type-2.c`](chapter2_Data%20types/2.2.character-data-type-2.c) | Character Data Type 2 |
| 2.3 | [`2.3.ascii-values.c`](chapter2_Data%20types/2.3.ascii-values.c) | Ascii Values |
| 2.4 | [`2.4.ascii-values-2.c`](chapter2_Data%20types/2.4.ascii-values-2.c) | Ascii Values 2 |
| 2.5 | [`2.5.the-c.c`](chapter2_Data%20types/2.5.the-c.c) | The C |
| 2.6 | [`2.6.the-c-2.c`](chapter2_Data%20types/2.6.the-c-2.c) | The C 2 |
| 2.7 | [`2.7.hexadecimal-representation.c`](chapter2_Data%20types/2.7.hexadecimal-representation.c) | Hexadecimal Representation |
| 2.8 | [`2.8.data-size.c`](chapter2_Data%20types/2.8.data-size.c) | Data Size |
| 2.9 | [`2.9.data-size-2.c`](chapter2_Data%20types/2.9.data-size-2.c) | Data Size 2 |
| 2.10 | [`2.10.float-data-type.c`](chapter2_Data%20types/2.10.float-data-type.c) | Float Data Type |
| 2.11 | [`2.11.float-data-type-2.c`](chapter2_Data%20types/2.11.float-data-type-2.c) | Float Data Type 2 |
| 2.12 | [`2.12.float-data-type-3.c`](chapter2_Data%20types/2.12.float-data-type-3.c) | Float Data Type 3 |
| 2.13 | [`2.13.float-data-type-4.c`](chapter2_Data%20types/2.13.float-data-type-4.c) | Float Data Type 4 |
| 2.14 | [`2.14.float-data-type-5.c`](chapter2_Data%20types/2.14.float-data-type-5.c) | Float Data Type 5 |
| 2.15 | [`2.15.float-data-type-6.c`](chapter2_Data%20types/2.15.float-data-type-6.c) | Float Data Type 6 |
| 2.16 | [`2.16.float-data-type-7.c`](chapter2_Data%20types/2.16.float-data-type-7.c) | Float Data Type 7 |
| 2.17 | [`2.17.scientific-notation.c`](chapter2_Data%20types/2.17.scientific-notation.c) | Scientific Notation |
| 2.18 | [`2.18.garbage-values.c`](chapter2_Data%20types/2.18.garbage-values.c) | Garbage Values |
| 2.19 | [`2.19.garbage-values-2.c`](chapter2_Data%20types/2.19.garbage-values-2.c) | Garbage Values 2 |
| 2.20 | [`2.20.variables.c`](chapter2_Data%20types/2.20.variables.c) | Variables |
| 2.21 | [`2.21.escape-sequences.c`](chapter2_Data%20types/2.21.escape-sequences.c) | Escape Sequences |
| 2.22 | [`2.22.format-specifiers.c`](chapter2_Data%20types/2.22.format-specifiers.c) | Format Specifiers |
| 2.23 | [`2.23.format-specifiers-2.c`](chapter2_Data%20types/2.23.format-specifiers-2.c) | Format Specifiers 2 |
| 2.24 | [`2.24.format-specifiers-3.c`](chapter2_Data%20types/2.24.format-specifiers-3.c) | Format Specifiers 3 |
| 2.25 | [`2.25.format-specifiers-4.c`](chapter2_Data%20types/2.25.format-specifiers-4.c) | Format Specifiers 4 |
| 2.26 | [`2.26.format-specifiers-5.c`](chapter2_Data%20types/2.26.format-specifiers-5.c) | Format Specifiers 5 |
| 2.27 | [`2.27.format-specifiers-6.c`](chapter2_Data%20types/2.27.format-specifiers-6.c) | Format Specifiers 6 |
| 2.28 | [`2.28.format-specifiers-7.c`](chapter2_Data%20types/2.28.format-specifiers-7.c) | Format Specifiers 7 |
| 2.29 | [`2.29.format-specifiers-8.c`](chapter2_Data%20types/2.29.format-specifiers-8.c) | Format Specifiers 8 |
| 2.30 | [`2.30.format-specifiers-9.c`](chapter2_Data%20types/2.30.format-specifiers-9.c) | Format Specifiers 9 |
| 2.31 | [`2.31.format-specifiers-10.c`](chapter2_Data%20types/2.31.format-specifiers-10.c) | Format Specifiers 10 |
| 2.32 | [`2.32.format-specifiers-11.c`](chapter2_Data%20types/2.32.format-specifiers-11.c) | Format Specifiers 11 |
| 2.33 | [`2.33.format-specifiers-12.c`](chapter2_Data%20types/2.33.format-specifiers-12.c) | Format Specifiers 12 |
| 2.34 | [`2.34.format-specifiers-13.c`](chapter2_Data%20types/2.34.format-specifiers-13.c) | Format Specifiers 13 |
| 2.35 | [`2.35.format-specifiers-14.c`](chapter2_Data%20types/2.35.format-specifiers-14.c) | Format Specifiers 14 |
| 2.36 | [`2.36.format-specifiers-15.c`](chapter2_Data%20types/2.36.format-specifiers-15.c) | Format Specifiers 15 |
| 2.37 | [`2.37.format-specifiers-16.c`](chapter2_Data%20types/2.37.format-specifiers-16.c) | Format Specifiers 16 |
| 2.38 | [`2.38.format-specifiers-17.c`](chapter2_Data%20types/2.38.format-specifiers-17.c) | Format Specifiers 17 |
| 2.39 | [`2.39.format-specifiers-18.c`](chapter2_Data%20types/2.39.format-specifiers-18.c) | Format Specifiers 18 |
| 2.40 | [`2.40.format-specifiers-19.c`](chapter2_Data%20types/2.40.format-specifiers-19.c) | Format Specifiers 19 |
| 2.41 | [`2.41.format-specifiers-20.c`](chapter2_Data%20types/2.41.format-specifiers-20.c) | Format Specifiers 20 |
| 2.42 | [`2.42.initialized-data-segment.c`](chapter2_Data%20types/2.42.initialized-data-segment.c) | Initialized Data Segment |
| 2.43 | [`2.43.uninitialized-data-segment-bss.c`](chapter2_Data%20types/2.43.uninitialized-data-segment-bss.c) | Uninitialized Data Segment Bss |
| 2.44 | [`2.44.code-text-segment.c`](chapter2_Data%20types/2.44.code-text-segment.c) | Code Text Segment |
| 2.45 | [`2.45.size-command.c`](chapter2_Data%20types/2.45.size-command.c) | Size Command |
| 2.46 | [`2.46.variables-2.c`](chapter2_Data%20types/2.46.variables-2.c) | Variables 2 |
| 2.47 | [`2.47.variables-3.c`](chapter2_Data%20types/2.47.variables-3.c) | Variables 3 |
| 2.48 | [`2.48.variables-4.c`](chapter2_Data%20types/2.48.variables-4.c) | Variables 4 |
| 2.49 | [`2.49.variables-5.c`](chapter2_Data%20types/2.49.variables-5.c) | Variables 5 |
| 2.50 | [`2.50.variables-6.c`](chapter2_Data%20types/2.50.variables-6.c) | Variables 6 |
| 2.51 | [`2.51.variables-7.c`](chapter2_Data%20types/2.51.variables-7.c) | Variables 7 |
| 2.52 | [`2.52.variables-8.c`](chapter2_Data%20types/2.52.variables-8.c) | Variables 8 |
| 2.53 | [`2.53.variables-9.c`](chapter2_Data%20types/2.53.variables-9.c) | Variables 9 |
| 2.54 | [`2.54.variables-10.c`](chapter2_Data%20types/2.54.variables-10.c) | Variables 10 |
| 2.55 | [`2.55.example-1-using-extern-within-the-same-file.c`](chapter2_Data%20types/2.55.example-1-using-extern-within-the-same-file.c) | Example 1 Using Extern Within The Same File |
| 2.56 | [`2.56.example-2-using-extern-between-two-source-files.c`](chapter2_Data%20types/2.56.example-2-using-extern-between-two-source-files.c) | Example 2 Using Extern Between Two Source Files |
| 2.57 | [`2.57.variables-11.c`](chapter2_Data%20types/2.57.variables-11.c) | Variables 11 |
| 2.58 | [`2.58.variables-12.c`](chapter2_Data%20types/2.58.variables-12.c) | Variables 12 |
| 2.59 | [`2.59.variables-13.c`](chapter2_Data%20types/2.59.variables-13.c) | Variables 13 |
| 2.60 | [`2.60.variables-14.c`](chapter2_Data%20types/2.60.variables-14.c) | Variables 14 |
| 2.61 | [`2.61.auto-storage-class.c`](chapter2_Data%20types/2.61.auto-storage-class.c) | Auto Storage Class |
| 2.62 | [`2.62.variables-15.c`](chapter2_Data%20types/2.62.variables-15.c) | Variables 15 |
| 2.63 | [`2.63.register-storage-class.c`](chapter2_Data%20types/2.63.register-storage-class.c) | Register Storage Class |
| 2.64 | [`2.64.variables-16.c`](chapter2_Data%20types/2.64.variables-16.c) | Variables 16 |
| 2.65 | [`2.65.variables-17.c`](chapter2_Data%20types/2.65.variables-17.c) | Variables 17 |
| 2.66 | [`2.66.variables-18.c`](chapter2_Data%20types/2.66.variables-18.c) | Variables 18 |
| 2.67 | [`2.67.variables-19.c`](chapter2_Data%20types/2.67.variables-19.c) | Variables 19 |
| 2.68 | [`2.68.variables-20.c`](chapter2_Data%20types/2.68.variables-20.c) | Variables 20 |
| 2.69 | [`2.69.variables-21.c`](chapter2_Data%20types/2.69.variables-21.c) | Variables 21 |
| 2.70 | [`2.70.file-2-main-c.c`](chapter2_Data%20types/2.70.file-2-main-c.c) | File 2 Main C |
| 2.71 | [`2.71.variables-22.c`](chapter2_Data%20types/2.71.variables-22.c) | Variables 22 |
| 2.72 | [`2.72.variables-23.c`](chapter2_Data%20types/2.72.variables-23.c) | Variables 23 |
| 2.73 | [`2.73.enum-data-type.c`](chapter2_Data%20types/2.73.enum-data-type.c) | Enum Data Type |
| 2.74 | [`2.74.boolean-data-type-using-enum.c`](chapter2_Data%20types/2.74.boolean-data-type-using-enum.c) | Boolean Data Type Using Enum |
| 2.75 | [`2.75.defining-boolean-using-enum.c`](chapter2_Data%20types/2.75.defining-boolean-using-enum.c) | Defining Boolean Using Enum |
| 2.76 | [`2.76.size-difference-between-boolean-and-enum.c`](chapter2_Data%20types/2.76.size-difference-between-boolean-and-enum.c) | Size Difference Between Boolean And Enum |
| 2.77 | [`2.77.size-difference-between-boolean-and-enum-2.c`](chapter2_Data%20types/2.77.size-difference-between-boolean-and-enum-2.c) | Size Difference Between Boolean And Enum 2 |
| 2.78 | [`2.78.changing-default-enum-values.c`](chapter2_Data%20types/2.78.changing-default-enum-values.c) | Changing Default Enum Values |
| 2.79 | [`2.79.constants.c`](chapter2_Data%20types/2.79.constants.c) | Constants |
| 2.80 | [`2.80.enum-example-months.c`](chapter2_Data%20types/2.80.enum-example-months.c) | Enum Example Months |
| 2.81 | [`2.81.creating-a-simple-boolean-library.c`](chapter2_Data%20types/2.81.creating-a-simple-boolean-library.c) | Creating A Simple Boolean Library |
| 2.82 | [`2.82.creating-a-header-file-folder.c`](chapter2_Data%20types/2.82.creating-a-header-file-folder.c) | Creating A Header File Folder |
| 2.83 | [`2.83.find-out-the-output.c`](chapter2_Data%20types/2.83.find-out-the-output.c) | Find Out The Output |
| 2.84 | [`2.84.find-out-the-output-2.c`](chapter2_Data%20types/2.84.find-out-the-output-2.c) | Find Out The Output 2 |
| 2.85 | [`2.85.integer-representations.c`](chapter2_Data%20types/2.85.integer-representations.c) | Integer Representations |
| 2.86 | [`2.86.integer-representations-2.c`](chapter2_Data%20types/2.86.integer-representations-2.c) | Integer Representations 2 |
| 2.87 | [`2.87.find-out-the-output-3.c`](chapter2_Data%20types/2.87.find-out-the-output-3.c) | Find Out The Output 3 |
| 2.88 | [`2.88.integer-representations-3.c`](chapter2_Data%20types/2.88.integer-representations-3.c) | Integer Representations 3 |
| 2.89 | [`2.89.integer-representations-4.c`](chapter2_Data%20types/2.89.integer-representations-4.c) | Integer Representations 4 |
| 2.90 | [`2.90.integer-representations-5.c`](chapter2_Data%20types/2.90.integer-representations-5.c) | Integer Representations 5 |
| 2.91 | [`2.91.find-out-the-output-4.c`](chapter2_Data%20types/2.91.find-out-the-output-4.c) | Find Out The Output 4 |
| 2.92 | [`2.92.find-out-the-output-5.c`](chapter2_Data%20types/2.92.find-out-the-output-5.c) | Find Out The Output 5 |
| 2.93 | [`2.93.integer-representations-6.c`](chapter2_Data%20types/2.93.integer-representations-6.c) | Integer Representations 6 |
| 2.94 | [`2.94.integer-representations-7.c`](chapter2_Data%20types/2.94.integer-representations-7.c) | Integer Representations 7 |
| 2.95 | [`2.95.find-out-the-output-6.c`](chapter2_Data%20types/2.95.find-out-the-output-6.c) | Find Out The Output 6 |
| 2.96 | [`2.96.find-out-the-output-7.c`](chapter2_Data%20types/2.96.find-out-the-output-7.c) | Find Out The Output 7 |
| 2.97 | [`2.97.find-out-the-output-8.c`](chapter2_Data%20types/2.97.find-out-the-output-8.c) | Find Out The Output 8 |
| 2.98 | [`2.98.find-out-the-output-9.c`](chapter2_Data%20types/2.98.find-out-the-output-9.c) | Find Out The Output 9 |
| 2.99 | [`2.99.integer-representations-8.c`](chapter2_Data%20types/2.99.integer-representations-8.c) | Integer Representations 8 |
| 2.100 | [`2.100.find-out-the-error.c`](chapter2_Data%20types/2.100.find-out-the-error.c) | Find Out The Error |
| 2.101 | [`2.101.find-out-the-error-2.c`](chapter2_Data%20types/2.101.find-out-the-error-2.c) | Find Out The Error 2 |
| 2.102 | [`2.102.find-out-the-error-3.c`](chapter2_Data%20types/2.102.find-out-the-error-3.c) | Find Out The Error 3 |
| 2.103 | [`2.103.find-out-the-error-4.c`](chapter2_Data%20types/2.103.find-out-the-error-4.c) | Find Out The Error 4 |
| 2.104 | [`2.104.find-out-the-error-5.c`](chapter2_Data%20types/2.104.find-out-the-error-5.c) | Find Out The Error 5 |
| 2.105 | [`2.105.integer-representations-9.c`](chapter2_Data%20types/2.105.integer-representations-9.c) | Integer Representations 9 |
| 2.106 | [`2.106.explain-the-program.c`](chapter2_Data%20types/2.106.explain-the-program.c) | Explain The Program |

[Back to Chapter Index](#chapter-index)

---

## Chapter 3 — Operators

**Programs:** 204

| No. | Program file | Program / topic |
|---:|---|---|
| 3.1 | [`3.1.define-macro.c`](chapter3_Operators/3.1.define-macro.c) | Define Macro |
| 3.2 | [`3.2.define-macro-2.c`](chapter3_Operators/3.2.define-macro-2.c) | Define Macro 2 |
| 3.3 | [`3.3.macro-example.c`](chapter3_Operators/3.3.macro-example.c) | Macro Example |
| 3.4 | [`3.4.macro-example-2.c`](chapter3_Operators/3.4.macro-example-2.c) | Macro Example 2 |
| 3.5 | [`3.5.operator-precedence.c`](chapter3_Operators/3.5.operator-precedence.c) | Operator Precedence |
| 3.6 | [`3.6.macro-example-3.c`](chapter3_Operators/3.6.macro-example-3.c) | Macro Example 3 |
| 3.7 | [`3.7.macro-example-4.c`](chapter3_Operators/3.7.macro-example-4.c) | Macro Example 4 |
| 3.8 | [`3.8.typedef.c`](chapter3_Operators/3.8.typedef.c) | Typedef |
| 3.9 | [`3.9.typedef-2.c`](chapter3_Operators/3.9.typedef-2.c) | Typedef 2 |
| 3.10 | [`3.10.arithmetic-operators.c`](chapter3_Operators/3.10.arithmetic-operators.c) | Arithmetic Operators |
| 3.11 | [`3.11.modulus-operator.c`](chapter3_Operators/3.11.modulus-operator.c) | Modulus Operator |
| 3.12 | [`3.12.modulus-operator-2.c`](chapter3_Operators/3.12.modulus-operator-2.c) | Modulus Operator 2 |
| 3.13 | [`3.13.integer-division.c`](chapter3_Operators/3.13.integer-division.c) | Integer Division |
| 3.14 | [`3.14.integer-division-2.c`](chapter3_Operators/3.14.integer-division-2.c) | Integer Division 2 |
| 3.15 | [`3.15.floating-point-division.c`](chapter3_Operators/3.15.floating-point-division.c) | Floating Point Division |
| 3.16 | [`3.16.floating-point-division-2.c`](chapter3_Operators/3.16.floating-point-division-2.c) | Floating Point Division 2 |
| 3.17 | [`3.17.typecasting.c`](chapter3_Operators/3.17.typecasting.c) | Typecasting |
| 3.18 | [`3.18.typecasting-2.c`](chapter3_Operators/3.18.typecasting-2.c) | Typecasting 2 |
| 3.19 | [`3.19.conversion-from-a-larger-integer-type.c`](chapter3_Operators/3.19.conversion-from-a-larger-integer-type.c) | Conversion From A Larger Integer Type |
| 3.20 | [`3.20.conversion-from-a-larger-integer-type-2.c`](chapter3_Operators/3.20.conversion-from-a-larger-integer-type-2.c) | Conversion From A Larger Integer Type 2 |
| 3.21 | [`3.21.loss-of-information-during-type-conversion.c`](chapter3_Operators/3.21.loss-of-information-during-type-conversion.c) | Loss Of Information During Type Conversion |
| 3.22 | [`3.22.equal-to-and-not-equal-to.c`](chapter3_Operators/3.22.equal-to-and-not-equal-to.c) | Equal To And Not Equal To |
| 3.23 | [`3.23.equal-to-and-not-equal-to-2.c`](chapter3_Operators/3.23.equal-to-and-not-equal-to-2.c) | Equal To And Not Equal To 2 |
| 3.24 | [`3.24.relational-operators.c`](chapter3_Operators/3.24.relational-operators.c) | Relational Operators |
| 3.25 | [`3.25.relational-operators-2.c`](chapter3_Operators/3.25.relational-operators-2.c) | Relational Operators 2 |
| 3.26 | [`3.26.assignment-operators.c`](chapter3_Operators/3.26.assignment-operators.c) | Assignment Operators |
| 3.27 | [`3.27.assignment-operators-2.c`](chapter3_Operators/3.27.assignment-operators-2.c) | Assignment Operators 2 |
| 3.28 | [`3.28.assignment-operators-3.c`](chapter3_Operators/3.28.assignment-operators-3.c) | Assignment Operators 3 |
| 3.29 | [`3.29.logical-operators.c`](chapter3_Operators/3.29.logical-operators.c) | Logical Operators |
| 3.30 | [`3.30.logical-operators-2.c`](chapter3_Operators/3.30.logical-operators-2.c) | Logical Operators 2 |
| 3.31 | [`3.31.logical-operators-3.c`](chapter3_Operators/3.31.logical-operators-3.c) | Logical Operators 3 |
| 3.32 | [`3.32.bitwise-operators.c`](chapter3_Operators/3.32.bitwise-operators.c) | Bitwise Operators |
| 3.33 | [`3.33.bitwise-operators-2.c`](chapter3_Operators/3.33.bitwise-operators-2.c) | Bitwise Operators 2 |
| 3.34 | [`3.34.bitwise-operators-3.c`](chapter3_Operators/3.34.bitwise-operators-3.c) | Bitwise Operators 3 |
| 3.35 | [`3.35.bitwise-operators-4.c`](chapter3_Operators/3.35.bitwise-operators-4.c) | Bitwise Operators 4 |
| 3.36 | [`3.36.bitwise-operators-5.c`](chapter3_Operators/3.36.bitwise-operators-5.c) | Bitwise Operators 5 |
| 3.37 | [`3.37.bitwise-operators-6.c`](chapter3_Operators/3.37.bitwise-operators-6.c) | Bitwise Operators 6 |
| 3.38 | [`3.38.bitwise-operators-7.c`](chapter3_Operators/3.38.bitwise-operators-7.c) | Bitwise Operators 7 |
| 3.39 | [`3.39.bitwise-operators-8.c`](chapter3_Operators/3.39.bitwise-operators-8.c) | Bitwise Operators 8 |
| 3.40 | [`3.40.bitwise-operators-9.c`](chapter3_Operators/3.40.bitwise-operators-9.c) | Bitwise Operators 9 |
| 3.41 | [`3.41.bitwise-operators-10.c`](chapter3_Operators/3.41.bitwise-operators-10.c) | Bitwise Operators 10 |
| 3.42 | [`3.42.bitwise-operators-11.c`](chapter3_Operators/3.42.bitwise-operators-11.c) | Bitwise Operators 11 |
| 3.43 | [`3.43.bitwise-operators-12.c`](chapter3_Operators/3.43.bitwise-operators-12.c) | Bitwise Operators 12 |
| 3.44 | [`3.44.bitwise-operators-13.c`](chapter3_Operators/3.44.bitwise-operators-13.c) | Bitwise Operators 13 |
| 3.45 | [`3.45.bitwise-operators-14.c`](chapter3_Operators/3.45.bitwise-operators-14.c) | Bitwise Operators 14 |
| 3.46 | [`3.46.bitwise-operators-15.c`](chapter3_Operators/3.46.bitwise-operators-15.c) | Bitwise Operators 15 |
| 3.47 | [`3.47.bitwise-operators-16.c`](chapter3_Operators/3.47.bitwise-operators-16.c) | Bitwise Operators 16 |
| 3.48 | [`3.48.bitwise-operators-17.c`](chapter3_Operators/3.48.bitwise-operators-17.c) | Bitwise Operators 17 |
| 3.49 | [`3.49.bitwise-operators-18.c`](chapter3_Operators/3.49.bitwise-operators-18.c) | Bitwise Operators 18 |
| 3.50 | [`3.50.bitwise-operators-19.c`](chapter3_Operators/3.50.bitwise-operators-19.c) | Bitwise Operators 19 |
| 3.51 | [`3.51.bitwise-operators-20.c`](chapter3_Operators/3.51.bitwise-operators-20.c) | Bitwise Operators 20 |
| 3.52 | [`3.52.bitwise-operators-21.c`](chapter3_Operators/3.52.bitwise-operators-21.c) | Bitwise Operators 21 |
| 3.53 | [`3.53.bitwise-operators-22.c`](chapter3_Operators/3.53.bitwise-operators-22.c) | Bitwise Operators 22 |
| 3.54 | [`3.54.bitwise-operators-23.c`](chapter3_Operators/3.54.bitwise-operators-23.c) | Bitwise Operators 23 |
| 3.55 | [`3.55.bitwise-operators-24.c`](chapter3_Operators/3.55.bitwise-operators-24.c) | Bitwise Operators 24 |
| 3.56 | [`3.56.bitwise-operators-25.c`](chapter3_Operators/3.56.bitwise-operators-25.c) | Bitwise Operators 25 |
| 3.57 | [`3.57.bitwise-operators-26.c`](chapter3_Operators/3.57.bitwise-operators-26.c) | Bitwise Operators 26 |
| 3.58 | [`3.58.bitwise-operators-27.c`](chapter3_Operators/3.58.bitwise-operators-27.c) | Bitwise Operators 27 |
| 3.59 | [`3.59.bitwise-operators-28.c`](chapter3_Operators/3.59.bitwise-operators-28.c) | Bitwise Operators 28 |
| 3.60 | [`3.60.bitwise-operators-29.c`](chapter3_Operators/3.60.bitwise-operators-29.c) | Bitwise Operators 29 |
| 3.61 | [`3.61.bitwise-operators-30.c`](chapter3_Operators/3.61.bitwise-operators-30.c) | Bitwise Operators 30 |
| 3.62 | [`3.62.bitwise-operators-31.c`](chapter3_Operators/3.62.bitwise-operators-31.c) | Bitwise Operators 31 |
| 3.63 | [`3.63.bitwise-operators-32.c`](chapter3_Operators/3.63.bitwise-operators-32.c) | Bitwise Operators 32 |
| 3.64 | [`3.64.bitwise-operators-33.c`](chapter3_Operators/3.64.bitwise-operators-33.c) | Bitwise Operators 33 |
| 3.65 | [`3.65.bitwise-operators-34.c`](chapter3_Operators/3.65.bitwise-operators-34.c) | Bitwise Operators 34 |
| 3.66 | [`3.66.bitwise-operators-35.c`](chapter3_Operators/3.66.bitwise-operators-35.c) | Bitwise Operators 35 |
| 3.67 | [`3.67.bitwise-operators-36.c`](chapter3_Operators/3.67.bitwise-operators-36.c) | Bitwise Operators 36 |
| 3.68 | [`3.68.extracting-b-bits.c`](chapter3_Operators/3.68.extracting-b-bits.c) | Extracting B Bits |
| 3.69 | [`3.69.setting-b-bits-to-1.c`](chapter3_Operators/3.69.setting-b-bits-to-1.c) | Setting B Bits To 1 |
| 3.70 | [`3.70.clearing-b-bits.c`](chapter3_Operators/3.70.clearing-b-bits.c) | Clearing B Bits |
| 3.71 | [`3.71.toggling-b-bits.c`](chapter3_Operators/3.71.toggling-b-bits.c) | Toggling B Bits |
| 3.72 | [`3.72.inserting-a-b-bit-number.c`](chapter3_Operators/3.72.inserting-a-b-bit-number.c) | Inserting A B Bit Number |
| 3.73 | [`3.73.extracting-the-b-most-significant-bits.c`](chapter3_Operators/3.73.extracting-the-b-most-significant-bits.c) | Extracting The B Most Significant Bits |
| 3.74 | [`3.74.1-circular-left-rotation.c`](chapter3_Operators/3.74.1-circular-left-rotation.c) | 1 Circular Left Rotation |
| 3.75 | [`3.75.macro-example-5.c`](chapter3_Operators/3.75.macro-example-5.c) | Macro Example 5 |
| 3.76 | [`3.76.2-circular-right-rotation.c`](chapter3_Operators/3.76.2-circular-right-rotation.c) | 2 Circular Right Rotation |
| 3.77 | [`3.77.macro-example-6.c`](chapter3_Operators/3.77.macro-example-6.c) | Macro Example 6 |
| 3.78 | [`3.78.2-circular-right-rotation-2.c`](chapter3_Operators/3.78.2-circular-right-rotation-2.c) | 2 Circular Right Rotation 2 |
| 3.79 | [`3.79.macro-example-7.c`](chapter3_Operators/3.79.macro-example-7.c) | Macro Example 7 |
| 3.80 | [`3.80.step-3-combine-the-two-nibbles.c`](chapter3_Operators/3.80.step-3-combine-the-two-nibbles.c) | Step 3 Combine The Two Nibbles |
| 3.81 | [`3.81.step-3-combine-the-results.c`](chapter3_Operators/3.81.step-3-combine-the-results.c) | Step 3 Combine The Results |
| 3.82 | [`3.82.step-3-combine-the-results-2.c`](chapter3_Operators/3.82.step-3-combine-the-results-2.c) | Step 3 Combine The Results 2 |
| 3.83 | [`3.83.step-3-combine-the-two-results.c`](chapter3_Operators/3.83.step-3-combine-the-two-results.c) | Step 3 Combine The Two Results |
| 3.84 | [`3.84.macro-example-8.c`](chapter3_Operators/3.84.macro-example-8.c) | Macro Example 8 |
| 3.85 | [`3.85.step-3-combine-the-two-results-2.c`](chapter3_Operators/3.85.step-3-combine-the-two-results-2.c) | Step 3 Combine The Two Results 2 |
| 3.86 | [`3.86.macro-example-9.c`](chapter3_Operators/3.86.macro-example-9.c) | Macro Example 9 |
| 3.87 | [`3.87.step-3-combine-the-two-results-3.c`](chapter3_Operators/3.87.step-3-combine-the-two-results-3.c) | Step 3 Combine The Two Results 3 |
| 3.88 | [`3.88.macro-example-10.c`](chapter3_Operators/3.88.macro-example-10.c) | Macro Example 10 |
| 3.89 | [`3.89.unary-operator.c`](chapter3_Operators/3.89.unary-operator.c) | Unary Operator |
| 3.90 | [`3.90.unary-operator-2.c`](chapter3_Operators/3.90.unary-operator-2.c) | Unary Operator 2 |
| 3.91 | [`3.91.unary-operator-3.c`](chapter3_Operators/3.91.unary-operator-3.c) | Unary Operator 3 |
| 3.92 | [`3.92.unary-operator-4.c`](chapter3_Operators/3.92.unary-operator-4.c) | Unary Operator 4 |
| 3.93 | [`3.93.unary-operator-5.c`](chapter3_Operators/3.93.unary-operator-5.c) | Unary Operator 5 |
| 3.94 | [`3.94.unary-operator-6.c`](chapter3_Operators/3.94.unary-operator-6.c) | Unary Operator 6 |
| 3.95 | [`3.95.unary-operator-7.c`](chapter3_Operators/3.95.unary-operator-7.c) | Unary Operator 7 |
| 3.96 | [`3.96.unary-operator-8.c`](chapter3_Operators/3.96.unary-operator-8.c) | Unary Operator 8 |
| 3.97 | [`3.97.unary-operator-9.c`](chapter3_Operators/3.97.unary-operator-9.c) | Unary Operator 9 |
| 3.98 | [`3.98.unary-operator-10.c`](chapter3_Operators/3.98.unary-operator-10.c) | Unary Operator 10 |
| 3.99 | [`3.99.unary-operator-11.c`](chapter3_Operators/3.99.unary-operator-11.c) | Unary Operator 11 |
| 3.100 | [`3.100.unary-operator-12.c`](chapter3_Operators/3.100.unary-operator-12.c) | Unary Operator 12 |
| 3.101 | [`3.101.unary-operator-13.c`](chapter3_Operators/3.101.unary-operator-13.c) | Unary Operator 13 |
| 3.102 | [`3.102.unary-operator-14.c`](chapter3_Operators/3.102.unary-operator-14.c) | Unary Operator 14 |
| 3.103 | [`3.103.unary-operator-15.c`](chapter3_Operators/3.103.unary-operator-15.c) | Unary Operator 15 |
| 3.104 | [`3.104.unary-operator-16.c`](chapter3_Operators/3.104.unary-operator-16.c) | Unary Operator 16 |
| 3.105 | [`3.105.unary-operator-17.c`](chapter3_Operators/3.105.unary-operator-17.c) | Unary Operator 17 |
| 3.106 | [`3.106.unary-operator-18.c`](chapter3_Operators/3.106.unary-operator-18.c) | Unary Operator 18 |
| 3.107 | [`3.107.unary-operator-19.c`](chapter3_Operators/3.107.unary-operator-19.c) | Unary Operator 19 |
| 3.108 | [`3.108.unary-operator-20.c`](chapter3_Operators/3.108.unary-operator-20.c) | Unary Operator 20 |
| 3.109 | [`3.109.unary-operator-21.c`](chapter3_Operators/3.109.unary-operator-21.c) | Unary Operator 21 |
| 3.110 | [`3.110.unary-operator-22.c`](chapter3_Operators/3.110.unary-operator-22.c) | Unary Operator 22 |
| 3.111 | [`3.111.unary-operator-23.c`](chapter3_Operators/3.111.unary-operator-23.c) | Unary Operator 23 |
| 3.112 | [`3.112.unary-operator-24.c`](chapter3_Operators/3.112.unary-operator-24.c) | Unary Operator 24 |
| 3.113 | [`3.113.unary-operator-25.c`](chapter3_Operators/3.113.unary-operator-25.c) | Unary Operator 25 |
| 3.114 | [`3.114.unary-operator-26.c`](chapter3_Operators/3.114.unary-operator-26.c) | Unary Operator 26 |
| 3.115 | [`3.115.unary-operator-27.c`](chapter3_Operators/3.115.unary-operator-27.c) | Unary Operator 27 |
| 3.116 | [`3.116.unary-operator-28.c`](chapter3_Operators/3.116.unary-operator-28.c) | Unary Operator 28 |
| 3.117 | [`3.117.unary-operator-29.c`](chapter3_Operators/3.117.unary-operator-29.c) | Unary Operator 29 |
| 3.118 | [`3.118.unary-operator-30.c`](chapter3_Operators/3.118.unary-operator-30.c) | Unary Operator 30 |
| 3.119 | [`3.119.unary-operator-31.c`](chapter3_Operators/3.119.unary-operator-31.c) | Unary Operator 31 |
| 3.120 | [`3.120.unary-operator-32.c`](chapter3_Operators/3.120.unary-operator-32.c) | Unary Operator 32 |
| 3.121 | [`3.121.unary-operator-33.c`](chapter3_Operators/3.121.unary-operator-33.c) | Unary Operator 33 |
| 3.122 | [`3.122.unary-operator-34.c`](chapter3_Operators/3.122.unary-operator-34.c) | Unary Operator 34 |
| 3.123 | [`3.123.unary-operator-35.c`](chapter3_Operators/3.123.unary-operator-35.c) | Unary Operator 35 |
| 3.124 | [`3.124.unary-operator-36.c`](chapter3_Operators/3.124.unary-operator-36.c) | Unary Operator 36 |
| 3.125 | [`3.125.unary-operator-37.c`](chapter3_Operators/3.125.unary-operator-37.c) | Unary Operator 37 |
| 3.126 | [`3.126.finding-the-larger-and-smaller-number.c`](chapter3_Operators/3.126.finding-the-larger-and-smaller-number.c) | Finding The Larger And Smaller Number |
| 3.127 | [`3.127.finding-the-larger-and-smaller-number-2.c`](chapter3_Operators/3.127.finding-the-larger-and-smaller-number-2.c) | Finding The Larger And Smaller Number 2 |
| 3.128 | [`3.128.bitwise-operators-37.c`](chapter3_Operators/3.128.bitwise-operators-37.c) | Bitwise Operators 37 |
| 3.129 | [`3.129.bitwise-operators-38.c`](chapter3_Operators/3.129.bitwise-operators-38.c) | Bitwise Operators 38 |
| 3.130 | [`3.130.using-rand.c`](chapter3_Operators/3.130.using-rand.c) | Using Rand |
| 3.131 | [`3.131.using-rand-2.c`](chapter3_Operators/3.131.using-rand-2.c) | Using Rand 2 |
| 3.132 | [`3.132.ternary-operator.c`](chapter3_Operators/3.132.ternary-operator.c) | Ternary Operator |
| 3.133 | [`3.133.assignment-operators-4.c`](chapter3_Operators/3.133.assignment-operators-4.c) | Assignment Operators 4 |
| 3.134 | [`3.134.assignment-operators-5.c`](chapter3_Operators/3.134.assignment-operators-5.c) | Assignment Operators 5 |
| 3.135 | [`3.135.assignment-operators-6.c`](chapter3_Operators/3.135.assignment-operators-6.c) | Assignment Operators 6 |
| 3.136 | [`3.136.assignment-operators-7.c`](chapter3_Operators/3.136.assignment-operators-7.c) | Assignment Operators 7 |
| 3.137 | [`3.137.assignment-operators-8.c`](chapter3_Operators/3.137.assignment-operators-8.c) | Assignment Operators 8 |
| 3.138 | [`3.138.assignment-operators-9.c`](chapter3_Operators/3.138.assignment-operators-9.c) | Assignment Operators 9 |
| 3.139 | [`3.139.assignment-operators-10.c`](chapter3_Operators/3.139.assignment-operators-10.c) | Assignment Operators 10 |
| 3.140 | [`3.140.macro-example-11.c`](chapter3_Operators/3.140.macro-example-11.c) | Macro Example 11 |
| 3.141 | [`3.141.using-a-macro.c`](chapter3_Operators/3.141.using-a-macro.c) | Using A Macro |
| 3.142 | [`3.142.macro-example-12.c`](chapter3_Operators/3.142.macro-example-12.c) | Macro Example 12 |
| 3.143 | [`3.143.problems-on-numbers.c`](chapter3_Operators/3.143.problems-on-numbers.c) | Problems On Numbers |
| 3.144 | [`3.144.problems-on-numbers-2.c`](chapter3_Operators/3.144.problems-on-numbers-2.c) | Problems On Numbers 2 |
| 3.145 | [`3.145.problems-on-numbers-3.c`](chapter3_Operators/3.145.problems-on-numbers-3.c) | Problems On Numbers 3 |
| 3.146 | [`3.146.problems-on-numbers-4.c`](chapter3_Operators/3.146.problems-on-numbers-4.c) | Problems On Numbers 4 |
| 3.147 | [`3.147.problems-on-numbers-5.c`](chapter3_Operators/3.147.problems-on-numbers-5.c) | Problems On Numbers 5 |
| 3.148 | [`3.148.problems-on-numbers-6.c`](chapter3_Operators/3.148.problems-on-numbers-6.c) | Problems On Numbers 6 |
| 3.149 | [`3.149.quadratic-equation.c`](chapter3_Operators/3.149.quadratic-equation.c) | Quadratic Equation |
| 3.150 | [`3.150.quadratic-equation-2.c`](chapter3_Operators/3.150.quadratic-equation-2.c) | Quadratic Equation 2 |
| 3.151 | [`3.151.quadratic-equation-3.c`](chapter3_Operators/3.151.quadratic-equation-3.c) | Quadratic Equation 3 |
| 3.152 | [`3.152.quadratic-equation-4.c`](chapter3_Operators/3.152.quadratic-equation-4.c) | Quadratic Equation 4 |
| 3.153 | [`3.153.the-first-cryptography-program.c`](chapter3_Operators/3.153.the-first-cryptography-program.c) | The First Cryptography Program |
| 3.154 | [`3.154.find-out-the-outputs.c`](chapter3_Operators/3.154.find-out-the-outputs.c) | Find Out The Outputs |
| 3.155 | [`3.155.find-out-the-outputs-2.c`](chapter3_Operators/3.155.find-out-the-outputs-2.c) | Find Out The Outputs 2 |
| 3.156 | [`3.156.find-out-the-outputs-3.c`](chapter3_Operators/3.156.find-out-the-outputs-3.c) | Find Out The Outputs 3 |
| 3.157 | [`3.157.find-out-the-outputs-4.c`](chapter3_Operators/3.157.find-out-the-outputs-4.c) | Find Out The Outputs 4 |
| 3.158 | [`3.158.find-out-the-outputs-5.c`](chapter3_Operators/3.158.find-out-the-outputs-5.c) | Find Out The Outputs 5 |
| 3.159 | [`3.159.find-out-the-outputs-6.c`](chapter3_Operators/3.159.find-out-the-outputs-6.c) | Find Out The Outputs 6 |
| 3.160 | [`3.160.find-out-the-outputs-7.c`](chapter3_Operators/3.160.find-out-the-outputs-7.c) | Find Out The Outputs 7 |
| 3.161 | [`3.161.find-out-the-outputs-8.c`](chapter3_Operators/3.161.find-out-the-outputs-8.c) | Find Out The Outputs 8 |
| 3.162 | [`3.162.find-out-the-outputs-9.c`](chapter3_Operators/3.162.find-out-the-outputs-9.c) | Find Out The Outputs 9 |
| 3.163 | [`3.163.find-out-the-outputs-10.c`](chapter3_Operators/3.163.find-out-the-outputs-10.c) | Find Out The Outputs 10 |
| 3.164 | [`3.164.find-out-the-outputs-11.c`](chapter3_Operators/3.164.find-out-the-outputs-11.c) | Find Out The Outputs 11 |
| 3.165 | [`3.165.find-out-the-outputs-12.c`](chapter3_Operators/3.165.find-out-the-outputs-12.c) | Find Out The Outputs 12 |
| 3.166 | [`3.166.find-out-the-outputs-13.c`](chapter3_Operators/3.166.find-out-the-outputs-13.c) | Find Out The Outputs 13 |
| 3.167 | [`3.167.find-out-the-outputs-14.c`](chapter3_Operators/3.167.find-out-the-outputs-14.c) | Find Out The Outputs 14 |
| 3.168 | [`3.168.find-out-the-outputs-15.c`](chapter3_Operators/3.168.find-out-the-outputs-15.c) | Find Out The Outputs 15 |
| 3.169 | [`3.169.find-out-the-outputs-16.c`](chapter3_Operators/3.169.find-out-the-outputs-16.c) | Find Out The Outputs 16 |
| 3.170 | [`3.170.find-out-the-outputs-17.c`](chapter3_Operators/3.170.find-out-the-outputs-17.c) | Find Out The Outputs 17 |
| 3.171 | [`3.171.find-out-the-outputs-18.c`](chapter3_Operators/3.171.find-out-the-outputs-18.c) | Find Out The Outputs 18 |
| 3.172 | [`3.172.find-out-the-outputs-19.c`](chapter3_Operators/3.172.find-out-the-outputs-19.c) | Find Out The Outputs 19 |
| 3.173 | [`3.173.find-out-the-outputs-20.c`](chapter3_Operators/3.173.find-out-the-outputs-20.c) | Find Out The Outputs 20 |
| 3.174 | [`3.174.find-out-the-outputs-21.c`](chapter3_Operators/3.174.find-out-the-outputs-21.c) | Find Out The Outputs 21 |
| 3.175 | [`3.175.find-out-the-outputs-22.c`](chapter3_Operators/3.175.find-out-the-outputs-22.c) | Find Out The Outputs 22 |
| 3.176 | [`3.176.find-out-the-outputs-23.c`](chapter3_Operators/3.176.find-out-the-outputs-23.c) | Find Out The Outputs 23 |
| 3.177 | [`3.177.find-out-the-outputs-24.c`](chapter3_Operators/3.177.find-out-the-outputs-24.c) | Find Out The Outputs 24 |
| 3.178 | [`3.178.find-out-the-outputs-25.c`](chapter3_Operators/3.178.find-out-the-outputs-25.c) | Find Out The Outputs 25 |
| 3.179 | [`3.179.find-out-the-outputs-26.c`](chapter3_Operators/3.179.find-out-the-outputs-26.c) | Find Out The Outputs 26 |
| 3.180 | [`3.180.find-out-the-outputs-27.c`](chapter3_Operators/3.180.find-out-the-outputs-27.c) | Find Out The Outputs 27 |
| 3.181 | [`3.181.find-out-the-outputs-28.c`](chapter3_Operators/3.181.find-out-the-outputs-28.c) | Find Out The Outputs 28 |
| 3.182 | [`3.182.macro-example-13.c`](chapter3_Operators/3.182.macro-example-13.c) | Macro Example 13 |
| 3.183 | [`3.183.macro-example-14.c`](chapter3_Operators/3.183.macro-example-14.c) | Macro Example 14 |
| 3.184 | [`3.184.find-out-the-errors.c`](chapter3_Operators/3.184.find-out-the-errors.c) | Find Out The Errors |
| 3.185 | [`3.185.find-out-the-errors-2.c`](chapter3_Operators/3.185.find-out-the-errors-2.c) | Find Out The Errors 2 |
| 3.186 | [`3.186.find-out-the-errors-3.c`](chapter3_Operators/3.186.find-out-the-errors-3.c) | Find Out The Errors 3 |
| 3.187 | [`3.187.macro-example-15.c`](chapter3_Operators/3.187.macro-example-15.c) | Macro Example 15 |
| 3.188 | [`3.188.macro-example-16.c`](chapter3_Operators/3.188.macro-example-16.c) | Macro Example 16 |
| 3.189 | [`3.189.find-out-the-errors-4.c`](chapter3_Operators/3.189.find-out-the-errors-4.c) | Find Out The Errors 4 |
| 3.190 | [`3.190.find-out-the-errors-5.c`](chapter3_Operators/3.190.find-out-the-errors-5.c) | Find Out The Errors 5 |
| 3.191 | [`3.191.find-out-the-errors-6.c`](chapter3_Operators/3.191.find-out-the-errors-6.c) | Find Out The Errors 6 |
| 3.192 | [`3.192.macro-example-17.c`](chapter3_Operators/3.192.macro-example-17.c) | Macro Example 17 |
| 3.193 | [`3.193.macro-example-18.c`](chapter3_Operators/3.193.macro-example-18.c) | Macro Example 18 |
| 3.194 | [`3.194.find-out-the-errors-7.c`](chapter3_Operators/3.194.find-out-the-errors-7.c) | Find Out The Errors 7 |
| 3.195 | [`3.195.find-out-the-errors-8.c`](chapter3_Operators/3.195.find-out-the-errors-8.c) | Find Out The Errors 8 |
| 3.196 | [`3.196.find-out-the-errors-9.c`](chapter3_Operators/3.196.find-out-the-errors-9.c) | Find Out The Errors 9 |
| 3.197 | [`3.197.find-out-the-errors-10.c`](chapter3_Operators/3.197.find-out-the-errors-10.c) | Find Out The Errors 10 |
| 3.198 | [`3.198.find-out-the-errors-11.c`](chapter3_Operators/3.198.find-out-the-errors-11.c) | Find Out The Errors 11 |
| 3.199 | [`3.199.macro-example-19.c`](chapter3_Operators/3.199.macro-example-19.c) | Macro Example 19 |
| 3.200 | [`3.200.macro-example-20.c`](chapter3_Operators/3.200.macro-example-20.c) | Macro Example 20 |
| 3.201 | [`3.201.find-out-the-errors-12.c`](chapter3_Operators/3.201.find-out-the-errors-12.c) | Find Out The Errors 12 |
| 3.202 | [`3.202.find-out-the-errors-13.c`](chapter3_Operators/3.202.find-out-the-errors-13.c) | Find Out The Errors 13 |
| 3.203 | [`3.203.find-out-the-errors-14.c`](chapter3_Operators/3.203.find-out-the-errors-14.c) | Find Out The Errors 14 |
| 3.204 | [`3.204.macro-example-21.c`](chapter3_Operators/3.204.macro-example-21.c) | Macro Example 21 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 4 — Control Statements

**Programs:** 155

| No. | Program file | Program / topic |
|---:|---|---|
| 4.1 | [`4.1.if-else-statement.c`](chapter4_Control%20Statements/4.1.if-else-statement.c) | If Else Statement |
| 4.2 | [`4.2.multiple-if-statements.c`](chapter4_Control%20Statements/4.2.multiple-if-statements.c) | Multiple If Statements |
| 4.3 | [`4.3.if-else-statement-2.c`](chapter4_Control%20Statements/4.3.if-else-statement-2.c) | If Else Statement 2 |
| 4.4 | [`4.4.odd-even-check.c`](chapter4_Control%20Statements/4.4.odd-even-check.c) | Odd Even Check |
| 4.5 | [`4.5.odd-even-check-2.c`](chapter4_Control%20Statements/4.5.odd-even-check-2.c) | Odd Even Check 2 |
| 4.6 | [`4.6.if-statement-block.c`](chapter4_Control%20Statements/4.6.if-statement-block.c) | If Statement Block |
| 4.7 | [`4.7.if-statement-block-2.c`](chapter4_Control%20Statements/4.7.if-statement-block-2.c) | If Statement Block 2 |
| 4.8 | [`4.8.if-else-if-ladder.c`](chapter4_Control%20Statements/4.8.if-else-if-ladder.c) | If Else If Ladder |
| 4.9 | [`4.9.nested-if-statement.c`](chapter4_Control%20Statements/4.9.nested-if-statement.c) | Nested If Statement |
| 4.10 | [`4.10.logical-and-condition.c`](chapter4_Control%20Statements/4.10.logical-and-condition.c) | Logical And Condition |
| 4.11 | [`4.11.logical-or-condition.c`](chapter4_Control%20Statements/4.11.logical-or-condition.c) | Logical Or Condition |
| 4.12 | [`4.12.problems-on-if-else.c`](chapter4_Control%20Statements/4.12.problems-on-if-else.c) | Problems On If Else |
| 4.13 | [`4.13.problems-on-if-else-2.c`](chapter4_Control%20Statements/4.13.problems-on-if-else-2.c) | Problems On If Else 2 |
| 4.14 | [`4.14.floating-point-comparison.c`](chapter4_Control%20Statements/4.14.floating-point-comparison.c) | Floating Point Comparison |
| 4.15 | [`4.15.floating-point-comparison-2.c`](chapter4_Control%20Statements/4.15.floating-point-comparison-2.c) | Floating Point Comparison 2 |
| 4.16 | [`4.16.floating-point-comparison-3.c`](chapter4_Control%20Statements/4.16.floating-point-comparison-3.c) | Floating Point Comparison 3 |
| 4.17 | [`4.17.floating-point-comparison-4.c`](chapter4_Control%20Statements/4.17.floating-point-comparison-4.c) | Floating Point Comparison 4 |
| 4.18 | [`4.18.floating-point-comparison-5.c`](chapter4_Control%20Statements/4.18.floating-point-comparison-5.c) | Floating Point Comparison 5 |
| 4.19 | [`4.19.floating-point-comparison-6.c`](chapter4_Control%20Statements/4.19.floating-point-comparison-6.c) | Floating Point Comparison 6 |
| 4.20 | [`4.20.floating-point-comparison-7.c`](chapter4_Control%20Statements/4.20.floating-point-comparison-7.c) | Floating Point Comparison 7 |
| 4.21 | [`4.21.floating-point-comparison-8.c`](chapter4_Control%20Statements/4.21.floating-point-comparison-8.c) | Floating Point Comparison 8 |
| 4.22 | [`4.22.floating-point-comparison-9.c`](chapter4_Control%20Statements/4.22.floating-point-comparison-9.c) | Floating Point Comparison 9 |
| 4.23 | [`4.23.floating-point-comparison-10.c`](chapter4_Control%20Statements/4.23.floating-point-comparison-10.c) | Floating Point Comparison 10 |
| 4.24 | [`4.24.comparing-a-float.c`](chapter4_Control%20Statements/4.24.comparing-a-float.c) | Comparing A Float |
| 4.25 | [`4.25.using-the-f.c`](chapter4_Control%20Statements/4.25.using-the-f.c) | Using The F |
| 4.26 | [`4.26.example-1-comparing-two-integers.c`](chapter4_Control%20Statements/4.26.example-1-comparing-two-integers.c) | Example 1 Comparing Two Integers |
| 4.27 | [`4.27.floating-point-comparison-11.c`](chapter4_Control%20Statements/4.27.floating-point-comparison-11.c) | Floating Point Comparison 11 |
| 4.28 | [`4.28.example-3-a-number-that-cannot-be-represented-exactly.c`](chapter4_Control%20Statements/4.28.example-3-a-number-that-cannot-be-represented-exactly.c) | Example 3 A Number That Cannot Be Represented Exactly |
| 4.29 | [`4.29.example-4-addition-can-produce-a-different-result.c`](chapter4_Control%20Statements/4.29.example-4-addition-can-produce-a-different-result.c) | Example 4 Addition Can Produce A Different Result |
| 4.30 | [`4.30.example-5-printing-the-difference.c`](chapter4_Control%20Statements/4.30.example-5-printing-the-difference.c) | Example 5 Printing The Difference |
| 4.31 | [`4.31.example-6-comparing-using-a-tolerance.c`](chapter4_Control%20Statements/4.31.example-6-comparing-using-a-tolerance.c) | Example 6 Comparing Using A Tolerance |
| 4.32 | [`4.32.example-7-comparing-two-measurements.c`](chapter4_Control%20Statements/4.32.example-7-comparing-two-measurements.c) | Example 7 Comparing Two Measurements |
| 4.33 | [`4.33.floating-point-comparison-12.c`](chapter4_Control%20Statements/4.33.floating-point-comparison-12.c) | Floating Point Comparison 12 |
| 4.34 | [`4.34.example-9-comparing-a-float.c`](chapter4_Control%20Statements/4.34.example-9-comparing-a-float.c) | Example 9 Comparing A Float |
| 4.35 | [`4.35.example-10-comparing-a-float.c`](chapter4_Control%20Statements/4.35.example-10-comparing-a-float.c) | Example 10 Comparing A Float |
| 4.36 | [`4.36.summary.c`](chapter4_Control%20Statements/4.36.summary.c) | Summary |
| 4.37 | [`4.37.summary-2.c`](chapter4_Control%20Statements/4.37.summary-2.c) | Summary 2 |
| 4.38 | [`4.38.comparing-a-double.c`](chapter4_Control%20Statements/4.38.comparing-a-double.c) | Comparing A Double |
| 4.39 | [`4.39.comparing-a-double-2.c`](chapter4_Control%20Statements/4.39.comparing-a-double-2.c) | Comparing A Double 2 |
| 4.40 | [`4.40.comparing-two-double.c`](chapter4_Control%20Statements/4.40.comparing-two-double.c) | Comparing Two Double |
| 4.41 | [`4.41.comparing-two-float.c`](chapter4_Control%20Statements/4.41.comparing-two-float.c) | Comparing Two Float |
| 4.42 | [`4.42.why-does-this-happen.c`](chapter4_Control%20Statements/4.42.why-does-this-happen.c) | Why Does This Happen |
| 4.43 | [`4.43.why-does-this-happen-2.c`](chapter4_Control%20Statements/4.43.why-does-this-happen-2.c) | Why Does This Happen 2 |
| 4.44 | [`4.44.why-does-this-happen-3.c`](chapter4_Control%20Statements/4.44.why-does-this-happen-3.c) | Why Does This Happen 3 |
| 4.45 | [`4.45.why-does-this-happen-4.c`](chapter4_Control%20Statements/4.45.why-does-this-happen-4.c) | Why Does This Happen 4 |
| 4.46 | [`4.46.a-value-that-can-be-represented-exactly.c`](chapter4_Control%20Statements/4.46.a-value-that-can-be-represented-exactly.c) | A Value That Can Be Represented Exactly |
| 4.47 | [`4.47.another-example-0-45.c`](chapter4_Control%20Statements/4.47.another-example-0-45.c) | Another Example 0 45 |
| 4.48 | [`4.48.an-example-with-0-75.c`](chapter4_Control%20Statements/4.48.an-example-with-0-75.c) | An Example With 0 75 |
| 4.49 | [`4.49.an-example-with-0-1235.c`](chapter4_Control%20Statements/4.49.an-example-with-0-1235.c) | An Example With 0 1235 |
| 4.50 | [`4.50.an-example-with-0-125.c`](chapter4_Control%20Statements/4.50.an-example-with-0-125.c) | An Example With 0 125 |
| 4.51 | [`4.51.important-observation.c`](chapter4_Control%20Statements/4.51.important-observation.c) | Important Observation |
| 4.52 | [`4.52.important-observation-2.c`](chapter4_Control%20Statements/4.52.important-observation-2.c) | Important Observation 2 |
| 4.53 | [`4.53.converting-a-float.c`](chapter4_Control%20Statements/4.53.converting-a-float.c) | Converting A Float |
| 4.54 | [`4.54.summary-3.c`](chapter4_Control%20Statements/4.54.summary-3.c) | Summary 3 |
| 4.55 | [`4.55.summary-4.c`](chapter4_Control%20Statements/4.55.summary-4.c) | Summary 4 |
| 4.56 | [`4.56.summary-5.c`](chapter4_Control%20Statements/4.56.summary-5.c) | Summary 5 |
| 4.57 | [`4.57.summary-6.c`](chapter4_Control%20Statements/4.57.summary-6.c) | Summary 6 |
| 4.58 | [`4.58.summary-7.c`](chapter4_Control%20Statements/4.58.summary-7.c) | Summary 7 |
| 4.59 | [`4.59.summary-8.c`](chapter4_Control%20Statements/4.59.summary-8.c) | Summary 8 |
| 4.60 | [`4.60.summary-9.c`](chapter4_Control%20Statements/4.60.summary-9.c) | Summary 9 |
| 4.61 | [`4.61.summary-10.c`](chapter4_Control%20Statements/4.61.summary-10.c) | Summary 10 |
| 4.62 | [`4.62.summary-11.c`](chapter4_Control%20Statements/4.62.summary-11.c) | Summary 11 |
| 4.63 | [`4.63.summary-12.c`](chapter4_Control%20Statements/4.63.summary-12.c) | Summary 12 |
| 4.64 | [`4.64.summary-13.c`](chapter4_Control%20Statements/4.64.summary-13.c) | Summary 13 |
| 4.65 | [`4.65.summary-14.c`](chapter4_Control%20Statements/4.65.summary-14.c) | Summary 14 |
| 4.66 | [`4.66.summary-15.c`](chapter4_Control%20Statements/4.66.summary-15.c) | Summary 15 |
| 4.67 | [`4.67.summary-16.c`](chapter4_Control%20Statements/4.67.summary-16.c) | Summary 16 |
| 4.68 | [`4.68.summary-17.c`](chapter4_Control%20Statements/4.68.summary-17.c) | Summary 17 |
| 4.69 | [`4.69.summary-18.c`](chapter4_Control%20Statements/4.69.summary-18.c) | Summary 18 |
| 4.70 | [`4.70.summary-19.c`](chapter4_Control%20Statements/4.70.summary-19.c) | Summary 19 |
| 4.71 | [`4.71.summary-20.c`](chapter4_Control%20Statements/4.71.summary-20.c) | Summary 20 |
| 4.72 | [`4.72.summary-21.c`](chapter4_Control%20Statements/4.72.summary-21.c) | Summary 21 |
| 4.73 | [`4.73.summary-22.c`](chapter4_Control%20Statements/4.73.summary-22.c) | Summary 22 |
| 4.74 | [`4.74.summary-23.c`](chapter4_Control%20Statements/4.74.summary-23.c) | Summary 23 |
| 4.75 | [`4.75.summary-24.c`](chapter4_Control%20Statements/4.75.summary-24.c) | Summary 24 |
| 4.76 | [`4.76.summary-25.c`](chapter4_Control%20Statements/4.76.summary-25.c) | Summary 25 |
| 4.77 | [`4.77.summary-26.c`](chapter4_Control%20Statements/4.77.summary-26.c) | Summary 26 |
| 4.78 | [`4.78.summary-27.c`](chapter4_Control%20Statements/4.78.summary-27.c) | Summary 27 |
| 4.79 | [`4.79.summary-28.c`](chapter4_Control%20Statements/4.79.summary-28.c) | Summary 28 |
| 4.80 | [`4.80.summary-29.c`](chapter4_Control%20Statements/4.80.summary-29.c) | Summary 29 |
| 4.81 | [`4.81.summary-30.c`](chapter4_Control%20Statements/4.81.summary-30.c) | Summary 30 |
| 4.82 | [`4.82.summary-31.c`](chapter4_Control%20Statements/4.82.summary-31.c) | Summary 31 |
| 4.83 | [`4.83.summary-32.c`](chapter4_Control%20Statements/4.83.summary-32.c) | Summary 32 |
| 4.84 | [`4.84.summary-33.c`](chapter4_Control%20Statements/4.84.summary-33.c) | Summary 33 |
| 4.85 | [`4.85.summary-34.c`](chapter4_Control%20Statements/4.85.summary-34.c) | Summary 34 |
| 4.86 | [`4.86.summary-35.c`](chapter4_Control%20Statements/4.86.summary-35.c) | Summary 35 |
| 4.87 | [`4.87.summary-36.c`](chapter4_Control%20Statements/4.87.summary-36.c) | Summary 36 |
| 4.88 | [`4.88.summary-37.c`](chapter4_Control%20Statements/4.88.summary-37.c) | Summary 37 |
| 4.89 | [`4.89.summary-38.c`](chapter4_Control%20Statements/4.89.summary-38.c) | Summary 38 |
| 4.90 | [`4.90.switch-statement.c`](chapter4_Control%20Statements/4.90.switch-statement.c) | Switch Statement |
| 4.91 | [`4.91.switch-statement-2.c`](chapter4_Control%20Statements/4.91.switch-statement-2.c) | Switch Statement 2 |
| 4.92 | [`4.92.switch-statement-3.c`](chapter4_Control%20Statements/4.92.switch-statement-3.c) | Switch Statement 3 |
| 4.93 | [`4.93.switch-statement-4.c`](chapter4_Control%20Statements/4.93.switch-statement-4.c) | Switch Statement 4 |
| 4.94 | [`4.94.switch-statement-5.c`](chapter4_Control%20Statements/4.94.switch-statement-5.c) | Switch Statement 5 |
| 4.95 | [`4.95.switch-statement-6.c`](chapter4_Control%20Statements/4.95.switch-statement-6.c) | Switch Statement 6 |
| 4.96 | [`4.96.switch-statement-7.c`](chapter4_Control%20Statements/4.96.switch-statement-7.c) | Switch Statement 7 |
| 4.97 | [`4.97.switch-statement-8.c`](chapter4_Control%20Statements/4.97.switch-statement-8.c) | Switch Statement 8 |
| 4.98 | [`4.98.switch-statement-9.c`](chapter4_Control%20Statements/4.98.switch-statement-9.c) | Switch Statement 9 |
| 4.99 | [`4.99.switch-statement-10.c`](chapter4_Control%20Statements/4.99.switch-statement-10.c) | Switch Statement 10 |
| 4.100 | [`4.100.switch-statement-11.c`](chapter4_Control%20Statements/4.100.switch-statement-11.c) | Switch Statement 11 |
| 4.101 | [`4.101.switch-statement-12.c`](chapter4_Control%20Statements/4.101.switch-statement-12.c) | Switch Statement 12 |
| 4.102 | [`4.102.switch-statement-13.c`](chapter4_Control%20Statements/4.102.switch-statement-13.c) | Switch Statement 13 |
| 4.103 | [`4.103.switch-statement-14.c`](chapter4_Control%20Statements/4.103.switch-statement-14.c) | Switch Statement 14 |
| 4.104 | [`4.104.switch-statement-15.c`](chapter4_Control%20Statements/4.104.switch-statement-15.c) | Switch Statement 15 |
| 4.105 | [`4.105.switch-statement-16.c`](chapter4_Control%20Statements/4.105.switch-statement-16.c) | Switch Statement 16 |
| 4.106 | [`4.106.switch-statement-17.c`](chapter4_Control%20Statements/4.106.switch-statement-17.c) | Switch Statement 17 |
| 4.107 | [`4.107.switch-statement-18.c`](chapter4_Control%20Statements/4.107.switch-statement-18.c) | Switch Statement 18 |
| 4.108 | [`4.108.switch-statement-19.c`](chapter4_Control%20Statements/4.108.switch-statement-19.c) | Switch Statement 19 |
| 4.109 | [`4.109.switch-statement-20.c`](chapter4_Control%20Statements/4.109.switch-statement-20.c) | Switch Statement 20 |
| 4.110 | [`4.110.switch-statement-21.c`](chapter4_Control%20Statements/4.110.switch-statement-21.c) | Switch Statement 21 |
| 4.111 | [`4.111.switch-statement-22.c`](chapter4_Control%20Statements/4.111.switch-statement-22.c) | Switch Statement 22 |
| 4.112 | [`4.112.find-out-the-output-and-explain-the-output.c`](chapter4_Control%20Statements/4.112.find-out-the-output-and-explain-the-output.c) | Find Out The Output And Explain The Output |
| 4.113 | [`4.113.find-out-the-output-and-explain-the-output-2.c`](chapter4_Control%20Statements/4.113.find-out-the-output-and-explain-the-output-2.c) | Find Out The Output And Explain The Output 2 |
| 4.114 | [`4.114.find-out-the-output-and-explain-the-output-3.c`](chapter4_Control%20Statements/4.114.find-out-the-output-and-explain-the-output-3.c) | Find Out The Output And Explain The Output 3 |
| 4.115 | [`4.115.find-out-the-output-and-explain-the-output-4.c`](chapter4_Control%20Statements/4.115.find-out-the-output-and-explain-the-output-4.c) | Find Out The Output And Explain The Output 4 |
| 4.116 | [`4.116.find-out-the-output-and-explain-the-output-5.c`](chapter4_Control%20Statements/4.116.find-out-the-output-and-explain-the-output-5.c) | Find Out The Output And Explain The Output 5 |
| 4.117 | [`4.117.find-out-the-output-and-explain-the-output-6.c`](chapter4_Control%20Statements/4.117.find-out-the-output-and-explain-the-output-6.c) | Find Out The Output And Explain The Output 6 |
| 4.118 | [`4.118.find-out-the-output-and-explain-the-output-7.c`](chapter4_Control%20Statements/4.118.find-out-the-output-and-explain-the-output-7.c) | Find Out The Output And Explain The Output 7 |
| 4.119 | [`4.119.find-out-the-output-and-explain-the-output-8.c`](chapter4_Control%20Statements/4.119.find-out-the-output-and-explain-the-output-8.c) | Find Out The Output And Explain The Output 8 |
| 4.120 | [`4.120.find-out-the-output-and-explain-the-output-9.c`](chapter4_Control%20Statements/4.120.find-out-the-output-and-explain-the-output-9.c) | Find Out The Output And Explain The Output 9 |
| 4.121 | [`4.121.find-out-the-output-and-explain-the-output-10.c`](chapter4_Control%20Statements/4.121.find-out-the-output-and-explain-the-output-10.c) | Find Out The Output And Explain The Output 10 |
| 4.122 | [`4.122.find-out-the-output-and-explain-the-output-11.c`](chapter4_Control%20Statements/4.122.find-out-the-output-and-explain-the-output-11.c) | Find Out The Output And Explain The Output 11 |
| 4.123 | [`4.123.find-out-the-output-and-explain-the-output-12.c`](chapter4_Control%20Statements/4.123.find-out-the-output-and-explain-the-output-12.c) | Find Out The Output And Explain The Output 12 |
| 4.124 | [`4.124.find-out-the-output-and-explain-the-output-13.c`](chapter4_Control%20Statements/4.124.find-out-the-output-and-explain-the-output-13.c) | Find Out The Output And Explain The Output 13 |
| 4.125 | [`4.125.find-out-the-output-and-explain-the-output-14.c`](chapter4_Control%20Statements/4.125.find-out-the-output-and-explain-the-output-14.c) | Find Out The Output And Explain The Output 14 |
| 4.126 | [`4.126.find-out-the-output-and-explain-the-output-15.c`](chapter4_Control%20Statements/4.126.find-out-the-output-and-explain-the-output-15.c) | Find Out The Output And Explain The Output 15 |
| 4.127 | [`4.127.find-out-the-output-and-explain-the-output-16.c`](chapter4_Control%20Statements/4.127.find-out-the-output-and-explain-the-output-16.c) | Find Out The Output And Explain The Output 16 |
| 4.128 | [`4.128.find-out-the-output-and-explain-the-output-17.c`](chapter4_Control%20Statements/4.128.find-out-the-output-and-explain-the-output-17.c) | Find Out The Output And Explain The Output 17 |
| 4.129 | [`4.129.find-out-the-output-and-explain-the-output-18.c`](chapter4_Control%20Statements/4.129.find-out-the-output-and-explain-the-output-18.c) | Find Out The Output And Explain The Output 18 |
| 4.130 | [`4.130.find-out-the-output-and-explain-the-output-19.c`](chapter4_Control%20Statements/4.130.find-out-the-output-and-explain-the-output-19.c) | Find Out The Output And Explain The Output 19 |
| 4.131 | [`4.131.find-out-the-output-and-explain-the-output-20.c`](chapter4_Control%20Statements/4.131.find-out-the-output-and-explain-the-output-20.c) | Find Out The Output And Explain The Output 20 |
| 4.132 | [`4.132.find-out-the-output-and-explain-the-output-21.c`](chapter4_Control%20Statements/4.132.find-out-the-output-and-explain-the-output-21.c) | Find Out The Output And Explain The Output 21 |
| 4.133 | [`4.133.find-out-the-output-and-explain-the-output-22.c`](chapter4_Control%20Statements/4.133.find-out-the-output-and-explain-the-output-22.c) | Find Out The Output And Explain The Output 22 |
| 4.134 | [`4.134.find-out-the-output-and-explain-the-output-23.c`](chapter4_Control%20Statements/4.134.find-out-the-output-and-explain-the-output-23.c) | Find Out The Output And Explain The Output 23 |
| 4.135 | [`4.135.find-out-the-output-and-explain-the-output-24.c`](chapter4_Control%20Statements/4.135.find-out-the-output-and-explain-the-output-24.c) | Find Out The Output And Explain The Output 24 |
| 4.136 | [`4.136.find-out-the-output-and-explain-the-output-25.c`](chapter4_Control%20Statements/4.136.find-out-the-output-and-explain-the-output-25.c) | Find Out The Output And Explain The Output 25 |
| 4.137 | [`4.137.switch-statement-23.c`](chapter4_Control%20Statements/4.137.switch-statement-23.c) | Switch Statement 23 |
| 4.138 | [`4.138.switch-statement-24.c`](chapter4_Control%20Statements/4.138.switch-statement-24.c) | Switch Statement 24 |
| 4.139 | [`4.139.switch-statement-25.c`](chapter4_Control%20Statements/4.139.switch-statement-25.c) | Switch Statement 25 |
| 4.140 | [`4.140.switch-statement-26.c`](chapter4_Control%20Statements/4.140.switch-statement-26.c) | Switch Statement 26 |
| 4.141 | [`4.141.switch-statement-27.c`](chapter4_Control%20Statements/4.141.switch-statement-27.c) | Switch Statement 27 |
| 4.142 | [`4.142.switch-statement-28.c`](chapter4_Control%20Statements/4.142.switch-statement-28.c) | Switch Statement 28 |
| 4.143 | [`4.143.switch-statement-29.c`](chapter4_Control%20Statements/4.143.switch-statement-29.c) | Switch Statement 29 |
| 4.144 | [`4.144.switch-statement-30.c`](chapter4_Control%20Statements/4.144.switch-statement-30.c) | Switch Statement 30 |
| 4.145 | [`4.145.find-out-the-output-and-explain-the-output-26.c`](chapter4_Control%20Statements/4.145.find-out-the-output-and-explain-the-output-26.c) | Find Out The Output And Explain The Output 26 |
| 4.146 | [`4.146.find-out-the-output-and-explain-the-output-27.c`](chapter4_Control%20Statements/4.146.find-out-the-output-and-explain-the-output-27.c) | Find Out The Output And Explain The Output 27 |
| 4.147 | [`4.147.find-out-the-output-and-explain-the-output-28.c`](chapter4_Control%20Statements/4.147.find-out-the-output-and-explain-the-output-28.c) | Find Out The Output And Explain The Output 28 |
| 4.148 | [`4.148.find-out-the-output-and-explain-the-output-29.c`](chapter4_Control%20Statements/4.148.find-out-the-output-and-explain-the-output-29.c) | Find Out The Output And Explain The Output 29 |
| 4.149 | [`4.149.find-out-the-output-and-explain-the-output-30.c`](chapter4_Control%20Statements/4.149.find-out-the-output-and-explain-the-output-30.c) | Find Out The Output And Explain The Output 30 |
| 4.150 | [`4.150.find-out-the-output-and-explain-the-output-31.c`](chapter4_Control%20Statements/4.150.find-out-the-output-and-explain-the-output-31.c) | Find Out The Output And Explain The Output 31 |
| 4.151 | [`4.151.switch-statement-31.c`](chapter4_Control%20Statements/4.151.switch-statement-31.c) | Switch Statement 31 |
| 4.152 | [`4.152.switch-statement-32.c`](chapter4_Control%20Statements/4.152.switch-statement-32.c) | Switch Statement 32 |
| 4.153 | [`4.153.switch-statement-33.c`](chapter4_Control%20Statements/4.153.switch-statement-33.c) | Switch Statement 33 |
| 4.154 | [`4.154.find-out-the-errors.c`](chapter4_Control%20Statements/4.154.find-out-the-errors.c) | Find Out The Errors |
| 4.155 | [`4.155.find-out-the-errors-2.c`](chapter4_Control%20Statements/4.155.find-out-the-errors-2.c) | Find Out The Errors 2 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 5 — Loops

**Programs:** 107

| No. | Program file | Program / topic |
|---:|---|---|
| 5.1 | [`5.1.for-loop.c`](chapter5_Loops/5.1.for-loop.c) | For Loop |
| 5.2 | [`5.2.a-closer-look-at-the-control-flow.c`](chapter5_Loops/5.2.a-closer-look-at-the-control-flow.c) | A Closer Look At The Control Flow |
| 5.3 | [`5.3.while-loop.c`](chapter5_Loops/5.3.while-loop.c) | While Loop |
| 5.4 | [`5.4.while-loop-2.c`](chapter5_Loops/5.4.while-loop-2.c) | While Loop 2 |
| 5.5 | [`5.5.while-loop-3.c`](chapter5_Loops/5.5.while-loop-3.c) | While Loop 3 |
| 5.6 | [`5.6.while-loop-4.c`](chapter5_Loops/5.6.while-loop-4.c) | While Loop 4 |
| 5.7 | [`5.7.while-loop-5.c`](chapter5_Loops/5.7.while-loop-5.c) | While Loop 5 |
| 5.8 | [`5.8.while-loop-6.c`](chapter5_Loops/5.8.while-loop-6.c) | While Loop 6 |
| 5.9 | [`5.9.infinite-for-loop.c`](chapter5_Loops/5.9.infinite-for-loop.c) | Infinite For Loop |
| 5.10 | [`5.10.infinite-while-loop.c`](chapter5_Loops/5.10.infinite-while-loop.c) | Infinite While Loop |
| 5.11 | [`5.11.infinite-while-loop-2.c`](chapter5_Loops/5.11.infinite-while-loop-2.c) | Infinite While Loop 2 |
| 5.12 | [`5.12.a-non-zero-constant-as-a-loop-condition.c`](chapter5_Loops/5.12.a-non-zero-constant-as-a-loop-condition.c) | A Non Zero Constant As A Loop Condition |
| 5.13 | [`5.13.infinite-loop-caused-by-an-incorrect-update.c`](chapter5_Loops/5.13.infinite-loop-caused-by-an-incorrect-update.c) | Infinite Loop Caused By An Incorrect Update |
| 5.14 | [`5.14.semi-infinite-loop.c`](chapter5_Loops/5.14.semi-infinite-loop.c) | Semi Infinite Loop |
| 5.15 | [`5.15.semi-infinite-loop-2.c`](chapter5_Loops/5.15.semi-infinite-loop-2.c) | Semi Infinite Loop 2 |
| 5.16 | [`5.16.semi-infinite-loop-3.c`](chapter5_Loops/5.16.semi-infinite-loop-3.c) | Semi Infinite Loop 3 |
| 5.17 | [`5.17.an-incorrect-update-expression.c`](chapter5_Loops/5.17.an-incorrect-update-expression.c) | An Incorrect Update Expression |
| 5.18 | [`5.18.nested-loop.c`](chapter5_Loops/5.18.nested-loop.c) | Nested Loop |
| 5.19 | [`5.19.nested-loop-2.c`](chapter5_Loops/5.19.nested-loop-2.c) | Nested Loop 2 |
| 5.20 | [`5.20.nested-loop-3.c`](chapter5_Loops/5.20.nested-loop-3.c) | Nested Loop 3 |
| 5.21 | [`5.21.break-statement.c`](chapter5_Loops/5.21.break-statement.c) | Break Statement |
| 5.22 | [`5.22.nested-loop-4.c`](chapter5_Loops/5.22.nested-loop-4.c) | Nested Loop 4 |
| 5.23 | [`5.23.break-statement-2.c`](chapter5_Loops/5.23.break-statement-2.c) | Break Statement 2 |
| 5.24 | [`5.24.continue-statement.c`](chapter5_Loops/5.24.continue-statement.c) | Continue Statement |
| 5.25 | [`5.25.nested-loop-5.c`](chapter5_Loops/5.25.nested-loop-5.c) | Nested Loop 5 |
| 5.26 | [`5.26.goto-statement.c`](chapter5_Loops/5.26.goto-statement.c) | Goto Statement |
| 5.27 | [`5.27.goto-statement-2.c`](chapter5_Loops/5.27.goto-statement-2.c) | Goto Statement 2 |
| 5.28 | [`5.28.nested-loop-6.c`](chapter5_Loops/5.28.nested-loop-6.c) | Nested Loop 6 |
| 5.29 | [`5.29.goto-statement-3.c`](chapter5_Loops/5.29.goto-statement-3.c) | Goto Statement 3 |
| 5.30 | [`5.30.goto-statement-4.c`](chapter5_Loops/5.30.goto-statement-4.c) | Goto Statement 4 |
| 5.31 | [`5.31.infinite-looping.c`](chapter5_Loops/5.31.infinite-looping.c) | Infinite Looping |
| 5.32 | [`5.32.infinite-looping-2.c`](chapter5_Loops/5.32.infinite-looping-2.c) | Infinite Looping 2 |
| 5.33 | [`5.33.when-n-7.c`](chapter5_Loops/5.33.when-n-7.c) | When N 7 |
| 5.34 | [`5.34.when-n-7-2.c`](chapter5_Loops/5.34.when-n-7-2.c) | When N 7 2 |
| 5.35 | [`5.35.goto-statement-5.c`](chapter5_Loops/5.35.goto-statement-5.c) | Goto Statement 5 |
| 5.36 | [`5.36.goto-statement-6.c`](chapter5_Loops/5.36.goto-statement-6.c) | Goto Statement 6 |
| 5.37 | [`5.37.problems-on-costs.c`](chapter5_Loops/5.37.problems-on-costs.c) | Problems On Costs |
| 5.38 | [`5.38.why-do-we-count-iterations.c`](chapter5_Loops/5.38.why-do-we-count-iterations.c) | Why Do We Count Iterations |
| 5.39 | [`5.39.logarithmic-complexity.c`](chapter5_Loops/5.39.logarithmic-complexity.c) | Logarithmic Complexity |
| 5.40 | [`5.40.logarithmic-complexity-2.c`](chapter5_Loops/5.40.logarithmic-complexity-2.c) | Logarithmic Complexity 2 |
| 5.41 | [`5.41.finding-the-number-of-iterations-for-an-arbitrary-n.c`](chapter5_Loops/5.41.finding-the-number-of-iterations-for-an-arbitrary-n.c) | Finding The Number Of Iterations For An Arbitrary N |
| 5.42 | [`5.42.finding-the-number-of-iterations.c`](chapter5_Loops/5.42.finding-the-number-of-iterations.c) | Finding The Number Of Iterations |
| 5.43 | [`5.43.why-does-it-look-almost-constant.c`](chapter5_Loops/5.43.why-does-it-look-almost-constant.c) | Why Does It Look Almost Constant |
| 5.44 | [`5.44.why-does-it-look-almost-constant-2.c`](chapter5_Loops/5.44.why-does-it-look-almost-constant-2.c) | Why Does It Look Almost Constant 2 |
| 5.45 | [`5.45.why-does-it-look-almost-constant-3.c`](chapter5_Loops/5.45.why-does-it-look-almost-constant-3.c) | Why Does It Look Almost Constant 3 |
| 5.46 | [`5.46.why-does-it-look-almost-constant-4.c`](chapter5_Loops/5.46.why-does-it-look-almost-constant-4.c) | Why Does It Look Almost Constant 4 |
| 5.47 | [`5.47.ascii.c`](chapter5_Loops/5.47.ascii.c) | Ascii |
| 5.48 | [`5.48.loop-pattern.c`](chapter5_Loops/5.48.loop-pattern.c) | Loop Pattern |
| 5.49 | [`5.49.loop-pattern-2.c`](chapter5_Loops/5.49.loop-pattern-2.c) | Loop Pattern 2 |
| 5.50 | [`5.50.when-the-input-size-is-unknown.c`](chapter5_Loops/5.50.when-the-input-size-is-unknown.c) | When The Input Size Is Unknown |
| 5.51 | [`5.51.loop-pattern-3.c`](chapter5_Loops/5.51.loop-pattern-3.c) | Loop Pattern 3 |
| 5.52 | [`5.52.loop-pattern-4.c`](chapter5_Loops/5.52.loop-pattern-4.c) | Loop Pattern 4 |
| 5.53 | [`5.53.number-of-iterations.c`](chapter5_Loops/5.53.number-of-iterations.c) | Number Of Iterations |
| 5.54 | [`5.54.number-of-iterations-2.c`](chapter5_Loops/5.54.number-of-iterations-2.c) | Number Of Iterations 2 |
| 5.55 | [`5.55.total-number-of-iterations.c`](chapter5_Loops/5.55.total-number-of-iterations.c) | Total Number Of Iterations |
| 5.56 | [`5.56.total-number-of-elements.c`](chapter5_Loops/5.56.total-number-of-elements.c) | Total Number Of Elements |
| 5.57 | [`5.57.time-complexity.c`](chapter5_Loops/5.57.time-complexity.c) | Time Complexity |
| 5.58 | [`5.58.time-complexity-2.c`](chapter5_Loops/5.58.time-complexity-2.c) | Time Complexity 2 |
| 5.59 | [`5.59.time-complexity-3.c`](chapter5_Loops/5.59.time-complexity-3.c) | Time Complexity 3 |
| 5.60 | [`5.60.time-complexity-4.c`](chapter5_Loops/5.60.time-complexity-4.c) | Time Complexity 4 |
| 5.61 | [`5.61.time-complexity-5.c`](chapter5_Loops/5.61.time-complexity-5.c) | Time Complexity 5 |
| 5.62 | [`5.62.time-complexity-6.c`](chapter5_Loops/5.62.time-complexity-6.c) | Time Complexity 6 |
| 5.63 | [`5.63.time-complexity-7.c`](chapter5_Loops/5.63.time-complexity-7.c) | Time Complexity 7 |
| 5.64 | [`5.64.time-complexity-8.c`](chapter5_Loops/5.64.time-complexity-8.c) | Time Complexity 8 |
| 5.65 | [`5.65.4-overall-control-flow.c`](chapter5_Loops/5.65.4-overall-control-flow.c) | 4 Overall Control Flow |
| 5.66 | [`5.66.4-overall-control-flow-2.c`](chapter5_Loops/5.66.4-overall-control-flow-2.c) | 4 Overall Control Flow 2 |
| 5.67 | [`5.67.4-overall-control-flow-3.c`](chapter5_Loops/5.67.4-overall-control-flow-3.c) | 4 Overall Control Flow 3 |
| 5.68 | [`5.68.4-overall-control-flow-4.c`](chapter5_Loops/5.68.4-overall-control-flow-4.c) | 4 Overall Control Flow 4 |
| 5.69 | [`5.69.4-overall-control-flow-5.c`](chapter5_Loops/5.69.4-overall-control-flow-5.c) | 4 Overall Control Flow 5 |
| 5.70 | [`5.70.4-overall-control-flow-6.c`](chapter5_Loops/5.70.4-overall-control-flow-6.c) | 4 Overall Control Flow 6 |
| 5.71 | [`5.71.4-overall-control-flow-7.c`](chapter5_Loops/5.71.4-overall-control-flow-7.c) | 4 Overall Control Flow 7 |
| 5.72 | [`5.72.4-overall-control-flow-8.c`](chapter5_Loops/5.72.4-overall-control-flow-8.c) | 4 Overall Control Flow 8 |
| 5.73 | [`5.73.4-overall-control-flow-9.c`](chapter5_Loops/5.73.4-overall-control-flow-9.c) | 4 Overall Control Flow 9 |
| 5.74 | [`5.74.4-overall-control-flow-10.c`](chapter5_Loops/5.74.4-overall-control-flow-10.c) | 4 Overall Control Flow 10 |
| 5.75 | [`5.75.4-overall-control-flow-11.c`](chapter5_Loops/5.75.4-overall-control-flow-11.c) | 4 Overall Control Flow 11 |
| 5.76 | [`5.76.find-out-the-output-of-the-following-program.c`](chapter5_Loops/5.76.find-out-the-output-of-the-following-program.c) | Find Out The Output Of The Following Program |
| 5.77 | [`5.77.find-out-the-output-of-the-following-program-2.c`](chapter5_Loops/5.77.find-out-the-output-of-the-following-program-2.c) | Find Out The Output Of The Following Program 2 |
| 5.78 | [`5.78.find-out-the-output-of-the-following-program-3.c`](chapter5_Loops/5.78.find-out-the-output-of-the-following-program-3.c) | Find Out The Output Of The Following Program 3 |
| 5.79 | [`5.79.find-out-the-output-of-the-following-program-4.c`](chapter5_Loops/5.79.find-out-the-output-of-the-following-program-4.c) | Find Out The Output Of The Following Program 4 |
| 5.80 | [`5.80.find-out-the-output-of-the-following-program-5.c`](chapter5_Loops/5.80.find-out-the-output-of-the-following-program-5.c) | Find Out The Output Of The Following Program 5 |
| 5.81 | [`5.81.find-out-the-output-of-the-following-program-6.c`](chapter5_Loops/5.81.find-out-the-output-of-the-following-program-6.c) | Find Out The Output Of The Following Program 6 |
| 5.82 | [`5.82.find-out-the-output-of-the-following-program-7.c`](chapter5_Loops/5.82.find-out-the-output-of-the-following-program-7.c) | Find Out The Output Of The Following Program 7 |
| 5.83 | [`5.83.find-out-the-output-of-the-following-program-8.c`](chapter5_Loops/5.83.find-out-the-output-of-the-following-program-8.c) | Find Out The Output Of The Following Program 8 |
| 5.84 | [`5.84.find-out-the-output-of-the-following-program-9.c`](chapter5_Loops/5.84.find-out-the-output-of-the-following-program-9.c) | Find Out The Output Of The Following Program 9 |
| 5.85 | [`5.85.find-out-the-output-of-the-following-program-10.c`](chapter5_Loops/5.85.find-out-the-output-of-the-following-program-10.c) | Find Out The Output Of The Following Program 10 |
| 5.86 | [`5.86.find-out-the-output-of-the-following-program-11.c`](chapter5_Loops/5.86.find-out-the-output-of-the-following-program-11.c) | Find Out The Output Of The Following Program 11 |
| 5.87 | [`5.87.find-out-the-output-of-the-following-program-12.c`](chapter5_Loops/5.87.find-out-the-output-of-the-following-program-12.c) | Find Out The Output Of The Following Program 12 |
| 5.88 | [`5.88.find-out-the-output-of-the-following-program-13.c`](chapter5_Loops/5.88.find-out-the-output-of-the-following-program-13.c) | Find Out The Output Of The Following Program 13 |
| 5.89 | [`5.89.find-out-the-output-of-the-following-program-14.c`](chapter5_Loops/5.89.find-out-the-output-of-the-following-program-14.c) | Find Out The Output Of The Following Program 14 |
| 5.90 | [`5.90.find-out-the-output-of-the-following-program-15.c`](chapter5_Loops/5.90.find-out-the-output-of-the-following-program-15.c) | Find Out The Output Of The Following Program 15 |
| 5.91 | [`5.91.find-out-the-output-of-the-following-program-16.c`](chapter5_Loops/5.91.find-out-the-output-of-the-following-program-16.c) | Find Out The Output Of The Following Program 16 |
| 5.92 | [`5.92.find-out-the-output-of-the-following-program-17.c`](chapter5_Loops/5.92.find-out-the-output-of-the-following-program-17.c) | Find Out The Output Of The Following Program 17 |
| 5.93 | [`5.93.find-out-the-output-of-the-following-program-18.c`](chapter5_Loops/5.93.find-out-the-output-of-the-following-program-18.c) | Find Out The Output Of The Following Program 18 |
| 5.94 | [`5.94.find-out-the-output-of-the-following-program-19.c`](chapter5_Loops/5.94.find-out-the-output-of-the-following-program-19.c) | Find Out The Output Of The Following Program 19 |
| 5.95 | [`5.95.find-out-the-output-of-the-following-program-20.c`](chapter5_Loops/5.95.find-out-the-output-of-the-following-program-20.c) | Find Out The Output Of The Following Program 20 |
| 5.96 | [`5.96.find-out-the-output-of-the-following-program-21.c`](chapter5_Loops/5.96.find-out-the-output-of-the-following-program-21.c) | Find Out The Output Of The Following Program 21 |
| 5.97 | [`5.97.infinite-loop.c`](chapter5_Loops/5.97.infinite-loop.c) | Infinite Loop |
| 5.98 | [`5.98.infinite-loop-2.c`](chapter5_Loops/5.98.infinite-loop-2.c) | Infinite Loop 2 |
| 5.99 | [`5.99.infinite-loop-3.c`](chapter5_Loops/5.99.infinite-loop-3.c) | Infinite Loop 3 |
| 5.100 | [`5.100.infinite-loop-4.c`](chapter5_Loops/5.100.infinite-loop-4.c) | Infinite Loop 4 |
| 5.101 | [`5.101.infinite-loop-5.c`](chapter5_Loops/5.101.infinite-loop-5.c) | Infinite Loop 5 |
| 5.102 | [`5.102.infinite-loop-6.c`](chapter5_Loops/5.102.infinite-loop-6.c) | Infinite Loop 6 |
| 5.103 | [`5.103.finding-out-the-error.c`](chapter5_Loops/5.103.finding-out-the-error.c) | Finding Out The Error |
| 5.104 | [`5.104.finding-out-the-error-2.c`](chapter5_Loops/5.104.finding-out-the-error-2.c) | Finding Out The Error 2 |
| 5.105 | [`5.105.finding-out-the-error-3.c`](chapter5_Loops/5.105.finding-out-the-error-3.c) | Finding Out The Error 3 |
| 5.106 | [`5.106.finding-out-the-error-4.c`](chapter5_Loops/5.106.finding-out-the-error-4.c) | Finding Out The Error 4 |
| 5.107 | [`5.107.finding-out-the-error-5.c`](chapter5_Loops/5.107.finding-out-the-error-5.c) | Finding Out The Error 5 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 6 — Functions

**Programs:** 125

| No. | Program file | Program / topic |
|---:|---|---|
| 6.1 | [`6.1.function-definition.c`](chapter6_Functions/6.1.function-definition.c) | Function Definition |
| 6.2 | [`6.2.definition-before-main.c`](chapter6_Functions/6.2.definition-before-main.c) | Definition Before Main |
| 6.3 | [`6.3.function-declaration.c`](chapter6_Functions/6.3.function-declaration.c) | Function Declaration |
| 6.4 | [`6.4.function-declaration-2.c`](chapter6_Functions/6.4.function-declaration-2.c) | Function Declaration 2 |
| 6.5 | [`6.5.function-declaration-3.c`](chapter6_Functions/6.5.function-declaration-3.c) | Function Declaration 3 |
| 6.6 | [`6.6.function-definition-2.c`](chapter6_Functions/6.6.function-definition-2.c) | Function Definition 2 |
| 6.7 | [`6.7.largest-number-function.c`](chapter6_Functions/6.7.largest-number-function.c) | Largest Number Function |
| 6.8 | [`6.8.case-1-no-parameters-and-no-return-value.c`](chapter6_Functions/6.8.case-1-no-parameters-and-no-return-value.c) | Case 1 No Parameters And No Return Value |
| 6.9 | [`6.9.case-2-one-or-more-parameters-and-no-return-value.c`](chapter6_Functions/6.9.case-2-one-or-more-parameters-and-no-return-value.c) | Case 2 One Or More Parameters And No Return Value |
| 6.10 | [`6.10.case-3-no-parameters-but-returns-a-value.c`](chapter6_Functions/6.10.case-3-no-parameters-but-returns-a-value.c) | Case 3 No Parameters But Returns A Value |
| 6.11 | [`6.11.case-4-one-or-more-parameters-and-returns-a-value.c`](chapter6_Functions/6.11.case-4-one-or-more-parameters-and-returns-a-value.c) | Case 4 One Or More Parameters And Returns A Value |
| 6.12 | [`6.12.can-we-omit-the-return-type.c`](chapter6_Functions/6.12.can-we-omit-the-return-type.c) | Can We Omit The Return Type |
| 6.13 | [`6.13.function-parameters.c`](chapter6_Functions/6.13.function-parameters.c) | Function Parameters |
| 6.14 | [`6.14.difference-between-foo-void.c`](chapter6_Functions/6.14.difference-between-foo-void.c) | Difference Between Foo Void |
| 6.15 | [`6.15.difference-between-foo-void-2.c`](chapter6_Functions/6.15.difference-between-foo-void-2.c) | Difference Between Foo Void 2 |
| 6.16 | [`6.16.difference-between-foo-void-3.c`](chapter6_Functions/6.16.difference-between-foo-void-3.c) | Difference Between Foo Void 3 |
| 6.17 | [`6.17.difference-between-foo-void-4.c`](chapter6_Functions/6.17.difference-between-foo-void-4.c) | Difference Between Foo Void 4 |
| 6.18 | [`6.18.a-simple-example.c`](chapter6_Functions/6.18.a-simple-example.c) | A Simple Example |
| 6.19 | [`6.19.variadic-function.c`](chapter6_Functions/6.19.variadic-function.c) | Variadic Function |
| 6.20 | [`6.20.variadic-function-2.c`](chapter6_Functions/6.20.variadic-function-2.c) | Variadic Function 2 |
| 6.21 | [`6.21.variadic-function-3.c`](chapter6_Functions/6.21.variadic-function-3.c) | Variadic Function 3 |
| 6.22 | [`6.22.variadic-function-4.c`](chapter6_Functions/6.22.variadic-function-4.c) | Variadic Function 4 |
| 6.23 | [`6.23.call-by-value.c`](chapter6_Functions/6.23.call-by-value.c) | Call By Value |
| 6.24 | [`6.24.call-by-value-2.c`](chapter6_Functions/6.24.call-by-value-2.c) | Call By Value 2 |
| 6.25 | [`6.25.call-by-value-3.c`](chapter6_Functions/6.25.call-by-value-3.c) | Call By Value 3 |
| 6.26 | [`6.26.extern-variable.c`](chapter6_Functions/6.26.extern-variable.c) | Extern Variable |
| 6.27 | [`6.27.extern-variable-2.c`](chapter6_Functions/6.27.extern-variable-2.c) | Extern Variable 2 |
| 6.28 | [`6.28.extern-variable-3.c`](chapter6_Functions/6.28.extern-variable-3.c) | Extern Variable 3 |
| 6.29 | [`6.29.extern-variable-4.c`](chapter6_Functions/6.29.extern-variable-4.c) | Extern Variable 4 |
| 6.30 | [`6.30.extern-variable-5.c`](chapter6_Functions/6.30.extern-variable-5.c) | Extern Variable 5 |
| 6.31 | [`6.31.using-functions-from-another-source-file.c`](chapter6_Functions/6.31.using-functions-from-another-source-file.c) | Using Functions From Another Source File |
| 6.32 | [`6.32.using-functions-from-another-source-file-2.c`](chapter6_Functions/6.32.using-functions-from-another-source-file-2.c) | Using Functions From Another Source File 2 |
| 6.33 | [`6.33.static-variable.c`](chapter6_Functions/6.33.static-variable.c) | Static Variable |
| 6.34 | [`6.34.static-variable-2.c`](chapter6_Functions/6.34.static-variable-2.c) | Static Variable 2 |
| 6.35 | [`6.35.static-variable-3.c`](chapter6_Functions/6.35.static-variable-3.c) | Static Variable 3 |
| 6.36 | [`6.36.static-variable-4.c`](chapter6_Functions/6.36.static-variable-4.c) | Static Variable 4 |
| 6.37 | [`6.37.static-variable-5.c`](chapter6_Functions/6.37.static-variable-5.c) | Static Variable 5 |
| 6.38 | [`6.38.static-variable-6.c`](chapter6_Functions/6.38.static-variable-6.c) | Static Variable 6 |
| 6.39 | [`6.39.static-variable-7.c`](chapter6_Functions/6.39.static-variable-7.c) | Static Variable 7 |
| 6.40 | [`6.40.static-variable-8.c`](chapter6_Functions/6.40.static-variable-8.c) | Static Variable 8 |
| 6.41 | [`6.41.static-variable-9.c`](chapter6_Functions/6.41.static-variable-9.c) | Static Variable 9 |
| 6.42 | [`6.42.static-variable-10.c`](chapter6_Functions/6.42.static-variable-10.c) | Static Variable 10 |
| 6.43 | [`6.43.static-variable-11.c`](chapter6_Functions/6.43.static-variable-11.c) | Static Variable 11 |
| 6.44 | [`6.44.static-variable-12.c`](chapter6_Functions/6.44.static-variable-12.c) | Static Variable 12 |
| 6.45 | [`6.45.making-our-own-library-functions.c`](chapter6_Functions/6.45.making-our-own-library-functions.c) | Making Our Own Library Functions |
| 6.46 | [`6.46.static-variable-13.c`](chapter6_Functions/6.46.static-variable-13.c) | Static Variable 13 |
| 6.47 | [`6.47.anonymous-functions.c`](chapter6_Functions/6.47.anonymous-functions.c) | Anonymous Functions |
| 6.48 | [`6.48.largest-number-function-2.c`](chapter6_Functions/6.48.largest-number-function-2.c) | Largest Number Function 2 |
| 6.49 | [`6.49.function-pointers.c`](chapter6_Functions/6.49.function-pointers.c) | Function Pointers |
| 6.50 | [`6.50.function-pointer-to-a-single-function.c`](chapter6_Functions/6.50.function-pointer-to-a-single-function.c) | Function Pointer To A Single Function |
| 6.51 | [`6.51.function-pointer-to-a-single-function-2.c`](chapter6_Functions/6.51.function-pointer-to-a-single-function-2.c) | Function Pointer To A Single Function 2 |
| 6.52 | [`6.52.array-of-function-pointers.c`](chapter6_Functions/6.52.array-of-function-pointers.c) | Array Of Function Pointers |
| 6.53 | [`6.53.dynamic-function-selection.c`](chapter6_Functions/6.53.dynamic-function-selection.c) | Dynamic Function Selection |
| 6.54 | [`6.54.function-pointers-with-return-values.c`](chapter6_Functions/6.54.function-pointers-with-return-values.c) | Function Pointers With Return Values |
| 6.55 | [`6.55.matching-function-signatures.c`](chapter6_Functions/6.55.matching-function-signatures.c) | Matching Function Signatures |
| 6.56 | [`6.56.callback-functions.c`](chapter6_Functions/6.56.callback-functions.c) | Callback Functions |
| 6.57 | [`6.57.returning-function-pointers.c`](chapter6_Functions/6.57.returning-function-pointers.c) | Returning Function Pointers |
| 6.58 | [`6.58.constructors-and-destructors.c`](chapter6_Functions/6.58.constructors-and-destructors.c) | Constructors And Destructors |
| 6.59 | [`6.59.constructors-and-destructors-2.c`](chapter6_Functions/6.59.constructors-and-destructors-2.c) | Constructors And Destructors 2 |
| 6.60 | [`6.60.function-scope.c`](chapter6_Functions/6.60.function-scope.c) | Function Scope |
| 6.61 | [`6.61.function-scope-2.c`](chapter6_Functions/6.61.function-scope-2.c) | Function Scope 2 |
| 6.62 | [`6.62.the-fmod.c`](chapter6_Functions/6.62.the-fmod.c) | The Fmod |
| 6.63 | [`6.63.implementing-the-power-function.c`](chapter6_Functions/6.63.implementing-the-power-function.c) | Implementing The Power Function |
| 6.64 | [`6.64.logarithmic-functions.c`](chapter6_Functions/6.64.logarithmic-functions.c) | Logarithmic Functions |
| 6.65 | [`6.65.logarithmic-functions-2.c`](chapter6_Functions/6.65.logarithmic-functions-2.c) | Logarithmic Functions 2 |
| 6.66 | [`6.66.logarithmic-functions-3.c`](chapter6_Functions/6.66.logarithmic-functions-3.c) | Logarithmic Functions 3 |
| 6.67 | [`6.67.logarithmic-functions-4.c`](chapter6_Functions/6.67.logarithmic-functions-4.c) | Logarithmic Functions 4 |
| 6.68 | [`6.68.logarithmic-functions-5.c`](chapter6_Functions/6.68.logarithmic-functions-5.c) | Logarithmic Functions 5 |
| 6.69 | [`6.69.logarithmic-functions-6.c`](chapter6_Functions/6.69.logarithmic-functions-6.c) | Logarithmic Functions 6 |
| 6.70 | [`6.70.logarithmic-functions-7.c`](chapter6_Functions/6.70.logarithmic-functions-7.c) | Logarithmic Functions 7 |
| 6.71 | [`6.71.factorial-numbers.c`](chapter6_Functions/6.71.factorial-numbers.c) | Factorial Numbers |
| 6.72 | [`6.72.can-we-calculate-factorials-beyond-the-integer-range.c`](chapter6_Functions/6.72.can-we-calculate-factorials-beyond-the-integer-range.c) | Can We Calculate Factorials Beyond The Integer Range |
| 6.73 | [`6.73.fixed-point-and-exponential-notation.c`](chapter6_Functions/6.73.fixed-point-and-exponential-notation.c) | Fixed Point And Exponential Notation |
| 6.74 | [`6.74.fixed-point-and-exponential-notation-2.c`](chapter6_Functions/6.74.fixed-point-and-exponential-notation-2.c) | Fixed Point And Exponential Notation 2 |
| 6.75 | [`6.75.checking-all-possible-divisors.c`](chapter6_Functions/6.75.checking-all-possible-divisors.c) | Checking All Possible Divisors |
| 6.76 | [`6.76.checking-divisors-up-to-n.c`](chapter6_Functions/6.76.checking-divisors-up-to-n.c) | Checking Divisors Up To N |
| 6.77 | [`6.77.avoiding-repeated-calculation-of-n.c`](chapter6_Functions/6.77.avoiding-repeated-calculation-of-n.c) | Avoiding Repeated Calculation Of N |
| 6.78 | [`6.78.avoiding-the-sqrt.c`](chapter6_Functions/6.78.avoiding-the-sqrt.c) | Avoiding The Sqrt |
| 6.79 | [`6.79.printing-prime-numbers-in-a-given-range.c`](chapter6_Functions/6.79.printing-prime-numbers-in-a-given-range.c) | Printing Prime Numbers In A Given Range |
| 6.80 | [`6.80.further-optimization.c`](chapter6_Functions/6.80.further-optimization.c) | Further Optimization |
| 6.81 | [`6.81.perfect-numbers.c`](chapter6_Functions/6.81.perfect-numbers.c) | Perfect Numbers |
| 6.82 | [`6.82.armstrong-numbers.c`](chapter6_Functions/6.82.armstrong-numbers.c) | Armstrong Numbers |
| 6.83 | [`6.83.palindrome-numbers.c`](chapter6_Functions/6.83.palindrome-numbers.c) | Palindrome Numbers |
| 6.84 | [`6.84.fibonacci-numbers.c`](chapter6_Functions/6.84.fibonacci-numbers.c) | Fibonacci Numbers |
| 6.85 | [`6.85.method-1-finding-common-factors.c`](chapter6_Functions/6.85.method-1-finding-common-factors.c) | Method 1 Finding Common Factors |
| 6.86 | [`6.86.method-2-subtraction-method.c`](chapter6_Functions/6.86.method-2-subtraction-method.c) | Method 2 Subtraction Method |
| 6.87 | [`6.87.method-3-modulus-method.c`](chapter6_Functions/6.87.method-3-modulus-method.c) | Method 3 Modulus Method |
| 6.88 | [`6.88.comparison-of-the-three-methods.c`](chapter6_Functions/6.88.comparison-of-the-three-methods.c) | Comparison Of The Three Methods |
| 6.89 | [`6.89.lcm.c`](chapter6_Functions/6.89.lcm.c) | Lcm |
| 6.90 | [`6.90.finding-lcm-without-using-gcd.c`](chapter6_Functions/6.90.finding-lcm-without-using-gcd.c) | Finding Lcm Without Using Gcd |
| 6.91 | [`6.91.a-faster-lcm-search.c`](chapter6_Functions/6.91.a-faster-lcm-search.c) | A Faster Lcm Search |
| 6.92 | [`6.92.problems-on-series.c`](chapter6_Functions/6.92.problems-on-series.c) | Problems On Series |
| 6.93 | [`6.93.time-complexity.c`](chapter6_Functions/6.93.time-complexity.c) | Time Complexity |
| 6.94 | [`6.94.representation-of-a-series-in-c.c`](chapter6_Functions/6.94.representation-of-a-series-in-c.c) | Representation Of A Series In C |
| 6.95 | [`6.95.representation-of-a-series-in-c-2.c`](chapter6_Functions/6.95.representation-of-a-series-in-c-2.c) | Representation Of A Series In C 2 |
| 6.96 | [`6.96.representation-of-a-series-in-c-3.c`](chapter6_Functions/6.96.representation-of-a-series-in-c-3.c) | Representation Of A Series In C 3 |
| 6.97 | [`6.97.representation-of-a-series-in-c-4.c`](chapter6_Functions/6.97.representation-of-a-series-in-c-4.c) | Representation Of A Series In C 4 |
| 6.98 | [`6.98.representation-of-a-series-in-c-5.c`](chapter6_Functions/6.98.representation-of-a-series-in-c-5.c) | Representation Of A Series In C 5 |
| 6.99 | [`6.99.questions-on-programming.c`](chapter6_Functions/6.99.questions-on-programming.c) | Questions On Programming |
| 6.100 | [`6.100.questions-on-programming-2.c`](chapter6_Functions/6.100.questions-on-programming-2.c) | Questions On Programming 2 |
| 6.101 | [`6.101.output-finding-questions.c`](chapter6_Functions/6.101.output-finding-questions.c) | Output Finding Questions |
| 6.102 | [`6.102.output-finding-questions-2.c`](chapter6_Functions/6.102.output-finding-questions-2.c) | Output Finding Questions 2 |
| 6.103 | [`6.103.output-finding-questions-3.c`](chapter6_Functions/6.103.output-finding-questions-3.c) | Output Finding Questions 3 |
| 6.104 | [`6.104.output-finding-questions-4.c`](chapter6_Functions/6.104.output-finding-questions-4.c) | Output Finding Questions 4 |
| 6.105 | [`6.105.output-finding-questions-5.c`](chapter6_Functions/6.105.output-finding-questions-5.c) | Output Finding Questions 5 |
| 6.106 | [`6.106.output-finding-questions-6.c`](chapter6_Functions/6.106.output-finding-questions-6.c) | Output Finding Questions 6 |
| 6.107 | [`6.107.output-finding-questions-7.c`](chapter6_Functions/6.107.output-finding-questions-7.c) | Output Finding Questions 7 |
| 6.108 | [`6.108.output-finding-questions-8.c`](chapter6_Functions/6.108.output-finding-questions-8.c) | Output Finding Questions 8 |
| 6.109 | [`6.109.output-finding-questions-9.c`](chapter6_Functions/6.109.output-finding-questions-9.c) | Output Finding Questions 9 |
| 6.110 | [`6.110.output-finding-questions-10.c`](chapter6_Functions/6.110.output-finding-questions-10.c) | Output Finding Questions 10 |
| 6.111 | [`6.111.output-finding-questions-11.c`](chapter6_Functions/6.111.output-finding-questions-11.c) | Output Finding Questions 11 |
| 6.112 | [`6.112.output-finding-questions-12.c`](chapter6_Functions/6.112.output-finding-questions-12.c) | Output Finding Questions 12 |
| 6.113 | [`6.113.output-finding-questions-13.c`](chapter6_Functions/6.113.output-finding-questions-13.c) | Output Finding Questions 13 |
| 6.114 | [`6.114.output-finding-questions-14.c`](chapter6_Functions/6.114.output-finding-questions-14.c) | Output Finding Questions 14 |
| 6.115 | [`6.115.output-finding-questions-15.c`](chapter6_Functions/6.115.output-finding-questions-15.c) | Output Finding Questions 15 |
| 6.116 | [`6.116.output-finding-questions-16.c`](chapter6_Functions/6.116.output-finding-questions-16.c) | Output Finding Questions 16 |
| 6.117 | [`6.117.output-finding-questions-17.c`](chapter6_Functions/6.117.output-finding-questions-17.c) | Output Finding Questions 17 |
| 6.118 | [`6.118.output-finding-questions-18.c`](chapter6_Functions/6.118.output-finding-questions-18.c) | Output Finding Questions 18 |
| 6.119 | [`6.119.output-finding-questions-19.c`](chapter6_Functions/6.119.output-finding-questions-19.c) | Output Finding Questions 19 |
| 6.120 | [`6.120.output-finding-questions-20.c`](chapter6_Functions/6.120.output-finding-questions-20.c) | Output Finding Questions 20 |
| 6.121 | [`6.121.output-finding-questions-21.c`](chapter6_Functions/6.121.output-finding-questions-21.c) | Output Finding Questions 21 |
| 6.122 | [`6.122.output-finding-questions-22.c`](chapter6_Functions/6.122.output-finding-questions-22.c) | Output Finding Questions 22 |
| 6.123 | [`6.123.output-finding-questions-23.c`](chapter6_Functions/6.123.output-finding-questions-23.c) | Output Finding Questions 23 |
| 6.124 | [`6.124.output-finding-questions-24.c`](chapter6_Functions/6.124.output-finding-questions-24.c) | Output Finding Questions 24 |
| 6.125 | [`6.125.output-finding-questions-25.c`](chapter6_Functions/6.125.output-finding-questions-25.c) | Output Finding Questions 25 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 7 — Recursions

**Programs:** 107

| No. | Program file | Program / topic |
|---:|---|---|
| 7.1 | [`7.1.tail-recursion.c`](chapter7_Recursions/7.1.tail-recursion.c) | Tail Recursion |
| 7.2 | [`7.2.tail-recursion-2.c`](chapter7_Recursions/7.2.tail-recursion-2.c) | Tail Recursion 2 |
| 7.3 | [`7.3.tail-recursion-3.c`](chapter7_Recursions/7.3.tail-recursion-3.c) | Tail Recursion 3 |
| 7.4 | [`7.4.tail-recursion-4.c`](chapter7_Recursions/7.4.tail-recursion-4.c) | Tail Recursion 4 |
| 7.5 | [`7.5.head-recursion.c`](chapter7_Recursions/7.5.head-recursion.c) | Head Recursion |
| 7.6 | [`7.6.decimal-to-binary-recursion.c`](chapter7_Recursions/7.6.decimal-to-binary-recursion.c) | Decimal To Binary Recursion |
| 7.7 | [`7.7.time-and-space-complexity.c`](chapter7_Recursions/7.7.time-and-space-complexity.c) | Time And Space Complexity |
| 7.8 | [`7.8.space-complexity.c`](chapter7_Recursions/7.8.space-complexity.c) | Space Complexity |
| 7.9 | [`7.9.space-complexity-2.c`](chapter7_Recursions/7.9.space-complexity-2.c) | Space Complexity 2 |
| 7.10 | [`7.10.time-and-space-complexity-2.c`](chapter7_Recursions/7.10.time-and-space-complexity-2.c) | Time And Space Complexity 2 |
| 7.11 | [`7.11.linear-recursion.c`](chapter7_Recursions/7.11.linear-recursion.c) | Linear Recursion |
| 7.12 | [`7.12.factorial-using-recursion.c`](chapter7_Recursions/7.12.factorial-using-recursion.c) | Factorial Using Recursion |
| 7.13 | [`7.13.factorial-using-recursion-2.c`](chapter7_Recursions/7.13.factorial-using-recursion-2.c) | Factorial Using Recursion 2 |
| 7.14 | [`7.14.factorial-using-recursion-3.c`](chapter7_Recursions/7.14.factorial-using-recursion-3.c) | Factorial Using Recursion 3 |
| 7.15 | [`7.15.factorial-using-recursion-4.c`](chapter7_Recursions/7.15.factorial-using-recursion-4.c) | Factorial Using Recursion 4 |
| 7.16 | [`7.16.using-an-accumulator.c`](chapter7_Recursions/7.16.using-an-accumulator.c) | Using An Accumulator |
| 7.17 | [`7.17.using-a-static-variable.c`](chapter7_Recursions/7.17.using-a-static-variable.c) | Using A Static Variable |
| 7.18 | [`7.18.tree-recursion.c`](chapter7_Recursions/7.18.tree-recursion.c) | Tree Recursion |
| 7.19 | [`7.19.postorder-traversal.c`](chapter7_Recursions/7.19.postorder-traversal.c) | Postorder Traversal |
| 7.20 | [`7.20.preorder-traversal.c`](chapter7_Recursions/7.20.preorder-traversal.c) | Preorder Traversal |
| 7.21 | [`7.21.fibonacci-using-recursion.c`](chapter7_Recursions/7.21.fibonacci-using-recursion.c) | Fibonacci Using Recursion |
| 7.22 | [`7.22.nested-recursion.c`](chapter7_Recursions/7.22.nested-recursion.c) | Nested Recursion |
| 7.23 | [`7.23.nested-recursion-2.c`](chapter7_Recursions/7.23.nested-recursion-2.c) | Nested Recursion 2 |
| 7.24 | [`7.24.indirect-recursion.c`](chapter7_Recursions/7.24.indirect-recursion.c) | Indirect Recursion |
| 7.25 | [`7.25.indirect-recursion-2.c`](chapter7_Recursions/7.25.indirect-recursion-2.c) | Indirect Recursion 2 |
| 7.26 | [`7.26.indirect-recursion-3.c`](chapter7_Recursions/7.26.indirect-recursion-3.c) | Indirect Recursion 3 |
| 7.27 | [`7.27.indirect-recursion-4.c`](chapter7_Recursions/7.27.indirect-recursion-4.c) | Indirect Recursion 4 |
| 7.28 | [`7.28.factorial-using-recursion-5.c`](chapter7_Recursions/7.28.factorial-using-recursion-5.c) | Factorial Using Recursion 5 |
| 7.29 | [`7.29.fibonacci-using-recursion-2.c`](chapter7_Recursions/7.29.fibonacci-using-recursion-2.c) | Fibonacci Using Recursion 2 |
| 7.30 | [`7.30.factorial-using-recursion-6.c`](chapter7_Recursions/7.30.factorial-using-recursion-6.c) | Factorial Using Recursion 6 |
| 7.31 | [`7.31.gcd-using-recursion.c`](chapter7_Recursions/7.31.gcd-using-recursion.c) | Gcd Using Recursion |
| 7.32 | [`7.32.gcd-using-recursion-2.c`](chapter7_Recursions/7.32.gcd-using-recursion-2.c) | Gcd Using Recursion 2 |
| 7.33 | [`7.33.compact-form-of-the-euclidean-algorithm.c`](chapter7_Recursions/7.33.compact-form-of-the-euclidean-algorithm.c) | Compact Form Of The Euclidean Algorithm |
| 7.34 | [`7.34.power-using-recursion.c`](chapter7_Recursions/7.34.power-using-recursion.c) | Power Using Recursion |
| 7.35 | [`7.35.power-using-recursion-2.c`](chapter7_Recursions/7.35.power-using-recursion-2.c) | Power Using Recursion 2 |
| 7.36 | [`7.36.fibonacci-using-recursion-3.c`](chapter7_Recursions/7.36.fibonacci-using-recursion-3.c) | Fibonacci Using Recursion 3 |
| 7.37 | [`7.37.fibonacci-using-recursion-4.c`](chapter7_Recursions/7.37.fibonacci-using-recursion-4.c) | Fibonacci Using Recursion 4 |
| 7.38 | [`7.38.palindrome-numbers.c`](chapter7_Recursions/7.38.palindrome-numbers.c) | Palindrome Numbers |
| 7.39 | [`7.39.passing-the-reversed-number-as-an-argument.c`](chapter7_Recursions/7.39.passing-the-reversed-number-as-an-argument.c) | Passing The Reversed Number As An Argument |
| 7.40 | [`7.40.prime-numbers.c`](chapter7_Recursions/7.40.prime-numbers.c) | Prime Numbers |
| 7.41 | [`7.41.armstrong-numbers.c`](chapter7_Recursions/7.41.armstrong-numbers.c) | Armstrong Numbers |
| 7.42 | [`7.42.perfect-numbers.c`](chapter7_Recursions/7.42.perfect-numbers.c) | Perfect Numbers |
| 7.43 | [`7.43.tower-of-hanoi.c`](chapter7_Recursions/7.43.tower-of-hanoi.c) | Tower Of Hanoi |
| 7.44 | [`7.44.recursive-pattern.c`](chapter7_Recursions/7.44.recursive-pattern.c) | Recursive Pattern |
| 7.45 | [`7.45.recursive-pattern-2.c`](chapter7_Recursions/7.45.recursive-pattern-2.c) | Recursive Pattern 2 |
| 7.46 | [`7.46.recursive-pattern-3.c`](chapter7_Recursions/7.46.recursive-pattern-3.c) | Recursive Pattern 3 |
| 7.47 | [`7.47.recursive-pattern-4.c`](chapter7_Recursions/7.47.recursive-pattern-4.c) | Recursive Pattern 4 |
| 7.48 | [`7.48.recursive-pattern-5.c`](chapter7_Recursions/7.48.recursive-pattern-5.c) | Recursive Pattern 5 |
| 7.49 | [`7.49.recursive-pattern-6.c`](chapter7_Recursions/7.49.recursive-pattern-6.c) | Recursive Pattern 6 |
| 7.50 | [`7.50.recursive-pattern-7.c`](chapter7_Recursions/7.50.recursive-pattern-7.c) | Recursive Pattern 7 |
| 7.51 | [`7.51.floyd-s-triangle.c`](chapter7_Recursions/7.51.floyd-s-triangle.c) | Floyd S Triangle |
| 7.52 | [`7.52.pascal-s-triangle.c`](chapter7_Recursions/7.52.pascal-s-triangle.c) | Pascal S Triangle |
| 7.53 | [`7.53.inverted-pascal-s-triangle.c`](chapter7_Recursions/7.53.inverted-pascal-s-triangle.c) | Inverted Pascal S Triangle |
| 7.54 | [`7.54.combining-the-two-triangles.c`](chapter7_Recursions/7.54.combining-the-two-triangles.c) | Combining The Two Triangles |
| 7.55 | [`7.55.logarithmic-recursion.c`](chapter7_Recursions/7.55.logarithmic-recursion.c) | Logarithmic Recursion |
| 7.56 | [`7.56.recursive-main-function.c`](chapter7_Recursions/7.56.recursive-main-function.c) | Recursive Main Function |
| 7.57 | [`7.57.recursive-main-function-2.c`](chapter7_Recursions/7.57.recursive-main-function-2.c) | Recursive Main Function 2 |
| 7.58 | [`7.58.recursive-main-function-3.c`](chapter7_Recursions/7.58.recursive-main-function-3.c) | Recursive Main Function 3 |
| 7.59 | [`7.59.recursive-call-using-an-empty-statement.c`](chapter7_Recursions/7.59.recursive-call-using-an-empty-statement.c) | Recursive Call Using An Empty Statement |
| 7.60 | [`7.60.using-a-static-variable-2.c`](chapter7_Recursions/7.60.using-a-static-variable-2.c) | Using A Static Variable 2 |
| 7.61 | [`7.61.using-a-static-variable-3.c`](chapter7_Recursions/7.61.using-a-static-variable-3.c) | Using A Static Variable 3 |
| 7.62 | [`7.62.find-out-the-output.c`](chapter7_Recursions/7.62.find-out-the-output.c) | Find Out The Output |
| 7.63 | [`7.63.find-out-the-output-2.c`](chapter7_Recursions/7.63.find-out-the-output-2.c) | Find Out The Output 2 |
| 7.64 | [`7.64.find-out-the-output-3.c`](chapter7_Recursions/7.64.find-out-the-output-3.c) | Find Out The Output 3 |
| 7.65 | [`7.65.find-out-the-output-4.c`](chapter7_Recursions/7.65.find-out-the-output-4.c) | Find Out The Output 4 |
| 7.66 | [`7.66.find-out-the-output-5.c`](chapter7_Recursions/7.66.find-out-the-output-5.c) | Find Out The Output 5 |
| 7.67 | [`7.67.find-out-the-output-6.c`](chapter7_Recursions/7.67.find-out-the-output-6.c) | Find Out The Output 6 |
| 7.68 | [`7.68.find-out-the-output-7.c`](chapter7_Recursions/7.68.find-out-the-output-7.c) | Find Out The Output 7 |
| 7.69 | [`7.69.find-out-the-output-8.c`](chapter7_Recursions/7.69.find-out-the-output-8.c) | Find Out The Output 8 |
| 7.70 | [`7.70.find-out-the-output-9.c`](chapter7_Recursions/7.70.find-out-the-output-9.c) | Find Out The Output 9 |
| 7.71 | [`7.71.find-out-the-output-10.c`](chapter7_Recursions/7.71.find-out-the-output-10.c) | Find Out The Output 10 |
| 7.72 | [`7.72.find-out-the-output-11.c`](chapter7_Recursions/7.72.find-out-the-output-11.c) | Find Out The Output 11 |
| 7.73 | [`7.73.find-out-the-output-12.c`](chapter7_Recursions/7.73.find-out-the-output-12.c) | Find Out The Output 12 |
| 7.74 | [`7.74.find-out-the-output-13.c`](chapter7_Recursions/7.74.find-out-the-output-13.c) | Find Out The Output 13 |
| 7.75 | [`7.75.find-out-the-output-14.c`](chapter7_Recursions/7.75.find-out-the-output-14.c) | Find Out The Output 14 |
| 7.76 | [`7.76.find-out-the-output-15.c`](chapter7_Recursions/7.76.find-out-the-output-15.c) | Find Out The Output 15 |
| 7.77 | [`7.77.find-out-the-output-16.c`](chapter7_Recursions/7.77.find-out-the-output-16.c) | Find Out The Output 16 |
| 7.78 | [`7.78.find-out-the-output-17.c`](chapter7_Recursions/7.78.find-out-the-output-17.c) | Find Out The Output 17 |
| 7.79 | [`7.79.find-out-the-output-18.c`](chapter7_Recursions/7.79.find-out-the-output-18.c) | Find Out The Output 18 |
| 7.80 | [`7.80.find-out-the-output-19.c`](chapter7_Recursions/7.80.find-out-the-output-19.c) | Find Out The Output 19 |
| 7.81 | [`7.81.find-out-the-output-20.c`](chapter7_Recursions/7.81.find-out-the-output-20.c) | Find Out The Output 20 |
| 7.82 | [`7.82.find-out-the-output-21.c`](chapter7_Recursions/7.82.find-out-the-output-21.c) | Find Out The Output 21 |
| 7.83 | [`7.83.find-out-the-output-22.c`](chapter7_Recursions/7.83.find-out-the-output-22.c) | Find Out The Output 22 |
| 7.84 | [`7.84.find-out-the-output-23.c`](chapter7_Recursions/7.84.find-out-the-output-23.c) | Find Out The Output 23 |
| 7.85 | [`7.85.find-out-the-output-24.c`](chapter7_Recursions/7.85.find-out-the-output-24.c) | Find Out The Output 24 |
| 7.86 | [`7.86.find-out-the-output-25.c`](chapter7_Recursions/7.86.find-out-the-output-25.c) | Find Out The Output 25 |
| 7.87 | [`7.87.find-out-the-output-26.c`](chapter7_Recursions/7.87.find-out-the-output-26.c) | Find Out The Output 26 |
| 7.88 | [`7.88.find-out-the-output-27.c`](chapter7_Recursions/7.88.find-out-the-output-27.c) | Find Out The Output 27 |
| 7.89 | [`7.89.find-out-the-output-28.c`](chapter7_Recursions/7.89.find-out-the-output-28.c) | Find Out The Output 28 |
| 7.90 | [`7.90.find-out-the-output-29.c`](chapter7_Recursions/7.90.find-out-the-output-29.c) | Find Out The Output 29 |
| 7.91 | [`7.91.find-out-the-output-30.c`](chapter7_Recursions/7.91.find-out-the-output-30.c) | Find Out The Output 30 |
| 7.92 | [`7.92.find-out-the-output-31.c`](chapter7_Recursions/7.92.find-out-the-output-31.c) | Find Out The Output 31 |
| 7.93 | [`7.93.find-out-the-output-32.c`](chapter7_Recursions/7.93.find-out-the-output-32.c) | Find Out The Output 32 |
| 7.94 | [`7.94.find-out-the-output-33.c`](chapter7_Recursions/7.94.find-out-the-output-33.c) | Find Out The Output 33 |
| 7.95 | [`7.95.find-out-the-output-34.c`](chapter7_Recursions/7.95.find-out-the-output-34.c) | Find Out The Output 34 |
| 7.96 | [`7.96.find-out-the-output-35.c`](chapter7_Recursions/7.96.find-out-the-output-35.c) | Find Out The Output 35 |
| 7.97 | [`7.97.find-out-the-output-36.c`](chapter7_Recursions/7.97.find-out-the-output-36.c) | Find Out The Output 36 |
| 7.98 | [`7.98.find-out-the-output-37.c`](chapter7_Recursions/7.98.find-out-the-output-37.c) | Find Out The Output 37 |
| 7.99 | [`7.99.find-out-the-output-38.c`](chapter7_Recursions/7.99.find-out-the-output-38.c) | Find Out The Output 38 |
| 7.100 | [`7.100.find-out-the-output-39.c`](chapter7_Recursions/7.100.find-out-the-output-39.c) | Find Out The Output 39 |
| 7.101 | [`7.101.find-out-the-output-40.c`](chapter7_Recursions/7.101.find-out-the-output-40.c) | Find Out The Output 40 |
| 7.102 | [`7.102.find-out-the-output-41.c`](chapter7_Recursions/7.102.find-out-the-output-41.c) | Find Out The Output 41 |
| 7.103 | [`7.103.find-out-the-output-42.c`](chapter7_Recursions/7.103.find-out-the-output-42.c) | Find Out The Output 42 |
| 7.104 | [`7.104.find-out-the-output-43.c`](chapter7_Recursions/7.104.find-out-the-output-43.c) | Find Out The Output 43 |
| 7.105 | [`7.105.find-out-the-output-44.c`](chapter7_Recursions/7.105.find-out-the-output-44.c) | Find Out The Output 44 |
| 7.106 | [`7.106.find-out-the-output-45.c`](chapter7_Recursions/7.106.find-out-the-output-45.c) | Find Out The Output 45 |
| 7.107 | [`7.107.find-out-the-output-46.c`](chapter7_Recursions/7.107.find-out-the-output-46.c) | Find Out The Output 46 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 8 — Pointers

**Programs:** 116

| No. | Program file | Program / topic |
|---:|---|---|
| 8.1 | [`8.1.pointer-initialization.c`](chapter8_Pointers/8.1.pointer-initialization.c) | Pointer Initialization |
| 8.2 | [`8.2.a-simple-analogy.c`](chapter8_Pointers/8.2.a-simple-analogy.c) | A Simple Analogy |
| 8.3 | [`8.3.a-simple-analogy-2.c`](chapter8_Pointers/8.3.a-simple-analogy-2.c) | A Simple Analogy 2 |
| 8.4 | [`8.4.pointer-assignment.c`](chapter8_Pointers/8.4.pointer-assignment.c) | Pointer Assignment |
| 8.5 | [`8.5.pointer-assignment-2.c`](chapter8_Pointers/8.5.pointer-assignment-2.c) | Pointer Assignment 2 |
| 8.6 | [`8.6.copying-a-pointer.c`](chapter8_Pointers/8.6.copying-a-pointer.c) | Copying A Pointer |
| 8.7 | [`8.7.copying-a-pointer-2.c`](chapter8_Pointers/8.7.copying-a-pointer-2.c) | Copying A Pointer 2 |
| 8.8 | [`8.8.copying-a-pointer-3.c`](chapter8_Pointers/8.8.copying-a-pointer-3.c) | Copying A Pointer 3 |
| 8.9 | [`8.9.a-simple-rule-to-remember.c`](chapter8_Pointers/8.9.a-simple-rule-to-remember.c) | A Simple Rule To Remember |
| 8.10 | [`8.10.changing-pointer-address.c`](chapter8_Pointers/8.10.changing-pointer-address.c) | Changing Pointer Address |
| 8.11 | [`8.11.changing-pointer-address-2.c`](chapter8_Pointers/8.11.changing-pointer-address-2.c) | Changing Pointer Address 2 |
| 8.12 | [`8.12.another-example.c`](chapter8_Pointers/8.12.another-example.c) | Another Example |
| 8.13 | [`8.13.size-of-a-pointer.c`](chapter8_Pointers/8.13.size-of-a-pointer.c) | Size Of A Pointer |
| 8.14 | [`8.14.an-example-of-dereferencing.c`](chapter8_Pointers/8.14.an-example-of-dereferencing.c) | An Example Of Dereferencing |
| 8.15 | [`8.15.precedence-of-dereferencing-and-increment-operators.c`](chapter8_Pointers/8.15.precedence-of-dereferencing-and-increment-operators.c) | Precedence Of Dereferencing And Increment Operators |
| 8.16 | [`8.16.why-are-parentheses-important.c`](chapter8_Pointers/8.16.why-are-parentheses-important.c) | Why Are Parentheses Important |
| 8.17 | [`8.17.prefix-increment-with-pointers.c`](chapter8_Pointers/8.17.prefix-increment-with-pointers.c) | Prefix Increment With Pointers |
| 8.18 | [`8.18.dynamic-memory-allocation.c`](chapter8_Pointers/8.18.dynamic-memory-allocation.c) | Dynamic Memory Allocation |
| 8.19 | [`8.19.a-simpler-equivalent-program.c`](chapter8_Pointers/8.19.a-simpler-equivalent-program.c) | A Simpler Equivalent Program |
| 8.20 | [`8.20.subtraction-of-pointers.c`](chapter8_Pointers/8.20.subtraction-of-pointers.c) | Subtraction Of Pointers |
| 8.21 | [`8.21.subtracting-pointers-with-one-element-between-them.c`](chapter8_Pointers/8.21.subtracting-pointers-with-one-element-between-them.c) | Subtracting Pointers With One Element Between Them |
| 8.22 | [`8.22.pointer-subtraction-with-arrays.c`](chapter8_Pointers/8.22.pointer-subtraction-with-arrays.c) | Pointer Subtraction With Arrays |
| 8.23 | [`8.23.wild-pointer.c`](chapter8_Pointers/8.23.wild-pointer.c) | Wild Pointer |
| 8.24 | [`8.24.null-pointer.c`](chapter8_Pointers/8.24.null-pointer.c) | Null Pointer |
| 8.25 | [`8.25.null-pointer-2.c`](chapter8_Pointers/8.25.null-pointer-2.c) | Null Pointer 2 |
| 8.26 | [`8.26.void-pointer.c`](chapter8_Pointers/8.26.void-pointer.c) | Void Pointer |
| 8.27 | [`8.27.void-pointer-2.c`](chapter8_Pointers/8.27.void-pointer-2.c) | Void Pointer 2 |
| 8.28 | [`8.28.void-pointer-3.c`](chapter8_Pointers/8.28.void-pointer-3.c) | Void Pointer 3 |
| 8.29 | [`8.29.void-pointer-4.c`](chapter8_Pointers/8.29.void-pointer-4.c) | Void Pointer 4 |
| 8.30 | [`8.30.void-pointer-5.c`](chapter8_Pointers/8.30.void-pointer-5.c) | Void Pointer 5 |
| 8.31 | [`8.31.void-pointer-6.c`](chapter8_Pointers/8.31.void-pointer-6.c) | Void Pointer 6 |
| 8.32 | [`8.32.void-pointer-7.c`](chapter8_Pointers/8.32.void-pointer-7.c) | Void Pointer 7 |
| 8.33 | [`8.33.dangling-pointer.c`](chapter8_Pointers/8.33.dangling-pointer.c) | Dangling Pointer |
| 8.34 | [`8.34.using-a-static-variable.c`](chapter8_Pointers/8.34.using-a-static-variable.c) | Using A Static Variable |
| 8.35 | [`8.35.returning-the-value-instead-of-the-address.c`](chapter8_Pointers/8.35.returning-the-value-instead-of-the-address.c) | Returning The Value Instead Of The Address |
| 8.36 | [`8.36.dynamic-memory-allocation-2.c`](chapter8_Pointers/8.36.dynamic-memory-allocation-2.c) | Dynamic Memory Allocation 2 |
| 8.37 | [`8.37.constant-pointer.c`](chapter8_Pointers/8.37.constant-pointer.c) | Constant Pointer |
| 8.38 | [`8.38.constant-pointer-2.c`](chapter8_Pointers/8.38.constant-pointer-2.c) | Constant Pointer 2 |
| 8.39 | [`8.39.pointer-to-const.c`](chapter8_Pointers/8.39.pointer-to-const.c) | Pointer To Const |
| 8.40 | [`8.40.pointer-to-const-2.c`](chapter8_Pointers/8.40.pointer-to-const-2.c) | Pointer To Const 2 |
| 8.41 | [`8.41.pointer-to-const-3.c`](chapter8_Pointers/8.41.pointer-to-const-3.c) | Pointer To Const 3 |
| 8.42 | [`8.42.pointer-to-const-4.c`](chapter8_Pointers/8.42.pointer-to-const-4.c) | Pointer To Const 4 |
| 8.43 | [`8.43.double-pointer.c`](chapter8_Pointers/8.43.double-pointer.c) | Double Pointer |
| 8.44 | [`8.44.double-pointer-2.c`](chapter8_Pointers/8.44.double-pointer-2.c) | Double Pointer 2 |
| 8.45 | [`8.45.double-pointer-3.c`](chapter8_Pointers/8.45.double-pointer-3.c) | Double Pointer 3 |
| 8.46 | [`8.46.double-pointer-4.c`](chapter8_Pointers/8.46.double-pointer-4.c) | Double Pointer 4 |
| 8.47 | [`8.47.pointer-assignment-3.c`](chapter8_Pointers/8.47.pointer-assignment-3.c) | Pointer Assignment 3 |
| 8.48 | [`8.48.pointer-assignment-4.c`](chapter8_Pointers/8.48.pointer-assignment-4.c) | Pointer Assignment 4 |
| 8.49 | [`8.49.pointer-assignment-5.c`](chapter8_Pointers/8.49.pointer-assignment-5.c) | Pointer Assignment 5 |
| 8.50 | [`8.50.pointer-assignment-6.c`](chapter8_Pointers/8.50.pointer-assignment-6.c) | Pointer Assignment 6 |
| 8.51 | [`8.51.double-pointer-5.c`](chapter8_Pointers/8.51.double-pointer-5.c) | Double Pointer 5 |
| 8.52 | [`8.52.double-pointer-6.c`](chapter8_Pointers/8.52.double-pointer-6.c) | Double Pointer 6 |
| 8.53 | [`8.53.double-pointer-7.c`](chapter8_Pointers/8.53.double-pointer-7.c) | Double Pointer 7 |
| 8.54 | [`8.54.double-pointer-8.c`](chapter8_Pointers/8.54.double-pointer-8.c) | Double Pointer 8 |
| 8.55 | [`8.55.double-pointer-9.c`](chapter8_Pointers/8.55.double-pointer-9.c) | Double Pointer 9 |
| 8.56 | [`8.56.passing-a-pointer-to-a-function.c`](chapter8_Pointers/8.56.passing-a-pointer-to-a-function.c) | Passing A Pointer To A Function |
| 8.57 | [`8.57.passing-a-pointer-to-a-function-2.c`](chapter8_Pointers/8.57.passing-a-pointer-to-a-function-2.c) | Passing A Pointer To A Function 2 |
| 8.58 | [`8.58.changing-a-pointer-inside-a-function.c`](chapter8_Pointers/8.58.changing-a-pointer-inside-a-function.c) | Changing A Pointer Inside A Function |
| 8.59 | [`8.59.changing-a-pointer-inside-a-function-2.c`](chapter8_Pointers/8.59.changing-a-pointer-inside-a-function-2.c) | Changing A Pointer Inside A Function 2 |
| 8.60 | [`8.60.double-pointer-10.c`](chapter8_Pointers/8.60.double-pointer-10.c) | Double Pointer 10 |
| 8.61 | [`8.61.constant-pointer-3.c`](chapter8_Pointers/8.61.constant-pointer-3.c) | Constant Pointer 3 |
| 8.62 | [`8.62.constant-pointer-4.c`](chapter8_Pointers/8.62.constant-pointer-4.c) | Constant Pointer 4 |
| 8.63 | [`8.63.pointer-to-const-5.c`](chapter8_Pointers/8.63.pointer-to-const-5.c) | Pointer To Const 5 |
| 8.64 | [`8.64.pointer-to-const-6.c`](chapter8_Pointers/8.64.pointer-to-const-6.c) | Pointer To Const 6 |
| 8.65 | [`8.65.pointer-to-const-7.c`](chapter8_Pointers/8.65.pointer-to-const-7.c) | Pointer To Const 7 |
| 8.66 | [`8.66.pointer-to-const-8.c`](chapter8_Pointers/8.66.pointer-to-const-8.c) | Pointer To Const 8 |
| 8.67 | [`8.67.double-pointer-11.c`](chapter8_Pointers/8.67.double-pointer-11.c) | Double Pointer 11 |
| 8.68 | [`8.68.double-pointer-12.c`](chapter8_Pointers/8.68.double-pointer-12.c) | Double Pointer 12 |
| 8.69 | [`8.69.double-pointer-13.c`](chapter8_Pointers/8.69.double-pointer-13.c) | Double Pointer 13 |
| 8.70 | [`8.70.incorrect-method-swapping-the-pointer-parameters.c`](chapter8_Pointers/8.70.incorrect-method-swapping-the-pointer-parameters.c) | Incorrect Method Swapping The Pointer Parameters |
| 8.71 | [`8.71.correct-method-swapping-the-values.c`](chapter8_Pointers/8.71.correct-method-swapping-the-values.c) | Correct Method Swapping The Values |
| 8.72 | [`8.72.double-pointer-14.c`](chapter8_Pointers/8.72.double-pointer-14.c) | Double Pointer 14 |
| 8.73 | [`8.73.double-pointer-15.c`](chapter8_Pointers/8.73.double-pointer-15.c) | Double Pointer 15 |
| 8.74 | [`8.74.sizeof-operator.c`](chapter8_Pointers/8.74.sizeof-operator.c) | Sizeof Operator |
| 8.75 | [`8.75.sizeof-operator-2.c`](chapter8_Pointers/8.75.sizeof-operator-2.c) | Sizeof Operator 2 |
| 8.76 | [`8.76.pointer-arithmetic.c`](chapter8_Pointers/8.76.pointer-arithmetic.c) | Pointer Arithmetic |
| 8.77 | [`8.77.why-the-macro-cannot-directly-calculate-the-size-of-a-data-t.c`](chapter8_Pointers/8.77.why-the-macro-cannot-directly-calculate-the-size-of-a-data-t.c) | Why The Macro Cannot Directly Calculate The Size Of A Data T |
| 8.78 | [`8.78.using-typeof-to-construct-a-generic-size-macro.c`](chapter8_Pointers/8.78.using-typeof-to-construct-a-generic-size-macro.c) | Using Typeof To Construct A Generic Size Macro |
| 8.79 | [`8.79.using-typeof-to-construct-a-generic-size-macro-2.c`](chapter8_Pointers/8.79.using-typeof-to-construct-a-generic-size-macro-2.c) | Using Typeof To Construct A Generic Size Macro 2 |
| 8.80 | [`8.80.pointer-arithmetic-2.c`](chapter8_Pointers/8.80.pointer-arithmetic-2.c) | Pointer Arithmetic 2 |
| 8.81 | [`8.81.pointer-arithmetic-3.c`](chapter8_Pointers/8.81.pointer-arithmetic-3.c) | Pointer Arithmetic 3 |
| 8.82 | [`8.82.summary.c`](chapter8_Pointers/8.82.summary.c) | Summary |
| 8.83 | [`8.83.properties-of-the-sizeof.c`](chapter8_Pointers/8.83.properties-of-the-sizeof.c) | Properties Of The Sizeof |
| 8.84 | [`8.84.properties-of-the-sizeof-2.c`](chapter8_Pointers/8.84.properties-of-the-sizeof-2.c) | Properties Of The Sizeof 2 |
| 8.85 | [`8.85.properties-of-the-sizeof-3.c`](chapter8_Pointers/8.85.properties-of-the-sizeof-3.c) | Properties Of The Sizeof 3 |
| 8.86 | [`8.86.properties-of-the-sizeof-4.c`](chapter8_Pointers/8.86.properties-of-the-sizeof-4.c) | Properties Of The Sizeof 4 |
| 8.87 | [`8.87.double-pointer-16.c`](chapter8_Pointers/8.87.double-pointer-16.c) | Double Pointer 16 |
| 8.88 | [`8.88.double-pointer-17.c`](chapter8_Pointers/8.88.double-pointer-17.c) | Double Pointer 17 |
| 8.89 | [`8.89.void-pointer-8.c`](chapter8_Pointers/8.89.void-pointer-8.c) | Void Pointer 8 |
| 8.90 | [`8.90.double-pointer-18.c`](chapter8_Pointers/8.90.double-pointer-18.c) | Double Pointer 18 |
| 8.91 | [`8.91.double-pointer-19.c`](chapter8_Pointers/8.91.double-pointer-19.c) | Double Pointer 19 |
| 8.92 | [`8.92.double-pointer-20.c`](chapter8_Pointers/8.92.double-pointer-20.c) | Double Pointer 20 |
| 8.93 | [`8.93.double-pointer-21.c`](chapter8_Pointers/8.93.double-pointer-21.c) | Double Pointer 21 |
| 8.94 | [`8.94.double-pointer-22.c`](chapter8_Pointers/8.94.double-pointer-22.c) | Double Pointer 22 |
| 8.95 | [`8.95.double-pointer-23.c`](chapter8_Pointers/8.95.double-pointer-23.c) | Double Pointer 23 |
| 8.96 | [`8.96.double-pointer-24.c`](chapter8_Pointers/8.96.double-pointer-24.c) | Double Pointer 24 |
| 8.97 | [`8.97.double-pointer-25.c`](chapter8_Pointers/8.97.double-pointer-25.c) | Double Pointer 25 |
| 8.98 | [`8.98.void-pointer-9.c`](chapter8_Pointers/8.98.void-pointer-9.c) | Void Pointer 9 |
| 8.99 | [`8.99.void-pointer-10.c`](chapter8_Pointers/8.99.void-pointer-10.c) | Void Pointer 10 |
| 8.100 | [`8.100.find-out-the-output.c`](chapter8_Pointers/8.100.find-out-the-output.c) | Find Out The Output |
| 8.101 | [`8.101.find-out-the-output-2.c`](chapter8_Pointers/8.101.find-out-the-output-2.c) | Find Out The Output 2 |
| 8.102 | [`8.102.find-out-the-output-3.c`](chapter8_Pointers/8.102.find-out-the-output-3.c) | Find Out The Output 3 |
| 8.103 | [`8.103.double-pointer-26.c`](chapter8_Pointers/8.103.double-pointer-26.c) | Double Pointer 26 |
| 8.104 | [`8.104.double-pointer-27.c`](chapter8_Pointers/8.104.double-pointer-27.c) | Double Pointer 27 |
| 8.105 | [`8.105.double-pointer-28.c`](chapter8_Pointers/8.105.double-pointer-28.c) | Double Pointer 28 |
| 8.106 | [`8.106.double-pointer-29.c`](chapter8_Pointers/8.106.double-pointer-29.c) | Double Pointer 29 |
| 8.107 | [`8.107.find-out-the-error.c`](chapter8_Pointers/8.107.find-out-the-error.c) | Find Out The Error |
| 8.108 | [`8.108.find-out-the-error-2.c`](chapter8_Pointers/8.108.find-out-the-error-2.c) | Find Out The Error 2 |
| 8.109 | [`8.109.find-out-the-error-3.c`](chapter8_Pointers/8.109.find-out-the-error-3.c) | Find Out The Error 3 |
| 8.110 | [`8.110.void-pointer-11.c`](chapter8_Pointers/8.110.void-pointer-11.c) | Void Pointer 11 |
| 8.111 | [`8.111.double-pointer-30.c`](chapter8_Pointers/8.111.double-pointer-30.c) | Double Pointer 30 |
| 8.112 | [`8.112.find-out-the-error-4.c`](chapter8_Pointers/8.112.find-out-the-error-4.c) | Find Out The Error 4 |
| 8.113 | [`8.113.find-out-the-error-5.c`](chapter8_Pointers/8.113.find-out-the-error-5.c) | Find Out The Error 5 |
| 8.114 | [`8.114.find-out-the-error-6.c`](chapter8_Pointers/8.114.find-out-the-error-6.c) | Find Out The Error 6 |
| 8.115 | [`8.115.find-out-the-error-7.c`](chapter8_Pointers/8.115.find-out-the-error-7.c) | Find Out The Error 7 |
| 8.116 | [`8.116.find-out-the-error-8.c`](chapter8_Pointers/8.116.find-out-the-error-8.c) | Find Out The Error 8 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 9 — Arrays

**Programs:** 272

| No. | Program file | Program / topic |
|---:|---|---|
| 9.1 | [`9.1.demonstration-initializing-an-int-array.c`](chapter9_Arrays/9.1.demonstration-initializing-an-int-array.c) | Demonstration Initializing An Int Array |
| 9.2 | [`9.2.demonstration-initializing-a-char-array.c`](chapter9_Arrays/9.2.demonstration-initializing-a-char-array.c) | Demonstration Initializing A Char Array |
| 9.3 | [`9.3.array-length-using-sizeof.c`](chapter9_Arrays/9.3.array-length-using-sizeof.c) | Array Length Using Sizeof |
| 9.4 | [`9.4.array-length-using-sizeof-2.c`](chapter9_Arrays/9.4.array-length-using-sizeof-2.c) | Array Length Using Sizeof 2 |
| 9.5 | [`9.5.demonstration-an-uninitialized-array.c`](chapter9_Arrays/9.5.demonstration-an-uninitialized-array.c) | Demonstration An Uninitialized Array |
| 9.6 | [`9.6.the-simple-fix.c`](chapter9_Arrays/9.6.the-simple-fix.c) | The Simple Fix |
| 9.7 | [`9.7.garbage-value-in-a-normal-variable.c`](chapter9_Arrays/9.7.garbage-value-in-a-normal-variable.c) | Garbage Value In A Normal Variable |
| 9.8 | [`9.8.filling-an-array-with-rand-values.c`](chapter9_Arrays/9.8.filling-an-array-with-rand-values.c) | Filling An Array With Rand Values |
| 9.9 | [`9.9.restricting-the-range-from-0-to-100.c`](chapter9_Arrays/9.9.restricting-the-range-from-0-to-100.c) | Restricting The Range From 0 To 100 |
| 9.10 | [`9.10.restricting-the-range-from-50-to-100.c`](chapter9_Arrays/9.10.restricting-the-range-from-50-to-100.c) | Restricting The Range From 50 To 100 |
| 9.11 | [`9.11.maximum-element.c`](chapter9_Arrays/9.11.maximum-element.c) | Maximum Element |
| 9.12 | [`9.12.array-as-function-argument.c`](chapter9_Arrays/9.12.array-as-function-argument.c) | Array As Function Argument |
| 9.13 | [`9.13.read-and-display-array.c`](chapter9_Arrays/9.13.read-and-display-array.c) | Read And Display Array |
| 9.14 | [`9.14.demonstration-reading-out-of-bounds.c`](chapter9_Arrays/9.14.demonstration-reading-out-of-bounds.c) | Demonstration Reading Out Of Bounds |
| 9.15 | [`9.15.demonstration-writing-out-of-bounds.c`](chapter9_Arrays/9.15.demonstration-writing-out-of-bounds.c) | Demonstration Writing Out Of Bounds |
| 9.16 | [`9.16.array-length-using-sizeof-3.c`](chapter9_Arrays/9.16.array-length-using-sizeof-3.c) | Array Length Using Sizeof 3 |
| 9.17 | [`9.17.array-length-using-sizeof-4.c`](chapter9_Arrays/9.17.array-length-using-sizeof-4.c) | Array Length Using Sizeof 4 |
| 9.18 | [`9.18.mistake-3-providing-more-initializer-values-than-the-declare.c`](chapter9_Arrays/9.18.mistake-3-providing-more-initializer-values-than-the-declare.c) | Mistake 3 Providing More Initializer Values Than The Declare |
| 9.19 | [`9.19.the-reversal-program.c`](chapter9_Arrays/9.19.the-reversal-program.c) | The Reversal Program |
| 9.20 | [`9.20.a-recursive-version-of-reversal.c`](chapter9_Arrays/9.20.a-recursive-version-of-reversal.c) | A Recursive Version Of Reversal |
| 9.21 | [`9.21.array-as-function-argument-2.c`](chapter9_Arrays/9.21.array-as-function-argument-2.c) | Array As Function Argument 2 |
| 9.22 | [`9.22.array-as-function-argument-3.c`](chapter9_Arrays/9.22.array-as-function-argument-3.c) | Array As Function Argument 3 |
| 9.23 | [`9.23.array-as-function-argument-4.c`](chapter9_Arrays/9.23.array-as-function-argument-4.c) | Array As Function Argument 4 |
| 9.24 | [`9.24.array-as-function-argument-5.c`](chapter9_Arrays/9.24.array-as-function-argument-5.c) | Array As Function Argument 5 |
| 9.25 | [`9.25.array-searching.c`](chapter9_Arrays/9.25.array-searching.c) | Array Searching |
| 9.26 | [`9.26.confirming-the-address-mapping-formula-with-p.c`](chapter9_Arrays/9.26.confirming-the-address-mapping-formula-with-p.c) | Confirming The Address Mapping Formula With P |
| 9.27 | [`9.27.pointer-and-array.c`](chapter9_Arrays/9.27.pointer-and-array.c) | Pointer And Array |
| 9.28 | [`9.28.pointer-and-array-2.c`](chapter9_Arrays/9.28.pointer-and-array-2.c) | Pointer And Array 2 |
| 9.29 | [`9.29.pointer-and-array-3.c`](chapter9_Arrays/9.29.pointer-and-array-3.c) | Pointer And Array 3 |
| 9.30 | [`9.30.why-arrincrement-is-an-error-the-array-is-constant.c`](chapter9_Arrays/9.30.why-arrincrement-is-an-error-the-array-is-constant.c) | Why Arrincrement Is An Error The Array Is Constant |
| 9.31 | [`9.31.pointer-and-array-4.c`](chapter9_Arrays/9.31.pointer-and-array-4.c) | Pointer And Array 4 |
| 9.32 | [`9.32.three-equivalent-ways-to-access-the-same-element.c`](chapter9_Arrays/9.32.three-equivalent-ways-to-access-the-same-element.c) | Three Equivalent Ways To Access The Same Element |
| 9.33 | [`9.33.pointer-and-array-5.c`](chapter9_Arrays/9.33.pointer-and-array-5.c) | Pointer And Array 5 |
| 9.34 | [`9.34.pointer-and-array-6.c`](chapter9_Arrays/9.34.pointer-and-array-6.c) | Pointer And Array 6 |
| 9.35 | [`9.35.pointer-and-array-7.c`](chapter9_Arrays/9.35.pointer-and-array-7.c) | Pointer And Array 7 |
| 9.36 | [`9.36.pointer-and-array-8.c`](chapter9_Arrays/9.36.pointer-and-array-8.c) | Pointer And Array 8 |
| 9.37 | [`9.37.pointer-and-array-9.c`](chapter9_Arrays/9.37.pointer-and-array-9.c) | Pointer And Array 9 |
| 9.38 | [`9.38.p1increment-and-p2decrement-do-not-modify-the-array.c`](chapter9_Arrays/9.38.p1increment-and-p2decrement-do-not-modify-the-array.c) | P1Increment And P2Decrement Do Not Modify The Array |
| 9.39 | [`9.39.postfix-dereference-and-assign-k-pincrement.c`](chapter9_Arrays/9.39.postfix-dereference-and-assign-k-pincrement.c) | Postfix Dereference And Assign K Pincrement |
| 9.40 | [`9.40.rearranged-k-p-increment.c`](chapter9_Arrays/9.40.rearranged-k-p-increment.c) | Rearranged K P Increment |
| 9.41 | [`9.41.confirming-the-address-mapping-formula-with-p-2.c`](chapter9_Arrays/9.41.confirming-the-address-mapping-formula-with-p-2.c) | Confirming The Address Mapping Formula With P 2 |
| 9.42 | [`9.42.pointer-and-array-10.c`](chapter9_Arrays/9.42.pointer-and-array-10.c) | Pointer And Array 10 |
| 9.43 | [`9.43.pointer-and-array-11.c`](chapter9_Arrays/9.43.pointer-and-array-11.c) | Pointer And Array 11 |
| 9.44 | [`9.44.pointer-and-array-12.c`](chapter9_Arrays/9.44.pointer-and-array-12.c) | Pointer And Array 12 |
| 9.45 | [`9.45.why-arrincrement-is-an-error-the-array-is-constant-2.c`](chapter9_Arrays/9.45.why-arrincrement-is-an-error-the-array-is-constant-2.c) | Why Arrincrement Is An Error The Array Is Constant 2 |
| 9.46 | [`9.46.pointer-and-array-13.c`](chapter9_Arrays/9.46.pointer-and-array-13.c) | Pointer And Array 13 |
| 9.47 | [`9.47.three-equivalent-ways-to-access-the-same-element-2.c`](chapter9_Arrays/9.47.three-equivalent-ways-to-access-the-same-element-2.c) | Three Equivalent Ways To Access The Same Element 2 |
| 9.48 | [`9.48.pointer-and-array-14.c`](chapter9_Arrays/9.48.pointer-and-array-14.c) | Pointer And Array 14 |
| 9.49 | [`9.49.pointer-and-array-15.c`](chapter9_Arrays/9.49.pointer-and-array-15.c) | Pointer And Array 15 |
| 9.50 | [`9.50.pointer-and-array-16.c`](chapter9_Arrays/9.50.pointer-and-array-16.c) | Pointer And Array 16 |
| 9.51 | [`9.51.pointer-and-array-17.c`](chapter9_Arrays/9.51.pointer-and-array-17.c) | Pointer And Array 17 |
| 9.52 | [`9.52.pointer-and-array-18.c`](chapter9_Arrays/9.52.pointer-and-array-18.c) | Pointer And Array 18 |
| 9.53 | [`9.53.p1increment-and-p2decrement-do-not-modify-the-array-2.c`](chapter9_Arrays/9.53.p1increment-and-p2decrement-do-not-modify-the-array-2.c) | P1Increment And P2Decrement Do Not Modify The Array 2 |
| 9.54 | [`9.54.postfix-dereference-and-assign-k-pincrement-2.c`](chapter9_Arrays/9.54.postfix-dereference-and-assign-k-pincrement-2.c) | Postfix Dereference And Assign K Pincrement 2 |
| 9.55 | [`9.55.rearranged-k-p-increment-2.c`](chapter9_Arrays/9.55.rearranged-k-p-increment-2.c) | Rearranged K P Increment 2 |
| 9.56 | [`9.56.the-prefix-family-increment-p-and-incrementp.c`](chapter9_Arrays/9.56.the-prefix-family-increment-p-and-incrementp.c) | The Prefix Family Increment P And Incrementp |
| 9.57 | [`9.57.the-prefix-family-increment-p-and-incrementp-2.c`](chapter9_Arrays/9.57.the-prefix-family-increment-p-and-incrementp-2.c) | The Prefix Family Increment P And Incrementp 2 |
| 9.58 | [`9.58.effect-on-the-underlying-array-the-increment-p1-decrement-p2.c`](chapter9_Arrays/9.58.effect-on-the-underlying-array-the-increment-p1-decrement-p2.c) | Effect On The Underlying Array The Increment P1 Decrement P2 |
| 9.59 | [`9.59.effect-on-the-underlying-array-the-increment-p1-decrement-p2-2.c`](chapter9_Arrays/9.59.effect-on-the-underlying-array-the-increment-p1-decrement-p2-2.c) | Effect On The Underlying Array The Increment P1 Decrement P2 2 |
| 9.60 | [`9.60.printf-evaluates-arguments-right-to-left.c`](chapter9_Arrays/9.60.printf-evaluates-arguments-right-to-left.c) | Printf Evaluates Arguments Right To Left |
| 9.61 | [`9.61.the-same-trap-with-prefix-operators.c`](chapter9_Arrays/9.61.the-same-trap-with-prefix-operators.c) | The Same Trap With Prefix Operators |
| 9.62 | [`9.62.combining-postfix-operators-that-do-modify-the-array.c`](chapter9_Arrays/9.62.combining-postfix-operators-that-do-modify-the-array.c) | Combining Postfix Operators That Do Modify The Array |
| 9.63 | [`9.63.pointer-and-array-19.c`](chapter9_Arrays/9.63.pointer-and-array-19.c) | Pointer And Array 19 |
| 9.64 | [`9.64.pointer-and-array-20.c`](chapter9_Arrays/9.64.pointer-and-array-20.c) | Pointer And Array 20 |
| 9.65 | [`9.65.combining-multiple-operators-increment-pincrement.c`](chapter9_Arrays/9.65.combining-multiple-operators-increment-pincrement.c) | Combining Multiple Operators Increment Pincrement |
| 9.66 | [`9.66.combining-multiple-operators-increment-pincrement-2.c`](chapter9_Arrays/9.66.combining-multiple-operators-increment-pincrement-2.c) | Combining Multiple Operators Increment Pincrement 2 |
| 9.67 | [`9.67.lvalue-required-errors.c`](chapter9_Arrays/9.67.lvalue-required-errors.c) | Lvalue Required Errors |
| 9.68 | [`9.68.increment-on-the-left-side-of-an-assignment.c`](chapter9_Arrays/9.68.increment-on-the-left-side-of-an-assignment.c) | Increment On The Left Side Of An Assignment |
| 9.69 | [`9.69.increment-on-the-left-side-of-an-assignment-2.c`](chapter9_Arrays/9.69.increment-on-the-left-side-of-an-assignment-2.c) | Increment On The Left Side Of An Assignment 2 |
| 9.70 | [`9.70.increment-on-the-left-side-of-an-assignment-3.c`](chapter9_Arrays/9.70.increment-on-the-left-side-of-an-assignment-3.c) | Increment On The Left Side Of An Assignment 3 |
| 9.71 | [`9.71.increment-on-the-left-side-of-an-assignment-4.c`](chapter9_Arrays/9.71.increment-on-the-left-side-of-an-assignment-4.c) | Increment On The Left Side Of An Assignment 4 |
| 9.72 | [`9.72.a-combined-case-that-also-fails.c`](chapter9_Arrays/9.72.a-combined-case-that-also-fails.c) | A Combined Case That Also Fails |
| 9.73 | [`9.73.a-combined-case-that-also-fails-2.c`](chapter9_Arrays/9.73.a-combined-case-that-also-fails-2.c) | A Combined Case That Also Fails 2 |
| 9.74 | [`9.74.comprehensive-comparison-of-the-five-core-patterns.c`](chapter9_Arrays/9.74.comprehensive-comparison-of-the-five-core-patterns.c) | Comprehensive Comparison Of The Five Core Patterns |
| 9.75 | [`9.75.pointer-and-array-21.c`](chapter9_Arrays/9.75.pointer-and-array-21.c) | Pointer And Array 21 |
| 9.76 | [`9.76.pointer-and-array-22.c`](chapter9_Arrays/9.76.pointer-and-array-22.c) | Pointer And Array 22 |
| 9.77 | [`9.77.what-happens-if-we-try-p-i-instead-of-p-i.c`](chapter9_Arrays/9.77.what-happens-if-we-try-p-i-instead-of-p-i.c) | What Happens If We Try P I Instead Of P I |
| 9.78 | [`9.78.confirming-that-p-p-a-and-a-are-the-same-address.c`](chapter9_Arrays/9.78.confirming-that-p-p-a-and-a-are-the-same-address.c) | Confirming That P P A And A Are The Same Address |
| 9.79 | [`9.79.pointer-and-array-23.c`](chapter9_Arrays/9.79.pointer-and-array-23.c) | Pointer And Array 23 |
| 9.80 | [`9.80.pointer-and-array-24.c`](chapter9_Arrays/9.80.pointer-and-array-24.c) | Pointer And Array 24 |
| 9.81 | [`9.81.pointer-and-array-25.c`](chapter9_Arrays/9.81.pointer-and-array-25.c) | Pointer And Array 25 |
| 9.82 | [`9.82.pointer-and-array-26.c`](chapter9_Arrays/9.82.pointer-and-array-26.c) | Pointer And Array 26 |
| 9.83 | [`9.83.pointer-and-array-27.c`](chapter9_Arrays/9.83.pointer-and-array-27.c) | Pointer And Array 27 |
| 9.84 | [`9.84.example-2-directly-casting-inside-the-loop.c`](chapter9_Arrays/9.84.example-2-directly-casting-inside-the-loop.c) | Example 2 Directly Casting Inside The Loop |
| 9.85 | [`9.85.array-as-function-argument-6.c`](chapter9_Arrays/9.85.array-as-function-argument-6.c) | Array As Function Argument 6 |
| 9.86 | [`9.86.sum-of-array-elements.c`](chapter9_Arrays/9.86.sum-of-array-elements.c) | Sum Of Array Elements |
| 9.87 | [`9.87.maximum-element-2.c`](chapter9_Arrays/9.87.maximum-element-2.c) | Maximum Element 2 |
| 9.88 | [`9.88.example-6-illustrating-why-void-cannot-be-dereferenced-direc.c`](chapter9_Arrays/9.88.example-6-illustrating-why-void-cannot-be-dereferenced-direc.c) | Example 6 Illustrating Why Void Cannot Be Dereferenced Direc |
| 9.89 | [`9.89.static-memory-allocation.c`](chapter9_Arrays/9.89.static-memory-allocation.c) | Static Memory Allocation |
| 9.90 | [`9.90.why-this-program-produces-no-visible-output.c`](chapter9_Arrays/9.90.why-this-program-produces-no-visible-output.c) | Why This Program Produces No Visible Output |
| 9.91 | [`9.91.array-length-using-sizeof-5.c`](chapter9_Arrays/9.91.array-length-using-sizeof-5.c) | Array Length Using Sizeof 5 |
| 9.92 | [`9.92.extending-further-comparing-different-data-types.c`](chapter9_Arrays/9.92.extending-further-comparing-different-data-types.c) | Extending Further Comparing Different Data Types |
| 9.93 | [`9.93.multiple-static-arrays-coexisting.c`](chapter9_Arrays/9.93.multiple-static-arrays-coexisting.c) | Multiple Static Arrays Coexisting |
| 9.94 | [`9.94.comparing-static-allocation-and-vla-side-by-side.c`](chapter9_Arrays/9.94.comparing-static-allocation-and-vla-side-by-side.c) | Comparing Static Allocation And Vla Side By Side |
| 9.95 | [`9.95.comparing-static-allocation-and-vla-side-by-side-2.c`](chapter9_Arrays/9.95.comparing-static-allocation-and-vla-side-by-side-2.c) | Comparing Static Allocation And Vla Side By Side 2 |
| 9.96 | [`9.96.array-length-using-sizeof-6.c`](chapter9_Arrays/9.96.array-length-using-sizeof-6.c) | Array Length Using Sizeof 6 |
| 9.97 | [`9.97.read-and-display-array-2.c`](chapter9_Arrays/9.97.read-and-display-array-2.c) | Read And Display Array 2 |
| 9.98 | [`9.98.read-and-display-array-3.c`](chapter9_Arrays/9.98.read-and-display-array-3.c) | Read And Display Array 3 |
| 9.99 | [`9.99.dynamic-array-allocation.c`](chapter9_Arrays/9.99.dynamic-array-allocation.c) | Dynamic Array Allocation |
| 9.100 | [`9.100.dynamic-array-allocation-2.c`](chapter9_Arrays/9.100.dynamic-array-allocation-2.c) | Dynamic Array Allocation 2 |
| 9.101 | [`9.101.dynamic-array-allocation-3.c`](chapter9_Arrays/9.101.dynamic-array-allocation-3.c) | Dynamic Array Allocation 3 |
| 9.102 | [`9.102.array-as-function-argument-7.c`](chapter9_Arrays/9.102.array-as-function-argument-7.c) | Array As Function Argument 7 |
| 9.103 | [`9.103.array-as-function-argument-8.c`](chapter9_Arrays/9.103.array-as-function-argument-8.c) | Array As Function Argument 8 |
| 9.104 | [`9.104.why-we-cannot-free-a-statically-allocated-array.c`](chapter9_Arrays/9.104.why-we-cannot-free-a-statically-allocated-array.c) | Why We Cannot Free A Statically Allocated Array |
| 9.105 | [`9.105.dynamic-array-allocation-4.c`](chapter9_Arrays/9.105.dynamic-array-allocation-4.c) | Dynamic Array Allocation 4 |
| 9.106 | [`9.106.dynamic-array-allocation-5.c`](chapter9_Arrays/9.106.dynamic-array-allocation-5.c) | Dynamic Array Allocation 5 |
| 9.107 | [`9.107.dynamic-array-allocation-6.c`](chapter9_Arrays/9.107.dynamic-array-allocation-6.c) | Dynamic Array Allocation 6 |
| 9.108 | [`9.108.why-free-cannot-release-a-static-array.c`](chapter9_Arrays/9.108.why-free-cannot-release-a-static-array.c) | Why Free Cannot Release A Static Array |
| 9.109 | [`9.109.dynamic-array-allocation-7.c`](chapter9_Arrays/9.109.dynamic-array-allocation-7.c) | Dynamic Array Allocation 7 |
| 9.110 | [`9.110.dynamic-array-allocation-8.c`](chapter9_Arrays/9.110.dynamic-array-allocation-8.c) | Dynamic Array Allocation 8 |
| 9.111 | [`9.111.dynamic-array-allocation-9.c`](chapter9_Arrays/9.111.dynamic-array-allocation-9.c) | Dynamic Array Allocation 9 |
| 9.112 | [`9.112.pointer-and-array-28.c`](chapter9_Arrays/9.112.pointer-and-array-28.c) | Pointer And Array 28 |
| 9.113 | [`9.113.dynamic-array-allocation-10.c`](chapter9_Arrays/9.113.dynamic-array-allocation-10.c) | Dynamic Array Allocation 10 |
| 9.114 | [`9.114.dynamic-array-allocation-11.c`](chapter9_Arrays/9.114.dynamic-array-allocation-11.c) | Dynamic Array Allocation 11 |
| 9.115 | [`9.115.dynamic-array-allocation-12.c`](chapter9_Arrays/9.115.dynamic-array-allocation-12.c) | Dynamic Array Allocation 12 |
| 9.116 | [`9.116.dynamic-array-allocation-13.c`](chapter9_Arrays/9.116.dynamic-array-allocation-13.c) | Dynamic Array Allocation 13 |
| 9.117 | [`9.117.mean-variance-and-standard-deviation.c`](chapter9_Arrays/9.117.mean-variance-and-standard-deviation.c) | Mean Variance And Standard Deviation |
| 9.118 | [`9.118.decimal-to-binary.c`](chapter9_Arrays/9.118.decimal-to-binary.c) | Decimal To Binary |
| 9.119 | [`9.119.decimal-to-binary-2.c`](chapter9_Arrays/9.119.decimal-to-binary-2.c) | Decimal To Binary 2 |
| 9.120 | [`9.120.binary-to-decimal.c`](chapter9_Arrays/9.120.binary-to-decimal.c) | Binary To Decimal |
| 9.121 | [`9.121.float-point-number-to-binary.c`](chapter9_Arrays/9.121.float-point-number-to-binary.c) | Float Point Number To Binary |
| 9.122 | [`9.122.float-point-number-to-binary-2.c`](chapter9_Arrays/9.122.float-point-number-to-binary-2.c) | Float Point Number To Binary 2 |
| 9.123 | [`9.123.binary-to-floating-point-number.c`](chapter9_Arrays/9.123.binary-to-floating-point-number.c) | Binary To Floating Point Number |
| 9.124 | [`9.124.largest-element.c`](chapter9_Arrays/9.124.largest-element.c) | Largest Element |
| 9.125 | [`9.125.largest-element-2.c`](chapter9_Arrays/9.125.largest-element-2.c) | Largest Element 2 |
| 9.126 | [`9.126.smallest-element.c`](chapter9_Arrays/9.126.smallest-element.c) | Smallest Element |
| 9.127 | [`9.127.array-searching-2.c`](chapter9_Arrays/9.127.array-searching-2.c) | Array Searching 2 |
| 9.128 | [`9.128.array-searching-3.c`](chapter9_Arrays/9.128.array-searching-3.c) | Array Searching 3 |
| 9.129 | [`9.129.array-searching-4.c`](chapter9_Arrays/9.129.array-searching-4.c) | Array Searching 4 |
| 9.130 | [`9.130.array-searching-5.c`](chapter9_Arrays/9.130.array-searching-5.c) | Array Searching 5 |
| 9.131 | [`9.131.horizontal-histogram.c`](chapter9_Arrays/9.131.horizontal-histogram.c) | Horizontal Histogram |
| 9.132 | [`9.132.vertical-histogram.c`](chapter9_Arrays/9.132.vertical-histogram.c) | Vertical Histogram |
| 9.133 | [`9.133.logarithmic-histogram.c`](chapter9_Arrays/9.133.logarithmic-histogram.c) | Logarithmic Histogram |
| 9.134 | [`9.134.frequency-count.c`](chapter9_Arrays/9.134.frequency-count.c) | Frequency Count |
| 9.135 | [`9.135.frequency-count-2.c`](chapter9_Arrays/9.135.frequency-count-2.c) | Frequency Count 2 |
| 9.136 | [`9.136.frequency-count-3.c`](chapter9_Arrays/9.136.frequency-count-3.c) | Frequency Count 3 |
| 9.137 | [`9.137.array-sorting.c`](chapter9_Arrays/9.137.array-sorting.c) | Array Sorting |
| 9.138 | [`9.138.frequency-count-4.c`](chapter9_Arrays/9.138.frequency-count-4.c) | Frequency Count 4 |
| 9.139 | [`9.139.array-length-using-sizeof-7.c`](chapter9_Arrays/9.139.array-length-using-sizeof-7.c) | Array Length Using Sizeof 7 |
| 9.140 | [`9.140.frequency-count-5.c`](chapter9_Arrays/9.140.frequency-count-5.c) | Frequency Count 5 |
| 9.141 | [`9.141.sum-of-array-elements-2.c`](chapter9_Arrays/9.141.sum-of-array-elements-2.c) | Sum Of Array Elements 2 |
| 9.142 | [`9.142.reversal-of-an-array.c`](chapter9_Arrays/9.142.reversal-of-an-array.c) | Reversal Of An Array |
| 9.143 | [`9.143.iterative-memoization.c`](chapter9_Arrays/9.143.iterative-memoization.c) | Iterative Memoization |
| 9.144 | [`9.144.recursive-memoization.c`](chapter9_Arrays/9.144.recursive-memoization.c) | Recursive Memoization |
| 9.145 | [`9.145.storing-all-fibonacci-numbers.c`](chapter9_Arrays/9.145.storing-all-fibonacci-numbers.c) | Storing All Fibonacci Numbers |
| 9.146 | [`9.146.dynamic-array-allocation-14.c`](chapter9_Arrays/9.146.dynamic-array-allocation-14.c) | Dynamic Array Allocation 14 |
| 9.147 | [`9.147.dynamic-array-allocation-15.c`](chapter9_Arrays/9.147.dynamic-array-allocation-15.c) | Dynamic Array Allocation 15 |
| 9.148 | [`9.148.dynamic-array-allocation-16.c`](chapter9_Arrays/9.148.dynamic-array-allocation-16.c) | Dynamic Array Allocation 16 |
| 9.149 | [`9.149.rsa-algorithm.c`](chapter9_Arrays/9.149.rsa-algorithm.c) | Rsa Algorithm |
| 9.150 | [`9.150.modular-exponentiation.c`](chapter9_Arrays/9.150.modular-exponentiation.c) | Modular Exponentiation |
| 9.151 | [`9.151.modular-exponentiation-2.c`](chapter9_Arrays/9.151.modular-exponentiation-2.c) | Modular Exponentiation 2 |
| 9.152 | [`9.152.array-length-using-sizeof-8.c`](chapter9_Arrays/9.152.array-length-using-sizeof-8.c) | Array Length Using Sizeof 8 |
| 9.153 | [`9.153.find-out-the-output.c`](chapter9_Arrays/9.153.find-out-the-output.c) | Find Out The Output |
| 9.154 | [`9.154.find-out-the-output-2.c`](chapter9_Arrays/9.154.find-out-the-output-2.c) | Find Out The Output 2 |
| 9.155 | [`9.155.find-out-the-output-3.c`](chapter9_Arrays/9.155.find-out-the-output-3.c) | Find Out The Output 3 |
| 9.156 | [`9.156.find-out-the-output-4.c`](chapter9_Arrays/9.156.find-out-the-output-4.c) | Find Out The Output 4 |
| 9.157 | [`9.157.find-out-the-output-5.c`](chapter9_Arrays/9.157.find-out-the-output-5.c) | Find Out The Output 5 |
| 9.158 | [`9.158.find-out-the-output-6.c`](chapter9_Arrays/9.158.find-out-the-output-6.c) | Find Out The Output 6 |
| 9.159 | [`9.159.find-out-the-output-7.c`](chapter9_Arrays/9.159.find-out-the-output-7.c) | Find Out The Output 7 |
| 9.160 | [`9.160.find-out-the-output-8.c`](chapter9_Arrays/9.160.find-out-the-output-8.c) | Find Out The Output 8 |
| 9.161 | [`9.161.find-out-the-output-9.c`](chapter9_Arrays/9.161.find-out-the-output-9.c) | Find Out The Output 9 |
| 9.162 | [`9.162.find-out-the-output-10.c`](chapter9_Arrays/9.162.find-out-the-output-10.c) | Find Out The Output 10 |
| 9.163 | [`9.163.find-out-the-output-11.c`](chapter9_Arrays/9.163.find-out-the-output-11.c) | Find Out The Output 11 |
| 9.164 | [`9.164.find-out-the-output-12.c`](chapter9_Arrays/9.164.find-out-the-output-12.c) | Find Out The Output 12 |
| 9.165 | [`9.165.find-out-the-output-13.c`](chapter9_Arrays/9.165.find-out-the-output-13.c) | Find Out The Output 13 |
| 9.166 | [`9.166.find-out-the-output-14.c`](chapter9_Arrays/9.166.find-out-the-output-14.c) | Find Out The Output 14 |
| 9.167 | [`9.167.find-out-the-output-15.c`](chapter9_Arrays/9.167.find-out-the-output-15.c) | Find Out The Output 15 |
| 9.168 | [`9.168.find-out-the-output-16.c`](chapter9_Arrays/9.168.find-out-the-output-16.c) | Find Out The Output 16 |
| 9.169 | [`9.169.find-out-the-output-17.c`](chapter9_Arrays/9.169.find-out-the-output-17.c) | Find Out The Output 17 |
| 9.170 | [`9.170.find-out-the-output-18.c`](chapter9_Arrays/9.170.find-out-the-output-18.c) | Find Out The Output 18 |
| 9.171 | [`9.171.find-out-the-output-19.c`](chapter9_Arrays/9.171.find-out-the-output-19.c) | Find Out The Output 19 |
| 9.172 | [`9.172.dynamic-array-allocation-17.c`](chapter9_Arrays/9.172.dynamic-array-allocation-17.c) | Dynamic Array Allocation 17 |
| 9.173 | [`9.173.find-out-the-output-20.c`](chapter9_Arrays/9.173.find-out-the-output-20.c) | Find Out The Output 20 |
| 9.174 | [`9.174.find-out-the-output-21.c`](chapter9_Arrays/9.174.find-out-the-output-21.c) | Find Out The Output 21 |
| 9.175 | [`9.175.find-out-the-output-22.c`](chapter9_Arrays/9.175.find-out-the-output-22.c) | Find Out The Output 22 |
| 9.176 | [`9.176.find-out-the-output-23.c`](chapter9_Arrays/9.176.find-out-the-output-23.c) | Find Out The Output 23 |
| 9.177 | [`9.177.find-out-the-output-24.c`](chapter9_Arrays/9.177.find-out-the-output-24.c) | Find Out The Output 24 |
| 9.178 | [`9.178.find-out-the-output-25.c`](chapter9_Arrays/9.178.find-out-the-output-25.c) | Find Out The Output 25 |
| 9.179 | [`9.179.find-out-the-output-26.c`](chapter9_Arrays/9.179.find-out-the-output-26.c) | Find Out The Output 26 |
| 9.180 | [`9.180.find-out-the-output-27.c`](chapter9_Arrays/9.180.find-out-the-output-27.c) | Find Out The Output 27 |
| 9.181 | [`9.181.find-out-the-output-28.c`](chapter9_Arrays/9.181.find-out-the-output-28.c) | Find Out The Output 28 |
| 9.182 | [`9.182.find-out-the-output-29.c`](chapter9_Arrays/9.182.find-out-the-output-29.c) | Find Out The Output 29 |
| 9.183 | [`9.183.find-out-the-output-30.c`](chapter9_Arrays/9.183.find-out-the-output-30.c) | Find Out The Output 30 |
| 9.184 | [`9.184.find-out-the-output-31.c`](chapter9_Arrays/9.184.find-out-the-output-31.c) | Find Out The Output 31 |
| 9.185 | [`9.185.find-out-the-output-32.c`](chapter9_Arrays/9.185.find-out-the-output-32.c) | Find Out The Output 32 |
| 9.186 | [`9.186.find-out-the-output-33.c`](chapter9_Arrays/9.186.find-out-the-output-33.c) | Find Out The Output 33 |
| 9.187 | [`9.187.find-out-the-output-34.c`](chapter9_Arrays/9.187.find-out-the-output-34.c) | Find Out The Output 34 |
| 9.188 | [`9.188.find-out-the-output-35.c`](chapter9_Arrays/9.188.find-out-the-output-35.c) | Find Out The Output 35 |
| 9.189 | [`9.189.find-out-the-output-36.c`](chapter9_Arrays/9.189.find-out-the-output-36.c) | Find Out The Output 36 |
| 9.190 | [`9.190.find-out-the-output-37.c`](chapter9_Arrays/9.190.find-out-the-output-37.c) | Find Out The Output 37 |
| 9.191 | [`9.191.find-out-the-output-38.c`](chapter9_Arrays/9.191.find-out-the-output-38.c) | Find Out The Output 38 |
| 9.192 | [`9.192.find-out-the-output-39.c`](chapter9_Arrays/9.192.find-out-the-output-39.c) | Find Out The Output 39 |
| 9.193 | [`9.193.find-out-the-output-40.c`](chapter9_Arrays/9.193.find-out-the-output-40.c) | Find Out The Output 40 |
| 9.194 | [`9.194.find-out-the-output-41.c`](chapter9_Arrays/9.194.find-out-the-output-41.c) | Find Out The Output 41 |
| 9.195 | [`9.195.find-out-the-output-42.c`](chapter9_Arrays/9.195.find-out-the-output-42.c) | Find Out The Output 42 |
| 9.196 | [`9.196.find-out-the-output-43.c`](chapter9_Arrays/9.196.find-out-the-output-43.c) | Find Out The Output 43 |
| 9.197 | [`9.197.find-out-the-output-44.c`](chapter9_Arrays/9.197.find-out-the-output-44.c) | Find Out The Output 44 |
| 9.198 | [`9.198.find-out-the-output-45.c`](chapter9_Arrays/9.198.find-out-the-output-45.c) | Find Out The Output 45 |
| 9.199 | [`9.199.find-out-the-output-46.c`](chapter9_Arrays/9.199.find-out-the-output-46.c) | Find Out The Output 46 |
| 9.200 | [`9.200.find-out-the-output-47.c`](chapter9_Arrays/9.200.find-out-the-output-47.c) | Find Out The Output 47 |
| 9.201 | [`9.201.find-out-the-output-48.c`](chapter9_Arrays/9.201.find-out-the-output-48.c) | Find Out The Output 48 |
| 9.202 | [`9.202.find-out-the-output-49.c`](chapter9_Arrays/9.202.find-out-the-output-49.c) | Find Out The Output 49 |
| 9.203 | [`9.203.find-out-the-output-50.c`](chapter9_Arrays/9.203.find-out-the-output-50.c) | Find Out The Output 50 |
| 9.204 | [`9.204.find-out-the-output-51.c`](chapter9_Arrays/9.204.find-out-the-output-51.c) | Find Out The Output 51 |
| 9.205 | [`9.205.find-out-the-output-52.c`](chapter9_Arrays/9.205.find-out-the-output-52.c) | Find Out The Output 52 |
| 9.206 | [`9.206.find-out-the-output-53.c`](chapter9_Arrays/9.206.find-out-the-output-53.c) | Find Out The Output 53 |
| 9.207 | [`9.207.find-out-the-output-54.c`](chapter9_Arrays/9.207.find-out-the-output-54.c) | Find Out The Output 54 |
| 9.208 | [`9.208.find-out-the-output-55.c`](chapter9_Arrays/9.208.find-out-the-output-55.c) | Find Out The Output 55 |
| 9.209 | [`9.209.find-out-the-output-56.c`](chapter9_Arrays/9.209.find-out-the-output-56.c) | Find Out The Output 56 |
| 9.210 | [`9.210.find-out-the-output-57.c`](chapter9_Arrays/9.210.find-out-the-output-57.c) | Find Out The Output 57 |
| 9.211 | [`9.211.find-out-the-output-58.c`](chapter9_Arrays/9.211.find-out-the-output-58.c) | Find Out The Output 58 |
| 9.212 | [`9.212.find-out-the-error.c`](chapter9_Arrays/9.212.find-out-the-error.c) | Find Out The Error |
| 9.213 | [`9.213.find-out-the-error-2.c`](chapter9_Arrays/9.213.find-out-the-error-2.c) | Find Out The Error 2 |
| 9.214 | [`9.214.find-out-the-error-3.c`](chapter9_Arrays/9.214.find-out-the-error-3.c) | Find Out The Error 3 |
| 9.215 | [`9.215.find-out-the-error-4.c`](chapter9_Arrays/9.215.find-out-the-error-4.c) | Find Out The Error 4 |
| 9.216 | [`9.216.find-out-the-error-5.c`](chapter9_Arrays/9.216.find-out-the-error-5.c) | Find Out The Error 5 |
| 9.217 | [`9.217.find-out-the-error-6.c`](chapter9_Arrays/9.217.find-out-the-error-6.c) | Find Out The Error 6 |
| 9.218 | [`9.218.find-out-the-error-7.c`](chapter9_Arrays/9.218.find-out-the-error-7.c) | Find Out The Error 7 |
| 9.219 | [`9.219.find-out-the-error-8.c`](chapter9_Arrays/9.219.find-out-the-error-8.c) | Find Out The Error 8 |
| 9.220 | [`9.220.find-out-the-error-9.c`](chapter9_Arrays/9.220.find-out-the-error-9.c) | Find Out The Error 9 |
| 9.221 | [`9.221.find-out-the-error-10.c`](chapter9_Arrays/9.221.find-out-the-error-10.c) | Find Out The Error 10 |
| 9.222 | [`9.222.find-out-the-error-11.c`](chapter9_Arrays/9.222.find-out-the-error-11.c) | Find Out The Error 11 |
| 9.223 | [`9.223.array-length-using-sizeof-9.c`](chapter9_Arrays/9.223.array-length-using-sizeof-9.c) | Array Length Using Sizeof 9 |
| 9.224 | [`9.224.array-length-using-sizeof-10.c`](chapter9_Arrays/9.224.array-length-using-sizeof-10.c) | Array Length Using Sizeof 10 |
| 9.225 | [`9.225.find-out-the-error-12.c`](chapter9_Arrays/9.225.find-out-the-error-12.c) | Find Out The Error 12 |
| 9.226 | [`9.226.find-out-the-error-13.c`](chapter9_Arrays/9.226.find-out-the-error-13.c) | Find Out The Error 13 |
| 9.227 | [`9.227.find-out-the-error-14.c`](chapter9_Arrays/9.227.find-out-the-error-14.c) | Find Out The Error 14 |
| 9.228 | [`9.228.find-out-the-error-15.c`](chapter9_Arrays/9.228.find-out-the-error-15.c) | Find Out The Error 15 |
| 9.229 | [`9.229.find-out-the-error-16.c`](chapter9_Arrays/9.229.find-out-the-error-16.c) | Find Out The Error 16 |
| 9.230 | [`9.230.find-out-the-error-17.c`](chapter9_Arrays/9.230.find-out-the-error-17.c) | Find Out The Error 17 |
| 9.231 | [`9.231.dynamic-array-allocation-18.c`](chapter9_Arrays/9.231.dynamic-array-allocation-18.c) | Dynamic Array Allocation 18 |
| 9.232 | [`9.232.dynamic-array-allocation-19.c`](chapter9_Arrays/9.232.dynamic-array-allocation-19.c) | Dynamic Array Allocation 19 |
| 9.233 | [`9.233.dynamic-array-allocation-20.c`](chapter9_Arrays/9.233.dynamic-array-allocation-20.c) | Dynamic Array Allocation 20 |
| 9.234 | [`9.234.dynamic-array-allocation-21.c`](chapter9_Arrays/9.234.dynamic-array-allocation-21.c) | Dynamic Array Allocation 21 |
| 9.235 | [`9.235.dynamic-array-allocation-22.c`](chapter9_Arrays/9.235.dynamic-array-allocation-22.c) | Dynamic Array Allocation 22 |
| 9.236 | [`9.236.dynamic-array-allocation-23.c`](chapter9_Arrays/9.236.dynamic-array-allocation-23.c) | Dynamic Array Allocation 23 |
| 9.237 | [`9.237.find-out-the-error-18.c`](chapter9_Arrays/9.237.find-out-the-error-18.c) | Find Out The Error 18 |
| 9.238 | [`9.238.find-out-the-error-19.c`](chapter9_Arrays/9.238.find-out-the-error-19.c) | Find Out The Error 19 |
| 9.239 | [`9.239.find-out-the-error-20.c`](chapter9_Arrays/9.239.find-out-the-error-20.c) | Find Out The Error 20 |
| 9.240 | [`9.240.find-out-the-error-21.c`](chapter9_Arrays/9.240.find-out-the-error-21.c) | Find Out The Error 21 |
| 9.241 | [`9.241.find-out-the-error-22.c`](chapter9_Arrays/9.241.find-out-the-error-22.c) | Find Out The Error 22 |
| 9.242 | [`9.242.find-out-the-error-23.c`](chapter9_Arrays/9.242.find-out-the-error-23.c) | Find Out The Error 23 |
| 9.243 | [`9.243.find-out-the-error-24.c`](chapter9_Arrays/9.243.find-out-the-error-24.c) | Find Out The Error 24 |
| 9.244 | [`9.244.find-out-the-error-25.c`](chapter9_Arrays/9.244.find-out-the-error-25.c) | Find Out The Error 25 |
| 9.245 | [`9.245.find-out-the-error-26.c`](chapter9_Arrays/9.245.find-out-the-error-26.c) | Find Out The Error 26 |
| 9.246 | [`9.246.find-out-the-error-27.c`](chapter9_Arrays/9.246.find-out-the-error-27.c) | Find Out The Error 27 |
| 9.247 | [`9.247.find-out-the-error-28.c`](chapter9_Arrays/9.247.find-out-the-error-28.c) | Find Out The Error 28 |
| 9.248 | [`9.248.find-out-the-error-29.c`](chapter9_Arrays/9.248.find-out-the-error-29.c) | Find Out The Error 29 |
| 9.249 | [`9.249.find-out-the-error-30.c`](chapter9_Arrays/9.249.find-out-the-error-30.c) | Find Out The Error 30 |
| 9.250 | [`9.250.find-out-the-error-31.c`](chapter9_Arrays/9.250.find-out-the-error-31.c) | Find Out The Error 31 |
| 9.251 | [`9.251.find-out-the-error-32.c`](chapter9_Arrays/9.251.find-out-the-error-32.c) | Find Out The Error 32 |
| 9.252 | [`9.252.find-out-the-error-33.c`](chapter9_Arrays/9.252.find-out-the-error-33.c) | Find Out The Error 33 |
| 9.253 | [`9.253.find-out-the-error-34.c`](chapter9_Arrays/9.253.find-out-the-error-34.c) | Find Out The Error 34 |
| 9.254 | [`9.254.find-out-the-error-35.c`](chapter9_Arrays/9.254.find-out-the-error-35.c) | Find Out The Error 35 |
| 9.255 | [`9.255.find-out-the-error-36.c`](chapter9_Arrays/9.255.find-out-the-error-36.c) | Find Out The Error 36 |
| 9.256 | [`9.256.find-out-the-error-37.c`](chapter9_Arrays/9.256.find-out-the-error-37.c) | Find Out The Error 37 |
| 9.257 | [`9.257.find-out-the-error-38.c`](chapter9_Arrays/9.257.find-out-the-error-38.c) | Find Out The Error 38 |
| 9.258 | [`9.258.find-out-the-error-39.c`](chapter9_Arrays/9.258.find-out-the-error-39.c) | Find Out The Error 39 |
| 9.259 | [`9.259.find-out-the-error-40.c`](chapter9_Arrays/9.259.find-out-the-error-40.c) | Find Out The Error 40 |
| 9.260 | [`9.260.dynamic-array-allocation-24.c`](chapter9_Arrays/9.260.dynamic-array-allocation-24.c) | Dynamic Array Allocation 24 |
| 9.261 | [`9.261.dynamic-array-allocation-25.c`](chapter9_Arrays/9.261.dynamic-array-allocation-25.c) | Dynamic Array Allocation 25 |
| 9.262 | [`9.262.dynamic-array-allocation-26.c`](chapter9_Arrays/9.262.dynamic-array-allocation-26.c) | Dynamic Array Allocation 26 |
| 9.263 | [`9.263.find-out-the-error-41.c`](chapter9_Arrays/9.263.find-out-the-error-41.c) | Find Out The Error 41 |
| 9.264 | [`9.264.find-out-the-error-42.c`](chapter9_Arrays/9.264.find-out-the-error-42.c) | Find Out The Error 42 |
| 9.265 | [`9.265.find-out-the-error-43.c`](chapter9_Arrays/9.265.find-out-the-error-43.c) | Find Out The Error 43 |
| 9.266 | [`9.266.find-out-the-error-44.c`](chapter9_Arrays/9.266.find-out-the-error-44.c) | Find Out The Error 44 |
| 9.267 | [`9.267.find-out-the-error-45.c`](chapter9_Arrays/9.267.find-out-the-error-45.c) | Find Out The Error 45 |
| 9.268 | [`9.268.find-out-the-error-46.c`](chapter9_Arrays/9.268.find-out-the-error-46.c) | Find Out The Error 46 |
| 9.269 | [`9.269.find-out-the-error-47.c`](chapter9_Arrays/9.269.find-out-the-error-47.c) | Find Out The Error 47 |
| 9.270 | [`9.270.find-out-the-error-48.c`](chapter9_Arrays/9.270.find-out-the-error-48.c) | Find Out The Error 48 |
| 9.271 | [`9.271.find-out-the-error-49.c`](chapter9_Arrays/9.271.find-out-the-error-49.c) | Find Out The Error 49 |
| 9.272 | [`9.272.find-out-the-error-50.c`](chapter9_Arrays/9.272.find-out-the-error-50.c) | Find Out The Error 50 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 10 — Multidimensional Arrays / Matrix

**Programs:** 269

| No. | Program file | Program / topic |
|---:|---|---|
| 10.1 | [`10.1.assigning-values-to-a-matrix.c`](chapter10_Matrix/10.1.assigning-values-to-a-matrix.c) | Assigning Values To A Matrix |
| 10.2 | [`10.2.assigning-values-to-a-matrix-2.c`](chapter10_Matrix/10.2.assigning-values-to-a-matrix-2.c) | Assigning Values To A Matrix 2 |
| 10.3 | [`10.3.initialization-of-value-to-a-matrix.c`](chapter10_Matrix/10.3.initialization-of-value-to-a-matrix.c) | Initialization Of Value To A Matrix |
| 10.4 | [`10.4.initialization-of-value-to-a-matrix-2.c`](chapter10_Matrix/10.4.initialization-of-value-to-a-matrix-2.c) | Initialization Of Value To A Matrix 2 |
| 10.5 | [`10.5.why-the-column-size-is-mandatory.c`](chapter10_Matrix/10.5.why-the-column-size-is-mandatory.c) | Why The Column Size Is Mandatory |
| 10.6 | [`10.6.why-the-column-size-is-mandatory-2.c`](chapter10_Matrix/10.6.why-the-column-size-is-mandatory-2.c) | Why The Column Size Is Mandatory 2 |
| 10.7 | [`10.7.why-the-column-size-is-mandatory-3.c`](chapter10_Matrix/10.7.why-the-column-size-is-mandatory-3.c) | Why The Column Size Is Mandatory 3 |
| 10.8 | [`10.8.matrix-with-function.c`](chapter10_Matrix/10.8.matrix-with-function.c) | Matrix With Function |
| 10.9 | [`10.9.complete-example-with-runtime-dimensions.c`](chapter10_Matrix/10.9.complete-example-with-runtime-dimensions.c) | Complete Example With Runtime Dimensions |
| 10.10 | [`10.10.read-and-display-matrix.c`](chapter10_Matrix/10.10.read-and-display-matrix.c) | Read And Display Matrix |
| 10.11 | [`10.11.display-a-matrix.c`](chapter10_Matrix/10.11.display-a-matrix.c) | Display A Matrix |
| 10.12 | [`10.12.matrix-with-function-2.c`](chapter10_Matrix/10.12.matrix-with-function-2.c) | Matrix With Function 2 |
| 10.13 | [`10.13.matrix-with-function-3.c`](chapter10_Matrix/10.13.matrix-with-function-3.c) | Matrix With Function 3 |
| 10.14 | [`10.14.matrix-transpose.c`](chapter10_Matrix/10.14.matrix-transpose.c) | Matrix Transpose |
| 10.15 | [`10.15.diagonal-matrix.c`](chapter10_Matrix/10.15.diagonal-matrix.c) | Diagonal Matrix |
| 10.16 | [`10.16.matrix-with-pointers.c`](chapter10_Matrix/10.16.matrix-with-pointers.c) | Matrix With Pointers |
| 10.17 | [`10.17.relationship-between-a-i.c`](chapter10_Matrix/10.17.relationship-between-a-i.c) | Relationship Between A I |
| 10.18 | [`10.18.address-of-each-matrix-element.c`](chapter10_Matrix/10.18.address-of-each-matrix-element.c) | Address Of Each Matrix Element |
| 10.19 | [`10.19.comparing-row-addresses-and-element-addresses.c`](chapter10_Matrix/10.19.comparing-row-addresses-and-element-addresses.c) | Comparing Row Addresses And Element Addresses |
| 10.20 | [`10.20.size-of-the-matrix-row-and-element.c`](chapter10_Matrix/10.20.size-of-the-matrix-row-and-element.c) | Size Of The Matrix Row And Element |
| 10.21 | [`10.21.matrix-with-pointers-2.c`](chapter10_Matrix/10.21.matrix-with-pointers-2.c) | Matrix With Pointers 2 |
| 10.22 | [`10.22.initializing-a-matrix-without-inner-braces.c`](chapter10_Matrix/10.22.initializing-a-matrix-without-inner-braces.c) | Initializing A Matrix Without Inner Braces |
| 10.23 | [`10.23.mixing.c`](chapter10_Matrix/10.23.mixing.c) | Mixing |
| 10.24 | [`10.24.matrix-with-pointers-3.c`](chapter10_Matrix/10.24.matrix-with-pointers-3.c) | Matrix With Pointers 3 |
| 10.25 | [`10.25.matrix-with-pointers-4.c`](chapter10_Matrix/10.25.matrix-with-pointers-4.c) | Matrix With Pointers 4 |
| 10.26 | [`10.26.comparing-the-addresses.c`](chapter10_Matrix/10.26.comparing-the-addresses.c) | Comparing The Addresses |
| 10.27 | [`10.27.matrix-with-pointers-5.c`](chapter10_Matrix/10.27.matrix-with-pointers-5.c) | Matrix With Pointers 5 |
| 10.28 | [`10.28.matrix-with-pointers-6.c`](chapter10_Matrix/10.28.matrix-with-pointers-6.c) | Matrix With Pointers 6 |
| 10.29 | [`10.29.matrix-with-pointers-7.c`](chapter10_Matrix/10.29.matrix-with-pointers-7.c) | Matrix With Pointers 7 |
| 10.30 | [`10.30.arrays-of-different-sizes.c`](chapter10_Matrix/10.30.arrays-of-different-sizes.c) | Arrays Of Different Sizes |
| 10.31 | [`10.31.matrix-with-pointers-8.c`](chapter10_Matrix/10.31.matrix-with-pointers-8.c) | Matrix With Pointers 8 |
| 10.32 | [`10.32.relationship-between-a-i-2.c`](chapter10_Matrix/10.32.relationship-between-a-i-2.c) | Relationship Between A I 2 |
| 10.33 | [`10.33.matrix-with-pointers-9.c`](chapter10_Matrix/10.33.matrix-with-pointers-9.c) | Matrix With Pointers 9 |
| 10.34 | [`10.34.difference-between-p-i.c`](chapter10_Matrix/10.34.difference-between-p-i.c) | Difference Between P I |
| 10.35 | [`10.35.matrix-with-pointers-10.c`](chapter10_Matrix/10.35.matrix-with-pointers-10.c) | Matrix With Pointers 10 |
| 10.36 | [`10.36.why-p-i.c`](chapter10_Matrix/10.36.why-p-i.c) | Why P I |
| 10.37 | [`10.37.different-terminologies.c`](chapter10_Matrix/10.37.different-terminologies.c) | Different Terminologies |
| 10.38 | [`10.38.matrix-with-pointers-11.c`](chapter10_Matrix/10.38.matrix-with-pointers-11.c) | Matrix With Pointers 11 |
| 10.39 | [`10.39.matrix-with-pointers-12.c`](chapter10_Matrix/10.39.matrix-with-pointers-12.c) | Matrix With Pointers 12 |
| 10.40 | [`10.40.using-fixed-dimensions-with-define.c`](chapter10_Matrix/10.40.using-fixed-dimensions-with-define.c) | Using Fixed Dimensions With Define |
| 10.41 | [`10.41.passing-variable-dimensions.c`](chapter10_Matrix/10.41.passing-variable-dimensions.c) | Passing Variable Dimensions |
| 10.42 | [`10.42.matrix-with-pointers-13.c`](chapter10_Matrix/10.42.matrix-with-pointers-13.c) | Matrix With Pointers 13 |
| 10.43 | [`10.43.matrix-with-pointers-14.c`](chapter10_Matrix/10.43.matrix-with-pointers-14.c) | Matrix With Pointers 14 |
| 10.44 | [`10.44.matrix-with-pointers-15.c`](chapter10_Matrix/10.44.matrix-with-pointers-15.c) | Matrix With Pointers 15 |
| 10.45 | [`10.45.dynamic-matrix-allocation.c`](chapter10_Matrix/10.45.dynamic-matrix-allocation.c) | Dynamic Matrix Allocation |
| 10.46 | [`10.46.matrix-with-pointers-16.c`](chapter10_Matrix/10.46.matrix-with-pointers-16.c) | Matrix With Pointers 16 |
| 10.47 | [`10.47.dynamic-matrix-allocation-2.c`](chapter10_Matrix/10.47.dynamic-matrix-allocation-2.c) | Dynamic Matrix Allocation 2 |
| 10.48 | [`10.48.matrix-with-pointers-17.c`](chapter10_Matrix/10.48.matrix-with-pointers-17.c) | Matrix With Pointers 17 |
| 10.49 | [`10.49.matrix-with-pointers-18.c`](chapter10_Matrix/10.49.matrix-with-pointers-18.c) | Matrix With Pointers 18 |
| 10.50 | [`10.50.matrix-with-pointers-19.c`](chapter10_Matrix/10.50.matrix-with-pointers-19.c) | Matrix With Pointers 19 |
| 10.51 | [`10.51.dynamic-matrix-allocation-3.c`](chapter10_Matrix/10.51.dynamic-matrix-allocation-3.c) | Dynamic Matrix Allocation 3 |
| 10.52 | [`10.52.lower-triangular-matrix.c`](chapter10_Matrix/10.52.lower-triangular-matrix.c) | Lower Triangular Matrix |
| 10.53 | [`10.53.lower-triangular-matrix-2.c`](chapter10_Matrix/10.53.lower-triangular-matrix-2.c) | Lower Triangular Matrix 2 |
| 10.54 | [`10.54.program-for-horizontal-and-vertical-flipping.c`](chapter10_Matrix/10.54.program-for-horizontal-and-vertical-flipping.c) | Program For Horizontal And Vertical Flipping |
| 10.55 | [`10.55.rotation-of-a-matrix.c`](chapter10_Matrix/10.55.rotation-of-a-matrix.c) | Rotation Of A Matrix |
| 10.56 | [`10.56.program-for-right-and-left-folding.c`](chapter10_Matrix/10.56.program-for-right-and-left-folding.c) | Program For Right And Left Folding |
| 10.57 | [`10.57.program-for-vertical-and-horizontal-folding.c`](chapter10_Matrix/10.57.program-for-vertical-and-horizontal-folding.c) | Program For Vertical And Horizontal Folding |
| 10.58 | [`10.58.sparse-matrix.c`](chapter10_Matrix/10.58.sparse-matrix.c) | Sparse Matrix |
| 10.59 | [`10.59.matrix-transpose-2.c`](chapter10_Matrix/10.59.matrix-transpose-2.c) | Matrix Transpose 2 |
| 10.60 | [`10.60.diagonal-matrix-2.c`](chapter10_Matrix/10.60.diagonal-matrix-2.c) | Diagonal Matrix 2 |
| 10.61 | [`10.61.matrix-subtraction.c`](chapter10_Matrix/10.61.matrix-subtraction.c) | Matrix Subtraction |
| 10.62 | [`10.62.matrix-multiplication.c`](chapter10_Matrix/10.62.matrix-multiplication.c) | Matrix Multiplication |
| 10.63 | [`10.63.lower-triangular-matrix-3.c`](chapter10_Matrix/10.63.lower-triangular-matrix-3.c) | Lower Triangular Matrix 3 |
| 10.64 | [`10.64.matrix-with-function-4.c`](chapter10_Matrix/10.64.matrix-with-function-4.c) | Matrix With Function 4 |
| 10.65 | [`10.65.diagonal-matrix-3.c`](chapter10_Matrix/10.65.diagonal-matrix-3.c) | Diagonal Matrix 3 |
| 10.66 | [`10.66.vertical-folding.c`](chapter10_Matrix/10.66.vertical-folding.c) | Vertical Folding |
| 10.67 | [`10.67.matrix-with-function-5.c`](chapter10_Matrix/10.67.matrix-with-function-5.c) | Matrix With Function 5 |
| 10.68 | [`10.68.matrix-with-function-6.c`](chapter10_Matrix/10.68.matrix-with-function-6.c) | Matrix With Function 6 |
| 10.69 | [`10.69.matrix-with-function-7.c`](chapter10_Matrix/10.69.matrix-with-function-7.c) | Matrix With Function 7 |
| 10.70 | [`10.70.matrix-with-function-8.c`](chapter10_Matrix/10.70.matrix-with-function-8.c) | Matrix With Function 8 |
| 10.71 | [`10.71.matrix-with-function-9.c`](chapter10_Matrix/10.71.matrix-with-function-9.c) | Matrix With Function 9 |
| 10.72 | [`10.72.symmetric-matrix.c`](chapter10_Matrix/10.72.symmetric-matrix.c) | Symmetric Matrix |
| 10.73 | [`10.73.symmetric-matrix-2.c`](chapter10_Matrix/10.73.symmetric-matrix-2.c) | Symmetric Matrix 2 |
| 10.74 | [`10.74.horizontal-mirror-matrix.c`](chapter10_Matrix/10.74.horizontal-mirror-matrix.c) | Horizontal Mirror Matrix |
| 10.75 | [`10.75.vertical-mirror-matrix.c`](chapter10_Matrix/10.75.vertical-mirror-matrix.c) | Vertical Mirror Matrix |
| 10.76 | [`10.76.orthogonal-matrix.c`](chapter10_Matrix/10.76.orthogonal-matrix.c) | Orthogonal Matrix |
| 10.77 | [`10.77.generating-the-hints.c`](chapter10_Matrix/10.77.generating-the-hints.c) | Generating The Hints |
| 10.78 | [`10.78.validating-the-complete-sudoku.c`](chapter10_Matrix/10.78.validating-the-complete-sudoku.c) | Validating The Complete Sudoku |
| 10.79 | [`10.79.using-the-bit-matrix.c`](chapter10_Matrix/10.79.using-the-bit-matrix.c) | Using The Bit Matrix |
| 10.80 | [`10.80.setting-selected-matrix-elements.c`](chapter10_Matrix/10.80.setting-selected-matrix-elements.c) | Setting Selected Matrix Elements |
| 10.81 | [`10.81.bit-matrix.c`](chapter10_Matrix/10.81.bit-matrix.c) | Bit Matrix |
| 10.82 | [`10.82.bit-matrix-2.c`](chapter10_Matrix/10.82.bit-matrix-2.c) | Bit Matrix 2 |
| 10.83 | [`10.83.matrix-encryption.c`](chapter10_Matrix/10.83.matrix-encryption.c) | Matrix Encryption |
| 10.84 | [`10.84.matrix-encryption-2.c`](chapter10_Matrix/10.84.matrix-encryption-2.c) | Matrix Encryption 2 |
| 10.85 | [`10.85.complete-program.c`](chapter10_Matrix/10.85.complete-program.c) | Complete Program |
| 10.86 | [`10.86.matrix-with-function-10.c`](chapter10_Matrix/10.86.matrix-with-function-10.c) | Matrix With Function 10 |
| 10.87 | [`10.87.n-queens-problem.c`](chapter10_Matrix/10.87.n-queens-problem.c) | N Queens Problem |
| 10.88 | [`10.88.printing-all-possible-solutions.c`](chapter10_Matrix/10.88.printing-all-possible-solutions.c) | Printing All Possible Solutions |
| 10.89 | [`10.89.find-out-the-output.c`](chapter10_Matrix/10.89.find-out-the-output.c) | Find Out The Output |
| 10.90 | [`10.90.find-out-the-output-2.c`](chapter10_Matrix/10.90.find-out-the-output-2.c) | Find Out The Output 2 |
| 10.91 | [`10.91.find-out-the-output-3.c`](chapter10_Matrix/10.91.find-out-the-output-3.c) | Find Out The Output 3 |
| 10.92 | [`10.92.find-out-the-output-4.c`](chapter10_Matrix/10.92.find-out-the-output-4.c) | Find Out The Output 4 |
| 10.93 | [`10.93.find-out-the-output-5.c`](chapter10_Matrix/10.93.find-out-the-output-5.c) | Find Out The Output 5 |
| 10.94 | [`10.94.find-out-the-output-6.c`](chapter10_Matrix/10.94.find-out-the-output-6.c) | Find Out The Output 6 |
| 10.95 | [`10.95.find-out-the-output-7.c`](chapter10_Matrix/10.95.find-out-the-output-7.c) | Find Out The Output 7 |
| 10.96 | [`10.96.find-out-the-output-8.c`](chapter10_Matrix/10.96.find-out-the-output-8.c) | Find Out The Output 8 |
| 10.97 | [`10.97.find-out-the-output-9.c`](chapter10_Matrix/10.97.find-out-the-output-9.c) | Find Out The Output 9 |
| 10.98 | [`10.98.find-out-the-output-10.c`](chapter10_Matrix/10.98.find-out-the-output-10.c) | Find Out The Output 10 |
| 10.99 | [`10.99.find-out-the-output-11.c`](chapter10_Matrix/10.99.find-out-the-output-11.c) | Find Out The Output 11 |
| 10.100 | [`10.100.find-out-the-output-12.c`](chapter10_Matrix/10.100.find-out-the-output-12.c) | Find Out The Output 12 |
| 10.101 | [`10.101.find-out-the-output-13.c`](chapter10_Matrix/10.101.find-out-the-output-13.c) | Find Out The Output 13 |
| 10.102 | [`10.102.find-out-the-output-14.c`](chapter10_Matrix/10.102.find-out-the-output-14.c) | Find Out The Output 14 |
| 10.103 | [`10.103.find-out-the-output-15.c`](chapter10_Matrix/10.103.find-out-the-output-15.c) | Find Out The Output 15 |
| 10.104 | [`10.104.find-out-the-output-16.c`](chapter10_Matrix/10.104.find-out-the-output-16.c) | Find Out The Output 16 |
| 10.105 | [`10.105.find-out-the-output-17.c`](chapter10_Matrix/10.105.find-out-the-output-17.c) | Find Out The Output 17 |
| 10.106 | [`10.106.find-out-the-output-18.c`](chapter10_Matrix/10.106.find-out-the-output-18.c) | Find Out The Output 18 |
| 10.107 | [`10.107.find-out-the-output-19.c`](chapter10_Matrix/10.107.find-out-the-output-19.c) | Find Out The Output 19 |
| 10.108 | [`10.108.find-out-the-output-20.c`](chapter10_Matrix/10.108.find-out-the-output-20.c) | Find Out The Output 20 |
| 10.109 | [`10.109.find-out-the-output-21.c`](chapter10_Matrix/10.109.find-out-the-output-21.c) | Find Out The Output 21 |
| 10.110 | [`10.110.find-out-the-output-22.c`](chapter10_Matrix/10.110.find-out-the-output-22.c) | Find Out The Output 22 |
| 10.111 | [`10.111.find-out-the-output-23.c`](chapter10_Matrix/10.111.find-out-the-output-23.c) | Find Out The Output 23 |
| 10.112 | [`10.112.find-out-the-output-24.c`](chapter10_Matrix/10.112.find-out-the-output-24.c) | Find Out The Output 24 |
| 10.113 | [`10.113.find-out-the-output-25.c`](chapter10_Matrix/10.113.find-out-the-output-25.c) | Find Out The Output 25 |
| 10.114 | [`10.114.find-out-the-output-26.c`](chapter10_Matrix/10.114.find-out-the-output-26.c) | Find Out The Output 26 |
| 10.115 | [`10.115.find-out-the-output-27.c`](chapter10_Matrix/10.115.find-out-the-output-27.c) | Find Out The Output 27 |
| 10.116 | [`10.116.find-out-the-output-28.c`](chapter10_Matrix/10.116.find-out-the-output-28.c) | Find Out The Output 28 |
| 10.117 | [`10.117.find-out-the-output-29.c`](chapter10_Matrix/10.117.find-out-the-output-29.c) | Find Out The Output 29 |
| 10.118 | [`10.118.find-out-the-output-30.c`](chapter10_Matrix/10.118.find-out-the-output-30.c) | Find Out The Output 30 |
| 10.119 | [`10.119.find-out-the-output-31.c`](chapter10_Matrix/10.119.find-out-the-output-31.c) | Find Out The Output 31 |
| 10.120 | [`10.120.find-out-the-output-32.c`](chapter10_Matrix/10.120.find-out-the-output-32.c) | Find Out The Output 32 |
| 10.121 | [`10.121.find-out-the-output-33.c`](chapter10_Matrix/10.121.find-out-the-output-33.c) | Find Out The Output 33 |
| 10.122 | [`10.122.find-out-the-output-34.c`](chapter10_Matrix/10.122.find-out-the-output-34.c) | Find Out The Output 34 |
| 10.123 | [`10.123.find-out-the-output-35.c`](chapter10_Matrix/10.123.find-out-the-output-35.c) | Find Out The Output 35 |
| 10.124 | [`10.124.find-out-the-output-36.c`](chapter10_Matrix/10.124.find-out-the-output-36.c) | Find Out The Output 36 |
| 10.125 | [`10.125.find-out-the-output-37.c`](chapter10_Matrix/10.125.find-out-the-output-37.c) | Find Out The Output 37 |
| 10.126 | [`10.126.find-out-the-output-38.c`](chapter10_Matrix/10.126.find-out-the-output-38.c) | Find Out The Output 38 |
| 10.127 | [`10.127.find-out-the-output-39.c`](chapter10_Matrix/10.127.find-out-the-output-39.c) | Find Out The Output 39 |
| 10.128 | [`10.128.find-out-the-output-40.c`](chapter10_Matrix/10.128.find-out-the-output-40.c) | Find Out The Output 40 |
| 10.129 | [`10.129.find-out-the-output-41.c`](chapter10_Matrix/10.129.find-out-the-output-41.c) | Find Out The Output 41 |
| 10.130 | [`10.130.find-out-the-output-42.c`](chapter10_Matrix/10.130.find-out-the-output-42.c) | Find Out The Output 42 |
| 10.131 | [`10.131.find-out-the-output-43.c`](chapter10_Matrix/10.131.find-out-the-output-43.c) | Find Out The Output 43 |
| 10.132 | [`10.132.find-out-the-output-44.c`](chapter10_Matrix/10.132.find-out-the-output-44.c) | Find Out The Output 44 |
| 10.133 | [`10.133.find-out-the-output-45.c`](chapter10_Matrix/10.133.find-out-the-output-45.c) | Find Out The Output 45 |
| 10.134 | [`10.134.find-out-the-output-46.c`](chapter10_Matrix/10.134.find-out-the-output-46.c) | Find Out The Output 46 |
| 10.135 | [`10.135.find-out-the-output-47.c`](chapter10_Matrix/10.135.find-out-the-output-47.c) | Find Out The Output 47 |
| 10.136 | [`10.136.find-out-the-output-48.c`](chapter10_Matrix/10.136.find-out-the-output-48.c) | Find Out The Output 48 |
| 10.137 | [`10.137.find-out-the-output-49.c`](chapter10_Matrix/10.137.find-out-the-output-49.c) | Find Out The Output 49 |
| 10.138 | [`10.138.find-out-the-output-50.c`](chapter10_Matrix/10.138.find-out-the-output-50.c) | Find Out The Output 50 |
| 10.139 | [`10.139.find-out-the-output-51.c`](chapter10_Matrix/10.139.find-out-the-output-51.c) | Find Out The Output 51 |
| 10.140 | [`10.140.find-out-the-output-52.c`](chapter10_Matrix/10.140.find-out-the-output-52.c) | Find Out The Output 52 |
| 10.141 | [`10.141.find-out-the-output-53.c`](chapter10_Matrix/10.141.find-out-the-output-53.c) | Find Out The Output 53 |
| 10.142 | [`10.142.find-out-the-output-54.c`](chapter10_Matrix/10.142.find-out-the-output-54.c) | Find Out The Output 54 |
| 10.143 | [`10.143.find-out-the-output-55.c`](chapter10_Matrix/10.143.find-out-the-output-55.c) | Find Out The Output 55 |
| 10.144 | [`10.144.find-out-the-output-56.c`](chapter10_Matrix/10.144.find-out-the-output-56.c) | Find Out The Output 56 |
| 10.145 | [`10.145.find-out-the-output-57.c`](chapter10_Matrix/10.145.find-out-the-output-57.c) | Find Out The Output 57 |
| 10.146 | [`10.146.find-out-the-output-58.c`](chapter10_Matrix/10.146.find-out-the-output-58.c) | Find Out The Output 58 |
| 10.147 | [`10.147.find-out-the-output-59.c`](chapter10_Matrix/10.147.find-out-the-output-59.c) | Find Out The Output 59 |
| 10.148 | [`10.148.find-out-the-output-60.c`](chapter10_Matrix/10.148.find-out-the-output-60.c) | Find Out The Output 60 |
| 10.149 | [`10.149.find-out-the-output-61.c`](chapter10_Matrix/10.149.find-out-the-output-61.c) | Find Out The Output 61 |
| 10.150 | [`10.150.find-out-the-output-62.c`](chapter10_Matrix/10.150.find-out-the-output-62.c) | Find Out The Output 62 |
| 10.151 | [`10.151.find-out-the-output-63.c`](chapter10_Matrix/10.151.find-out-the-output-63.c) | Find Out The Output 63 |
| 10.152 | [`10.152.find-out-the-output-64.c`](chapter10_Matrix/10.152.find-out-the-output-64.c) | Find Out The Output 64 |
| 10.153 | [`10.153.find-out-the-output-65.c`](chapter10_Matrix/10.153.find-out-the-output-65.c) | Find Out The Output 65 |
| 10.154 | [`10.154.find-out-the-output-66.c`](chapter10_Matrix/10.154.find-out-the-output-66.c) | Find Out The Output 66 |
| 10.155 | [`10.155.find-out-the-output-67.c`](chapter10_Matrix/10.155.find-out-the-output-67.c) | Find Out The Output 67 |
| 10.156 | [`10.156.find-out-the-output-68.c`](chapter10_Matrix/10.156.find-out-the-output-68.c) | Find Out The Output 68 |
| 10.157 | [`10.157.find-out-the-output-69.c`](chapter10_Matrix/10.157.find-out-the-output-69.c) | Find Out The Output 69 |
| 10.158 | [`10.158.find-out-the-output-70.c`](chapter10_Matrix/10.158.find-out-the-output-70.c) | Find Out The Output 70 |
| 10.159 | [`10.159.find-out-the-output-71.c`](chapter10_Matrix/10.159.find-out-the-output-71.c) | Find Out The Output 71 |
| 10.160 | [`10.160.find-out-the-output-72.c`](chapter10_Matrix/10.160.find-out-the-output-72.c) | Find Out The Output 72 |
| 10.161 | [`10.161.find-out-the-output-73.c`](chapter10_Matrix/10.161.find-out-the-output-73.c) | Find Out The Output 73 |
| 10.162 | [`10.162.find-out-the-output-74.c`](chapter10_Matrix/10.162.find-out-the-output-74.c) | Find Out The Output 74 |
| 10.163 | [`10.163.find-out-the-output-75.c`](chapter10_Matrix/10.163.find-out-the-output-75.c) | Find Out The Output 75 |
| 10.164 | [`10.164.find-out-the-output-76.c`](chapter10_Matrix/10.164.find-out-the-output-76.c) | Find Out The Output 76 |
| 10.165 | [`10.165.find-out-the-output-77.c`](chapter10_Matrix/10.165.find-out-the-output-77.c) | Find Out The Output 77 |
| 10.166 | [`10.166.find-out-the-output-78.c`](chapter10_Matrix/10.166.find-out-the-output-78.c) | Find Out The Output 78 |
| 10.167 | [`10.167.find-out-the-output-79.c`](chapter10_Matrix/10.167.find-out-the-output-79.c) | Find Out The Output 79 |
| 10.168 | [`10.168.find-out-the-output-80.c`](chapter10_Matrix/10.168.find-out-the-output-80.c) | Find Out The Output 80 |
| 10.169 | [`10.169.find-out-the-output-81.c`](chapter10_Matrix/10.169.find-out-the-output-81.c) | Find Out The Output 81 |
| 10.170 | [`10.170.find-out-the-output-82.c`](chapter10_Matrix/10.170.find-out-the-output-82.c) | Find Out The Output 82 |
| 10.171 | [`10.171.find-out-the-output-83.c`](chapter10_Matrix/10.171.find-out-the-output-83.c) | Find Out The Output 83 |
| 10.172 | [`10.172.find-out-the-output-84.c`](chapter10_Matrix/10.172.find-out-the-output-84.c) | Find Out The Output 84 |
| 10.173 | [`10.173.find-out-the-output-85.c`](chapter10_Matrix/10.173.find-out-the-output-85.c) | Find Out The Output 85 |
| 10.174 | [`10.174.find-out-the-output-86.c`](chapter10_Matrix/10.174.find-out-the-output-86.c) | Find Out The Output 86 |
| 10.175 | [`10.175.find-out-the-output-87.c`](chapter10_Matrix/10.175.find-out-the-output-87.c) | Find Out The Output 87 |
| 10.176 | [`10.176.find-out-the-output-88.c`](chapter10_Matrix/10.176.find-out-the-output-88.c) | Find Out The Output 88 |
| 10.177 | [`10.177.find-out-the-output-89.c`](chapter10_Matrix/10.177.find-out-the-output-89.c) | Find Out The Output 89 |
| 10.178 | [`10.178.find-out-the-output-90.c`](chapter10_Matrix/10.178.find-out-the-output-90.c) | Find Out The Output 90 |
| 10.179 | [`10.179.find-out-the-output-91.c`](chapter10_Matrix/10.179.find-out-the-output-91.c) | Find Out The Output 91 |
| 10.180 | [`10.180.find-out-the-output-92.c`](chapter10_Matrix/10.180.find-out-the-output-92.c) | Find Out The Output 92 |
| 10.181 | [`10.181.find-out-the-output-93.c`](chapter10_Matrix/10.181.find-out-the-output-93.c) | Find Out The Output 93 |
| 10.182 | [`10.182.find-out-the-output-94.c`](chapter10_Matrix/10.182.find-out-the-output-94.c) | Find Out The Output 94 |
| 10.183 | [`10.183.find-out-the-output-95.c`](chapter10_Matrix/10.183.find-out-the-output-95.c) | Find Out The Output 95 |
| 10.184 | [`10.184.find-out-the-output-96.c`](chapter10_Matrix/10.184.find-out-the-output-96.c) | Find Out The Output 96 |
| 10.185 | [`10.185.find-out-the-output-97.c`](chapter10_Matrix/10.185.find-out-the-output-97.c) | Find Out The Output 97 |
| 10.186 | [`10.186.find-out-the-output-98.c`](chapter10_Matrix/10.186.find-out-the-output-98.c) | Find Out The Output 98 |
| 10.187 | [`10.187.find-out-the-output-99.c`](chapter10_Matrix/10.187.find-out-the-output-99.c) | Find Out The Output 99 |
| 10.188 | [`10.188.find-out-the-output-100.c`](chapter10_Matrix/10.188.find-out-the-output-100.c) | Find Out The Output 100 |
| 10.189 | [`10.189.find-out-the-output-101.c`](chapter10_Matrix/10.189.find-out-the-output-101.c) | Find Out The Output 101 |
| 10.190 | [`10.190.find-out-the-output-102.c`](chapter10_Matrix/10.190.find-out-the-output-102.c) | Find Out The Output 102 |
| 10.191 | [`10.191.find-out-the-output-103.c`](chapter10_Matrix/10.191.find-out-the-output-103.c) | Find Out The Output 103 |
| 10.192 | [`10.192.find-out-the-output-104.c`](chapter10_Matrix/10.192.find-out-the-output-104.c) | Find Out The Output 104 |
| 10.193 | [`10.193.find-out-the-output-105.c`](chapter10_Matrix/10.193.find-out-the-output-105.c) | Find Out The Output 105 |
| 10.194 | [`10.194.find-out-the-output-106.c`](chapter10_Matrix/10.194.find-out-the-output-106.c) | Find Out The Output 106 |
| 10.195 | [`10.195.find-out-the-output-107.c`](chapter10_Matrix/10.195.find-out-the-output-107.c) | Find Out The Output 107 |
| 10.196 | [`10.196.find-out-the-output-108.c`](chapter10_Matrix/10.196.find-out-the-output-108.c) | Find Out The Output 108 |
| 10.197 | [`10.197.find-out-the-output-109.c`](chapter10_Matrix/10.197.find-out-the-output-109.c) | Find Out The Output 109 |
| 10.198 | [`10.198.find-out-the-output-110.c`](chapter10_Matrix/10.198.find-out-the-output-110.c) | Find Out The Output 110 |
| 10.199 | [`10.199.find-out-the-output-111.c`](chapter10_Matrix/10.199.find-out-the-output-111.c) | Find Out The Output 111 |
| 10.200 | [`10.200.find-out-the-output-112.c`](chapter10_Matrix/10.200.find-out-the-output-112.c) | Find Out The Output 112 |
| 10.201 | [`10.201.find-out-the-output-113.c`](chapter10_Matrix/10.201.find-out-the-output-113.c) | Find Out The Output 113 |
| 10.202 | [`10.202.find-out-the-output-114.c`](chapter10_Matrix/10.202.find-out-the-output-114.c) | Find Out The Output 114 |
| 10.203 | [`10.203.find-out-the-output-115.c`](chapter10_Matrix/10.203.find-out-the-output-115.c) | Find Out The Output 115 |
| 10.204 | [`10.204.find-out-the-output-116.c`](chapter10_Matrix/10.204.find-out-the-output-116.c) | Find Out The Output 116 |
| 10.205 | [`10.205.find-out-the-output-117.c`](chapter10_Matrix/10.205.find-out-the-output-117.c) | Find Out The Output 117 |
| 10.206 | [`10.206.find-out-the-output-118.c`](chapter10_Matrix/10.206.find-out-the-output-118.c) | Find Out The Output 118 |
| 10.207 | [`10.207.find-out-the-output-119.c`](chapter10_Matrix/10.207.find-out-the-output-119.c) | Find Out The Output 119 |
| 10.208 | [`10.208.find-out-the-output-120.c`](chapter10_Matrix/10.208.find-out-the-output-120.c) | Find Out The Output 120 |
| 10.209 | [`10.209.find-out-the-output-121.c`](chapter10_Matrix/10.209.find-out-the-output-121.c) | Find Out The Output 121 |
| 10.210 | [`10.210.find-out-the-output-122.c`](chapter10_Matrix/10.210.find-out-the-output-122.c) | Find Out The Output 122 |
| 10.211 | [`10.211.find-out-the-output-123.c`](chapter10_Matrix/10.211.find-out-the-output-123.c) | Find Out The Output 123 |
| 10.212 | [`10.212.find-out-the-output-124.c`](chapter10_Matrix/10.212.find-out-the-output-124.c) | Find Out The Output 124 |
| 10.213 | [`10.213.find-out-the-output-125.c`](chapter10_Matrix/10.213.find-out-the-output-125.c) | Find Out The Output 125 |
| 10.214 | [`10.214.find-out-the-error.c`](chapter10_Matrix/10.214.find-out-the-error.c) | Find Out The Error |
| 10.215 | [`10.215.find-out-the-error-2.c`](chapter10_Matrix/10.215.find-out-the-error-2.c) | Find Out The Error 2 |
| 10.216 | [`10.216.find-out-the-error-3.c`](chapter10_Matrix/10.216.find-out-the-error-3.c) | Find Out The Error 3 |
| 10.217 | [`10.217.find-out-the-error-4.c`](chapter10_Matrix/10.217.find-out-the-error-4.c) | Find Out The Error 4 |
| 10.218 | [`10.218.find-out-the-error-5.c`](chapter10_Matrix/10.218.find-out-the-error-5.c) | Find Out The Error 5 |
| 10.219 | [`10.219.find-out-the-error-6.c`](chapter10_Matrix/10.219.find-out-the-error-6.c) | Find Out The Error 6 |
| 10.220 | [`10.220.find-out-the-error-7.c`](chapter10_Matrix/10.220.find-out-the-error-7.c) | Find Out The Error 7 |
| 10.221 | [`10.221.find-out-the-error-8.c`](chapter10_Matrix/10.221.find-out-the-error-8.c) | Find Out The Error 8 |
| 10.222 | [`10.222.find-out-the-error-9.c`](chapter10_Matrix/10.222.find-out-the-error-9.c) | Find Out The Error 9 |
| 10.223 | [`10.223.find-out-the-error-10.c`](chapter10_Matrix/10.223.find-out-the-error-10.c) | Find Out The Error 10 |
| 10.224 | [`10.224.find-out-the-error-11.c`](chapter10_Matrix/10.224.find-out-the-error-11.c) | Find Out The Error 11 |
| 10.225 | [`10.225.find-out-the-error-12.c`](chapter10_Matrix/10.225.find-out-the-error-12.c) | Find Out The Error 12 |
| 10.226 | [`10.226.find-out-the-error-13.c`](chapter10_Matrix/10.226.find-out-the-error-13.c) | Find Out The Error 13 |
| 10.227 | [`10.227.find-out-the-error-14.c`](chapter10_Matrix/10.227.find-out-the-error-14.c) | Find Out The Error 14 |
| 10.228 | [`10.228.find-out-the-error-15.c`](chapter10_Matrix/10.228.find-out-the-error-15.c) | Find Out The Error 15 |
| 10.229 | [`10.229.find-out-the-error-16.c`](chapter10_Matrix/10.229.find-out-the-error-16.c) | Find Out The Error 16 |
| 10.230 | [`10.230.find-out-the-error-17.c`](chapter10_Matrix/10.230.find-out-the-error-17.c) | Find Out The Error 17 |
| 10.231 | [`10.231.find-out-the-error-18.c`](chapter10_Matrix/10.231.find-out-the-error-18.c) | Find Out The Error 18 |
| 10.232 | [`10.232.find-out-the-error-19.c`](chapter10_Matrix/10.232.find-out-the-error-19.c) | Find Out The Error 19 |
| 10.233 | [`10.233.find-out-the-error-20.c`](chapter10_Matrix/10.233.find-out-the-error-20.c) | Find Out The Error 20 |
| 10.234 | [`10.234.find-out-the-error-21.c`](chapter10_Matrix/10.234.find-out-the-error-21.c) | Find Out The Error 21 |
| 10.235 | [`10.235.find-out-the-error-22.c`](chapter10_Matrix/10.235.find-out-the-error-22.c) | Find Out The Error 22 |
| 10.236 | [`10.236.find-out-the-error-23.c`](chapter10_Matrix/10.236.find-out-the-error-23.c) | Find Out The Error 23 |
| 10.237 | [`10.237.find-out-the-error-24.c`](chapter10_Matrix/10.237.find-out-the-error-24.c) | Find Out The Error 24 |
| 10.238 | [`10.238.find-out-the-error-25.c`](chapter10_Matrix/10.238.find-out-the-error-25.c) | Find Out The Error 25 |
| 10.239 | [`10.239.find-out-the-error-26.c`](chapter10_Matrix/10.239.find-out-the-error-26.c) | Find Out The Error 26 |
| 10.240 | [`10.240.find-out-the-error-27.c`](chapter10_Matrix/10.240.find-out-the-error-27.c) | Find Out The Error 27 |
| 10.241 | [`10.241.find-out-the-error-28.c`](chapter10_Matrix/10.241.find-out-the-error-28.c) | Find Out The Error 28 |
| 10.242 | [`10.242.dynamic-matrix-allocation-4.c`](chapter10_Matrix/10.242.dynamic-matrix-allocation-4.c) | Dynamic Matrix Allocation 4 |
| 10.243 | [`10.243.dynamic-matrix-allocation-5.c`](chapter10_Matrix/10.243.dynamic-matrix-allocation-5.c) | Dynamic Matrix Allocation 5 |
| 10.244 | [`10.244.dynamic-matrix-allocation-6.c`](chapter10_Matrix/10.244.dynamic-matrix-allocation-6.c) | Dynamic Matrix Allocation 6 |
| 10.245 | [`10.245.dynamic-matrix-allocation-7.c`](chapter10_Matrix/10.245.dynamic-matrix-allocation-7.c) | Dynamic Matrix Allocation 7 |
| 10.246 | [`10.246.dynamic-matrix-allocation-8.c`](chapter10_Matrix/10.246.dynamic-matrix-allocation-8.c) | Dynamic Matrix Allocation 8 |
| 10.247 | [`10.247.dynamic-matrix-allocation-9.c`](chapter10_Matrix/10.247.dynamic-matrix-allocation-9.c) | Dynamic Matrix Allocation 9 |
| 10.248 | [`10.248.dynamic-matrix-allocation-10.c`](chapter10_Matrix/10.248.dynamic-matrix-allocation-10.c) | Dynamic Matrix Allocation 10 |
| 10.249 | [`10.249.dynamic-matrix-allocation-11.c`](chapter10_Matrix/10.249.dynamic-matrix-allocation-11.c) | Dynamic Matrix Allocation 11 |
| 10.250 | [`10.250.dynamic-matrix-allocation-12.c`](chapter10_Matrix/10.250.dynamic-matrix-allocation-12.c) | Dynamic Matrix Allocation 12 |
| 10.251 | [`10.251.dynamic-matrix-allocation-13.c`](chapter10_Matrix/10.251.dynamic-matrix-allocation-13.c) | Dynamic Matrix Allocation 13 |
| 10.252 | [`10.252.dynamic-matrix-allocation-14.c`](chapter10_Matrix/10.252.dynamic-matrix-allocation-14.c) | Dynamic Matrix Allocation 14 |
| 10.253 | [`10.253.dynamic-matrix-allocation-15.c`](chapter10_Matrix/10.253.dynamic-matrix-allocation-15.c) | Dynamic Matrix Allocation 15 |
| 10.254 | [`10.254.dynamic-matrix-allocation-16.c`](chapter10_Matrix/10.254.dynamic-matrix-allocation-16.c) | Dynamic Matrix Allocation 16 |
| 10.255 | [`10.255.find-out-the-error-29.c`](chapter10_Matrix/10.255.find-out-the-error-29.c) | Find Out The Error 29 |
| 10.256 | [`10.256.find-out-the-error-30.c`](chapter10_Matrix/10.256.find-out-the-error-30.c) | Find Out The Error 30 |
| 10.257 | [`10.257.dynamic-matrix-allocation-17.c`](chapter10_Matrix/10.257.dynamic-matrix-allocation-17.c) | Dynamic Matrix Allocation 17 |
| 10.258 | [`10.258.find-out-the-error-31.c`](chapter10_Matrix/10.258.find-out-the-error-31.c) | Find Out The Error 31 |
| 10.259 | [`10.259.find-out-the-error-32.c`](chapter10_Matrix/10.259.find-out-the-error-32.c) | Find Out The Error 32 |
| 10.260 | [`10.260.find-out-the-error-33.c`](chapter10_Matrix/10.260.find-out-the-error-33.c) | Find Out The Error 33 |
| 10.261 | [`10.261.find-out-the-error-34.c`](chapter10_Matrix/10.261.find-out-the-error-34.c) | Find Out The Error 34 |
| 10.262 | [`10.262.find-out-the-error-35.c`](chapter10_Matrix/10.262.find-out-the-error-35.c) | Find Out The Error 35 |
| 10.263 | [`10.263.find-out-the-error-36.c`](chapter10_Matrix/10.263.find-out-the-error-36.c) | Find Out The Error 36 |
| 10.264 | [`10.264.find-out-the-error-37.c`](chapter10_Matrix/10.264.find-out-the-error-37.c) | Find Out The Error 37 |
| 10.265 | [`10.265.find-out-the-error-38.c`](chapter10_Matrix/10.265.find-out-the-error-38.c) | Find Out The Error 38 |
| 10.266 | [`10.266.find-out-the-error-39.c`](chapter10_Matrix/10.266.find-out-the-error-39.c) | Find Out The Error 39 |
| 10.267 | [`10.267.find-out-the-error-40.c`](chapter10_Matrix/10.267.find-out-the-error-40.c) | Find Out The Error 40 |
| 10.268 | [`10.268.find-out-the-error-41.c`](chapter10_Matrix/10.268.find-out-the-error-41.c) | Find Out The Error 41 |
| 10.269 | [`10.269.find-out-the-error-42.c`](chapter10_Matrix/10.269.find-out-the-error-42.c) | Find Out The Error 42 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 11 — Strings

**Programs:** 160

| No. | Program file | Program / topic |
|---:|---|---|
| 11.1 | [`11.1.string-initialization.c`](chapter11_String/11.1.string-initialization.c) | String Initialization |
| 11.2 | [`11.2.string-initialization-2.c`](chapter11_String/11.2.string-initialization-2.c) | String Initialization 2 |
| 11.3 | [`11.3.string-initialization-3.c`](chapter11_String/11.3.string-initialization-3.c) | String Initialization 3 |
| 11.4 | [`11.4.string-initialization-4.c`](chapter11_String/11.4.string-initialization-4.c) | String Initialization 4 |
| 11.5 | [`11.5.string-initialization-5.c`](chapter11_String/11.5.string-initialization-5.c) | String Initialization 5 |
| 11.6 | [`11.6.string-initialization-6.c`](chapter11_String/11.6.string-initialization-6.c) | String Initialization 6 |
| 11.7 | [`11.7.string-initialization-7.c`](chapter11_String/11.7.string-initialization-7.c) | String Initialization 7 |
| 11.8 | [`11.8.string-initialization-8.c`](chapter11_String/11.8.string-initialization-8.c) | String Initialization 8 |
| 11.9 | [`11.9.string-initialization-9.c`](chapter11_String/11.9.string-initialization-9.c) | String Initialization 9 |
| 11.10 | [`11.10.string-copy.c`](chapter11_String/11.10.string-copy.c) | String Copy |
| 11.11 | [`11.11.null-character.c`](chapter11_String/11.11.null-character.c) | Null Character |
| 11.12 | [`11.12.read-string-with-scanf.c`](chapter11_String/11.12.read-string-with-scanf.c) | Read String With Scanf |
| 11.13 | [`11.13.read-entire-line.c`](chapter11_String/11.13.read-entire-line.c) | Read Entire Line |
| 11.14 | [`11.14.reading-until-a-delimiter.c`](chapter11_String/11.14.reading-until-a-delimiter.c) | Reading Until A Delimiter |
| 11.15 | [`11.15.pointing-to-a-string.c`](chapter11_String/11.15.pointing-to-a-string.c) | Pointing To A String |
| 11.16 | [`11.16.pointing-to-a-string-2.c`](chapter11_String/11.16.pointing-to-a-string-2.c) | Pointing To A String 2 |
| 11.17 | [`11.17.pointing-to-a-string-3.c`](chapter11_String/11.17.pointing-to-a-string-3.c) | Pointing To A String 3 |
| 11.18 | [`11.18.pointer-vs-array-a-crucial-distinction.c`](chapter11_String/11.18.pointer-vs-array-a-crucial-distinction.c) | Pointer Vs Array A Crucial Distinction |
| 11.19 | [`11.19.pointer-vs-array-a-crucial-distinction-2.c`](chapter11_String/11.19.pointer-vs-array-a-crucial-distinction-2.c) | Pointer Vs Array A Crucial Distinction 2 |
| 11.20 | [`11.20.size-of-string-pointer.c`](chapter11_String/11.20.size-of-string-pointer.c) | Size Of String Pointer |
| 11.21 | [`11.21.size-of-string-array.c`](chapter11_String/11.21.size-of-string-array.c) | Size Of String Array |
| 11.22 | [`11.22.walking-through-a-string-with-a-pointer.c`](chapter11_String/11.22.walking-through-a-string-with-a-pointer.c) | Walking Through A String With A Pointer |
| 11.23 | [`11.23.walking-through-a-string-with-a-pointer-2.c`](chapter11_String/11.23.walking-through-a-string-with-a-pointer-2.c) | Walking Through A String With A Pointer 2 |
| 11.24 | [`11.24.walking-through-a-string-with-a-pointer-3.c`](chapter11_String/11.24.walking-through-a-string-with-a-pointer-3.c) | Walking Through A String With A Pointer 3 |
| 11.25 | [`11.25.incrementing-and-decrementing-a-pointer.c`](chapter11_String/11.25.incrementing-and-decrementing-a-pointer.c) | Incrementing And Decrementing A Pointer |
| 11.26 | [`11.26.six-building-blocks.c`](chapter11_String/11.26.six-building-blocks.c) | Six Building Blocks |
| 11.27 | [`11.27.six-building-blocks-2.c`](chapter11_String/11.27.six-building-blocks-2.c) | Six Building Blocks 2 |
| 11.28 | [`11.28.six-building-blocks-3.c`](chapter11_String/11.28.six-building-blocks-3.c) | Six Building Blocks 3 |
| 11.29 | [`11.29.six-building-blocks-4.c`](chapter11_String/11.29.six-building-blocks-4.c) | Six Building Blocks 4 |
| 11.30 | [`11.30.six-building-blocks-5.c`](chapter11_String/11.30.six-building-blocks-5.c) | Six Building Blocks 5 |
| 11.31 | [`11.31.six-building-blocks-6.c`](chapter11_String/11.31.six-building-blocks-6.c) | Six Building Blocks 6 |
| 11.32 | [`11.32.six-building-blocks-7.c`](chapter11_String/11.32.six-building-blocks-7.c) | Six Building Blocks 7 |
| 11.33 | [`11.33.string-pointer-arithmetic.c`](chapter11_String/11.33.string-pointer-arithmetic.c) | String Pointer Arithmetic |
| 11.34 | [`11.34.string-pointer-arithmetic-2.c`](chapter11_String/11.34.string-pointer-arithmetic-2.c) | String Pointer Arithmetic 2 |
| 11.35 | [`11.35.string-pointer-arithmetic-3.c`](chapter11_String/11.35.string-pointer-arithmetic-3.c) | String Pointer Arithmetic 3 |
| 11.36 | [`11.36.a-closing-puzzle.c`](chapter11_String/11.36.a-closing-puzzle.c) | A Closing Puzzle |
| 11.37 | [`11.37.return-local-string.c`](chapter11_String/11.37.return-local-string.c) | Return Local String |
| 11.38 | [`11.38.return-string-literal.c`](chapter11_String/11.38.return-string-literal.c) | Return String Literal |
| 11.39 | [`11.39.return-static-string.c`](chapter11_String/11.39.return-static-string.c) | Return Static String |
| 11.40 | [`11.40.swapping-works-fine-without-a-function.c`](chapter11_String/11.40.swapping-works-fine-without-a-function.c) | Swapping Works Fine Without A Function |
| 11.41 | [`11.41.swap-string-pointers.c`](chapter11_String/11.41.swap-string-pointers.c) | Swap String Pointers |
| 11.42 | [`11.42.swap-strings-using-double-pointer.c`](chapter11_String/11.42.swap-strings-using-double-pointer.c) | Swap Strings Using Double Pointer |
| 11.43 | [`11.43.the-correct-fix-pointer-to-a-pointer.c`](chapter11_String/11.43.the-correct-fix-pointer-to-a-pointer.c) | The Correct Fix Pointer To A Pointer |
| 11.44 | [`11.44.filling-an-entire-array.c`](chapter11_String/11.44.filling-an-entire-array.c) | Filling An Entire Array |
| 11.45 | [`11.45.filling-part-of-a-string.c`](chapter11_String/11.45.filling-part-of-a-string.c) | Filling Part Of A String |
| 11.46 | [`11.46.implementing-a-simplified-memset.c`](chapter11_String/11.46.implementing-a-simplified-memset.c) | Implementing A Simplified Memset |
| 11.47 | [`11.47.a-common-pitfall-memset.c`](chapter11_String/11.47.a-common-pitfall-memset.c) | A Common Pitfall Memset |
| 11.48 | [`11.48.string-length.c`](chapter11_String/11.48.string-length.c) | String Length |
| 11.49 | [`11.49.string-length-2.c`](chapter11_String/11.49.string-length-2.c) | String Length 2 |
| 11.50 | [`11.50.implementing-our-own-string-length-function.c`](chapter11_String/11.50.implementing-our-own-string-length-function.c) | Implementing Our Own String Length Function |
| 11.51 | [`11.51.string-copy-2.c`](chapter11_String/11.51.string-copy-2.c) | String Copy 2 |
| 11.52 | [`11.52.string-copy-3.c`](chapter11_String/11.52.string-copy-3.c) | String Copy 3 |
| 11.53 | [`11.53.implementing-strcpy.c`](chapter11_String/11.53.implementing-strcpy.c) | Implementing Strcpy |
| 11.54 | [`11.54.the-danger-of-an-undersized-destination.c`](chapter11_String/11.54.the-danger-of-an-undersized-destination.c) | The Danger Of An Undersized Destination |
| 11.55 | [`11.55.string-length-3.c`](chapter11_String/11.55.string-length-3.c) | String Length 3 |
| 11.56 | [`11.56.overlapping-source-and-destination.c`](chapter11_String/11.56.overlapping-source-and-destination.c) | Overlapping Source And Destination |
| 11.57 | [`11.57.solving-the-overlap-with-a-temporary-buffer.c`](chapter11_String/11.57.solving-the-overlap-with-a-temporary-buffer.c) | Solving The Overlap With A Temporary Buffer |
| 11.58 | [`11.58.returning-a-freshly-allocated-copy.c`](chapter11_String/11.58.returning-a-freshly-allocated-copy.c) | Returning A Freshly Allocated Copy |
| 11.59 | [`11.59.copying-the-first-n-characters-strncpy.c`](chapter11_String/11.59.copying-the-first-n-characters-strncpy.c) | Copying The First N Characters Strncpy |
| 11.60 | [`11.60.implementing-strncpy.c`](chapter11_String/11.60.implementing-strncpy.c) | Implementing Strncpy |
| 11.61 | [`11.61.string-length-4.c`](chapter11_String/11.61.string-length-4.c) | String Length 4 |
| 11.62 | [`11.62.the-memcpy.c`](chapter11_String/11.62.the-memcpy.c) | The Memcpy |
| 11.63 | [`11.63.memcpy.c`](chapter11_String/11.63.memcpy.c) | Memcpy |
| 11.64 | [`11.64.memory-copy.c`](chapter11_String/11.64.memory-copy.c) | Memory Copy |
| 11.65 | [`11.65.the-memmove.c`](chapter11_String/11.65.the-memmove.c) | The Memmove |
| 11.66 | [`11.66.memory-move-memove.c`](chapter11_String/11.66.memory-move-memove.c) | Memory Move Memove |
| 11.67 | [`11.67.string-concatenation.c`](chapter11_String/11.67.string-concatenation.c) | String Concatenation |
| 11.68 | [`11.68.string-concatenation-2.c`](chapter11_String/11.68.string-concatenation-2.c) | String Concatenation 2 |
| 11.69 | [`11.69.string-concatenation-3.c`](chapter11_String/11.69.string-concatenation-3.c) | String Concatenation 3 |
| 11.70 | [`11.70.implementing-concatenation-ourselves.c`](chapter11_String/11.70.implementing-concatenation-ourselves.c) | Implementing Concatenation Ourselves |
| 11.71 | [`11.71.concatenating-into-freshly-allocated-memory.c`](chapter11_String/11.71.concatenating-into-freshly-allocated-memory.c) | Concatenating Into Freshly Allocated Memory |
| 11.72 | [`11.72.the-wrong-way-returning-a-local-array.c`](chapter11_String/11.72.the-wrong-way-returning-a-local-array.c) | The Wrong Way Returning A Local Array |
| 11.73 | [`11.73.fix-1-a-static-local-array.c`](chapter11_String/11.73.fix-1-a-static-local-array.c) | Fix 1 A Static Local Array |
| 11.74 | [`11.74.fix-2-dynamic-allocation.c`](chapter11_String/11.74.fix-2-dynamic-allocation.c) | Fix 2 Dynamic Allocation |
| 11.75 | [`11.75.concatenating-the-first-n-characters.c`](chapter11_String/11.75.concatenating-the-first-n-characters.c) | Concatenating The First N Characters |
| 11.76 | [`11.76.implementing-strncat.c`](chapter11_String/11.76.implementing-strncat.c) | Implementing Strncat |
| 11.77 | [`11.77.string-comparison.c`](chapter11_String/11.77.string-comparison.c) | String Comparison |
| 11.78 | [`11.78.memory-comparison-without-library-function.c`](chapter11_String/11.78.memory-comparison-without-library-function.c) | Memory Comparison Without Library Function |
| 11.79 | [`11.79.reversing-a-whole-string-in-place.c`](chapter11_String/11.79.reversing-a-whole-string-in-place.c) | Reversing A Whole String In Place |
| 11.80 | [`11.80.reversing-only-part-of-a-string.c`](chapter11_String/11.80.reversing-only-part-of-a-string.c) | Reversing Only Part Of A String |
| 11.81 | [`11.81.returning-a-new-reversed-string.c`](chapter11_String/11.81.returning-a-new-reversed-string.c) | Returning A New Reversed String |
| 11.82 | [`11.82.generic-comparator.c`](chapter11_String/11.82.generic-comparator.c) | Generic Comparator |
| 11.83 | [`11.83.generic-swapping.c`](chapter11_String/11.83.generic-swapping.c) | Generic Swapping |
| 11.84 | [`11.84.generic-function-for-finding-the-largest-element.c`](chapter11_String/11.84.generic-function-for-finding-the-largest-element.c) | Generic Function For Finding The Largest Element |
| 11.85 | [`11.85.generic-function-to-search-an-item.c`](chapter11_String/11.85.generic-function-to-search-an-item.c) | Generic Function To Search An Item |
| 11.86 | [`11.86.reversal-of-an-array-using-a-generic-function.c`](chapter11_String/11.86.reversal-of-an-array-using-a-generic-function.c) | Reversal Of An Array Using A Generic Function |
| 11.87 | [`11.87.strpbrk.c`](chapter11_String/11.87.strpbrk.c) | Strpbrk |
| 11.88 | [`11.88.strspn.c`](chapter11_String/11.88.strspn.c) | Strspn |
| 11.89 | [`11.89.strcspn.c`](chapter11_String/11.89.strcspn.c) | Strcspn |
| 11.90 | [`11.90.find-character-in-string.c`](chapter11_String/11.90.find-character-in-string.c) | Find Character In String |
| 11.91 | [`11.91.strrchr.c`](chapter11_String/11.91.strrchr.c) | Strrchr |
| 11.92 | [`11.92.find-substring.c`](chapter11_String/11.92.find-substring.c) | Find Substring |
| 11.93 | [`11.93.find-substring-2.c`](chapter11_String/11.93.find-substring-2.c) | Find Substring 2 |
| 11.94 | [`11.94.string-tokenization.c`](chapter11_String/11.94.string-tokenization.c) | String Tokenization |
| 11.95 | [`11.95.extracting-a-substring.c`](chapter11_String/11.95.extracting-a-substring.c) | Extracting A Substring |
| 11.96 | [`11.96.deleting-a-substring.c`](chapter11_String/11.96.deleting-a-substring.c) | Deleting A Substring |
| 11.97 | [`11.97.find-substring-3.c`](chapter11_String/11.97.find-substring-3.c) | Find Substring 3 |
| 11.98 | [`11.98.insert-a-substring.c`](chapter11_String/11.98.insert-a-substring.c) | Insert A Substring |
| 11.99 | [`11.99.find-substring-4.c`](chapter11_String/11.99.find-substring-4.c) | Find Substring 4 |
| 11.100 | [`11.100.string-copy-4.c`](chapter11_String/11.100.string-copy-4.c) | String Copy 4 |
| 11.101 | [`11.101.method-2-compare-characters-from-both-ends.c`](chapter11_String/11.101.method-2-compare-characters-from-both-ends.c) | Method 2 Compare Characters From Both Ends |
| 11.102 | [`11.102.method-3-function-without-a-return-value.c`](chapter11_String/11.102.method-3-function-without-a-return-value.c) | Method 3 Function Without A Return Value |
| 11.103 | [`11.103.string-length-5.c`](chapter11_String/11.103.string-length-5.c) | String Length 5 |
| 11.104 | [`11.104.random-string.c`](chapter11_String/11.104.random-string.c) | Random String |
| 11.105 | [`11.105.random-string-2.c`](chapter11_String/11.105.random-string-2.c) | Random String 2 |
| 11.106 | [`11.106.using-a-two-dimensional-character-array.c`](chapter11_String/11.106.using-a-two-dimensional-character-array.c) | Using A Two Dimensional Character Array |
| 11.107 | [`11.107.using-a-two-dimensional-character-array-2.c`](chapter11_String/11.107.using-a-two-dimensional-character-array-2.c) | Using A Two Dimensional Character Array 2 |
| 11.108 | [`11.108.size-of-string-array-2.c`](chapter11_String/11.108.size-of-string-array-2.c) | Size Of String Array 2 |
| 11.109 | [`11.109.using-an-array-of-pointers.c`](chapter11_String/11.109.using-an-array-of-pointers.c) | Using An Array Of Pointers |
| 11.110 | [`11.110.size-of-string-array-3.c`](chapter11_String/11.110.size-of-string-array-3.c) | Size Of String Array 3 |
| 11.111 | [`11.111.inputting-the-strings.c`](chapter11_String/11.111.inputting-the-strings.c) | Inputting The Strings |
| 11.112 | [`11.112.string-copy-5.c`](chapter11_String/11.112.string-copy-5.c) | String Copy 5 |
| 11.113 | [`11.113.string-length-6.c`](chapter11_String/11.113.string-length-6.c) | String Length 6 |
| 11.114 | [`11.114.reversing-a-sentence.c`](chapter11_String/11.114.reversing-a-sentence.c) | Reversing A Sentence |
| 11.115 | [`11.115.string-length-7.c`](chapter11_String/11.115.string-length-7.c) | String Length 7 |
| 11.116 | [`11.116.plaintext-ciphertext-encryption-and-decryption.c`](chapter11_String/11.116.plaintext-ciphertext-encryption-and-decryption.c) | Plaintext Ciphertext Encryption And Decryption |
| 11.117 | [`11.117.find-the-output.c`](chapter11_String/11.117.find-the-output.c) | Find The Output |
| 11.118 | [`11.118.find-the-output-2.c`](chapter11_String/11.118.find-the-output-2.c) | Find The Output 2 |
| 11.119 | [`11.119.find-the-output-3.c`](chapter11_String/11.119.find-the-output-3.c) | Find The Output 3 |
| 11.120 | [`11.120.find-the-output-4.c`](chapter11_String/11.120.find-the-output-4.c) | Find The Output 4 |
| 11.121 | [`11.121.find-the-output-5.c`](chapter11_String/11.121.find-the-output-5.c) | Find The Output 5 |
| 11.122 | [`11.122.find-the-output-6.c`](chapter11_String/11.122.find-the-output-6.c) | Find The Output 6 |
| 11.123 | [`11.123.find-the-output-7.c`](chapter11_String/11.123.find-the-output-7.c) | Find The Output 7 |
| 11.124 | [`11.124.find-the-output-8.c`](chapter11_String/11.124.find-the-output-8.c) | Find The Output 8 |
| 11.125 | [`11.125.find-the-output-9.c`](chapter11_String/11.125.find-the-output-9.c) | Find The Output 9 |
| 11.126 | [`11.126.find-the-output-10.c`](chapter11_String/11.126.find-the-output-10.c) | Find The Output 10 |
| 11.127 | [`11.127.find-the-output-11.c`](chapter11_String/11.127.find-the-output-11.c) | Find The Output 11 |
| 11.128 | [`11.128.find-the-output-12.c`](chapter11_String/11.128.find-the-output-12.c) | Find The Output 12 |
| 11.129 | [`11.129.find-the-output-13.c`](chapter11_String/11.129.find-the-output-13.c) | Find The Output 13 |
| 11.130 | [`11.130.find-the-output-14.c`](chapter11_String/11.130.find-the-output-14.c) | Find The Output 14 |
| 11.131 | [`11.131.find-the-output-15.c`](chapter11_String/11.131.find-the-output-15.c) | Find The Output 15 |
| 11.132 | [`11.132.find-the-output-16.c`](chapter11_String/11.132.find-the-output-16.c) | Find The Output 16 |
| 11.133 | [`11.133.string-length-8.c`](chapter11_String/11.133.string-length-8.c) | String Length 8 |
| 11.134 | [`11.134.find-the-output-17.c`](chapter11_String/11.134.find-the-output-17.c) | Find The Output 17 |
| 11.135 | [`11.135.find-the-output-18.c`](chapter11_String/11.135.find-the-output-18.c) | Find The Output 18 |
| 11.136 | [`11.136.find-the-output-19.c`](chapter11_String/11.136.find-the-output-19.c) | Find The Output 19 |
| 11.137 | [`11.137.string-copy-6.c`](chapter11_String/11.137.string-copy-6.c) | String Copy 6 |
| 11.138 | [`11.138.find-the-output-20.c`](chapter11_String/11.138.find-the-output-20.c) | Find The Output 20 |
| 11.139 | [`11.139.find-the-output-21.c`](chapter11_String/11.139.find-the-output-21.c) | Find The Output 21 |
| 11.140 | [`11.140.find-the-output-22.c`](chapter11_String/11.140.find-the-output-22.c) | Find The Output 22 |
| 11.141 | [`11.141.find-the-output-23.c`](chapter11_String/11.141.find-the-output-23.c) | Find The Output 23 |
| 11.142 | [`11.142.string-comparison-2.c`](chapter11_String/11.142.string-comparison-2.c) | String Comparison 2 |
| 11.143 | [`11.143.find-out-the-error.c`](chapter11_String/11.143.find-out-the-error.c) | Find Out The Error |
| 11.144 | [`11.144.find-out-the-error-2.c`](chapter11_String/11.144.find-out-the-error-2.c) | Find Out The Error 2 |
| 11.145 | [`11.145.find-out-the-error-3.c`](chapter11_String/11.145.find-out-the-error-3.c) | Find Out The Error 3 |
| 11.146 | [`11.146.string-concatenation-4.c`](chapter11_String/11.146.string-concatenation-4.c) | String Concatenation 4 |
| 11.147 | [`11.147.string-concatenation-5.c`](chapter11_String/11.147.string-concatenation-5.c) | String Concatenation 5 |
| 11.148 | [`11.148.find-out-the-error-4.c`](chapter11_String/11.148.find-out-the-error-4.c) | Find Out The Error 4 |
| 11.149 | [`11.149.find-out-the-error-5.c`](chapter11_String/11.149.find-out-the-error-5.c) | Find Out The Error 5 |
| 11.150 | [`11.150.string-copy-7.c`](chapter11_String/11.150.string-copy-7.c) | String Copy 7 |
| 11.151 | [`11.151.read-string-with-gets.c`](chapter11_String/11.151.read-string-with-gets.c) | Read String With Gets |
| 11.152 | [`11.152.read-string-with-scanf-2.c`](chapter11_String/11.152.read-string-with-scanf-2.c) | Read String With Scanf 2 |
| 11.153 | [`11.153.read-string-with-scanf-3.c`](chapter11_String/11.153.read-string-with-scanf-3.c) | Read String With Scanf 3 |
| 11.154 | [`11.154.find-out-the-error-6.c`](chapter11_String/11.154.find-out-the-error-6.c) | Find Out The Error 6 |
| 11.155 | [`11.155.string-copy-8.c`](chapter11_String/11.155.string-copy-8.c) | String Copy 8 |
| 11.156 | [`11.156.string-copy-9.c`](chapter11_String/11.156.string-copy-9.c) | String Copy 9 |
| 11.157 | [`11.157.find-out-the-error-7.c`](chapter11_String/11.157.find-out-the-error-7.c) | Find Out The Error 7 |
| 11.158 | [`11.158.string-length-9.c`](chapter11_String/11.158.string-length-9.c) | String Length 9 |
| 11.159 | [`11.159.find-out-the-error-8.c`](chapter11_String/11.159.find-out-the-error-8.c) | Find Out The Error 8 |
| 11.160 | [`11.160.find-out-the-error-9.c`](chapter11_String/11.160.find-out-the-error-9.c) | Find Out The Error 9 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 12 — Structures and Union

**Programs:** 170

| No. | Program file | Program / topic |
|---:|---|---|
| 12.1 | [`12.1.declaration-and-definition.c`](chapter12_Structures%20and%20Union/12.1.declaration-and-definition.c) | Declaration And Definition |
| 12.2 | [`12.2.structure-initialization.c`](chapter12_Structures%20and%20Union/12.2.structure-initialization.c) | Structure Initialization |
| 12.3 | [`12.3.structure-initialization-example-2.c`](chapter12_Structures%20and%20Union/12.3.structure-initialization-example-2.c) | Structure Initialization Example 2 |
| 12.4 | [`12.4.structure-initialization-designated-initialization.c`](chapter12_Structures%20and%20Union/12.4.structure-initialization-designated-initialization.c) | Structure Initialization Designated Initialization |
| 12.5 | [`12.5.structure-initialization-designated-initialization-example-2.c`](chapter12_Structures%20and%20Union/12.5.structure-initialization-designated-initialization-example-2.c) | Structure Initialization Designated Initialization Example 2 |
| 12.6 | [`12.6.the-typedef-using-typedef-after-structure-declaration.c`](chapter12_Structures%20and%20Union/12.6.the-typedef-using-typedef-after-structure-declaration.c) | The Typedef Using Typedef After Structure Declaration |
| 12.7 | [`12.7.the-typedef-using-typedef-directly-with-the-structure-declaration.c`](chapter12_Structures%20and%20Union/12.7.the-typedef-using-typedef-directly-with-the-structure-declaration.c) | The Typedef Using Typedef Directly With The Structure Declaration |
| 12.8 | [`12.8.accessing-members-of-a-structure-reading-structure-members.c`](chapter12_Structures%20and%20Union/12.8.accessing-members-of-a-structure-reading-structure-members.c) | Accessing Members Of A Structure Reading Structure Members |
| 12.9 | [`12.9.accessing-members-of-a-structure-assigning-values-to-structure-members.c`](chapter12_Structures%20and%20Union/12.9.accessing-members-of-a-structure-assigning-values-to-structure-members.c) | Accessing Members Of A Structure Assigning Values To Structure Members |
| 12.10 | [`12.10.accessing-members-of-a-structure-accessing-structure-members-using-initialization.c`](chapter12_Structures%20and%20Union/12.10.accessing-members-of-a-structure-accessing-structure-members-using-initialization.c) | Accessing Members Of A Structure Accessing Structure Members Using Initialization |
| 12.11 | [`12.11.accessing-members-of-a-structure-modifying-structure-members.c`](chapter12_Structures%20and%20Union/12.11.accessing-members-of-a-structure-modifying-structure-members.c) | Accessing Members Of A Structure Modifying Structure Members |
| 12.12 | [`12.12.accessing-members-of-a-structure-accessing-members-of-multiple-structure-objects.c`](chapter12_Structures%20and%20Union/12.12.accessing-members-of-a-structure-accessing-members-of-multiple-structure-objects.c) | Accessing Members Of A Structure Accessing Members Of Multiple Structure Objects |
| 12.13 | [`12.13.accessing-members-of-a-structure-accessing-members-through-a-structure-pointer.c`](chapter12_Structures%20and%20Union/12.13.accessing-members-of-a-structure-accessing-members-through-a-structure-pointer.c) | Accessing Members Of A Structure Accessing Members Through A Structure Pointer |
| 12.14 | [`12.14.memory-allocation-of-structure.c`](chapter12_Structures%20and%20Union/12.14.memory-allocation-of-structure.c) | Memory Allocation Of Structure |
| 12.15 | [`12.15.memory-allocation-of-structure-example-2.c`](chapter12_Structures%20and%20Union/12.15.memory-allocation-of-structure-example-2.c) | Memory Allocation Of Structure Example 2 |
| 12.16 | [`12.16.memory-allocation-of-structure-important-point.c`](chapter12_Structures%20and%20Union/12.16.memory-allocation-of-structure-important-point.c) | Memory Allocation Of Structure Important Point |
| 12.17 | [`12.17.memory-allocation-of-structure-changing-the-order-of-members.c`](chapter12_Structures%20and%20Union/12.17.memory-allocation-of-structure-changing-the-order-of-members.c) | Memory Allocation Of Structure Changing The Order Of Members |
| 12.18 | [`12.18.memory-allocation-of-structure-changing-the-order-of-members-example-2.c`](chapter12_Structures%20and%20Union/12.18.memory-allocation-of-structure-changing-the-order-of-members-example-2.c) | Memory Allocation Of Structure Changing The Order Of Members Example 2 |
| 12.19 | [`12.19.memory-allocation-of-an-array-within-a-structure.c`](chapter12_Structures%20and%20Union/12.19.memory-allocation-of-an-array-within-a-structure.c) | Memory Allocation Of An Array Within A Structure |
| 12.20 | [`12.20.memory-allocation-of-an-array-within-a-structure-effect-of-the-position-of-members.c`](chapter12_Structures%20and%20Union/12.20.memory-allocation-of-an-array-within-a-structure-effect-of-the-position-of-members.c) | Memory Allocation Of An Array Within A Structure Effect Of The Position Of Members |
| 12.21 | [`12.21.memory-allocation-of-an-array-within-a-structure-structure-containing-an-array-of-integers.c`](chapter12_Structures%20and%20Union/12.21.memory-allocation-of-an-array-within-a-structure-structure-containing-an-array-of-integers.c) | Memory Allocation Of An Array Within A Structure Structure Containing An Array Of Integers |
| 12.22 | [`12.22.memory-allocation-of-an-array-within-a-structure-effect-of-a-larger-alignment-requirement.c`](chapter12_Structures%20and%20Union/12.22.memory-allocation-of-an-array-within-a-structure-effect-of-a-larger-alignment-requirement.c) | Memory Allocation Of An Array Within A Structure Effect Of A Larger Alignment Requirement |
| 12.23 | [`12.23.memory-allocation-of-an-array-within-a-structure-changing-the-size-of-the-array.c`](chapter12_Structures%20and%20Union/12.23.memory-allocation-of-an-array-within-a-structure-changing-the-size-of-the-array.c) | Memory Allocation Of An Array Within A Structure Changing The Size Of The Array |
| 12.24 | [`12.24.packing-packing-using-pragma-pack.c`](chapter12_Structures%20and%20Union/12.24.packing-packing-using-pragma-pack.c) | Packing Packing Using Pragma Pack |
| 12.25 | [`12.25.packing-packing-with-size-2.c`](chapter12_Structures%20and%20Union/12.25.packing-packing-with-size-2.c) | Packing Packing With Size 2 |
| 12.26 | [`12.26.packing-packing-with-size-4.c`](chapter12_Structures%20and%20Union/12.26.packing-packing-with-size-4.c) | Packing Packing With Size 4 |
| 12.27 | [`12.27.packing-why-is-pragma-pack-3.c`](chapter12_Structures%20and%20Union/12.27.packing-why-is-pragma-pack-3.c) | Packing Why Is Pragma Pack 3 |
| 12.28 | [`12.28.packing-packing-using-packed.c`](chapter12_Structures%20and%20Union/12.28.packing-packing-using-packed.c) | Packing Packing Using Packed |
| 12.29 | [`12.29.packing-packing-an-array-member.c`](chapter12_Structures%20and%20Union/12.29.packing-packing-an-array-member.c) | Packing Packing An Array Member |
| 12.30 | [`12.30.memory-allocation-for-the-union.c`](chapter12_Structures%20and%20Union/12.30.memory-allocation-for-the-union.c) | Memory Allocation For The Union |
| 12.31 | [`12.31.memory-allocation-for-the-union-memory-allocation-for-an-array-member.c`](chapter12_Structures%20and%20Union/12.31.memory-allocation-for-the-union-memory-allocation-for-an-array-member.c) | Memory Allocation For The Union Memory Allocation For An Array Member |
| 12.32 | [`12.32.memory-allocation-for-the-union-changing-the-data-type-of-another-member.c`](chapter12_Structures%20and%20Union/12.32.memory-allocation-for-the-union-changing-the-data-type-of-another-member.c) | Memory Allocation For The Union Changing The Data Type Of Another Member |
| 12.33 | [`12.33.memory-allocation-for-the-union-union-containing-an-integer-array.c`](chapter12_Structures%20and%20Union/12.33.memory-allocation-for-the-union-union-containing-an-integer-array.c) | Memory Allocation For The Union Union Containing An Integer Array |
| 12.34 | [`12.34.memory-allocation-for-the-union-memory-allocation-for-both-struct.c`](chapter12_Structures%20and%20Union/12.34.memory-allocation-for-the-union-memory-allocation-for-both-struct.c) | Memory Allocation For The Union Memory Allocation For Both Struct |
| 12.35 | [`12.35.memory-allocation-for-the-union-defining-the-union-inside-the-structure.c`](chapter12_Structures%20and%20Union/12.35.memory-allocation-for-the-union-defining-the-union-inside-the-structure.c) | Memory Allocation For The Union Defining The Union Inside The Structure |
| 12.36 | [`12.36.memory-allocation-for-the-union-effect-of-member-order.c`](chapter12_Structures%20and%20Union/12.36.memory-allocation-for-the-union-effect-of-member-order.c) | Memory Allocation For The Union Effect Of Member Order |
| 12.37 | [`12.37.memory-allocation-for-the-union-a-structure-inside-a-union.c`](chapter12_Structures%20and%20Union/12.37.memory-allocation-for-the-union-a-structure-inside-a-union.c) | Memory Allocation For The Union A Structure Inside A Union |
| 12.38 | [`12.38.memory-allocation-for-the-union-a-structure-containing-a-union-and-another-large-member.c`](chapter12_Structures%20and%20Union/12.38.memory-allocation-for-the-union-a-structure-containing-a-union-and-another-large-member.c) | Memory Allocation For The Union A Structure Containing A Union And Another Large Member |
| 12.39 | [`12.39.memory-allocation-for-arrays-in-nested-structures-and-unions-array-inside-a-union-and-unio.c`](chapter12_Structures%20and%20Union/12.39.memory-allocation-for-arrays-in-nested-structures-and-unions-array-inside-a-union-and-unio.c) | Memory Allocation For Arrays In Nested Structures And Unions Array Inside A Union And Unio |
| 12.40 | [`12.40.memory-allocation-for-arrays-in-nested-structures-and-unions-array-of-int.c`](chapter12_Structures%20and%20Union/12.40.memory-allocation-for-arrays-in-nested-structures-and-unions-array-of-int.c) | Memory Allocation For Arrays In Nested Structures And Unions Array Of Int |
| 12.41 | [`12.41.memory-allocation-for-arrays-in-nested-structures-and-unions-array-of-char.c`](chapter12_Structures%20and%20Union/12.41.memory-allocation-for-arrays-in-nested-structures-and-unions-array-of-char.c) | Memory Allocation For Arrays In Nested Structures And Unions Array Of Char |
| 12.42 | [`12.42.memory-allocation-for-nested-structures-unions-and-arrays.c`](chapter12_Structures%20and%20Union/12.42.memory-allocation-for-nested-structures-unions-and-arrays.c) | Memory Allocation For Nested Structures Unions And Arrays |
| 12.43 | [`12.43.memory-allocation-for-nested-structures-unions-and-arrays-array-of-unions-inside-a-structu.c`](chapter12_Structures%20and%20Union/12.43.memory-allocation-for-nested-structures-unions-and-arrays-array-of-unions-inside-a-structu.c) | Memory Allocation For Nested Structures Unions And Arrays Array Of Unions Inside A Structu |
| 12.44 | [`12.44.memory-allocation-for-nested-structures-unions-and-arrays-array-of-structures-inside-a-uni.c`](chapter12_Structures%20and%20Union/12.44.memory-allocation-for-nested-structures-unions-and-arrays-array-of-structures-inside-a-uni.c) | Memory Allocation For Nested Structures Unions And Arrays Array Of Structures Inside A Uni |
| 12.45 | [`12.45.memory-allocation-for-nested-structures-unions-and-arrays-array-of-nested-structures.c`](chapter12_Structures%20and%20Union/12.45.memory-allocation-for-nested-structures-unions-and-arrays-array-of-nested-structures.c) | Memory Allocation For Nested Structures Unions And Arrays Array Of Nested Structures |
| 12.46 | [`12.46.accessing-the-members-of-a-union.c`](chapter12_Structures%20and%20Union/12.46.accessing-the-members-of-a-union.c) | Accessing The Members Of A Union |
| 12.47 | [`12.47.accessing-the-members-of-a-union-accessing-union-members-with-different-data-types.c`](chapter12_Structures%20and%20Union/12.47.accessing-the-members-of-a-union-accessing-union-members-with-different-data-types.c) | Accessing The Members Of A Union Accessing Union Members With Different Data Types |
| 12.48 | [`12.48.accessing-the-members-of-a-union-changing-the-active-member-of-a-union.c`](chapter12_Structures%20and%20Union/12.48.accessing-the-members-of-a-union-changing-the-active-member-of-a-union.c) | Accessing The Members Of A Union Changing The Active Member Of A Union |
| 12.49 | [`12.49.accessing-the-members-of-a-union-a-practical-example.c`](chapter12_Structures%20and%20Union/12.49.accessing-the-members-of-a-union-a-practical-example.c) | Accessing The Members Of A Union A Practical Example |
| 12.50 | [`12.50.conversion-of-string-into-integer.c`](chapter12_Structures%20and%20Union/12.50.conversion-of-string-into-integer.c) | Conversion Of String Into Integer |
| 12.51 | [`12.51.conversion-of-string-into-integer-example-2.c`](chapter12_Structures%20and%20Union/12.51.conversion-of-string-into-integer-example-2.c) | Conversion Of String Into Integer Example 2 |
| 12.52 | [`12.52.conversion-of-string-into-integer-example-3.c`](chapter12_Structures%20and%20Union/12.52.conversion-of-string-into-integer-example-3.c) | Conversion Of String Into Integer Example 3 |
| 12.53 | [`12.53.conversion-of-string-into-integer-example-4.c`](chapter12_Structures%20and%20Union/12.53.conversion-of-string-into-integer-example-4.c) | Conversion Of String Into Integer Example 4 |
| 12.54 | [`12.54.conversion-of-string-into-integer-example-5.c`](chapter12_Structures%20and%20Union/12.54.conversion-of-string-into-integer-example-5.c) | Conversion Of String Into Integer Example 5 |
| 12.55 | [`12.55.conversion-of-string-into-integer-example-6.c`](chapter12_Structures%20and%20Union/12.55.conversion-of-string-into-integer-example-6.c) | Conversion Of String Into Integer Example 6 |
| 12.56 | [`12.56.conversion-of-string-into-integer-without-using-a-union.c`](chapter12_Structures%20and%20Union/12.56.conversion-of-string-into-integer-without-using-a-union.c) | Conversion Of String Into Integer Without Using A Union |
| 12.57 | [`12.57.conversion-of-string-into-integer-without-using-a-union-problem-with-a-short-string.c`](chapter12_Structures%20and%20Union/12.57.conversion-of-string-into-integer-without-using-a-union-problem-with-a-short-string.c) | Conversion Of String Into Integer Without Using A Union Problem With A Short String |
| 12.58 | [`12.58.conversion-of-string-into-integer-without-using-a-union-comparison-with-the-union-approach.c`](chapter12_Structures%20and%20Union/12.58.conversion-of-string-into-integer-without-using-a-union-comparison-with-the-union-approach.c) | Conversion Of String Into Integer Without Using A Union Comparison With The Union Approach |
| 12.59 | [`12.59.drawbacks-of-union.c`](chapter12_Structures%20and%20Union/12.59.drawbacks-of-union.c) | Drawbacks Of Union |
| 12.60 | [`12.60.drawbacks-of-union-example-2.c`](chapter12_Structures%20and%20Union/12.60.drawbacks-of-union-example-2.c) | Drawbacks Of Union Example 2 |
| 12.61 | [`12.61.drawbacks-of-union-example-3.c`](chapter12_Structures%20and%20Union/12.61.drawbacks-of-union-example-3.c) | Drawbacks Of Union Example 3 |
| 12.62 | [`12.62.drawbacks-of-union-example-4.c`](chapter12_Structures%20and%20Union/12.62.drawbacks-of-union-example-4.c) | Drawbacks Of Union Example 4 |
| 12.63 | [`12.63.structure-and-pointer.c`](chapter12_Structures%20and%20Union/12.63.structure-and-pointer.c) | Structure And Pointer |
| 12.64 | [`12.64.structure-and-pointer-using-malloc-with-a-structure-pointer.c`](chapter12_Structures%20and%20Union/12.64.structure-and-pointer-using-malloc-with-a-structure-pointer.c) | Structure And Pointer Using Malloc With A Structure Pointer |
| 12.65 | [`12.65.structure-and-pointer-pointer-member-inside-a-structure.c`](chapter12_Structures%20and%20Union/12.65.structure-and-pointer-pointer-member-inside-a-structure.c) | Structure And Pointer Pointer Member Inside A Structure |
| 12.66 | [`12.66.structure-and-pointer-pointer-member-inside-a-structure-example-2.c`](chapter12_Structures%20and%20Union/12.66.structure-and-pointer-pointer-member-inside-a-structure-example-2.c) | Structure And Pointer Pointer Member Inside A Structure Example 2 |
| 12.67 | [`12.67.structure-and-pointer-dynamically-allocating-memory-for-a-string.c`](chapter12_Structures%20and%20Union/12.67.structure-and-pointer-dynamically-allocating-memory-for-a-string.c) | Structure And Pointer Dynamically Allocating Memory For A String |
| 12.68 | [`12.68.structure-and-pointer-accessing-a-string-character-by-character.c`](chapter12_Structures%20and%20Union/12.68.structure-and-pointer-accessing-a-string-character-by-character.c) | Structure And Pointer Accessing A String Character By Character |
| 12.69 | [`12.69.structures-and-function-passing-a-structure-by-value.c`](chapter12_Structures%20and%20Union/12.69.structures-and-function-passing-a-structure-by-value.c) | Structures And Function Passing A Structure By Value |
| 12.70 | [`12.70.structures-and-function-passing-a-structure-using-a-pointer.c`](chapter12_Structures%20and%20Union/12.70.structures-and-function-passing-a-structure-using-a-pointer.c) | Structures And Function Passing A Structure Using A Pointer |
| 12.71 | [`12.71.structures-and-function-passing-an-array-of-structures-to-a-function.c`](chapter12_Structures%20and%20Union/12.71.structures-and-function-passing-an-array-of-structures-to-a-function.c) | Structures And Function Passing An Array Of Structures To A Function |
| 12.72 | [`12.72.structures-and-function-array-of-student-structures.c`](chapter12_Structures%20and%20Union/12.72.structures-and-function-array-of-student-structures.c) | Structures And Function Array Of Student Structures |
| 12.73 | [`12.73.structures-and-function-using-a-pointer-for-the-name.c`](chapter12_Structures%20and%20Union/12.73.structures-and-function-using-a-pointer-for-the-name.c) | Structures And Function Using A Pointer For The Name |
| 12.74 | [`12.74.structures-and-function-dynamically-allocating-memory-for-the-name.c`](chapter12_Structures%20and%20Union/12.74.structures-and-function-dynamically-allocating-memory-for-the-name.c) | Structures And Function Dynamically Allocating Memory For The Name |
| 12.75 | [`12.75.structures-and-array-using-a-pointer-for-a-dynamically-allocated-array.c`](chapter12_Structures%20and%20Union/12.75.structures-and-array-using-a-pointer-for-a-dynamically-allocated-array.c) | Structures And Array Using A Pointer For A Dynamically Allocated Array |
| 12.76 | [`12.76.structures-and-array-fixed-sized-array-inside-a-structure.c`](chapter12_Structures%20and%20Union/12.76.structures-and-array-fixed-sized-array-inside-a-structure.c) | Structures And Array Fixed Sized Array Inside A Structure |
| 12.77 | [`12.77.structures-and-array-variable-sized-arrays-using-a-pointer.c`](chapter12_Structures%20and%20Union/12.77.structures-and-array-variable-sized-arrays-using-a-pointer.c) | Structures And Array Variable Sized Arrays Using A Pointer |
| 12.78 | [`12.78.dynamic-arrays-with-structures-using-function.c`](chapter12_Structures%20and%20Union/12.78.dynamic-arrays-with-structures-using-function.c) | Dynamic Arrays With Structures Using Function |
| 12.79 | [`12.79.dynamic-arrays-with-structures-using-function-managing-an-array-using-a-structure.c`](chapter12_Structures%20and%20Union/12.79.dynamic-arrays-with-structures-using-function-managing-an-array-using-a-structure.c) | Dynamic Arrays With Structures Using Function Managing An Array Using A Structure |
| 12.80 | [`12.80.static-array-using-structure-using-function.c`](chapter12_Structures%20and%20Union/12.80.static-array-using-structure-using-function.c) | Static Array Using Structure Using Function |
| 12.81 | [`12.81.static-in-structure-static-structure-object.c`](chapter12_Structures%20and%20Union/12.81.static-in-structure-static-structure-object.c) | Static In Structure Static Structure Object |
| 12.82 | [`12.82.static-in-structure-non-static-structure-object.c`](chapter12_Structures%20and%20Union/12.82.static-in-structure-non-static-structure-object.c) | Static In Structure Non Static Structure Object |
| 12.83 | [`12.83.static-in-structure-static-structure-and-post-increment.c`](chapter12_Structures%20and%20Union/12.83.static-in-structure-static-structure-and-post-increment.c) | Static In Structure Static Structure And Post Increment |
| 12.84 | [`12.84.static-in-structure-static-structure-and-post-increment-example-2.c`](chapter12_Structures%20and%20Union/12.84.static-in-structure-static-structure-and-post-increment-example-2.c) | Static In Structure Static Structure And Post Increment Example 2 |
| 12.85 | [`12.85.static-in-structure-static-structure-and-call-by-value.c`](chapter12_Structures%20and%20Union/12.85.static-in-structure-static-structure-and-call-by-value.c) | Static In Structure Static Structure And Call By Value |
| 12.86 | [`12.86.anonymous-structure.c`](chapter12_Structures%20and%20Union/12.86.anonymous-structure.c) | Anonymous Structure |
| 12.87 | [`12.87.shallow-copy-vs-deep-copy.c`](chapter12_Structures%20and%20Union/12.87.shallow-copy-vs-deep-copy.c) | Shallow Copy Vs Deep Copy |
| 12.88 | [`12.88.shallow-copy-vs-deep-copy-example-2.c`](chapter12_Structures%20and%20Union/12.88.shallow-copy-vs-deep-copy-example-2.c) | Shallow Copy Vs Deep Copy Example 2 |
| 12.89 | [`12.89.shallow-copy-vs-deep-copy-example-3.c`](chapter12_Structures%20and%20Union/12.89.shallow-copy-vs-deep-copy-example-3.c) | Shallow Copy Vs Deep Copy Example 3 |
| 12.90 | [`12.90.nested-structures.c`](chapter12_Structures%20and%20Union/12.90.nested-structures.c) | Nested Structures |
| 12.91 | [`12.91.nested-structures-example-2.c`](chapter12_Structures%20and%20Union/12.91.nested-structures-example-2.c) | Nested Structures Example 2 |
| 12.92 | [`12.92.structure-and-function-pointers.c`](chapter12_Structures%20and%20Union/12.92.structure-and-function-pointers.c) | Structure And Function Pointers |
| 12.93 | [`12.93.structure-and-function-pointers-example-2.c`](chapter12_Structures%20and%20Union/12.93.structure-and-function-pointers-example-2.c) | Structure And Function Pointers Example 2 |
| 12.94 | [`12.94.structure-and-function-pointers-example-3.c`](chapter12_Structures%20and%20Union/12.94.structure-and-function-pointers-example-3.c) | Structure And Function Pointers Example 3 |
| 12.95 | [`12.95.bit-field-one-bit-bit-field.c`](chapter12_Structures%20and%20Union/12.95.bit-field-one-bit-bit-field.c) | Bit Field One Bit Bit Field |
| 12.96 | [`12.96.bit-field-why-use-unsigned-int.c`](chapter12_Structures%20and%20Union/12.96.bit-field-why-use-unsigned-int.c) | Bit Field Why Use Unsigned Int |
| 12.97 | [`12.97.bit-field-signed-bit-field.c`](chapter12_Structures%20and%20Union/12.97.bit-field-signed-bit-field.c) | Bit Field Signed Bit Field |
| 12.98 | [`12.98.bit-field-another-example-of-signed-bit-fields.c`](chapter12_Structures%20and%20Union/12.98.bit-field-another-example-of-signed-bit-fields.c) | Bit Field Another Example Of Signed Bit Fields |
| 12.99 | [`12.99.bit-field-anonymous-bit-field.c`](chapter12_Structures%20and%20Union/12.99.bit-field-anonymous-bit-field.c) | Bit Field Anonymous Bit Field |
| 12.100 | [`12.100.bit-field-address-of-a-bit-field.c`](chapter12_Structures%20and%20Union/12.100.bit-field-address-of-a-bit-field.c) | Bit Field Address Of A Bit Field |
| 12.101 | [`12.101.bit-field-ordinary-structure-member-versus-bit-field.c`](chapter12_Structures%20and%20Union/12.101.bit-field-ordinary-structure-member-versus-bit-field.c) | Bit Field Ordinary Structure Member Versus Bit Field |
| 12.102 | [`12.102.nested-structure-and-union.c`](chapter12_Structures%20and%20Union/12.102.nested-structure-and-union.c) | Nested Structure And Union |
| 12.103 | [`12.103.nested-structure-and-union-structure-containing-a-union-of-marks.c`](chapter12_Structures%20and%20Union/12.103.nested-structure-and-union-structure-containing-a-union-of-marks.c) | Nested Structure And Union Structure Containing A Union Of Marks |
| 12.104 | [`12.104.nested-structure-and-union-array-of-students.c`](chapter12_Structures%20and%20Union/12.104.nested-structure-and-union-array-of-students.c) | Nested Structure And Union Array Of Students |
| 12.105 | [`12.105.nested-structure-and-union-combining-dynamic-arrays-structures-unions-and-bit-fields.c`](chapter12_Structures%20and%20Union/12.105.nested-structure-and-union-combining-dynamic-arrays-structures-unions-and-bit-fields.c) | Nested Structure And Union Combining Dynamic Arrays Structures Unions And Bit Fields |
| 12.106 | [`12.106.self-referential-structure-using-the-self-referential-pointer.c`](chapter12_Structures%20and%20Union/12.106.self-referential-structure-using-the-self-referential-pointer.c) | Self Referential Structure Using The Self Referential Pointer |
| 12.107 | [`12.107.complex-number.c`](chapter12_Structures%20and%20Union/12.107.complex-number.c) | Complex Number |
| 12.108 | [`12.108.complex-number-call-by-value-in-a-structure.c`](chapter12_Structures%20and%20Union/12.108.complex-number-call-by-value-in-a-structure.c) | Complex Number Call By Value In A Structure |
| 12.109 | [`12.109.complex-number-addition-of-complex-numbers.c`](chapter12_Structures%20and%20Union/12.109.complex-number-addition-of-complex-numbers.c) | Complex Number Addition Of Complex Numbers |
| 12.110 | [`12.110.comparing-and-sorting-dates.c`](chapter12_Structures%20and%20Union/12.110.comparing-and-sorting-dates.c) | Comparing And Sorting Dates |
| 12.111 | [`12.111.english-word-dictionary-running-the-dictionary.c`](chapter12_Structures%20and%20Union/12.111.english-word-dictionary-running-the-dictionary.c) | English Word Dictionary Running The Dictionary |
| 12.112 | [`12.112.english-word-dictionary-complete-program.c`](chapter12_Structures%20and%20Union/12.112.english-word-dictionary-complete-program.c) | English Word Dictionary Complete Program |
| 12.113 | [`12.113.student-information.c`](chapter12_Structures%20and%20Union/12.113.student-information.c) | Student Information |
| 12.114 | [`12.114.student-information-example-2.c`](chapter12_Structures%20and%20Union/12.114.student-information-example-2.c) | Student Information Example 2 |
| 12.115 | [`12.115.cricket-game.c`](chapter12_Structures%20and%20Union/12.115.cricket-game.c) | Cricket Game |
| 12.116 | [`12.116.football-match-penalty-shootout.c`](chapter12_Structures%20and%20Union/12.116.football-match-penalty-shootout.c) | Football Match Penalty Shootout |
| 12.117 | [`12.117.quiz.c`](chapter12_Structures%20and%20Union/12.117.quiz.c) | Quiz |
| 12.118 | [`12.118.dictionary.c`](chapter12_Structures%20and%20Union/12.118.dictionary.c) | Dictionary |
| 12.119 | [`12.119.find-out-the-output.c`](chapter12_Structures%20and%20Union/12.119.find-out-the-output.c) | Find Out The Output |
| 12.120 | [`12.120.find-out-the-output-example-2.c`](chapter12_Structures%20and%20Union/12.120.find-out-the-output-example-2.c) | Find Out The Output Example 2 |
| 12.121 | [`12.121.find-out-the-output-example-3.c`](chapter12_Structures%20and%20Union/12.121.find-out-the-output-example-3.c) | Find Out The Output Example 3 |
| 12.122 | [`12.122.find-out-the-output-example-4.c`](chapter12_Structures%20and%20Union/12.122.find-out-the-output-example-4.c) | Find Out The Output Example 4 |
| 12.123 | [`12.123.find-out-the-output-example-5.c`](chapter12_Structures%20and%20Union/12.123.find-out-the-output-example-5.c) | Find Out The Output Example 5 |
| 12.124 | [`12.124.find-out-the-output-example-6.c`](chapter12_Structures%20and%20Union/12.124.find-out-the-output-example-6.c) | Find Out The Output Example 6 |
| 12.125 | [`12.125.find-out-the-output-example-7.c`](chapter12_Structures%20and%20Union/12.125.find-out-the-output-example-7.c) | Find Out The Output Example 7 |
| 12.126 | [`12.126.find-out-the-output-example-8.c`](chapter12_Structures%20and%20Union/12.126.find-out-the-output-example-8.c) | Find Out The Output Example 8 |
| 12.127 | [`12.127.find-out-the-output-example-9.c`](chapter12_Structures%20and%20Union/12.127.find-out-the-output-example-9.c) | Find Out The Output Example 9 |
| 12.128 | [`12.128.find-out-the-output-example-10.c`](chapter12_Structures%20and%20Union/12.128.find-out-the-output-example-10.c) | Find Out The Output Example 10 |
| 12.129 | [`12.129.find-out-the-output-example-11.c`](chapter12_Structures%20and%20Union/12.129.find-out-the-output-example-11.c) | Find Out The Output Example 11 |
| 12.130 | [`12.130.find-out-the-output-example-12.c`](chapter12_Structures%20and%20Union/12.130.find-out-the-output-example-12.c) | Find Out The Output Example 12 |
| 12.131 | [`12.131.find-out-the-output-example-13.c`](chapter12_Structures%20and%20Union/12.131.find-out-the-output-example-13.c) | Find Out The Output Example 13 |
| 12.132 | [`12.132.find-out-the-output-example-14.c`](chapter12_Structures%20and%20Union/12.132.find-out-the-output-example-14.c) | Find Out The Output Example 14 |
| 12.133 | [`12.133.find-out-the-output-example-15.c`](chapter12_Structures%20and%20Union/12.133.find-out-the-output-example-15.c) | Find Out The Output Example 15 |
| 12.134 | [`12.134.find-out-the-output-example-16.c`](chapter12_Structures%20and%20Union/12.134.find-out-the-output-example-16.c) | Find Out The Output Example 16 |
| 12.135 | [`12.135.find-out-the-output-example-17.c`](chapter12_Structures%20and%20Union/12.135.find-out-the-output-example-17.c) | Find Out The Output Example 17 |
| 12.136 | [`12.136.find-out-the-output-example-18.c`](chapter12_Structures%20and%20Union/12.136.find-out-the-output-example-18.c) | Find Out The Output Example 18 |
| 12.137 | [`12.137.find-out-the-output-example-19.c`](chapter12_Structures%20and%20Union/12.137.find-out-the-output-example-19.c) | Find Out The Output Example 19 |
| 12.138 | [`12.138.find-out-the-output-example-20.c`](chapter12_Structures%20and%20Union/12.138.find-out-the-output-example-20.c) | Find Out The Output Example 20 |
| 12.139 | [`12.139.find-out-the-output-example-21.c`](chapter12_Structures%20and%20Union/12.139.find-out-the-output-example-21.c) | Find Out The Output Example 21 |
| 12.140 | [`12.140.find-out-the-output-example-22.c`](chapter12_Structures%20and%20Union/12.140.find-out-the-output-example-22.c) | Find Out The Output Example 22 |
| 12.141 | [`12.141.find-out-the-output-example-23.c`](chapter12_Structures%20and%20Union/12.141.find-out-the-output-example-23.c) | Find Out The Output Example 23 |
| 12.142 | [`12.142.find-out-the-output-example-24.c`](chapter12_Structures%20and%20Union/12.142.find-out-the-output-example-24.c) | Find Out The Output Example 24 |
| 12.143 | [`12.143.find-out-the-output-example-25.c`](chapter12_Structures%20and%20Union/12.143.find-out-the-output-example-25.c) | Find Out The Output Example 25 |
| 12.144 | [`12.144.find-out-the-output-example-26.c`](chapter12_Structures%20and%20Union/12.144.find-out-the-output-example-26.c) | Find Out The Output Example 26 |
| 12.145 | [`12.145.find-out-the-output-example-27.c`](chapter12_Structures%20and%20Union/12.145.find-out-the-output-example-27.c) | Find Out The Output Example 27 |
| 12.146 | [`12.146.find-out-the-output-example-28.c`](chapter12_Structures%20and%20Union/12.146.find-out-the-output-example-28.c) | Find Out The Output Example 28 |
| 12.147 | [`12.147.find-out-the-output-example-29.c`](chapter12_Structures%20and%20Union/12.147.find-out-the-output-example-29.c) | Find Out The Output Example 29 |
| 12.148 | [`12.148.find-out-the-output-example-30.c`](chapter12_Structures%20and%20Union/12.148.find-out-the-output-example-30.c) | Find Out The Output Example 30 |
| 12.149 | [`12.149.find-out-the-output-example-31.c`](chapter12_Structures%20and%20Union/12.149.find-out-the-output-example-31.c) | Find Out The Output Example 31 |
| 12.150 | [`12.150.find-out-the-output-example-32.c`](chapter12_Structures%20and%20Union/12.150.find-out-the-output-example-32.c) | Find Out The Output Example 32 |
| 12.151 | [`12.151.find-out-the-error.c`](chapter12_Structures%20and%20Union/12.151.find-out-the-error.c) | Find Out The Error |
| 12.152 | [`12.152.find-out-the-error-example-2.c`](chapter12_Structures%20and%20Union/12.152.find-out-the-error-example-2.c) | Find Out The Error Example 2 |
| 12.153 | [`12.153.find-out-the-error-example-3.c`](chapter12_Structures%20and%20Union/12.153.find-out-the-error-example-3.c) | Find Out The Error Example 3 |
| 12.154 | [`12.154.find-out-the-error-example-4.c`](chapter12_Structures%20and%20Union/12.154.find-out-the-error-example-4.c) | Find Out The Error Example 4 |
| 12.155 | [`12.155.find-out-the-error-example-5.c`](chapter12_Structures%20and%20Union/12.155.find-out-the-error-example-5.c) | Find Out The Error Example 5 |
| 12.156 | [`12.156.find-out-the-error-example-6.c`](chapter12_Structures%20and%20Union/12.156.find-out-the-error-example-6.c) | Find Out The Error Example 6 |
| 12.157 | [`12.157.find-out-the-error-example-7.c`](chapter12_Structures%20and%20Union/12.157.find-out-the-error-example-7.c) | Find Out The Error Example 7 |
| 12.158 | [`12.158.find-out-the-error-example-8.c`](chapter12_Structures%20and%20Union/12.158.find-out-the-error-example-8.c) | Find Out The Error Example 8 |
| 12.159 | [`12.159.find-out-the-error-example-9.c`](chapter12_Structures%20and%20Union/12.159.find-out-the-error-example-9.c) | Find Out The Error Example 9 |
| 12.160 | [`12.160.find-out-the-error-example-10.c`](chapter12_Structures%20and%20Union/12.160.find-out-the-error-example-10.c) | Find Out The Error Example 10 |
| 12.161 | [`12.161.find-out-the-error-example-11.c`](chapter12_Structures%20and%20Union/12.161.find-out-the-error-example-11.c) | Find Out The Error Example 11 |
| 12.162 | [`12.162.find-out-the-error-example-12.c`](chapter12_Structures%20and%20Union/12.162.find-out-the-error-example-12.c) | Find Out The Error Example 12 |
| 12.163 | [`12.163.find-out-the-error-example-13.c`](chapter12_Structures%20and%20Union/12.163.find-out-the-error-example-13.c) | Find Out The Error Example 13 |
| 12.164 | [`12.164.find-out-the-error-example-14.c`](chapter12_Structures%20and%20Union/12.164.find-out-the-error-example-14.c) | Find Out The Error Example 14 |
| 12.165 | [`12.165.find-out-the-error-example-15.c`](chapter12_Structures%20and%20Union/12.165.find-out-the-error-example-15.c) | Find Out The Error Example 15 |
| 12.166 | [`12.166.find-out-the-error-example-16.c`](chapter12_Structures%20and%20Union/12.166.find-out-the-error-example-16.c) | Find Out The Error Example 16 |
| 12.167 | [`12.167.find-out-the-error-example-17.c`](chapter12_Structures%20and%20Union/12.167.find-out-the-error-example-17.c) | Find Out The Error Example 17 |
| 12.168 | [`12.168.find-out-the-error-example-18.c`](chapter12_Structures%20and%20Union/12.168.find-out-the-error-example-18.c) | Find Out The Error Example 18 |
| 12.169 | [`12.169.find-out-the-error-example-19.c`](chapter12_Structures%20and%20Union/12.169.find-out-the-error-example-19.c) | Find Out The Error Example 19 |
| 12.170 | [`12.170.find-out-the-error-example-20.c`](chapter12_Structures%20and%20Union/12.170.find-out-the-error-example-20.c) | Find Out The Error Example 20 |

[Back to Chapter Index](#chapter-index)

---

## Chapter 13 — File Management

**Programs:** 100  
**Companion `.txt` files:** 20

| No. | Program file | Program / topic |
|---:|---|---|
| 13.1 | [`13.1.open-nonexistent-file.c`](chapter13_Files/13.1.open-nonexistent-file.c) | Open Nonexistent File |
| 13.2 | [`13.2.create-file-write-mode.c`](chapter13_Files/13.2.create-file-write-mode.c) | Create File Write Mode |
| 13.3 | [`13.3.runtime-filename.c`](chapter13_Files/13.3.runtime-filename.c) | Runtime Filename |
| 13.4 | [`13.4.write-to-file.c`](chapter13_Files/13.4.write-to-file.c) | Write To File |
| 13.5 | [`13.5.file-pointer-position.c`](chapter13_Files/13.5.file-pointer-position.c) | File Pointer Position |
| 13.6 | [`13.6.write-read-file.c`](chapter13_Files/13.6.write-read-file.c) | Write Read File |
| 13.7 | [`13.7.rewind-file-pointer.c`](chapter13_Files/13.7.rewind-file-pointer.c) | Rewind File Pointer |
| 13.8 | [`13.8.read-until-eof.c`](chapter13_Files/13.8.read-until-eof.c) | Read Until Eof |
| 13.9 | [`13.9.write-integer-with-putw.c`](chapter13_Files/13.9.write-integer-with-putw.c) | Write Integer With Putw |
| 13.10 | [`13.10.integer-vs-text-minus-one.c`](chapter13_Files/13.10.integer-vs-text-minus-one.c) | Integer Vs Text Minus One |
| 13.11 | [`13.11.fseek-file-pointer.c`](chapter13_Files/13.11.fseek-file-pointer.c) | Fseek File Pointer |
| 13.12 | [`13.12.fseek-file-pointer-2.c`](chapter13_Files/13.12.fseek-file-pointer-2.c) | Fseek File Pointer 2 |
| 13.13 | [`13.13.fseek-file-pointer-3.c`](chapter13_Files/13.13.fseek-file-pointer-3.c) | Fseek File Pointer 3 |
| 13.14 | [`13.14.fseek-file-pointer-4.c`](chapter13_Files/13.14.fseek-file-pointer-4.c) | Fseek File Pointer 4 |
| 13.15 | [`13.15.fseek-file-pointer-5.c`](chapter13_Files/13.15.fseek-file-pointer-5.c) | Fseek File Pointer 5 |
| 13.16 | [`13.16.fseek-file-pointer-6.c`](chapter13_Files/13.16.fseek-file-pointer-6.c) | Fseek File Pointer 6 |
| 13.17 | [`13.17.formatted-file-output.c`](chapter13_Files/13.17.formatted-file-output.c) | Formatted File Output |
| 13.18 | [`13.18.formatted-file-output-2.c`](chapter13_Files/13.18.formatted-file-output-2.c) | Formatted File Output 2 |
| 13.19 | [`13.19.file-pointer-position-2.c`](chapter13_Files/13.19.file-pointer-position-2.c) | File Pointer Position 2 |
| 13.20 | [`13.20.read-character-from-file.c`](chapter13_Files/13.20.read-character-from-file.c) | Read Character From File |
| 13.21 | [`13.21.formatted-file-input.c`](chapter13_Files/13.21.formatted-file-input.c) | Formatted File Input |
| 13.22 | [`13.22.formatted-file-input-2.c`](chapter13_Files/13.22.formatted-file-input-2.c) | Formatted File Input 2 |
| 13.23 | [`13.23.formatted-file-input-3.c`](chapter13_Files/13.23.formatted-file-input-3.c) | Formatted File Input 3 |
| 13.24 | [`13.24.read-line-from-file.c`](chapter13_Files/13.24.read-line-from-file.c) | Read Line From File |
| 13.25 | [`13.25.read-line-from-file-2.c`](chapter13_Files/13.25.read-line-from-file-2.c) | Read Line From File 2 |
| 13.26 | [`13.26.read-line-from-file-3.c`](chapter13_Files/13.26.read-line-from-file-3.c) | Read Line From File 3 |
| 13.27 | [`13.27.read-line-from-file-4.c`](chapter13_Files/13.27.read-line-from-file-4.c) | Read Line From File 4 |
| 13.28 | [`13.28.binary-file-io.c`](chapter13_Files/13.28.binary-file-io.c) | Binary File Io |
| 13.29 | [`13.29.binary-file-io-2.c`](chapter13_Files/13.29.binary-file-io-2.c) | Binary File Io 2 |
| 13.30 | [`13.30.binary-file-io-3.c`](chapter13_Files/13.30.binary-file-io-3.c) | Binary File Io 3 |
| 13.31 | [`13.31.binary-file-io-4.c`](chapter13_Files/13.31.binary-file-io-4.c) | Binary File Io 4 |
| 13.32 | [`13.32.formatted-file-output-3.c`](chapter13_Files/13.32.formatted-file-output-3.c) | Formatted File Output 3 |
| 13.33 | [`13.33.fseek-file-pointer-7.c`](chapter13_Files/13.33.fseek-file-pointer-7.c) | Fseek File Pointer 7 |
| 13.34 | [`13.34.demonstration-a-mode-creates-a-file.c`](chapter13_Files/13.34.demonstration-a-mode-creates-a-file.c) | Demonstration A Mode Creates A File |
| 13.35 | [`13.35.formatted-file-output-4.c`](chapter13_Files/13.35.formatted-file-output-4.c) | Formatted File Output 4 |
| 13.36 | [`13.36.fseek-file-pointer-8.c`](chapter13_Files/13.36.fseek-file-pointer-8.c) | Fseek File Pointer 8 |
| 13.37 | [`13.37.fseek-file-pointer-9.c`](chapter13_Files/13.37.fseek-file-pointer-9.c) | Fseek File Pointer 9 |
| 13.38 | [`13.38.formatted-file-output-5.c`](chapter13_Files/13.38.formatted-file-output-5.c) | Formatted File Output 5 |
| 13.39 | [`13.39.formatted-file-output-6.c`](chapter13_Files/13.39.formatted-file-output-6.c) | Formatted File Output 6 |
| 13.40 | [`13.40.fseek-file-pointer-10.c`](chapter13_Files/13.40.fseek-file-pointer-10.c) | Fseek File Pointer 10 |
| 13.41 | [`13.41.fseek-file-pointer-11.c`](chapter13_Files/13.41.fseek-file-pointer-11.c) | Fseek File Pointer 11 |
| 13.42 | [`13.42.read-character-from-file-2.c`](chapter13_Files/13.42.read-character-from-file-2.c) | Read Character From File 2 |
| 13.43 | [`13.43.binary-file.c`](chapter13_Files/13.43.binary-file.c) | Binary File |
| 13.44 | [`13.44.binary-file-io-5.c`](chapter13_Files/13.44.binary-file-io-5.c) | Binary File Io 5 |
| 13.45 | [`13.45.binary-file-io-6.c`](chapter13_Files/13.45.binary-file-io-6.c) | Binary File Io 6 |
| 13.46 | [`13.46.binary-file-2.c`](chapter13_Files/13.46.binary-file-2.c) | Binary File 2 |
| 13.47 | [`13.47.read-character-from-file-3.c`](chapter13_Files/13.47.read-character-from-file-3.c) | Read Character From File 3 |
| 13.48 | [`13.48.read-character-from-file-4.c`](chapter13_Files/13.48.read-character-from-file-4.c) | Read Character From File 4 |
| 13.49 | [`13.49.read-character-from-file-5.c`](chapter13_Files/13.49.read-character-from-file-5.c) | Read Character From File 5 |
| 13.50 | [`13.50.read-line-from-file-5.c`](chapter13_Files/13.50.read-line-from-file-5.c) | Read Line From File 5 |
| 13.51 | [`13.51.binary-file-io-7.c`](chapter13_Files/13.51.binary-file-io-7.c) | Binary File Io 7 |
| 13.52 | [`13.52.read-line-from-file-6.c`](chapter13_Files/13.52.read-line-from-file-6.c) | Read Line From File 6 |
| 13.53 | [`13.53.read-line-from-file-7.c`](chapter13_Files/13.53.read-line-from-file-7.c) | Read Line From File 7 |
| 13.54 | [`13.54.formatted-file-output-7.c`](chapter13_Files/13.54.formatted-file-output-7.c) | Formatted File Output 7 |
| 13.55 | [`13.55.fseek-file-pointer-12.c`](chapter13_Files/13.55.fseek-file-pointer-12.c) | Fseek File Pointer 12 |
| 13.56 | [`13.56.fseek-file-pointer-13.c`](chapter13_Files/13.56.fseek-file-pointer-13.c) | Fseek File Pointer 13 |
| 13.57 | [`13.57.fseek-file-pointer-14.c`](chapter13_Files/13.57.fseek-file-pointer-14.c) | Fseek File Pointer 14 |
| 13.58 | [`13.58.read-line-from-file-8.c`](chapter13_Files/13.58.read-line-from-file-8.c) | Read Line From File 8 |
| 13.59 | [`13.59.fseek-file-pointer-15.c`](chapter13_Files/13.59.fseek-file-pointer-15.c) | Fseek File Pointer 15 |
| 13.60 | [`13.60.fseek-file-pointer-16.c`](chapter13_Files/13.60.fseek-file-pointer-16.c) | Fseek File Pointer 16 |
| 13.61 | [`13.61.rename-file.c`](chapter13_Files/13.61.rename-file.c) | Rename File |
| 13.62 | [`13.62.fseek-file-pointer-17.c`](chapter13_Files/13.62.fseek-file-pointer-17.c) | Fseek File Pointer 17 |
| 13.63 | [`13.63.rename-file-2.c`](chapter13_Files/13.63.rename-file-2.c) | Rename File 2 |
| 13.64 | [`13.64.fseek-file-pointer-18.c`](chapter13_Files/13.64.fseek-file-pointer-18.c) | Fseek File Pointer 18 |
| 13.65 | [`13.65.fseek-file-pointer-19.c`](chapter13_Files/13.65.fseek-file-pointer-19.c) | Fseek File Pointer 19 |
| 13.66 | [`13.66.fseek-file-pointer-20.c`](chapter13_Files/13.66.fseek-file-pointer-20.c) | Fseek File Pointer 20 |
| 13.67 | [`13.67.read-line-from-file-9.c`](chapter13_Files/13.67.read-line-from-file-9.c) | Read Line From File 9 |
| 13.68 | [`13.68.the-main-function.c`](chapter13_Files/13.68.the-main-function.c) | The Main Function |
| 13.69 | [`13.69.fseek-file-pointer-21.c`](chapter13_Files/13.69.fseek-file-pointer-21.c) | Fseek File Pointer 21 |
| 13.70 | [`13.70.fseek-file-pointer-22.c`](chapter13_Files/13.70.fseek-file-pointer-22.c) | Fseek File Pointer 22 |
| 13.71 | [`13.71.fseek-file-pointer-23.c`](chapter13_Files/13.71.fseek-file-pointer-23.c) | Fseek File Pointer 23 |
| 13.72 | [`13.72.fseek-file-pointer-24.c`](chapter13_Files/13.72.fseek-file-pointer-24.c) | Fseek File Pointer 24 |
| 13.73 | [`13.73.step-6-the-overall-program-flow.c`](chapter13_Files/13.73.step-6-the-overall-program-flow.c) | Step 6 The Overall Program Flow |
| 13.74 | [`13.74.fseek-file-pointer-25.c`](chapter13_Files/13.74.fseek-file-pointer-25.c) | Fseek File Pointer 25 |
| 13.75 | [`13.75.formatted-file-output-8.c`](chapter13_Files/13.75.formatted-file-output-8.c) | Formatted File Output 8 |
| 13.76 | [`13.76.fseek-file-pointer-26.c`](chapter13_Files/13.76.fseek-file-pointer-26.c) | Fseek File Pointer 26 |
| 13.77 | [`13.77.fseek-file-pointer-27.c`](chapter13_Files/13.77.fseek-file-pointer-27.c) | Fseek File Pointer 27 |
| 13.78 | [`13.78.fseek-file-pointer-28.c`](chapter13_Files/13.78.fseek-file-pointer-28.c) | Fseek File Pointer 28 |
| 13.79 | [`13.79.formatted-file-output-9.c`](chapter13_Files/13.79.formatted-file-output-9.c) | Formatted File Output 9 |
| 13.80 | [`13.80.fseek-file-pointer-29.c`](chapter13_Files/13.80.fseek-file-pointer-29.c) | Fseek File Pointer 29 |
| 13.81 | [`13.81.fseek-file-pointer-30.c`](chapter13_Files/13.81.fseek-file-pointer-30.c) | Fseek File Pointer 30 |
| 13.82 | [`13.82.formatted-file-output-10.c`](chapter13_Files/13.82.formatted-file-output-10.c) | Formatted File Output 10 |
| 13.83 | [`13.83.fseek-file-pointer-31.c`](chapter13_Files/13.83.fseek-file-pointer-31.c) | Fseek File Pointer 31 |
| 13.84 | [`13.84.rewind-file-pointer-2.c`](chapter13_Files/13.84.rewind-file-pointer-2.c) | Rewind File Pointer 2 |
| 13.85 | [`13.85.rewind-file-pointer-3.c`](chapter13_Files/13.85.rewind-file-pointer-3.c) | Rewind File Pointer 3 |
| 13.86 | [`13.86.formatted-file-output-11.c`](chapter13_Files/13.86.formatted-file-output-11.c) | Formatted File Output 11 |
| 13.87 | [`13.87.rewind-file-pointer-4.c`](chapter13_Files/13.87.rewind-file-pointer-4.c) | Rewind File Pointer 4 |
| 13.88 | [`13.88.fseek-file-pointer-32.c`](chapter13_Files/13.88.fseek-file-pointer-32.c) | Fseek File Pointer 32 |
| 13.89 | [`13.89.fseek-file-pointer-33.c`](chapter13_Files/13.89.fseek-file-pointer-33.c) | Fseek File Pointer 33 |
| 13.90 | [`13.90.fseek-file-pointer-34.c`](chapter13_Files/13.90.fseek-file-pointer-34.c) | Fseek File Pointer 34 |
| 13.91 | [`13.91.read-character-from-file-6.c`](chapter13_Files/13.91.read-character-from-file-6.c) | Read Character From File 6 |
| 13.92 | [`13.92.formatted-file-output-12.c`](chapter13_Files/13.92.formatted-file-output-12.c) | Formatted File Output 12 |
| 13.93 | [`13.93.read-character-from-file-7.c`](chapter13_Files/13.93.read-character-from-file-7.c) | Read Character From File 7 |
| 13.94 | [`13.94.formatted-file-output-13.c`](chapter13_Files/13.94.formatted-file-output-13.c) | Formatted File Output 13 |
| 13.95 | [`13.95.fseek-file-pointer-35.c`](chapter13_Files/13.95.fseek-file-pointer-35.c) | Fseek File Pointer 35 |
| 13.96 | [`13.96.binary-file-io-8.c`](chapter13_Files/13.96.binary-file-io-8.c) | Binary File Io 8 |
| 13.97 | [`13.97.fseek-file-pointer-36.c`](chapter13_Files/13.97.fseek-file-pointer-36.c) | Fseek File Pointer 36 |
| 13.98 | [`13.98.binary-file-io-9.c`](chapter13_Files/13.98.binary-file-io-9.c) | Binary File Io 9 |
| 13.99 | [`13.99.read-character-from-file-8.c`](chapter13_Files/13.99.read-character-from-file-8.c) | Read Character From File 8 |
| 13.100 | [`13.100.formatted-file-input-4.c`](chapter13_Files/13.100.formatted-file-input-4.c) | Formatted File Input 4 |

### Companion input/data files

- [`inputs/13.19/myfile.txt`](chapter13_Files/inputs/13.19/myfile.txt)
- [`inputs/13.20/myfile.txt`](chapter13_Files/inputs/13.20/myfile.txt)
- [`inputs/13.21/myfile.txt`](chapter13_Files/inputs/13.21/myfile.txt)
- [`inputs/13.22/myfile.txt`](chapter13_Files/inputs/13.22/myfile.txt)
- [`inputs/13.23/records.txt`](chapter13_Files/inputs/13.23/records.txt)
- [`inputs/13.24/myfile.txt`](chapter13_Files/inputs/13.24/myfile.txt)
- [`inputs/13.25/myfile.txt`](chapter13_Files/inputs/13.25/myfile.txt)
- [`inputs/13.27/myfile.txt`](chapter13_Files/inputs/13.27/myfile.txt)
- [`inputs/13.28/myfile.txt`](chapter13_Files/inputs/13.28/myfile.txt)
- [`inputs/13.32/myfile.txt`](chapter13_Files/inputs/13.32/myfile.txt)
- [`inputs/13.33/myfile.txt`](chapter13_Files/inputs/13.33/myfile.txt)
- [`inputs/13.47/input.txt`](chapter13_Files/inputs/13.47/input.txt)
- [`inputs/13.48/input.txt`](chapter13_Files/inputs/13.48/input.txt)
- [`inputs/13.53/input.txt`](chapter13_Files/inputs/13.53/input.txt)
- [`inputs/13.54/input1.txt`](chapter13_Files/inputs/13.54/input1.txt)
- [`inputs/13.54/input2.txt`](chapter13_Files/inputs/13.54/input2.txt)
- [`inputs/13.58/file1.txt`](chapter13_Files/inputs/13.58/file1.txt)
- [`inputs/13.58/file2.txt`](chapter13_Files/inputs/13.58/file2.txt)
- [`inputs/13.66/input.txt`](chapter13_Files/inputs/13.66/input.txt)
- [`inputs/13.69/input.txt`](chapter13_Files/inputs/13.69/input.txt)

[Back to Chapter Index](#chapter-index)

---

## Chapter 14 — Random Numbers

**Programs:** 42

| No. | Program file | Program / topic |
|---:|---|---|
| 14.1 | [`14.1.rand_first_look.c`](chapter14_Random%20numbers/14.1.rand_first_look.c) | Rand First Look |
| 14.2 | [`14.2.seed_with_clock.c`](chapter14_Random%20numbers/14.2.seed_with_clock.c) | Seed With Clock |
| 14.3 | [`14.3.seed_with_time.c`](chapter14_Random%20numbers/14.3.seed_with_time.c) | Seed With Time |
| 14.4 | [`14.4.fixed_seed_1234.c`](chapter14_Random%20numbers/14.4.fixed_seed_1234.c) | Fixed Seed 1234 |
| 14.5 | [`14.5.fixed_seed_0.c`](chapter14_Random%20numbers/14.5.fixed_seed_0.c) | Fixed Seed 0 |
| 14.6 | [`14.6.guessing_game_no_seed.c`](chapter14_Random%20numbers/14.6.guessing_game_no_seed.c) | Guessing Game No Seed |
| 14.7 | [`14.7.guessing_game_clock_seed.c`](chapter14_Random%20numbers/14.7.guessing_game_clock_seed.c) | Guessing Game Clock Seed |
| 14.8 | [`14.8.guessing_game_rdtsc_seed.c`](chapter14_Random%20numbers/14.8.guessing_game_rdtsc_seed.c) | Guessing Game Rdtsc Seed |
| 14.9 | [`14.9.weighted_dice_roll_game.c`](chapter14_Random%20numbers/14.9.weighted_dice_roll_game.c) | Weighted Dice Roll Game |
| 14.10 | [`14.10.trng16_clock.c`](chapter14_Random%20numbers/14.10.trng16_clock.c) | Trng16 Clock |
| 14.11 | [`14.11.trng32_clock.c`](chapter14_Random%20numbers/14.11.trng32_clock.c) | Trng32 Clock |
| 14.12 | [`14.12.trng64_clock.c`](chapter14_Random%20numbers/14.12.trng64_clock.c) | Trng64 Clock |
| 14.13 | [`14.13.trng_instrumented_trace.c`](chapter14_Random%20numbers/14.13.trng_instrumented_trace.c) | Trng Instrumented Trace |
| 14.14 | [`14.14.trng_with_explicit_delay.c`](chapter14_Random%20numbers/14.14.trng_with_explicit_delay.c) | Trng With Explicit Delay |
| 14.15 | [`14.15.trng_with_randomized_delay.c`](chapter14_Random%20numbers/14.15.trng_with_randomized_delay.c) | Trng With Randomized Delay |
| 14.16 | [`14.16.trng_with_bounded_delay.c`](chapter14_Random%20numbers/14.16.trng_with_bounded_delay.c) | Trng With Bounded Delay |
| 14.17 | [`14.17.trng_custom_range.c`](chapter14_Random%20numbers/14.17.trng_custom_range.c) | Trng Custom Range |
| 14.18 | [`14.18.trng_clock_generator.c`](chapter14_Random%20numbers/14.18.trng_clock_generator.c) | Trng Clock Generator |
| 14.19 | [`14.19.observe_memory_addresses.c`](chapter14_Random%20numbers/14.19.observe_memory_addresses.c) | Observe Memory Addresses |
| 14.20 | [`14.20.address_clock_seed.c`](chapter14_Random%20numbers/14.20.address_clock_seed.c) | Address Clock Seed |
| 14.21 | [`14.21.address_clock_64bit.c`](chapter14_Random%20numbers/14.21.address_clock_64bit.c) | Address Clock 64Bit |
| 14.22 | [`14.22.fibonacci_address_mixer.c`](chapter14_Random%20numbers/14.22.fibonacci_address_mixer.c) | Fibonacci Address Mixer |
| 14.23 | [`14.23.address_rdtsc_mixer.c`](chapter14_Random%20numbers/14.23.address_rdtsc_mixer.c) | Address Rdtsc Mixer |
| 14.24 | [`14.24.lcg_user_seed.c`](chapter14_Random%20numbers/14.24.lcg_user_seed.c) | Lcg User Seed |
| 14.25 | [`14.25.lcg_internal_seed_no_persistence.c`](chapter14_Random%20numbers/14.25.lcg_internal_seed_no_persistence.c) | Lcg Internal Seed No Persistence |
| 14.26 | [`14.26.lcg_static_seed.c`](chapter14_Random%20numbers/14.26.lcg_static_seed.c) | Lcg Static Seed |
| 14.27 | [`14.27.lcg_define_constants.c`](chapter14_Random%20numbers/14.27.lcg_define_constants.c) | Lcg Define Constants |
| 14.28 | [`14.28.seed_free_generator.c`](chapter14_Random%20numbers/14.28.seed_free_generator.c) | Seed Free Generator |
| 14.29 | [`14.29.parameter_seed_no_persistence.c`](chapter14_Random%20numbers/14.29.parameter_seed_no_persistence.c) | Parameter Seed No Persistence |
| 14.30 | [`14.30.static_seed_and_z.c`](chapter14_Random%20numbers/14.30.static_seed_and_z.c) | Static Seed And Z |
| 14.31 | [`14.31.parameter_seed_bug.c`](chapter14_Random%20numbers/14.31.parameter_seed_bug.c) | Parameter Seed Bug |
| 14.32 | [`14.32.hash_prng_seed_parameter.c`](chapter14_Random%20numbers/14.32.hash_prng_seed_parameter.c) | Hash Prng Seed Parameter |
| 14.33 | [`14.33.hash_prng_static_seed.c`](chapter14_Random%20numbers/14.33.hash_prng_static_seed.c) | Hash Prng Static Seed |
| 14.34 | [`14.34.prng32_h_bit_by_bit.c`](chapter14_Random%20numbers/14.34.prng32_h_bit_by_bit.c) | Prng32 H Bit By Bit |
| 14.35 | [`14.35.prng32_sh_unpredictable_seed.c`](chapter14_Random%20numbers/14.35.prng32_sh_unpredictable_seed.c) | Prng32 Sh Unpredictable Seed |
| 14.36 | [`14.36.trng32_ach.c`](chapter14_Random%20numbers/14.36.trng32_ach.c) | Trng32 Ach |
| 14.37 | [`14.37.trng32_ch.c`](chapter14_Random%20numbers/14.37.trng32_ch.c) | Trng32 Ch |
| 14.38 | [`14.38.librand_guessing_game.c`](chapter14_Random%20numbers/14.38.librand_guessing_game.c) | Librand Guessing Game |
| 14.39 | [`14.39.dice_distribution_rand.c`](chapter14_Random%20numbers/14.39.dice_distribution_rand.c) | Dice Distribution Rand |
| 14.40 | [`14.40.dice_distribution_clock_seed.c`](chapter14_Random%20numbers/14.40.dice_distribution_clock_seed.c) | Dice Distribution Clock Seed |
| 14.41 | [`14.41.librand_distribution.c`](chapter14_Random%20numbers/14.41.librand_distribution.c) | Librand Distribution |
| 14.42 | [`14.42.guess_most_frequent_face_game.c`](chapter14_Random%20numbers/14.42.guess_most_frequent_face_game.c) | Guess Most Frequent Face Game |

[Back to Chapter Index](#chapter-index)

---

## Notes

- Program numbering follows the extracted chapter order.
- Source comments have been added to make the examples easier to understand.
- Each extracted program includes a multiline descriptive comment before its `#include` directives.
- Chapter 13 includes companion text files for file-handling examples where input/data files are required.
- Duplicate topic names may have suffixes such as `-2`, `-3`, etc. because multiple programs demonstrate variations of the same concept.

## License

Copyright © 2026 Ripon Patgiri. All rights reserved.

This book, its accompanying materials, examples, and source code are made available for **personal, educational, and non-commercial use**.

You are permitted to:

* Use the materials for personal study, teaching, learning, and academic purposes.
* Copy and redistribute the materials free of charge for non-commercial purposes.
* Modify or adapt the materials for personal, educational, or other non-commercial purposes.
* Use and modify the example source code for learning, teaching, and non-commercial projects.

Subject to the following conditions:

1. **Attribution:** Appropriate credit must be given to the original author, **Ripon Patgiri**, and the original source should be identified where reasonably possible.
2. **Non-Commercial Use:** The book, source code, or any substantial portion or modified version of them may not be sold, licensed for a fee, included in a commercial product, or otherwise used primarily for commercial advantage or monetary compensation without prior written permission from the copyright holder.
3. **Free Distribution:** Redistribution is permitted only when no fee is charged for the material itself, except reasonable costs directly associated with reproduction or distribution.
4. **Preservation of Notice:** This copyright and license notice must be retained in redistributed copies or substantial portions of the material.
5. **No Additional Rights:** This license does not transfer ownership or copyright. All rights not expressly granted remain with the copyright holder.

Commercial use requires prior written permission from the copyright holder.

### Disclaimer

The materials are provided **"as is"**, without warranties of any kind, express or implied. To the extent permitted by applicable law, the copyright holder shall not be liable for any damages arising from the use of these materials.

