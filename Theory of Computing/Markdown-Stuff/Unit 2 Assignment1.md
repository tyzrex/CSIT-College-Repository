#### Unit 2 

###### Extended Transition Function of DFA(Assignment-2)

---

###### Question 

![image-20230207182115613](/home/tyzrex/.config/Typora/typora-user-images/image-20230207182115613.png)

* Compute $\hat{\delta}(q_0,1001)$
* Compute $\hat{\delta}(q_0,100)$

###### <u>Answer:</u>

a. $\hat{\delta}(q_0,1001)$
$$
\hat{\delta}(q_0,1)=q_0\\
\hat{\delta}(q_0,10)=\hat{\delta}(\delta(q_0,1),0)=\hat{\delta}(q_0,0)=q_2\\
\hat{\delta}(q_0,100)=\hat{\delta}(\delta(q_0,10),0)=\hat{\delta}(q_2,0)=q_1
\\
\hat{\delta}(q_0,1000)=\hat{\delta}(\delta(q_0,100),0)=\hat{\delta}(q_1,0)=q_1
$$
Since the final state is $q_1$ this is accepted.

b. $\hat{\delta}(q_0,100)$
$$
\hat{\delta}(q_0,1)=q_0\\
\hat{\delta}(q_0,10)=\hat{\delta}(\delta(q_0,1),0)=\hat{\delta}(q_0,0)=q_2\\
\hat{\delta}(q_0,100)=\hat{\delta}(\delta(q_0,10),0)=\hat{\delta}(q_2,0)=q_1
\\
$$
Since the final state is $q_1$ this is also accepted.

---

