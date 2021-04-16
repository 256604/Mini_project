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

# High level requirements
|ID|DESCRIPTION|STATUS|
|-------|-------|-----|
|H1 |Input transformer’s data from user |Implemented|
|H2 |Input Load data from user | Implemented|
|H3 |Input user’s choice for calculation |Implemented|
|H4 |Estimation of output energy| Implemented|
|H5 |Estimation of energy spent for copper loss| Implemented|
|H6 |Estimation of energy spent for iron loss |Implemented|
|H7 |Estimation of optimum load |Implemented|
|H8|Estimation of operational cost |Implemented|
|H9| Estimation of efficiency |Implemented|
|H10| Display the calculated parameters |Implemented|

# Low level requirements

|ID |DESCRIPTION| ID |STATUS|
|-----|------|------|------|
|L1| Input Transformer’s rating, copper and iron loss in KW, cost per unit |H1 |Implemented|
|L2| Input load type, Power factor, and hours of operation| H2 |Implemented|
|L3| Input user’s preferred choice like
1-optimum load,2-output energy,3-copper loss in KWh,4-iron loss in KWh,5-efficiency,6-operational cost,7-display,8-exit
| H3| Implemented|
|L4| Output energy is estimated with Rating, load data|H4 |Implemented|
|L5| Energy spent for copper loss is estimated with copper loss, load data| H5 |Implemented|
|L6| Energy spent for iron loss is estimated with iron loss |H6 |Implemented|
|L7| Optimum load is estimated with rating, iron and copper loss| H7 |Implemented|
|L8| Operational cost is estimated with output energy , copper and iron loss energy, cost per unit |H8 |Implemented|
|L9| Efficiency is estimated with output energy, iron and copper loss energy| H9 |Implemented|
|L10|All calculated parameters are displayed |H10 |Implemented|
