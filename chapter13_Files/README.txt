Chapter 13 Programs Extracted from Source
==========================================

Total programs containing main(): 100

Naming format: 13.N.program-name.c
Each C program has a multiline comment before its #include directives
and additional explanatory comments inside the program.

Input files:
Where a program clearly requires an existing text file and the chapter
provides enough source-grounded content to create it, a companion .txt
file is stored under inputs/13.N/. Reused filenames such as myfile.txt
are separated by program number so examples do not overwrite each other.

  1. 13.1.open-nonexistent-file.c  (source starts near line 155; section: Opening a File That Does Not Exist)
     Input: REQUIRES EXISTING FILE: myfile.txt (content not explicitly recoverable from nearby source)
  2. 13.2.create-file-write-mode.c  (source starts near line 204; section: Opening (and Creating) a File in "w" Mode)
  3. 13.3.runtime-filename.c  (source starts near line 256; section: Inputting the Filename at Runtime)
  4. 13.4.write-to-file.c  (source starts near line 384; section: Writing to a File)
  5. 13.5.file-pointer-position.c  (source starts near line 432; section: Finding the File Pointer's Position with ftell())
  6. 13.6.write-read-file.c  (source starts near line 489; section: Reading a File Opened in "w+" Mode)
  7. 13.7.rewind-file-pointer.c  (source starts near line 534; section: Rewinding the File Pointer)
  8. 13.8.read-until-eof.c  (source starts near line 579; section: Understanding EOF)
  9. 13.9.write-integer-with-putw.c  (source starts near line 623; section: A Tricky Case: Writing -1 with putw())
 10. 13.10.integer-vs-text-minus-one.c  (source starts near line 662; section: The Difference Between the Integer -1 and the Text "-1")
 11. 13.11.fseek-file-pointer.c  (source starts near line 768; section: SEEK\_SET: Measuring from the Beginning)
 12. 13.12.fseek-file-pointer-2.c  (source starts near line 807; section: SEEK\_SET: Measuring from the Beginning)
 13. 13.13.fseek-file-pointer-3.c  (source starts near line 832; section: SEEK\_SET: Measuring from the Beginning)
 14. 13.14.fseek-file-pointer-4.c  (source starts near line 882; section: SEEK\_END: Measuring from the End)
 15. 13.15.fseek-file-pointer-5.c  (source starts near line 915; section: SEEK\_END: Measuring from the End)
 16. 13.16.fseek-file-pointer-6.c  (source starts near line 968; section: SEEK\_CUR: Measuring from the Current Position)
 17. 13.17.formatted-file-output.c  (source starts near line 1142; section: Program 1: Writing Pascal's Triangle Diamond to a File)
 18. 13.18.formatted-file-output-2.c  (source starts near line 1288; section: Program 2: Writing a Number Diamond to a File)
 19. 13.19.file-pointer-position-2.c  (source starts near line 1469; section: Step-by-Step: Finding the File Size with fseek() and ftell())
     Input: inputs/13.19/myfile.txt
 20. 13.20.read-character-from-file.c  (source starts near line 1518; section: Step-by-Step: Reading the File's Contents Character by Character)
     Input: inputs/13.20/myfile.txt
 21. 13.21.formatted-file-input.c  (source starts near line 1678; section: Reading Every Word from a File)
     Input: inputs/13.21/myfile.txt
 22. 13.22.formatted-file-input-2.c  (source starts near line 1757; section: Skipping Words Using the * Flag)
     Input: inputs/13.22/myfile.txt
 23. 13.23.formatted-file-input-3.c  (source starts near line 1885; section: Additional Example: Reading Mixed Data Types)
     Input: inputs/13.23/records.txt
 24. 13.24.read-line-from-file.c  (source starts near line 1978; section: Basic Usage: Reading a File Line by Line)
     Input: inputs/13.24/myfile.txt
 25. 13.25.read-line-from-file-2.c  (source starts near line 2017; section: Capturing the Return Value Explicitly)
     Input: inputs/13.25/myfile.txt
 26. 13.26.read-line-from-file-3.c  (source starts near line 2053; section: An Alternative (but Flawed) Approach: Using feof())
     Input: REQUIRES EXISTING FILE: myfile.txt (content not explicitly recoverable from nearby source)
 27. 13.27.read-line-from-file-4.c  (source starts near line 2128; section: Demonstrating the feof() Pitfall)
     Input: inputs/13.27/myfile.txt
 28. 13.28.binary-file-io.c  (source starts near line 2286; section: Reading the Entire File in Large Chunks)
     Input: inputs/13.28/myfile.txt
 29. 13.29.binary-file-io-2.c  (source starts near line 2338; section: Reading One Byte at a Time)
     Input: REQUIRES EXISTING FILE: myfile.txt (content not explicitly recoverable from nearby source)
 30. 13.30.binary-file-io-3.c  (source starts near line 2369; section: Reading One Byte at a Time)
     Input: REQUIRES EXISTING FILE: myfile.txt (content not explicitly recoverable from nearby source)
 31. 13.31.binary-file-io-4.c  (source starts near line 2440; section: Summary)
     Input: REQUIRES EXISTING FILE: myfile.txt (content not explicitly recoverable from nearby source)
 32. 13.32.formatted-file-output-3.c  (source starts near line 2625; section: Writing Without Repositioning: Overwriting from the Beginning)
     Input: inputs/13.32/myfile.txt
 33. 13.33.fseek-file-pointer-7.c  (source starts near line 2658; section: Writing After the End of the File: Using fseek() to Append)
     Input: inputs/13.33/myfile.txt
 34. 13.34.demonstration-a-mode-creates-a-file.c  (source starts near line 2772; section: Demonstration: "a" Mode Creates a File)
 35. 13.35.formatted-file-output-4.c  (source starts near line 2804; section: Demonstration: Writing to an Empty File)
 36. 13.36.fseek-file-pointer-8.c  (source starts near line 2843; section: Demonstration: fseek() Cannot Override "a" Mode's Append Behavior)
 37. 13.37.fseek-file-pointer-9.c  (source starts near line 2896; section: Demonstration: Reading with "a+" Mode)
 38. 13.38.formatted-file-output-5.c  (source starts near line 2935; section: Demonstration: A Program That Comments on Itself)
 39. 13.39.formatted-file-output-6.c  (source starts near line 2964; section: Demonstration: A Program That Comments on Itself)
 40. 13.40.fseek-file-pointer-10.c  (source starts near line 2990; section: Demonstration: Reading and Writing Its Own Source Code)
 41. 13.41.fseek-file-pointer-11.c  (source starts near line 3035; section: Demonstration: Reading and Writing Its Own Source Code)
 42. 13.42.read-character-from-file-2.c  (source starts near line 3174; section: Demonstration: Using feof() to Detect "Not Found")
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 43. 13.43.binary-file.c  (source starts near line 3352; section: Demonstration: Writing and Reading a Single Integer in Binary)
     Input: REQUIRES EXISTING FILE: myfile.bin (content not explicitly recoverable from nearby source)
 44. 13.44.binary-file-io-5.c  (source starts near line 3420; section: Demonstration: Writing and Reading Multiple Values)
     Input: REQUIRES EXISTING FILE: myfile.bin (content not explicitly recoverable from nearby source)
 45. 13.45.binary-file-io-6.c  (source starts near line 3503; section: A More Efficient Rewrite)
     Input: REQUIRES EXISTING FILE: myfile.bin (content not explicitly recoverable from nearby source)
 46. 13.46.binary-file-2.c  (source starts near line 3538; section: Why Text Data Written in Binary Mode Still Looks Readable)
 47. 13.47.read-character-from-file-3.c  (source starts near line 3642; section: Attempt 1: The Straightforward (but Flawed) Solution)
     Input: inputs/13.47/input.txt
 48. 13.48.read-character-from-file-4.c  (source starts near line 3735; section: Attempt 2: Fixing the Word Count with a Flag)
     Input: inputs/13.48/input.txt
 49. 13.49.read-character-from-file-5.c  (source starts near line 3936; section: Method 1: Cloning Character by Character with fgetc())
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 50. 13.50.read-line-from-file-5.c  (source starts near line 4026; section: Method 2: Cloning Line by Line with fgets())
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 51. 13.51.binary-file-io-7.c  (source starts near line 4113; section: A Third Approach: Cloning in Bulk with fread() and fwrite())
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 52. 13.52.read-line-from-file-6.c  (source starts near line 4204; section: Searching for a Word or Sentence)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 53. 13.53.read-line-from-file-7.c  (source starts near line 4409; section: The Corrected Version)
     Input: inputs/13.53/input.txt
 54. 13.54.formatted-file-output-7.c  (source starts near line 4503; section: The Complete Program)
     Input: inputs/13.54/input1.txt
     Input: inputs/13.54/input2.txt
 55. 13.55.fseek-file-pointer-12.c  (source starts near line 4788; section: Method 1: Seeking Backward from SEEK\_END)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 56. 13.56.fseek-file-pointer-13.c  (source starts near line 4900; section: Method 2: Seeking Forward from SEEK\_SET, but Counting Down)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 57. 13.57.fseek-file-pointer-14.c  (source starts near line 5051; section: The Complete Program)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 58. 13.58.read-line-from-file-8.c  (source starts near line 5403; section: The Complete Program)
     Input: inputs/13.58/file1.txt
     Input: inputs/13.58/file2.txt
 59. 13.59.fseek-file-pointer-15.c  (source starts near line 5765; section: The Complete Program)
     Input: REQUIRES EXISTING FILE: file1.txt (content not explicitly recoverable from nearby source)
     Input: REQUIRES EXISTING FILE: file2.txt (content not explicitly recoverable from nearby source)
 60. 13.60.fseek-file-pointer-16.c  (source starts near line 6094; section: Method 1: Buffer in Memory, Then Truncate and Rewrite)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 61. 13.61.rename-file.c  (source starts near line 6305; section: Method 2: Using a Temporary File Instead of a Memory Buffer)
 62. 13.62.fseek-file-pointer-17.c  (source starts near line 6522; section: Method 1: Buffer in Memory, Then Overwrite)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 63. 13.63.rename-file-2.c  (source starts near line 6740; section: Method 2: Using a Temporary File)
 64. 13.64.fseek-file-pointer-18.c  (source starts near line 6887; section: The Complete Program)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 65. 13.65.fseek-file-pointer-19.c  (source starts near line 7220; section: Method 1: Removing Duplicate Lines)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 66. 13.66.fseek-file-pointer-20.c  (source starts near line 7411; section: Method 2: Removing Duplicate Words)
     Input: inputs/13.66/input.txt
 67. 13.67.read-line-from-file-9.c  (source starts near line 7615; section: The Complete Program)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 68. 13.68.the-main-function.c  (source starts near line 8303; section: The Main Function)
 69. 13.69.fseek-file-pointer-21.c  (source starts near line 8384; section: Method 1: A Simple Integer Key)
     Input: inputs/13.69/input.txt
 70. 13.70.fseek-file-pointer-22.c  (source starts near line 8567; section: Method 2: A Long, Complex String Key)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 71. 13.71.fseek-file-pointer-23.c  (source starts near line 8732; section: Version 1: Plaintext Passwords)
 72. 13.72.fseek-file-pointer-24.c  (source starts near line 9464; section: Corrected Version (Illustrating the Fixes))
 73. 13.73.step-6-the-overall-program-flow.c  (source starts near line 9943; section: Step 6: The Overall Program Flow)
     Input: REQUIRES EXISTING FILE: dictionary.txt (content not explicitly recoverable from nearby source)
 74. 13.74.fseek-file-pointer-25.c  (source starts near line 10599; section: Find out the output)
 75. 13.75.formatted-file-output-8.c  (source starts near line 10616; section: Find out the output)
 76. 13.76.fseek-file-pointer-26.c  (source starts near line 10633; section: Find out the output)
 77. 13.77.fseek-file-pointer-27.c  (source starts near line 10651; section: Find out the output)
 78. 13.78.fseek-file-pointer-28.c  (source starts near line 10670; section: Find out the output)
 79. 13.79.formatted-file-output-9.c  (source starts near line 10687; section: Find out the output)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 80. 13.80.fseek-file-pointer-29.c  (source starts near line 10706; section: Find out the output)
 81. 13.81.fseek-file-pointer-30.c  (source starts near line 10721; section: Find out the output)
 82. 13.82.formatted-file-output-10.c  (source starts near line 10739; section: Find out the output)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 83. 13.83.fseek-file-pointer-31.c  (source starts near line 10760; section: Find out the output)
 84. 13.84.rewind-file-pointer-2.c  (source starts near line 10778; section: Find out the output)
 85. 13.85.rewind-file-pointer-3.c  (source starts near line 10800; section: Find out the output)
 86. 13.86.formatted-file-output-11.c  (source starts near line 10817; section: Find out the output)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 87. 13.87.rewind-file-pointer-4.c  (source starts near line 10839; section: Find out the output)
 88. 13.88.fseek-file-pointer-32.c  (source starts near line 10858; section: Find out the output)
 89. 13.89.fseek-file-pointer-33.c  (source starts near line 10883; section: Find out the error)
 90. 13.90.fseek-file-pointer-34.c  (source starts near line 10899; section: Find out the error)
 91. 13.91.read-character-from-file-6.c  (source starts near line 10926; section: Find out the error)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 92. 13.92.formatted-file-output-12.c  (source starts near line 10945; section: Find out the error)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 93. 13.93.read-character-from-file-7.c  (source starts near line 10959; section: Find out the error)
     Input: REQUIRES EXISTING FILE: newfile.txt (content not explicitly recoverable from nearby source)
 94. 13.94.formatted-file-output-13.c  (source starts near line 10975; section: Find out the error)
 95. 13.95.fseek-file-pointer-35.c  (source starts near line 10992; section: Find out the error)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 96. 13.96.binary-file-io-8.c  (source starts near line 11007; section: Find out the error)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
 97. 13.97.fseek-file-pointer-36.c  (source starts near line 11023; section: Find out the error)
 98. 13.98.binary-file-io-9.c  (source starts near line 11041; section: Find out the error)
 99. 13.99.read-character-from-file-8.c  (source starts near line 11056; section: Find out the error)
     Input: REQUIRES EXISTING FILE: input.txt (content not explicitly recoverable from nearby source)
100. 13.100.formatted-file-input-4.c  (source starts near line 11074; section: Find out the error)
