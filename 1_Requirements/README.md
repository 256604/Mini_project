# REQUIREMENT ANALYSIS
# Introduction

The Project deals with the Estimation of Distribution Transformer Parameters for a given Load conditions per annum. It calculates all informations related to Distribution of Electrical Energy via a Distribution Transformer such as Efficiency of Transmission, Energy Received, Energy loss in the form of Copper loss and Iron loss and most importantly the operational cost of the transformer. This project aimed at the job simplification and reducing the manual work and hereby saving the time of manual calculations on various load conditions. Optimal load is calculated for the given Transformer which is nothing but the load at which the Efficiency of Transmission is maximum. Using optimal load, maximum efficiency is also calculated. User can understand the difference in efficiency for the practical load conditions and the maximum possible efficiency.

# System Analysis (Research)

This system is basically concerned with the Distribution transformer parameter estimation like efficiency of Transmission of electrical energy in comparison with the maximum efficiency. The primary need of the system arises because as is the known fact that the loads connected to the distribution system varies according to time and hence calculating the required information for a dynamically varying load manually is quite a tough job. By computerizing it, we will be able to handle the dynamic data more efficiently. Handling of such variations and calculating parameters for such system is a very complex task if it is done manually but it can be made much easier if the system is computerized.

# System Features

* System asks the user for Transformer Data that are needed for Calculations
* Users are asked to enter the load conditions per annum
* User can choose the needed parameter to be calculated
* User can view the Results individually for each parameters
* Display function allows the user to view all the parameters calculated

# Benefits

* It will save the operating time, reduction in paperwork and manual handling of the data, errors that can arises by doing the calculations manually will also reduce.
* We can store the results of Calculation for each transformers and manage the load requirements to achieve maximum possible efficiency.
Defining the system

# Functions used:

* Output Energy
-After entering the transformer data, user can get output energy as a result after computation.
* Copper loss energy
-With the load data and rating of the transformer, copper loss in KWh is calculated.
* Iron loss energy
-With the iron loss in KW, energy spent for iron loss is calculated as Iron loss is independent of load value and rating of the transformer.
* Optimal load
-With the value of losses and rating , optimal load is calculated.
* Operational Cost
-With the energy values in KWh and cost of electrical energy per unit , cost of operation is estimated.
* Efficiency
-Efficiency for a given load condition is compared with maximum efficiency possible for the transformer.
* Display
-Estimated parameters of a transformer is displayed

# Block diagram
![image](https://github.com/256604/Mini_project/blob/main/1_Requirements/Doc1.png)
# SWOT Analysis
![image](https://github.com/256604/Mini_project/blob/main/1_Requirements/Untitled%20Workspace.png)


# 5 W’s 1 H

* Why:
To reduce the manual work, operating time, and to manage Transformer parameters and check for maximum possible efficiency.
* Who:
Producer and Consumer of Electricity. Producer can get load requirement from consumer and perform some design changes in Transformer based on results from the system.
* What:
A simple and easy to use system for the Users to do all the calculations related to distribution transformer and load requirements.
* When:
The system is required now to bring effective distribution possible thereby reducing the losses to the utmost possible level.
* Where:
The system is expected to work in distribution system all over India.
* How:
User can view the options for calculating various Parameters of Transformer once the code is runned.

### HIGH LEVEL REQUIREMENTS
|ID|DESCRIPTION|STATUS|
|-------|-------|-----|
|H1 |Input transformer’s data from user |Implemented|
|H2 |Input Load data from user | Implemented|
|H3 | |Implemented|
|H4 |Calculation of Output Power| Implemented|
|H5 |Calculation of Shaft torque| Implemented|
|H6 |Calculation of Efficiency |Implemented|
|H7 |Calculation of Total losses |Implemented|
|H8|Calculation of Rotor power |Implemented|
|H9| Calculation of Torque developed in forward direction |Implemented|
|H10| Calculation of Torque developed in Backward direction |Implemented|

### LOW LEVEL REQUIREMENTS

|ID |DESCRIPTION| ID |STATUS|
|-----|------|------|------|
|L1| Calculation of Synchronous frequency by getting inputs such as Slip and Rotor frequency from user |H1 |Implemented|
|L2| Calculation of Synchronous speed by getting inputs such as number of poles from user and Synchronous frequency from previous function| H2 |Implemented|
|L3| Calculation of Power developed by getting inputs such as Torque developed and slip from user| H3| Implemented|
|L4| Calculation of Output power by getting inputs such as power developed from previous function and mechanical loss from user |H4 |Implemented|
|L5| Calculation of Shaft torque by getting inputs such as output power and from previous function| H5 |Implemented|
|L6| Calculation of Efficiency by getting inputs such as Input power from user and Output power from fourth function |H6 |Implemented|
|L7| Calculation of Total losses by getting inputs such as Input power from user and Output power from fourth function| H7 |Implemented|
|L8| Calculation of Rotor power by getting inputs such as Torque developed and copper loss from user |H8 |Implemented|
|L9| Calculation of Torque developed in forward direction by getting inputs such as Torque developed from user and Rotor power from previous function| H9 |Implemented|
|L10|Calculation of Torque developed in backward direction by getting inputs such as Torque developed from user and Rotor power from previous function |H10 |Implemented|
