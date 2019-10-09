- TODO: reformat headings in lecture section
- TODO: not sure if diagonal line example is correct

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

## Lecture (3 hours)

### New project layout

First, we created a blank openFrameworks project. The following files are created for us.

-   `main.cpp` — we usually don't need to change this file; however, we can change the dimensions of the window here.
-   `ofApp.cpp` — this is the main file you'll edit, where most of your code will go.
-   `ofApp.h` — we can add variables (more on those later) to this file, but we won't need it much for now.

Open up the `ofApp.cpp` file. There's a special _function_ within this file called `draw`. It looks like this:

```cpp
void ofApp::draw(){
  
}
```

Functions are a way to organize code in C++. openFrameworks has lots of functions that will help us create graphical programs. The `draw` function is where all of the code that draws to the screen will go. If we place code between the `{` and `}`, it will be executed as part of the `draw` function.

### Calling functions

There are two types of functions that openFrameworks provides:

1. Functions you put code _inside_ (like `draw`).
2. Functions you _call_.

What does it mean to call a function? There are certain functions that openFrameworks has already written for us — these contain code which does useful things we might want to take advantage of. For example, there's a function for drawing lines named `ofDrawLine`. When we use the function in our code, we say we are _calling the function_. It's like we're calling up this function on the phone and saying, "Hey, can you draw us a line?" We can also think of the function as a magical spell. By calling out the name of the function, we're invoking the spell!

Here's an example of how to call the `ofDrawLine` function inside of our `draw` function:

```cpp
void ofApp::draw() {
    ofDrawLine(0, 100, 500, 100);
}
```

Let's take a look at the syntax:

1. `ofDrawLine` — this is the name of the function; it tells C++ which function we want to invoke.
2. `(0, 0, 1024, 768)` — these are the _parameters_ of our function call; they tell the function specifics about how it should be invoked. (When we call our function up on the phone, we can give it some extra instructions.) In this case, we're giving the `ofDrawLine` function information about the line we want to draw. The syntax is important here: our parameters must be surrounded by `(` and `)` and separated by `,`.
3. And lastly, the `;` at the end — this is an important syntactic detail which is easy to forget. _Most lines that we'll write in C++ end in a `;`_. If we forget to add it, you'll get an error.

If we run the program with our function call, we should see a line drawn to the screen. Next, let's go into detail about the parameters we're passing to `ofDrawLine`.

### Basic graphics

We need to cover the following basic drawing concepts in openFrameworks:

-   The coordinate system in openFrameworks has a reversed y-axis from what we're used to. Moving _down_ the screen means _larger_ y values.

    TODO: illustration of coordinate plane here

-   `ofDrawLine(x1, y1, x2, y2)` can be used to draw a line from starting point (x1, y1) to ending point (x2, y2).

For example, `ofDrawLine(0, 100, 500, 100)` draws a line from the point (0, 100) to the point (500, 100).

### Exercise 1: Draw a diagonal line

Draw a line from the top-left corner of the window to the bottom-right corner right corner. Remember that if we want to get the width and height of the window, we can take a look inside of `main.cpp`.

TODO: illustration of finished exercise

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
    ofDrawLine(10, 10, 1024 - 10, 768 - 10);
}
```

**Important**: we can put math, like `1024 - 10`, inside our call to `ofDrawLine`.

### More basic graphics & painter's algorithm

We introduce comments (lines beginning with `//`) as an important tool for "writing a letter to yourself in code." Example:

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
2. The **painter's algorithm**. openFrameworks graphics calls are like commands that you would give to a painter ("first paint the background purple, next paint a line"). If you command the painter to fill in a background as the last step in a list of instructions, it covers up what is below it.

Finally, we look at two more primitive drawing functions: `ofDrawCircle(x, y, radius)` and `ofDrawRectangle(x, y, width, height)`. Examples:

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

Example solution:

![ALEX drawn with openFrameworks](name.png)

