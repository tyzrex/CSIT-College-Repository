### Lab Assignment

#### DFA Lab

---

###### Theory:

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

---

###### Question 1

Give the DFA for the language of string over {0,1} in which each string ends with $11$.

###### `<u>`Solution:`</u>`

###### State Diagram:

![image-20230206191202883](/home/tyzrex/.config/Typora/typora-user-images/image-20230206191202883.png)

###### State Table:

| State/input | 0 | 1 |
| ----------- | - | - |
| A           | A | B |
| B           | A | C |
| C           | A | C |

###### State Function:

$\displaylines{\delta(A,0) \rightarrow A \\\ \delta(A,1) \rightarrow B \\\ \delta(B,0) \rightarrow A \\\ \delta(B,1) \rightarrow C \\\ \delta(C,0) \rightarrow A \\\ \delta(C,1) \rightarrow C \\\ }$

###### Code:

```cpp
#include <iostream>
#include <string>

using namespace std;

bool is_valid_input(string str) {
  for (char c : str) {
    if (c != '0' && c != '1') {
      return false;
    }
  }
  return true;
}

bool is_accepted(string str) {
  char state = 'A';
  for (char c : str) {
    switch (state) {
      case 'A':
        state = (c == '0') ? 'A' : 'B';
        break;
      case 'B':
        state = (c == '0') ? 'A' : 'C';
        break;
      case 'C':
        state = (c == '0') ? 'A' : 'C';
    }
  }
  return state == 'C';
}

int main() {
  string str;
  char choice;
  do {
    cout << "Enter a string: ";
    cin >> str;
    if (is_valid_input(str)) {
      cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
    } else {
      cout << "Invalid Input" << endl;
    }
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
  } while (choice == 'y');
  return 0;
}
```

---

###### Question 2

Give the DFA accepting the string over {a,b} such that each string does not end with ab.

###### `<u>`Solution:`</u>`

###### State Diagram:

![image-20230206191248672](/home/tyzrex/.config/Typora/typora-user-images/image-20230206191248672.png)

###### State Table:

| State/input | a | b |
| ----------- | - | - |
| A           | B | A |
| B           | B | C |
| C           | B | A |

###### State Function:

$\displaylines{ \delta(A,0)\rightarrow B \\\ \delta(A,1)\rightarrow A \\\ \delta(B,0)\rightarrow B \\\ \delta(B,1)\rightarrow C \\\ \delta(C,0)\rightarrow B \\\ \delta(C,1)\rightarrow A \\\ }$

###### Code:

```cpp
#include <iostream>
#include <string>

using namespace std;

bool is_valid_input(string str)
{
  for (char c : str)
  {
    if (c != 'a' && c != 'b')
    {
      return false;
    }
  }
  return true;
}

bool is_accepted(string str)
{
  char state = 'A';
  for (char c : str)
  {
    switch (state)
    {
    case 'A':
      state = (c == 'a') ? 'B' : 'A';
      break;
    case 'B':
      state = (c == 'a') ? 'B' : 'C';
      break;
    case 'C':
      state = (c == 'a') ? 'B' : 'A';
      break;
    }
  }
  return state != 'C';
}

int main()
{
  string str;
  char choice;
  do
  {
    cout << "Enter a string: ";
    cin >> str;

    if (is_valid_input(str))
    {
      cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
    }
    else
    {
      cout << "Invalid Input" << endl;
    }
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
  } while (choice == 'y');
  return 0;
}
```

---

###### Question 3

Give the DFA for the language of string over {a,b} such that each string contains aba as substring.

###### `<u>`Solution`</u>`

###### State Diagram:

![image-20230207143555172](/home/tyzrex/.config/Typora/typora-user-images/image-20230207143555172.png)

###### State Table

| State/Input | a | b |
| ----------- | - | - |
| A           | B | A |
| B           | B | C |
| C           | D | A |
| D           | D | D |

###### State Function

$\displaylines{\delta(A,a) \rightarrow B \\\ \delta(A,b) \rightarrow A \\\ \delta(B,a) \rightarrow B \\\ \delta(B,b) \rightarrow C\\\ \delta(C,a) \rightarrow D \\\ \delta(C,b) \rightarrow A\\\ \delta(D,a) \rightarrow D \\\ \delta(D,b) \rightarrow D}$

###### Code

```cpp
#include<iostream>

using namespace std;

bool check_string(string str){
    for(char c : str){
        if(c != 'a' && c != 'b'){
            return false;
        }
    }
    return true;
}

bool is_accepted(string str){
    char state = 'A';
    for(char c : str){
        switch(state){
            case 'A':
                state = (c == 'a') ? 'B' : 'A';
                break;
            case 'B':
                state = (c == 'a') ? 'B' : 'C';
                break;
            case 'C':
                state = (c == 'a') ? 'D' : 'A';
                break;
            case 'D':
                state = (c == 'a') ? 'D' : 'D';
                break;
        }
    }
    return state == 'D';
}

int main(){
    string str;
    char choice;
    do{
        cout << "Enter a string: ";
        cin >> str;
        if(check_string(str)){
            cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
        }else{
            cout << "Invalid Input" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }while(choice == 'y');
    return 0;
}
```

