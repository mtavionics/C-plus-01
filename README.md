Assignment 1.1
We'll keep it light. The main objective for this assignment is to get your IDE set up and successfully compile and execute your first C++ program. You may assume that the user will provide properly formatted, valid data.

The date June 10, 1960 is special because when we write it in the following format, the month times the day equals the year:

6/10/60
Write a program that asks the user to enter a date in the format specified above (month/day/2-digit-year). (It is very important that the input is in the correct format, typed all at once, all on one line, by the user. See the hints below.) The program should then determine whether the month times the day is equal to the year. If so, it should display a message saying the date is magic. Otherwise it should display a message saying the date is not magic.

Hints: do not use any string variables. The program will be much simpler if you read the three data into three separate int variables. This may require a deeper understanding of the extraction operator than has been needed up to this point in your programming experience. For example, even though the user will be typing only one line of input, you will be using the extraction operator multiple times to read that input. I strongly suggest that you review lesson 2.9 before starting on this assignment.

Here is a sample run (user's input shown in bold):

Enter a date in the format month/day/2-digit-year: 6/10/60
That is a magic date!
If you are having trouble handling the slashes, I'd suggest that you begin by writing the following program, which is one step toward the complete program: Write and test a complete program that asks the user to enter a month followed by a single punctuation character, and then prints the month and punctuation character that were entered. Here is a sample run of this first-step program (user's input shown in bold):

Enter a month as an integer, followed by a punctuation character: 6#
You entered the month 6 followed by the punctuation character #
Submit Your Work
Name your source code file according to the assignment number (a1_1.cpp, a4_2.cpp, etc.). Execute the program and copy/paste the output that is produced by your program into the bottom of the source code file, making it into a comment. Use the Assignment Submission link to submit the source code file. When you submit your assignment there will be a text field in which you can add a note to me (called a "comment", but don't confuse it with a C++ comment). In this "comments" section of the submission page let me know whether the program works as required.

Keep in mind that if your code does not compile you will receive a 0.
