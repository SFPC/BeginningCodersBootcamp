TODO: reformat headings in lecture section
TODO: not sure if diagonal line example is correct

# Day 1: Graphics, variables & functions

- **Lecture time:** 3 hours
- **Homework time:** 2 hours

## Learning outcomes

- Create and run openFrameworks projects
- Introduce basic C++ syntax
- Use openFrameworks graphics functions (`ofDrawLine`, `ofDrawCircle` etc.) in the `draw` loop
- Understand the painter's algorithm
- Declare and assign primitive variables (`int`, `float`)
- Use variables to reduce redundancy
- Declare and define functions
- Generalize a function with parameters

## Exercises To Do Before Class

Before the first day of class, students should try installing both an *IDE* and *openFrameworks*. IDE stands for "integrated development environment" and is what allows students to run programming code on your computer. openFrameworks is a coding library that students will be using extensively at SFPC. Here are specific instructions for Mac and Windows:

### Mac OSX
- Install [Xcode 10](https://apps.apple.com/us/app/xcode/id497799835?mt=12) from the app store. If you have an older version of Xcode already installed, we recommend upgrading to the latest version. 
- When installing Xcode, you may be prompted to update your operating system. We recommend you do this.
- Download and install [openFrameworks for Mac.](https://openframeworks.cc/download/)
- There are more details instructions [here](https://openframeworks.cc/setup/xcode/) to test your setup, you only need the first two sections: “First Steps” and “Testing your setup”. 
- We recommend you use the latest version of OF and Xcode. If this is not possible, just drop us an email and we will help you sort it out.

### Windows
- Install [Visual Studio Community 2017](https://www.techspot.com/downloads/6278-visual-studio.html). Note that this is an older version of Visual Studio; please install this older version even if you have a newer version installed.
- Install [openFrameworks for Visual Studio.](https://openframeworks.cc/download/)
- More detailed setup guide is [here](https://openframeworks.cc/setup/vs/). We will also be able to help you in class.

### Linux
- QT Creator is the officially supported IDE. [Here are instructions](https://openframeworks.cc/setup/qtcreator/) for working with QT creator. If you’re using a different IDE [start here.](https://openframeworks.cc/setup/linux-install/)
- One request -- you'll need to install a compiler -- if you are on OSX, you should install xcode.  You can install this through the OSX app store (search for xcode). If you have an older version of OSX, it may ask you update the OS.  

Also, download openFrameworks for your given platform: http://openframeworks.cc/download/

## Lecture (3 hours)

### New project layout

First, we created a blank openFrameworks project. The following files are created for us.

-   `main.cpp` — we usually don't need to change this file; however, you can change the dimensions of the window here.
-   `ofApp.cpp` — this is the main file you'll edit, where most of your code will go.
-   `ofApp.h` — sometimes you will need to add variables to this file, but we won't need it much for now.

Open up the `ofApp.cpp` file. There's a special function within this file called `draw`. It looks like this:

```cpp
void ofApp::draw(){
  
}
```

This is where all of the code that draws to the screen will go.

### Basic graphics

Next, we covered the following basic drawing concepts in openFrameworks:

-   The coordinate system in openFrameworks has a reversed y-axis from what we're used to. Moving _down_ the screen means _larger_ y values.
-   `ofDrawLine(x1, y1, x2, y2)` can be used to draw a line from starting point (x1, y1) to ending point (x2, y2).

### Exercise 1: Draw a diagonal line

Draw a line from the top-left corner of the window to the bottom-right corner right corner. Remember that if we want to get the width and height of the window, we can take a look inside of `main.cpp`.

#### Exercise 1 solution

Modify the `draw` function in `ofApp.cpp`:

```cpp
void ofApp::draw() {
    ofDrawLine(0, 0, 1024, 768);
}
```

What if we want to add some padding to the line, so it doesn't go _all_ the way to the corner?

```cpp
void ofApp::draw() {
    ofDrawLine(10, 10, 1024 - 20, 768 - 20);
}
```

*Important*: we can put math, like `1024 - 20`, inside our call to `ofDrawLine`.

### More basic graphics & painter's algorithm

We introduced comments (lines beginning with `//`) as an important tool for "writing a letter to yourself in code." Example:

```cpp
void ofApp::draw() {
    // The following code draws a line!
    ofDrawLine(10, 10, 1024 - 20, 768 - 20);
}
```

`ofBackground(red, green, blue)` can be used to set the background color. The values of `red`, `green`, and `blue` must be numbers in the range of 0 – 255, where 0 represents "no color at all" and 255 represents "a maximum amount of that color". Example:

```cpp
void ofApp::draw() {
    // full red and blue with no green makes purple
    ofBackground(255, 0, 255);
}
```

The call to `ofBackground` must come before `ofDrawLine`:

```cpp
void ofApp::draw() {
    ofBackground(255, 0, 255);
    ofDrawLine(10, 10, 1024 - 20, 768 - 20);
}
```

If the lines are switched, then the call to `ofBackground` overwrites the line that comes before it:

```cpp
void ofApp::draw() {
    // This renders a blank screen with no line
    ofDrawLine(10, 10, 1024 - 20, 768 - 20);
    ofBackground(255, 0, 255);
}
```

This introduces two important concepts:

1. _Lines of code are executed in a precise order, starting with the first line of a function and continuing down_.
2. The *painter's algorithm*. openFrameworks graphics calls are like commands that you would give to a painter ("first paint the background purple, next paint a line"). If you command the painter to fill in a background as the last step in a list of instructions, it covers up what is below it.

Finally, we looked at two more primitive drawing functions: `ofDrawCircle(x, y, radius)` and `ofDrawRectangle(x, y, width, height)`. Examples:

```cpp
void ofApp::draw() {
    ofBackground(255, 0, 255);

    // A circle at position (50, 40) with radius 20:
    ofDrawCircle(50, 40, 20);

    // A rectangle with top left corner at (100, 200),
    // width of 50 and height of 30:
    ofDrawRectangle(100, 200, 50, 30);
}
```

### Exercise 2: Draw your name

Using openFrameworks primitives (lines, circles and rectangles), draw your name in the `draw` function.

#### Exercise 2 solution

Here's an example for the name "ALEX":

```cpp
void ofApp::draw(){
  ofBackground(0);
  
  // A
  ofDrawLine(20, 200, 150, 20);
  ofDrawLine(150, 20, 280, 200);
  ofDrawLine(90, 100, 210, 100);
  
  // L
  ofDrawLine(300, 20, 300, 200);
  ofDrawLine(300, 200, 380, 200);
  
  // E
  ofDrawLine(400, 20, 400, 200);
  ofDrawLine(400, 20, 480, 20);
  ofDrawLine(400, 100, 480, 100);
  ofDrawLine(400, 200, 480, 200);

  // X
  ofDrawLine(500, 20, 580, 200);
  ofDrawLine(500, 200, 580, 20);
}
```

This yields the following picture:

![ALEX drawn with openFrameworks](name.png)

### Variables

One of the main things a computer can do is _remember information_. You've probably heard of the term "computer memory" — this is what the computer uses to remember. Programming languages like C++ will always offer a mechanism to use computer memory; in C++ this mechanism is called a **variable**.

A variable is like a box that you can put a piece of information inside. The information inside of the box can be recalled later. There are two core parts of each variable:

1. The name that you can use to access it (in the box analogy, this is like labeling the outside of the box with a sharpie to remind yourself what the box is for)
2. The type of the variable. A variable can store any time of information, but we must tell the computer what type of information is going to go inside of it. The box analogy breaks down here, but we can imagine that we have different types of boxes for storing different types of contents.

One of the simplest types of variables is one that stores a number. Here's how we create that:

```cpp
int myNumber;
```

The `int` here is the _type_ of the variable. `int` stands for "integer", and it tells the computer that we're going to store integers in our variable. Integers are any whole numbers (including negative numbers), like 5, 2, 9999, or -345.

`myNumber` is the _name_ of the variable. We can choose whatever name we want here. Anytime in the future that we want to refer to this variable, we'll identify it using this name.

If we want to assign our variable to a value, we use the following syntax:

```cpp
int myNumber;
myNumber = 5;
```

This stores the value `5` inside of `myNumber`. Think about putting the number 5 in a box. If we want to retrieve this number, we can use it in our program in place of where we would normally put a number. For example, to draw a line:

```cpp
int myNumber;
myNumber = 5;

ofDrawLine(myNumber, 10, 100, 200);
```

`5` will be inserted in place of `myNumber` when we run the program.

There are many other types of variables, and we won't cover them all in this class. The two most important types for creative coding are `int` and `float`. A `float` also stores a number, but it can store a _decimal number_ in addition to whole numbers. For example, you could use a `float` to store temperature (98.6) or time (3.4 seconds). To declare a `float`:

```cpp
float myNumber;
myNumber = 3.13;
ofDrawCircle(10, 10, myNumber);
```

### Removing redundancy using variables

Let's take a look back at [exercise 2](#Exercise-2:-Draw-your-name). We're going to modify this example. Rather than drawing your entire name, let's draw the first letter of your name _twice_:

![A drawn twice](a_twice.png)

If we want to draw the second A to the right of the first A, we need to add some offset to all of our x-coordinates:

```cpp
void ofApp::draw(){
  ofBackground(0);
  
  // A
  ofDrawLine(20, 200, 150, 20);
  ofDrawLine(150, 20, 280, 200);
  ofDrawLine(90, 100, 210, 100);
  
  // A again
  ofDrawLine(20 + 300, 200, 150 + 300, 20);
  ofDrawLine(150 + 300, 20, 280 + 300, 200);
  ofDrawLine(90 + 300, 100, 210 + 300, 100);
}
```

I've shifted over the second A by 300 pixels to the right. As you can see, I've had to write `+ 300` many times in the code for my second A. Programmers hate redundancy — it makes them VERY upset. What if we wanted to adjust this 300 number by changing it to 400? We'd have to go through and replace every instance of 300 with 400, which is tedious.

Instead, let's save this 300 value to a variable, and then use the variable in place of the number:

```cpp
void ofApp::draw(){
  ofBackground(0);
  
  // A
  ofDrawLine(20, 200, 150, 20);
  ofDrawLine(150, 20, 280, 200);
  ofDrawLine(90, 100, 210, 100);
  
  // A again
  float offset = 300;
  ofDrawLine(20 + offset, 200, 150 + offset, 20);
  ofDrawLine(150 + offset, 20, 280 + offset, 200);
  ofDrawLine(90 + offset, 100, 210 + offset, 100);
}
```

Now the value 300 only appears in one place, and is easy to change! This is a common use of variables: to reduce redundancy.

### An aside: mouse position

There are special built in variables to openFrameworks that allow you to access the position of the mouse. These are called `mouseX` and `mouseY`. For example, if you want to draw a circle at the position of the mouse:

```cpp
void ofApp::draw() {
  ofBackground(0);
  ofDrawCircle(mouseX, mouseY, 10);
}
```

### Functions

We discussed how to use variables to reduce redundancy. But if we look at our code to draw an A twice, we might sense that there is still quite a bit of redundancy. We have three lines of code that are almost the same repeated twice. If we find ourselves repeating code often, we should put this code inside of a function.

A **function** is a section of code that we can save and run at anytime. Just like variables store data, functions store code.

Writing a function is a two step process in C++. First, we must write the **function header** in the `ofApp.h` file. Modify `ofApp.h` to look like this:

// TODO: function header

### Parameters

- TODO: parameters

### Exercise 3: Write a function to draw a letter

We broke this exercise down into smaller parts.

1.  Draw the first letter of your name twice. Unless a student has previous 
2.  Factor out redundant code using a variable
3.  Factor out redundant code using a function

TODO: Give solution code

## Homework 1: Generalize your letter function (2 hours)

TODO: 

## Vocabulary

## Common misconceptions & questions

-   **Does the order of lines matter?**

    Most of the time, yes. Lines of code inside of a function are run sequentially, one right after the other. However, sometimes the order of code doesn't matter. For example, when you're defining a new function, it doesn't matter where you put the function.

-   **I'm confused by all the numbers in code like `ofDrawRectangle(20, 30, 60, 40)`!**

    This list of numbers tells `ofDrawRectangle` exactly what sort of rectangle you want to draw. The order of the numbers is _very important_. The first two numbers are the (x, y) position of the top-left corner of the rectangle (in the above example, (20, 30)), and the second two numbers are the width and height (in this example, a width of 60 and a height of 40). _Every function interprets the numbers you pass into it in a specific way._ `ofDrawRectangle` is different from `ofDrawCircle`, for example. If you forget which order the numbers go in, you can refer to the openFrameworks documentation. (These numbers are technically called _arguments_, although students don't often refer to them as such at this point.)

-   **How does the coordinate system of the window work?**

    The top left corner of the window is the origin, or point (0, 0). As you move to the right, you increase the x-coordinate. So point (100, 0) is 100 pixels to the right of the origin, but still at the top of the window. As you move downwards, you increase the y-coordinate. So (0, 100) is 100 pixels _below_ the origin, but against the left-hand side of the window. Note that the y-axis is flipped relative to the standard x/y coordinates you may be familiar with from math class.

-   **Can I change the width and height of the window?**

    Yes, you can do this by changing the following line in `main.cpp`:

    ```cpp
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ```

    Change `1024` to whatever width you want, and `768` to whatever height you want.

-   **I get an error that says "Expected ';' after expression"**

    Almost every line in C++ ends with a semi-colon. This is an important piece of coding syntax.
