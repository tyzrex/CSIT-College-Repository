### AI-Exam-Study

---

#### <u>Unit 2 Intelligent Agents</u>

##### Topics Covered:

* Sensors, Actuators, Agents and their Properties
* PEAS description of Agents

##### Remaining:

- [ ] Example of PEAS system

---

###### Sensors:

Sensors are the devices which can detect the change, action or the gestures in the environment. After any gesture or change is detected then the sensor sends the information to the electronic device. Sensor is a device that can measure the physical quantity and provide a considerate output. Some examples of sensors are temperature sensor, motion sensor etc

###### Actuators:

Actuators provide the mechanical response according to the information provided by the sensors. In simple words actuators are the response to a request. When it receives a input signal then it generates a change in the physical state by producing force , heat motion etc

###### Agent:

An agent can be referred to anything that is perceiving the environment with the help of sensors and interacting with the environment with the help of actuators, It consists different characteristics like perception, acting, autonomy etc. It can work autonomously as well as varying degree of human guidance and uses different concepts like machine learning deep learning to analyse the data and interact to complete different tasks provided. Some examples of AI agent are self driving cars voice assistants etc.

![image-20230602150302862](/home/tyzrex/.config/Typora/typora-user-images/image-20230602150302862.png)

###### Properties of AI Agent:

* Autonomy: 

  An AI agent may work autonomously or with various degree of human guidance meaning it may completely work by itself or by human assistance.

* Perception:

  The AI agent can have the sense of perception with the environment through which it can collect the data using sensors to make decisions.

* Reasoning:

  The AI agent are capable of reasoning and problem solving based on the information they have gathered perceiving the environment.

* Learning:

  The AI agents have the capabilities of learning through past experiences and expanding their knowledge/improve performance by time.

* Interactivity:

  AI agents can interact with the environment or with other agents.

* Adaptability:

  AI agents can adapt to change in the environment and then make decisions according to the change in different circumstances.

* Decision Making:

  They are able to make decisions on the basis of their perception, reasoning and experience leading to autonomous action.

---

###### PEAS Framework For AI Agents:

There are different factors that are kept in consideration to make any AI agent but PEAS is a common framework which is necessary for the development of AI agent. It is an acronym for Performance, Environment, Actuators and Sensors which is used to describe and analyse intelligent agent systems.

* ###### Performance:

  It is the goal or the intent or the objective that the AI system is designed to accomplish. It specifies what the AI agent is trying to optimise or achieve. Simple example of this factor is a bot made to play chess or a self driving car made to drive without a driver etc.

* ###### Environment:

  Environment is the external context in which any AI agent operates with. It consists of different things like the physical surrounding objects or other agents. It includes everything that the agent perceives and interacts with to gain the information it requires for completing any task or goal.

* ###### Actuators:

  Actuators are the mechanisms through which the AI agent interacts with the environment. It enables the AI agent to perform actions that may affect the environment. In simple words actuators are the medium through which the AI agent communicate or interact with the environment. It may include any thing like movement of a robotic arm or moving a piece in a chess board.

* ###### Sensors:

  Sensors are the devices that provide the information about the current state of the environment. Sensors provide the information when they sense the change or gesture in the environment and this data is then passed into an electronic device. Sensors are capable of measuring the physical quantities and providing them as a considerate output. Sensors can include cameras, microphones, touch sensors, or any other means of capturing relevant data. 

###### Example of AI agent using PEAS Framework:

<u>Self Driving Car PEAS analysis</u>:

Performance measure: The performance measure for the self-driving car could be defined as reaching the destination efficiently and safely while obeying traffic rules. It can consider factors such as the time taken to reach the destination, fuel efficiency, adherence to traffic laws, and passenger comfort.

Environment: The environment for the self-driving car consists of roads, traffic, pedestrians, traffic signals, weather conditions, and other vehicles. The car needs to perceive and understand this dynamic environment to make appropriate decisions.

Actuators: The actuators for the self-driving car may include the steering wheel, accelerator, brake, turn signals, and headlights. These actuators allow the car to navigate, change lanes, accelerate, brake, indicate turns, and control its lights.

