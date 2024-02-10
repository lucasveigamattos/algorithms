# String Anagram Checker

## Description:
Write a function or method that takes in two strings and returns true if they are anagrams of each other, false otherwise. An anagram is a word or phrase formed by rearranging the letters of another word or phrase, typically using all the original letters exactly once. For example, "listen" and "silent" are anagrams.

## Constraints:
- The input strings will only contain alphabetic characters (a-z, A-Z).
- The comparison should be case-insensitive (e.g., "Listen" and "silent" should be considered anagrams).
- You can assume the input strings will not be empty.
- The function should have a time complexity of O(n), where n is the length of the longer input string.

## Test Samples:
"listen"        & "silent"        -> true<br>
"hello"         & "world"         -> false<br>
"Debit Card"    & "Bad Credit"    -> true<br>
"School Master" & "The Classroom" -> true<br>
"Astronomer"    & "Moon Starer"   -> true<br>