#### Exercise 2 solution

Here's the code for the image above:

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

### Variables

One of the main things a computer can do is _remember information_. You've probably heard of the term "computer memory" — this is what the computer uses to remember. Programming languages always offer a mechanism to use computer memory; in C++ this mechanism is called a **variable**.

A variable is like a box that we can put a piece of information inside. The information inside of the box can be recalled later. There are two core parts of each variable:

1. The name that we can use to access it (in the box analogy, this is like labeling the outside of the box with a sharpie to remind yourself what the box is for).
2. The type of the variable. A variable can store any time of information, but we must tell the computer what type of information is going to go inside of it. We can imagine that we have different types of boxes for storing different types of contents.

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

This stores the value `5` inside of `myNumber`. Think of this as putting the number 5 in a box. If we want to retrieve this number, we can use it in our program in place of where we would normally put a number. For example, to draw a line:

```cpp
int myNumber;
myNumber = 5;

ofDrawLine(myNumber, 10, 100, 200);
```

`5` will be inserted in place of `myNumber` when we run the program.

There are many other types of variables, and we won't cover them all in this class. The two most important types for creative coding are `int` and `float`. A `float` also stores a number, but it can store a _decimal number_ in addition to whole numbers. For example, you could use a `float` to store 98.6, 3.0, or 99987.3452. To declare a `float`:

```cpp
float myNumber;
myNumber = 3.13;
ofDrawCircle(10, 10, myNumber);
```

### The life of a variable

Variables go through the following stages of life:

1.  **Declaration** — where a variable's _type_ and _name_ are declared. For example:
    
    ```cpp
    float circleSize;
    ```

    The default value of `circleSize` will be 0.
2.  **Assignment** — where the value of a variable is set. This stores a value in the variable. For example: 
  
    ```cpp
    circleSize = 5.5;
    ```

3.  **Usage** — where the value of a variable is recalled from memory and used in the program. For example:

    ```cpp
    ofDrawCircle(100, 100, circleSize);
    ```

4.  **Death** — variables don't last forever; they stay alive until they reach the end of their _scope_. If you define a variable in a function, then its scope is the function. When the function finishes running, the variable is destroyed.

    ```cpp
    void ofApp::draw(){
      float x;
      x = 5.5;
    }

    // variable x is not available outside of the draw
    // function, because it only exists within the scope
    // of the draw function
    ```

Note that steps **1** and **2** can be combined into a single line. This is called initialization:

```cpp
float circleSize = 5.3;
```

Also note that a variable can be assigned multiple times:

```cpp
float circleSize = 5.3;

// now store a new number inside of circleSize:
circleSize = 2.1;
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

### Writing our own functions

We've already been using two types of functions, discussed at the beginning of the day. Firstly, we've been putting code inside of the `draw` function that openFrameworks provides for us. Secondly, we've been _calling_ functions that openFrameworks also provides for us. Now we're going to extend our use of functions to writing and calling our own functions.

A function is a section of code that we can save and run at anytime. Just like variables store data, functions store code. There are two motivations for writing our own functions: **organization** and **reusability**.

Let's cover how we might use functions for organization. Recall the full code for drawing our name:

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

Let's split this code up into individual functions for each letter to keep things organized. First, we need to declare these new functions in our `ofApp.h` file:

```cpp
class ofApp : public ofBaseApp{

  public:
    void setup();
    void update();
    void draw();
  
    void drawA();
    void drawL();
    void drawE();
    void drawX();

    // other functions not shown
}
```

Next, we need to define these functions back in our `ofApp.cpp` file. These function definitions can go anywhere:

```cpp
void ofApp::drawA() {
  
}

void ofApp::drawL() {
  
}

void ofApp::drawE() {
  
}