Sensors: The self-driving car relies on various sensors to perceive its environment. It may use cameras, LiDAR sensors, radar, and ultrasonic sensors to detect and interpret road markings, traffic signs, pedestrians, other vehicles, and obstacles. Additionally, GPS sensors can provide location information.

Using the PEAS framework, the self-driving car agent can be configured as follows:

- Performance measure: The agent aims to maximize the efficiency and safety of reaching the destination while considering factors such as time, fuel consumption, traffic violations, and passenger comfort.
- Environment: The agent perceives and interacts with the environment, which includes roads, traffic, pedestrians, traffic signals, and weather conditions. It needs to understand the state of the environment and respond accordingly.
- Actuators: The agent controls the car's actuators, such as the steering wheel, accelerator, brake, turn signals, and headlights, to navigate the roads and interact with other entities in the environment.
- Sensors: The agent receives input from various sensors, such as cameras, LiDAR sensors, radar, ultrasonic sensors, and GPS, to perceive the environment and gather information necessary for decision-making.

By configuring the self-driving car agent using the PEAS framework, we establish the objectives, define the environment, identify the actions to be taken, and specify the sensors to perceive the state of the environment. This framework provides a structured approach to design intelligent agents and analyze their performance in achieving the desired goals.

---

###### Types of AI Agents:

There are different types of AI agents. Mainly four of them are discussed in our course work. They are:

* Simple Reflex Agent
* Model Reflex Agent
* Goal Based Agent
* Utility Based Agent

###### Simple Reflex Agents:

Simple reflex agents are the basic agents that select the actions based on the current perspect only ignoring the history and the future consequences of the action. They work on the principle of condition-action meaning a condition triggers a action in these types of agents. If then rules are used to determine the actions according to the current perspect. A simple example for this kind of agent can be a Smart AC system which turns on the AC when a certain condition is met. Example:

```C++
if the temperature > 30, then turn on the AC
```

In this we can see that there is a predefined rule that triggers the action for the agent. 

![image-20230603090632699](/home/tyzrex/.config/Typora/typora-user-images/image-20230603090632699.png)

Characteristics:

* Direct Mapping of any condition
* Limited knowledge and reasoning
* Suitable for simple and deterministic environments

###### Model based Reflex Agents:

These are the AI agents that maintain a model of the environment and use it to make a decision. These kind of AI agent not only takes in consideration of the current perspect but also the considers the history to determine appropriate actions. The core principle of a model-based reflex agent is to maintain an internal model or representation of the environment. It keeps track of the agent's current location and the locations of obstacles based on its previous percepts and actions.

The key characteristics of model-based reflex agents are:

- Maintaining an internal model: The agent maintains a representation of the environment that it updates based on percepts and actions.
- Reasoning with the model: The agent uses its internal model to reason and make decisions that go beyond the immediate percept. It considers the history of percepts and the known state of the environment.
- Suitable for environments with partial observability: Model-based reflex agents can handle situations where the agent cannot directly perceive the entire state of the environment.

![image-20230603091155938](/home/tyzrex/.config/Typora/typora-user-images/image-20230603091155938.png)

###### Goal Based Agents:

These agents expand on the model based reflex agents. With the goal information the agents can properly choose which route to take that leads to a goal. It helps the AI agents to select a possibility from multiple possibilities they have. A simple example for this can be a autonomous taxi that needs to reach to a Hotel. When it’s in the road there are multiple possibilities of roads that take us to different locations. But when the AI agent has a goal then it can take the route that helps it reach the destination by observing the environment and then it takes the action.

Key characteristics of goal-based agents include:

- Explicit goal representation: The agent has well-defined goals or objectives it aims to achieve.
- Planning and reasoning: The agent uses planning algorithms to analyze the environment, search for potential paths or solutions, and make decisions based on the current state and the desired goals.
- Dynamic goal adjustment: Goal-based agents can dynamically adjust their goals based on changes in the environment or new information.

![image-20230603091809502](/home/tyzrex/.config/Typora/typora-user-images/image-20230603091809502.png)

###### Utility Based Agents:

Utility-based agents are AI agents that evaluate different actions based on a utility or preference function. Instead of having explicit goals, they consider the desirability or utility of different outcomes and select actions that maximize their expected utility.

