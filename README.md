# extractAndAddNumbers

Write a program that will extract a series of numbers (type double) from an input sentence and then add them. EXAMPLE: Suppose the sentence entered is “Give me the sum of 25.25 and 13.50.  ”The program should print to the screen: The sum = 38.75 NOTE: The numbers can be of any value. Don’t hard code the values shown in the example. In this problem take advantage of the input buffer programs presented in class. Particularly cin, cin.get, cin.ignore, and peek. 

(NOTE: You can assume that all numbers have at least one digit left of the decimal. That are no numbers like .1572)

Test the program with these examples:

TEST CASE 1. “Please tell me the sum of 18.0 plus 25.5.”
OUTPUT: "The sum is 43.5
TEST CASE 2. “If I add 24.5, 18.0 and 17.2 what do I get?
OUTPUT: "The sum is 59.7
TEST CASE 3. "4.5 plus 16.25 plus 18.0 plus 3.5 equals?"

NOTE: There are several library functions in C++ that will make this problem easier to do. In particular you should consider using the following functions: ch is char type

isalpha(ch)     Returns true if ch is a letter (A-Z, a-z)
isdigit(ch)       Returns true if ch is a digit (0-9)
ispunct(ch)    Returns true if ch is punctuation character (period, comma, question mark etc.)
isspace(ch)    Returns true if ch is a space.
For example: 

cin.get(ch1); // Read a character
if ( isdigit(ch1) )
     cout << "The character is a number." << endl;
