📘 String Concepts in C — Palindrome & Character Frequency:-

This repository contains two basic but important programs in C language that deal with string processing.
Both programs help beginners understand how strings work internally using character arrays, loops, and ASCII values.

🔁 1. Palindrome Checking (Theory):-
📌 What is a Palindrome?

A palindrome is a word, number, or string that reads the same from left to right and right to left.
Examples: madam, level, noon.

📌 Logic Used in Program

Read a string from the user.

Find its length manually (by checking '\0' character).

Compare:

1st character with last

2nd with second last

and so on…

If all characters match, the string is a palindrome.

Otherwise, it is not a palindrome.

📌 Key Concepts

Character arrays

Null terminator ('\0')

String length calculation

Looping from both ends

Conditional checking

🔢 2. Character Frequency (Theory)
📌 What is Character Frequency?

It means how many times each character appears in a string.
Example for "hello":

h → 1

e → 1

l → 2

o → 1

📌 Logic Used in Program :-

Take a string from the user.

Create a frequency array of size 256 to cover all ASCII values.

Traverse the string character by character.

Increase the count at index freq[str[i]].

Print only characters whose frequency is greater than 0.

📌 Key Concepts:-

ASCII values (0–255)

Arrays

Character mapping

Looping until '\0'

Counting occurrences

🧠 Why These Programs Are Important?

They build the foundation for string algorithms.

Help understand how programming languages treat characters and memory.

Frequently asked in college exams, vivas, and interviews.

📚 Topics Covered

String handling

Character arrays

ASCII table

Logical thinking

Basic algorithms
Looping and conditions
