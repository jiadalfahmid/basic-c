//* 1st thing we need to add is the pre processor
// #include<stdio.h>

//* 2nd we would add main function
int main(){ // main function
 // Body
}

//* Brackets we gonna use is 1.() parenthesis 2.{} curly braces 3. [] square brackets
// * adding a line brake use '\n';
// * to see the output add return 0;

//* let's write our 1st code
int main()
{
 printf("Hello Jambura!");
 return 0;
}

// * Variables (Store data or values)
// Datatype name = Value;
// * char = character, int = integer, ...
char myName[] = "Fahmid"; // to add more then one character we used [] after the name.
int myAge = 20;

// * to use the variables we have to declare the datatype and the name of the variable after adding the formate specifier (%) and the datatype.
printf("I am %s\n, myName");// %s is used for the datatype 'string' and after a comma at the end we write the name of the variable.
printf("You wanna know my age? It's %d\n, myAge");// %d is used for 'integer'.

// * we can change the value of any variables simply by the name.
myAge = 43;

// * Data types
// * 1st we can see 2 different types of data. 1. Integer, 2. Decibel, 3. character

int number = 43; // to declare integer type value we use int
double GPA = 4.34;// to declare decibel value use double
char grade = "F"; // to declare character use char

// * when we want to add string as value we use char and make a array of strings
char name[] = "Fahmid"; // using [] for declaring array;

// * using formate specifiers in order;
printf("My name is %s and my age is %d", "Fahmid", 49);
printf("You know the value of pi is %f and my fev character is %c", 3.1416 , "T");

// * 