---

###### Question 4

Give the DFA for the language of string over {0,1} such that each string start with 01.

###### `<u>`Solution`</u>`

###### State Figure

![image-20230208144641013](/home/tyzrex/.config/Typora/typora-user-images/image-20230208144641013.png)

###### State Table

| State/Input | 0      | 1      |
| ----------- | ------ | ------ |
| A           | B      | reject |
| B           | reject | C      |
| C           | C      | C      |

###### State Function

$\displaylines{\delta(A,0) \rightarrow B \\\ \delta(A,1) \rightarrow Reject \\\ \delta(B,0) \rightarrow C \\\ \delta(B,1) \rightarrow Reject \\\ \delta(C,0) \rightarrow C \\\ \delta(C,1) \rightarrow C \\\ }$

###### Code:

```cpp
#include<iostream>

using namespace std;  

bool check_string(string str){
    for(char c : str){
        if(c != '0' && c != '1'){
            return false;
        }
    }
    return true;
}

bool is_accepted(string str){
    char state = 'A';
    for(char c: str){
        //state r means the reject state in this case
        switch(state){
            case 'A':
                state = (c == '0') ? 'B' : 'R';
                break;
            case 'B':
                state = (c == '1') ? 'C' : 'R';
                break;
            case 'C':
                state = (c == '0') ? 'C' : 'C';
        }
    }
    return state=='C';
}

int main(){
    string str;
    char choice;
    do{
        cout << "Enter a string: ";
        cin >> str;
        if(check_string(str)){
            cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
        }else{
            cout << "Invalid Input" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }while(choice == 'y');
    return 0;
}
```

---

###### Question 5

Give the DFA for the language of string over {0,1} such that the set of all string ending in 00.

###### `<u>`Solution`</u>`

###### State Diagram

![image-20230207134023964](/home/tyzrex/.config/Typora/typora-user-images/image-20230207134023964.png)

###### State Table

| State/Input | 0 | 1 |
| ----------- | - | - |
| A           | B | A |
| B           | C | A |
| C           | C | A |

###### State Function

$\displaylines{\delta(A,0) \rightarrow B \\\ \delta(A,1) \rightarrow A \\\ \delta(B,0) \rightarrow C \\\ \delta(B,1) \rightarrow A \\\ \delta(C,0) \rightarrow C \\\ \delta(C,1) \rightarrow A \\\ }$

###### Code:

```cpp
#include <iostream>
#include <string>

using namespace std;

bool is_valid_input(string str) {
  for (char c : str) {
    if (c != '0' && c != '1') {
      return false;
    }
  }
  return true;
}

bool is_accepted(string str) {
  char state = 'A';
  for (char c : str) {
    switch (state) {
      case 'A':
        state = (c == '1') ? 'A' : 'B';
        break;
      case 'B':
        state = (c == '1') ? 'A' : 'C';
        break;
      case 'C':
        state = (c == '1') ? 'A' : 'C';
    }
  }
  return state == 'C';
}

int main() {
  string str;
  char choice;
  do {
    cout << "Enter a string: ";
    cin >> str;
    if (is_valid_input(str)) {
      cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
    } else {
      cout << "Invalid Input" << endl;
    }
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
  } while (choice == 'y');
  return 0;
}
```

---

###### Question 6

Give the DFA for the language of string over {0,1} such that set of strings with 011 as a substring.

###### `<u>`Solution`</u>`

###### State Diagram

![image-20230207143924323](/home/tyzrex/.config/Typora/typora-user-images/image-20230207143924323.png)

###### State Table

| State/Input | 0 | 1 |
| ----------- | - | - |
| A           | B | A |
| B           | B | C |
| C           | B | D |
| D           | D | D |

###### State Function

$\displaylines{\delta(A,0) \rightarrow B \\\ \delta(A,1) \rightarrow A \\\ \delta(B,0) \rightarrow B \\\ \delta(B,1) \rightarrow C \\\ \delta(C,0) \rightarrow B \\\ \delta(C,1) \rightarrow D \\\ \delta(D,0) \rightarrow D \\\ \delta(D,1) \rightarrow D \\\ }$

###### Code:

```cpp
#include<iostream>

using namespace std;

bool check_string(string str){
    for(char c : str){
        if(c != '0' && c != '1'){
            return false;
        }
    }
    return true;
}

bool is_accepted(string str){
    char state = 'A';
    for(char c : str){
        switch(state){
            case 'A':
                state = (c == '0') ? 'B' : 'A';
                break;
            case 'B':
                state = (c == '0') ? 'B' : 'C';
                break;
            case 'C':
                state = (c == '0') ? 'B' : 'D';
                break;
            case 'D':
                state = (c == '0') ? 'D' : 'D';
                break;
        }
    }
    return state == 'D';
}

int main(){
    string str;
    char choice;
    do{
        cout << "Enter a string: ";
        cin >> str;
        if(check_string(str)){
            cout << (is_accepted(str) ? "Accepted" : "Not Accepted") << endl;
        }else{
            cout << "Invalid Input" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }while(choice == 'y');
    return 0;
}
```

---
