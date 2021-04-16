C/C++ CI-Build | Cppcheck | Unit testing | Git inspector | Codacy | 
---------------|----------|--------------|---------------|--------|
[![C/C++ CI](https://github.com/256604/Mini_project/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/256604/Mini_project/actions/workflows/c-cpp.yml) | [![Static Cppcheck](https://github.com/256604/Mini_project/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/256604/Mini_project/actions/workflows/cppcheck.yml) |  [![Unity - Unit Testing](https://github.com/256604/Mini_project/actions/workflows/unity.yml/badge.svg)](https://github.com/256604/Mini_project/actions/workflows/unity.yml) | [![Git Inspector](https://github.com/256604/Mini_project/actions/workflows/Git_inspector.yml/badge.svg)](https://github.com/256604/Mini_project/actions/workflows/Git_inspector.yml) |[![Codacy Badge](https://app.codacy.com/project/badge/Grade/2e66523968d74b09966dec516f8b12c5)](https://www.codacy.com/gh/256604/Mini_project/dashboardutm_source=github.com&amp;utm_medium=referral&amp;utm_content=256604/Mini_project&amp;utm_campaign=Badge_Grade) |
Code Coverage | Valgrind
[![Code Coverage](https://github.com/256604/Mini_project/actions/workflows/Code_coverage.yml/badge.svg)](https://github.com/256604/Mini_project/actions/workflows/Code_coverage.yml) | [![Valgrind_Check](https://github.com/256604/Mini_project/actions/workflows/Valgrind.yml/badge.svg)](https://github.com/256604/Mini_project/actions/workflows/Valgrind.yml)
 # DISTRIBUTION TRANSFORMER PARAMETER ESTIMATION SYSTEM
 ![image](https://github.com/256604/Mini_project/blob/main/1_Requirements/Distribution-Transformers-744x446.jpg)
# Description
* This estimator system helps the user to get complete information about the Distribution Transformer for various input load conditions per annum.
* This system estimates Output energy of a transformer,Energy spent on copper loss;iron loss,Efficiency of the transformer,Operational cost of Distribution,Optimal load and Maximum possible Efficiency of a given Distribution Transformer.
* It helps in reducing manual Calculation and makes our job easier once we have lot of dynamically varying load conditions.
# Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Architecture`   | Documents specifying architecture details
`3_Implementation` | All code and documentation
`4_TestPlanAndOutput`      | Documents with test plans and procedures
`5_Report`         | Report of the project
`6_ImagesAndVideos`| Output images of the project
# Contribution list summary

PS No. |  Name   |    Features    | Issues Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`256604` |Elakiya M  | Feature Optimum load,output energy,energy spent on copper loss,energy spent on iron loss,efficiency,operational cost,display the results     | No 0    | No 0  |Yes 7   |Yes 7   
# Challenges faced and how it was overcome

1. Faced issue with code coverage yml,it keeps on in progress as my code has goto and doesnt have an proper terminating condition.After,I resolved by adding exit(0) in default case.

# Functions
* Structures
* Pointer
* User Defined Header File
* Unity Test Framework
* Compatibility with Windows and Linux
# Approach
* Multi file programming
* Makefile to compile,run,test and check code coverage
* Makefile which works both in linux and windows
# IDE used
* Visual studio code
# Requirements
* Unit Framework Library
* MakeFile Configuration
* Mingw-w64(It runs on 64Bit but there is option for 32 bit too)
* gcc compiler
* Additional Visual studio code extension
  * Extension C/C++ 
  * Doxygen Extension
  * C/C++ Debugger Configuration
* Code Coverage
* CppCheck(Static memory analysis)
* Git-2.31.0-64-bit
# Run the project
* Clone the entire repo
* To give inputs
  * uncomment line no.31 to line no.53 in project.c 
  * comment line no.54 to line no.60 in project.c
* Store it in your local machine 
* Open cmd(windows) or terminal(linux) at the Project implementation loacation
* Commands
  * To compile: use **make** command
  * To run: use **make run** command
  * To do unit testing: use **make test** command
  * To do code coverage: use **make coverage** command
* While the code is running,follow the instructions in cmd or terminal.
* You are done!!
# Reference 
* Concept alone from the book : **DC Machines and Transformers,second edition**
* Author : **Dr.K Murugesh Kumar**






