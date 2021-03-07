<h1>Compilers</h1>

Repository for learning how compilers work by developing my own compiler, as well as getting more used to c++ OOP patterns.


(2021 March 07)

Now I am studdying more about compilers by reading the famous "Dragon book":
Compilers Principle Techniques and Tools 2nd Edition

Here, I will describe what I learned in order to develop my own compiler. Until now, I only coded a binary tree class for parsing.


I've read until page 30, and figured out that a compiler is mainly built on two parts: the analysis (front-end) and the synthesis (back-end).

Also, there are smaller steps:

	Lexical Analysis	|
	Syntax Analysis		|-> Front-end / Analysis
	Semantic Analysis	|
	
	Intermediate Code Generation		|
	Machine-Independent Code Optimization	| -> Back-end / Synthesis
	Code Generation				|
	Machine-Dependent Code Optimization	|


