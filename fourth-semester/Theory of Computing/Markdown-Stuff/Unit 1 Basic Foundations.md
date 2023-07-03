### Unit 1 Basic Foundations

#### Assignment 1 

---

###### Question 1

Let A be a set with n distinct elements. How many different binary relations on A are there?

###### <u>Answer</u>:

The number of binary relations on a set with n distinct elements is $2^{n^{2}}$

---

###### Question 2

If $∑= \{a,b,c\}$ then find the followings

$a. ∑1 , ∑2 , ∑3$

###### <u>Solution</u>

1. Since there are three letters total possibilities of set of strings is $3^1=3$

   $\sum 1 = \{a,b,c\}$

2. Total Strings = $3^2=9$

   $\sum2 = \{aa,ab,ac,ba,bb,bc,ca,cb,cc\}$

3. Total Strings = $3^3 = 27$

   $\sum3=\{aaa, aab, aac, aba, abb, abc, aca, acb, acc, baa, bab, bac, bba, bbb, bbc, bca, bcb, bcc, caa, cab, cac, cba, cbb, cbc, cca, ccb, ccc\}$

---

###### Question 3

If $\sum=\{0,1\}$. Then find the following languages

​	a. The language of string of length zero.
​	b. The language of strings of 0‟s and 1‟s with equal number of
​	each.
​	c. The language $\{0^n\; 1^n | n≥1\}$
​	d. The language $\{0^i \; 0^j | 0≤i≤j\}$
​	e. The language of strings with odd number of 0‟s and even
​	number of 1‟s. 

###### <u>Solution</u>

a. $L = \{\epsilon\}$

b. $L = \{\epsilon,01,0011,0101, 1010, 0110, 1001, ...\}$ (all strings with equal number of 0's and 1's)

c. $L=\{01, 0011, 000111, ...\}$ (strings with n 0's followed by n 1's)

d. $L= \{0\; 00,00\; 000,00\;000\}$ 

e. $L=\{011,0001111,0000011,\dots\}$ (strings with odd number of 0's and even number of 1's)

---

4) Define the Kleene closure and power of alphabets.

###### Kleene Closure

In the theory of computation, the Kleene closure of an alphabet ∑, denoted by ∑*, is the set of all possible strings that can be formed by concatenating zero or more symbols from the alphabet. It represents the set of all finite strings that can be generated using the symbols from the alphabet.

The Kleene closure can be used to define regular expressions and regular languages, which are important concepts in formal language theory and computational theory. Regular expressions can be used to describe a set of strings that match a certain pattern, and regular languages are sets of strings that can be described using regular expressions.

For example, consider the alphabet $∑ = \{0, 1\}$. Then the Kleene closure of ∑, ∑*, is:

$∑* = \{ε, 0, 1, 00, 01, 10, 11, 000, 001, 010, ...\}$

where ε represents the empty string and "..." represents the set of all possible strings that can be formed by concatenating zero or more symbols from ∑.

###### Power of Alphabets:

In the theory of computation, the power of an alphabet $∑^n$, where n is a positive integer, is the set of all possible strings that can be formed by concatenating exactly n symbols from the alphabet. The power of an alphabet is often used to define the set of all strings of a certain length that can be generated using the symbols from the alphabet.

For example, consider the alphabet $∑ = \{0, 1\}$. Then the power of $∑^2$ is:

$∑^2 = \{00, 01, 10, 11\}$

which represents the set of all strings of length 2 that can be generated using the symbols from $∑$.

In the theory of computation, the power of an alphabet is a fundamental concept and is used to define many important concepts such as languages, grammars, and automata. For example, a formal language is a set of strings that can be generated using the symbols from a given alphabet. The power of the alphabet is used to define the set of all strings of a certain length that can be generated using the symbols from the alphabet.

---

