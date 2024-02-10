# Longest Common Subsequence

## Description:
Write a function or method that takes in two strings and returns the length of the longest common subsequence (LCS) of the two strings. A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements. The longest common subsequence is the longest sequence of characters that appear in the same order in both strings.

## Constraints:
- The input strings may contain alphabetic characters, numeric digits, spaces, and punctuation.
- The comparison should be case-sensitive.
- You can assume the input strings will not be empty.
- The function should have a time complexity of O(n*m), where n is the length of the first input string and m is the length of the second input string.

## Test Samples:
- "ABCDGH" & "AEDFHR"  -> len("ADH")  -> 3
- "AGGTAB" & "GXTXAYB" -> len("GTAB") -> 4
- "ABCDEF" & "ZYXWVU"  -> len("")     -> 0
- "AAA"    & "BBB"     -> len("")     -> 0
- "ABCD"   & "ABCD"    -> len("ABCD") -> 4