void ofApp::drawX() {
  
}
```

Next, let's cut and paste the code to draw each letter and paste it into these new functions:

```cpp
void ofApp::drawA() {
  ofDrawLine(20, 200, 150, 20);
  ofDrawLine(150, 20, 280, 200);
  ofDrawLine(90, 100, 210, 100);
}

void ofApp::drawL() {
  ofDrawLine(300, 20, 300, 200);
  ofDrawLine(300, 200, 380, 200);
}

void ofApp::drawE() {
  ofDrawLine(400, 20, 400, 200);
  ofDrawLine(400, 20, 480, 20);
  ofDrawLine(400, 100, 480, 100);
  ofDrawLine(400, 200, 480, 200);
}

void ofApp::drawX() {
  ofDrawLine(500, 20, 580, 200);
  ofDrawLine(500, 200, 580, 20);
}
```

After we finish defining our functions, we need to call them. If we don't call them, then the code inside of them is never executed. Let's call our functions from within `draw`:

```cpp
void ofApp::draw(){
  ofBackground(0);
  
  drawA();
  drawL();
  drawE();
  drawX();
}
```

If we run this program, we see identical output to before. But our `draw` function is no longer cluttered with `ofDrawLine`s. As we write larger programs, you might find it convenient to organize code in this way: putting sections of code into functions, and then calling on those functions from `draw`. Functions are essentially little "mini programs" which can be composed into the larger, main program.

### Using functions to reduce redundancy

We talked about how there are two motivations for functions: **organization** and **reusability**. Now let's cover an example of how we might use functions for reusability.

Consider our example of drawing an "A" twice to the screen:

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

We discussed how to use a variable (`offset`) to reduce redundancy. But we might sense that there is still quite a bit of redundancy in this code. We have three lines of code that are almost the same repeated twice. If we find ourselves repeating code often, we should put this code inside of a function, so that we can reuse the code without repeating ourselves.

As before, let's write a function `drawA` which is responsible for drawing an A character.

`ofApp.h`:

```cpp
class ofApp : public ofBaseApp{

  public:
    void setup();
    void update();
    void draw();
  
    void drawA();
    // other functions not shown
}
```

Now back in our `ofApp.cpp` file, we can call this function twice in `draw`:

```cpp
void ofApp::draw(){
  ofBackground(0);
  
  drawA();
  drawA();
}

void ofApp::drawA() {
  ofDrawLine(20, 200, 150, 20);
  ofDrawLine(150, 20, 280, 200);
  ofDrawLine(90, 100, 210, 100);
}
```

However, if you run this code, you'll only see a single A. This is because our function is drawing the A twice in exactly the same location — we removed our `offset` variable that we were using to adjust the position of the second A. We need to be able to tell our function _where_ it should draw the A. In order to do this, we'll use **parameters**.

First, modify the `ofApp.h` file:

```cpp
class ofApp : public ofBaseApp{

  public:
    void setup();
    void update();
    void draw();
  
    void drawA(int offset);
    // other functions not shown
}
```

And then modify our function in the `ofApp.cpp` to use this `offset` parameter:

```cpp
void ofApp::drawA(int offset) {
  ofDrawLine(offset + 20, 200, offset + 150, 20);
  ofDrawLine(offset + 150, 20, offset + 280, 200);
  ofDrawLine(offset + 90, 100, offset + 210, 100);
}
```

Finally, we must pass in the parameter when we call it from our `draw` function:

```cpp
void ofApp::draw(){
  ofBackground(0);
  
  drawA(0);
  drawA(300);
}
```

// TODO: watch dan shiffman on parameters and figure out how to explain this better
// TODO: save out these code examples

### Exercise 3:

Add a second parameter to your letter drawing function that allows you to adjust the vertical position of the letter in addition to the horizontal position. For example, the declaration of your function in the `ofApp.h` file would look like this:

```cpp
class ofApp : public ofBaseApp{

  public:
    void setup();
    void update();
    void draw();
  
    void drawA(int x, int y);
}
```

// TODO: provide solution

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