Imagine a utility-based agent that assists in financial investment decisions. The agent's objective is to maximize the return on investment while considering the associated risks. The agent considers various investment options and evaluates them based on their potential returns and risks. It assigns utility values to different outcomes, reflecting the agent's preferences. For example, higher returns may have higher utility values, while higher risks may have lower utility values.

Based on this utility function, the agent calculates the expected utility of different actions or investment choices. It assesses the potential outcomes, their probabilities, and their utility values. The agent selects the action that maximizes the expected utility. For instance, if the agent is considering two investment options: Option A with a high potential return but moderate risk, and Option B with a lower potential return but lower risk. The agent would evaluate the expected utility for each option by weighing the potential returns against the associated risks. It would then choose the option with the higher expected utility.

The core principle of utility-based agents is to assign utility values to outcomes, factor in their probabilities, and select actions that maximize the expected utility. These agents aim to achieve outcomes that align with the agent's preferences, even in situations where there might be trade-offs between different objectives.

Key characteristics of utility-based agents include:

- Utility function: The agent uses a utility function to assign values to outcomes based on its preferences.
- Risk evaluation: Utility-based agents consider the risks or uncertainties associated with different actions and factor them into the evaluation of expected utilities.
- Decision-making based on expected utility: The agent selects actions or choices that maximize the expected utility, taking into account the probabilities and potential outcomes.

![image-20230603092048931](/home/tyzrex/.config/Typora/typora-user-images/image-20230603092048931.png)

---

###### Types Of Environments:

1. Fully Observable Environments: In these environments, the AI agent has complete information about the state of the environment and can perceive all relevant aspects of the environment. This means that the agent can use all the information it receives to make accurate decisions. For example, a chess game where the AI agent can see the entire board and all the pieces.
2. Partially Observable Environments: In these environments, the AI agent only has partial information about the state of the environment and must use its internal state or memory to make decisions. The agent may receive incomplete or noisy information about the environment and must use this information to estimate the true state of the environment. For example, a robot that must navigate through a maze using only its sensors.
3. Deterministic Environments: In these environments, the outcome of an action is predictable and does not depend on chance or random events. The agent can determine the outcome of its actions based on the current state of the environment. For example, a simulation where the agent can predict the trajectory of a ball after it is hit with a certain force.
4. Stochastic Environments: In these environments, the outcome of an action is uncertain and depends on chance or random events. The agent cannot determine the exact outcome of its actions and must account for uncertainty in its decision-making. For example, a card game where the outcome of a hand depends on the shuffle of the deck.
5. Episodic Environments: In these environments, the environment consists of a series of independent episodes, each of which has a beginning and an end. The agent's actions in one episode do not affect the next episode. For example, a series of games where the agent plays against different opponents.
6. Sequential Environments: In these environments, the environment is a continuous sequence of states, with the outcome of each action affecting the subsequent state. The agent must take into account the long-term effects of its actions and plan accordingly. For example, a robot that must navigate through a series of rooms to reach its destination.
7. Static Environments: In these environments, the environment does not change over time. The agent's decision-making does not need to account for changes in the environment. For example, a chess game where the pieces do not move on their own.
8. Dynamic Environments: In these environments, the environment changes over time, and the AI agent must be able to adapt to these changes. The agent must continuously update its model of the environment and modify its behaviour as the environment changes. For example, a robot that must navigate through a changing terrain or avoid obstacles that appear unexpectedly.

---

#### Unit 3: Problem Solving by Searching

Difference between Uninformed and informed searching techniques.

| Points               | Uninformed Searching Methods                                 | Informed Searching Methods                                   |
| -------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| Knowledge            | No additional knowledge or heuristics about the problem domain | Utilizes domain-specific knowledge or heuristics             |
| Exploration Strategy | Systematic exploration of the search space based on available actions and transitions | Prioritizes states based on heuristic evaluations            |
| Efficiency           | May explore larger portions of the search space before finding a solution | Can be more efficient by guiding the search towards promising areas of the search space |
| Domain Dependency    | Domain-independent, applicable to any problem                | Requires domain-specific knowledge or heuristics to guide the search effectively |
| Completeness         | Uninformed methods do not guarantee completeness in searching the space. | Informed methods can be designed to guarantee completeness in the search process. |
