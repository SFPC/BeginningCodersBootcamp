Bootcamp
========

## Day 1

### Vocabulary

- Library - a bunch of code that someone else already wrote
- openFrameworks - a library that helps you draw graphics and other creative code related tasks
- C - invented in the 70s, one of the first programming languages
- C++ - built off of C, an improvement on C that adds new concepts. A "type a" language.
- Variable
  - Allow you to save information in the computer's memory
  - Must have a type
- Parameter
  - Functions can have parameters. Another word is "argument".

- What can computers do?  
  - Math
  - Remember stuff
  - Control flow — Choose your own adventure stuff

### Common Questions


- How do I create a new openFrameworks project?

- What are the different source files for?
  - main.cpp 
  - ofApp.cpp
  - ofApp.h

- Coordinate systems start at the top left. (0, 0) is at the top left, and down is positive in Y.
- How do I change the width and height?
  - Open main.cpp, look for width/height
- I get this error: "Expected ';' after expression"
  - Almost every line in C++ ends with a semi-colon. This is an important piece of coding syntax.
    This is a way a computer knows the division between lines.
- do i need to use spaces in between symbols?
  example: ofDrawLine(x+10,5,x+20,20);
  This is syntactically valid, but it is not the convention.
- Does it matter what order I put lines of code?
  - Absolutely, the order of lines is very important.
    - Background example
    - Variable example

- How do I create a new function?
  - add the "function header" to the .h file
  - add a "function definition" to the .cpp file

- What happens if i define a variable called x inside a function with a parameter  called x?

- very important use ofApp::

### Handout / Cheat sheet

- draw function
- Coordinate system
- ofDrawLine(x1, y1, x2, y2)
  - x's come before y
- ofBackground(r, g, b)
  - each value ranges from 0-255
- Painter's algorithm
  - The order of the lines matters
- Comments are a letter to yourself
  // This is a comment
  - command + slash
- ofDrawCircle(x, y, radius)
  - radius, not diameter
- ofDrawRectangle(x, y, width, height)
  - width and height are (relative)
- variables:
  - binary can be used to represent numbers, letters, other types of data
  - int x = 10;
    - A number that has no fractional component
  - float x = 50;
    - A decimal number. 1.1, 3.14, -103345.2543
  - char c = 'x';
    - a single letter
  - bool b = true;
  - types are fundamental to programming languages
- mouseX / mouseY
- custom functions
  - double click on .h file
  - add a new function under "public:"

      void drawLetterR()

- parameters
  - in .h file:
    - void drawLetterR(float x);
  - in .cpp file:
    void drawLetterR(float x) {
    }
  - 


- Always reduce redundancy


### Exercise

- Exercise 1: Draw line from top left to bottom right
- Exercise 2: Draw your name
  - Coordinate systems?
  - how do i change line width
  - how do i use ofDrawCurve

  - S's are hard
    ofPolyline curve;  
    curve.arc(centre, radiusX, radiusY, startAngle, endAngle, arcResolution);  
    curve.draw();

  - you can use mathematical expressions in parameters
- Exercise 3: Take the first letter of your name, and draw it twice on the screen
  - make the computer do the math

    if this is our old line

    ofDrawLine(30, 30, 20, 500);

    then we can draw this new line

    ofDrawLine(200 + 30, 30, 200 + 20, 500)

    - we keep repeating the same number again and again
    - we can use a variable to store this number
    - we can move this code to a function
    - we can parameterize this function

- Homework assignment:
  - Rewrite drawLetter function so that it accepts 4 parameters:

    void drawLetter(int x, int y, int width, int height) {
      // ...
    }

  - 

### Feedback

- Turn off autocomplete at the start
- Color as 0-255 was called out by student, but needs to be reemphasized more clearly. 
- What happens if ofBackground comes after ofLine?
- Overemphasis on XCode short cuts
- "Little bit of addition" — not easy!
- Don't show multi-cursor features
- Lines of code are run top-down
- don't introduce binary so early. i think that "you need to tell c++ what type of variable you want to store" is enough.
- A program is a recipe.
- More focus on syntax. Ex: variable declaration (doesn't need to be called x)
- mental model of the execution thread
- scope

- "people who have coded before in the past"
- "has anyone used processing" 
- if statement - "has anyone heard of this before"
- use debugger?
- easing is a hard example to introduce a function with. it's using state, parameters AND return values all at once.
- introduce arrays before object?
- bag isn't good analogy for array. list is better.
- "has anyone heard of array before?"

- drawing vector example is not motivated well. it's the same as before.
- when giving homework, dont say "maybe we can bah blah". homework should be well defined, written down, and confidently stated

- wish we had a "picture vocabulary" for memory (variables are boxes, arrays are stacks of boxes)

- more questions for students. "turn to the person next to you and tell them what you think" or "try doing this task with the person next to you"

###

- Survey
  - Please rate your prior programming experience
  - I have openFrameworks installed and can run an openFrameworks program.
  - I feel comfortable creating a new openFrameworks project.
  - Coordinate system
  - ofDrawLine
  - ofBackground
  - Comments
  - ofDrawCircle
  - ofDrawRectangle



