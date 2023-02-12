### Lab Assignment

#### DFA Lab

---

### Theory:

###### Finite Automata:

A finite automaton is a mathematical model that is an abstract machine that has a set of "states" and its
"control" moves from state to state in response to the "external inputs".The control maybe either "deterministic" meaning that automaton can be in one state at a time or "non deterministic", meaning that it maybe in several states at a time.

Finite automata is a fundamental concept in the theory of computing and is widely used in applications such as lexical analysis, parsing and pattern matching.

---

###### Deterministic Finite Automata(DFA):

Deterministic Finite Automata(DFA) is a type of finite automaton that has the property of determinism meaning that for each state and each possible symbol there is exactly one transition to a new state.

The 5-tuple representation of a Deterministic Finite Automaton (DFA) is a standard way to specify the structure and behavior of a DFA. The 5-tuple consists of the following components:

1. A finite set of states, denoted as Q.
2. An alphabet of input symbols, denoted as Σ.
3. A transition function, denoted as δ, which maps a state and an input symbol to a new state. The transition function is usually represented as a table or a matrix.
4. An initial state, denoted as q0, which is the starting state of the DFA.
5. A set of final states, denoted as F, which are the states in which the DFA will halt and accept the input string.

The 5-tuple representation provides a complete and concise specification of the behavior of a DFA, and can be used to simulate the operation of the DFA on a given input string.

---

###### Notations for DFA:

Transition Table:

It is the representation of transition function $\sum$ in a table or a matrix. Start State is represented by $\rightarrow$ and end state is denoted by $*$. For eg: if a DFA has state $\{q_0,q_1,q_2\}$ and inputs $\{0,1\}$ then the table to accept 01 substring can be:

|               |       | 0     | 1     |
| ------------- | ----- | ----- | ----- |
| $\rightarrow$ | $q_0$ | $q_2$ | $q_0$ |
| $*$           | $q_1$ | $q_1$ | $q_1$ |
|               | $q_2$ | $q_2$ | $q_1$ |

Transition Diagram:

A transition function can also be represented graphically as a state transition diagram. Each state is represented as a node and transitions are represented as arrows. Start is denoted by arrow written with start and final or accept state is denoted by double circle. eg:

![1675852120507](image/README/1675852120507.png)

---

###### Question 1

Give the DFA for the language of string over {0,1} in which each string ends with $11$.

###### `<u>`Solution:`</u>`

###### State Diagram:

![1675852120507](image/README/1675852120507.png)

###### State Table:

| State/input | 0 | 1 |
| ----------- | - | - |
| A           | A | B |
| B           | A | C |
| C           | A | C |

###### State Function:

$\displaylines{\delta(A,0) \rightarrow A \\\ \delta(A,1) \rightarrow B \\\ \delta(B,0) \rightarrow A \\\ \delta(B,1) \rightarrow C \\\ \delta(C,0) \rightarrow A \\\ \delta(C,1) \rightarrow C \\\ }$

---

###### Question 2

Give the DFA accepting the string over {a,b} such that each string does not end with ab.

###### `<u>`Solution:`</u>`

###### State Diagram:

![1675852138084](image/README/1675852138084.png)

###### State Table:

| State/input | a | b |
| ----------- | - | - |
| A           | B | A |
| B           | B | C |
| C           | B | A |

###### State Function:

$\displaylines{ \delta(A,0)\rightarrow B \\\ \delta(A,1)\rightarrow A \\\ \delta(B,0)\rightarrow B \\\ \delta(B,1)\rightarrow C \\\ \delta(C,0)\rightarrow B \\\ \delta(C,1)\rightarrow A \\\ }$

---

###### Question 3

Give the DFA for the language of string over {a,b} such that each string contains aba as substring.

###### `<u>`Solution `</u>`

###### State Diagram:

![1675852152825](image/README/1675852152825.png)

###### State Table

| State/Input | a | b |
| ----------- | - | - |
| A           | B | A |
| B           | B | C |
| C           | D | A |
| D           | D | D |

###### State Function

$\displaylines{\delta(A,a) \rightarrow B \\\ \delta(A,b) \rightarrow A \\\ \delta(B,a) \rightarrow B \\\ \delta(B,b) \rightarrow C\\\ \delta(C,a) \rightarrow D \\\ \delta(C,b) \rightarrow A\\\ \delta(D,a) \rightarrow D \\\ \delta(D,b) \rightarrow D}$

---

###### Question 4

Give the DFA for the language of string over {0,1} such that each string start with 01.

###### `<u>`Solution `</u>`

###### State Figure

![1675852679343](image/README/1675852679343.png)

State Table

| State/Input | 0      | 1      |
| ----------- | ------ | ------ |
| A           | B      | reject |
| B           | reject | C      |
| C           | C      | C      |

###### State Function

$\displaylines{\delta(A,0) \rightarrow B \\\ \delta(A,1) \rightarrow Reject \\\ \delta(B,0) \rightarrow C \\\ \delta(B,1) \rightarrow Reject \\\ \delta(C,0) \rightarrow C \\\ \delta(C,1) \rightarrow C \\\ }$

---

###### Question 5

Give the DFA for the language of string over {0,1} such that the set of all string ending in 00.

###### `<u>`Solution `</u>`

###### State Diagram

![1675852193711](image/README/1675852193711.png)

###### State Table

| State/Input | 0 | 1 |
| ----------- | - | - |
| A           | B | A |
| B           | C | A |
| C           | C | A |

###### State Function

$\displaylines{\delta(A,0) \rightarrow B \\\ \delta(A,1) \rightarrow A \\\ \delta(B,0) \rightarrow C \\\ \delta(B,1) \rightarrow A \\\ \delta(C,0) \rightarrow C \\\ \delta(C,1) \rightarrow A \\\ }$

---

###### Question 6

Give the DFA for the language of string over {0,1} such that set of strings with 011 as a substring.

###### `<u>`Solution `</u>`

###### State Diagram

![1675852208280](image/README/1675852208280.png)

###### State Table

| State/Input | 0 | 1 |
| ----------- | - | - |
| A           | B | A |
| B           | B | C |
| C           | B | D |
| D           | D | D |

###### State Function

$\displaylines{\delta(A,0) \rightarrow B \\\ \delta(A,1) \rightarrow A \\\ \delta(B,0) \rightarrow B \\\ \delta(B,1) \rightarrow C \\\ \delta(C,0) \rightarrow B \\\ \delta(C,1) \rightarrow D \\\ \delta(D,0) \rightarrow D \\\ \delta(D,1) \rightarrow D \\\ }$

---
