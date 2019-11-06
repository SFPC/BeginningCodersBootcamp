# Day 3: Review, object, arrays and vectors

- **Lecture time:** 3 hours
- **Homework time:** 2 hours

## Learning outcomes

- Review variables
  - Life cycle of variable
  - Variable types
  - Variables in functions vs. variables in `.h` file
- Review functions
  - What is a function?
  - Parameters
  - Return values
- Introduce C++ objects as containers for groups of variables
- While loops
- Arrays
- Vectors

## Lecture (3 hours)

### Mouse interaction

Now we're going to create a "drawing program" with a little more sophisticated mouse interaction. First, let's create a circle that follows the mouse:

`ofApp.cpp`:

```cpp
void ofApp::setup() {
  ofBackground(0);
  ofSetBackgroundAuto(0);
}

void ofApp::draw() {
  ofDrawCircle(mouseX, mouseY, 4);
}
```

This leaves a trail of circles on the canvas, which is cool. It leaves a trail because of our call to `ofSetBackgroundAuto(0);`, which tells openFrameworks not to overwrite the window with a background color every frame. This allows us to accumulate drawing on the canvas. In other words, drawing commands from previous frames persist.

However, the circles are disconnected. We want to draw a line that connects each circle. We can do this by every frame drawing a line from the _current_ mouse (x, y) to the _previous_ mouse (x, y). In order to remember the mouse's last position, introduce new variables to the `.h` file:

```cpp
class ofApp : public ofBaseApp{
  
public:
  // functions not shown
  float lastPositionX;
  float lastPositionY;
};
```

Next update our `draw` function:

```cpp
void ofApp::draw() {
  ofDrawLine(lastPositionX, lastPositionY, mouseX, mouseY);
  
  lastPositionX = mouseX;
  lastPositionY = mouseY;
}
```

This draws a line from the previous mouse position to the current mouse position, and then updates the previous position for the next frame. Now our circles are connected.

What happens if we update the `lastPosition` variables _before_ the `ofDrawLine` call, like below?

```cpp
void ofApp::draw() {
  lastPositionX = mouseX;
  lastPositionY = mouseY;

  ofDrawLine(lastPositionX, lastPositionY, mouseX, mouseY);
}
```

Does this work? Why or why not?

### An aside: while loops

On day 2, we introduced for loops. For loops are very useful for creative coding, and you'll end up using them a lot. However, they have a very dense syntax. There is a simpler type of loop that you can use in some cases called a "while loop". A while loop has the following syntax:

```cpp
while (condition) {
  code
}
```

The code within the while loop will be run as long as the `condition` is true. The moment the `condition` is false, then the loop no longer runs. Here's an example of a loop that will run 10 times:

```cpp
// initialization
int i = 0;
while (i < 10) { // condition
  i = i + 1; // update
}
```

You can see that there's a similar pattern to a for loop, where we initialize a looping variable and then update it. It's a different way of expressing the same concept. A while loop always has three parts: initialization, condition and update.

We won't be using while loops anymore today, but good to mention in case students see it in the future.

### Objects

Up until now, we've been using primitive types for our variables (`float`, `int`). These variables store only _one_ thing. But there are more complex types of variables in C++ called **objects**. Objects are containers for multiple variables. An example of an object type is an `ofPoint`.

```cpp
ofPoint myPoint;
myPoint.x = 50;
myPoint.y = 100;
```

Here we declare a new `ofPoint` object, and then set the x and y values _inside_ of the object. We're introducing **dot notation** syntax. The dot (`.`) after `myPoint` allows us to access variables that are inside of the `myPoint` object. There's another syntax for storing values in the object:

```cpp
ofPoint myPoint(50, 100);
```

This does the same thing, but is more compact.

Now we can use those variables just like we would a normal variable:

```cpp
ofPoint myPoint;
myPoint.x = 50;
myPoint.y = 100;

cout << myPoint.x << endl;
cout << myPoint.y << endl;
```

The `ofPoint` type is useful for cleaning up the earlier [mouse interaction example](#mouse-interaction) we did previously.

`ofApp.cpp`:

```cpp
void ofApp::setup() {
  ofBackground(0);
  ofSetBackgroundAuto(0);
}

void ofApp::draw() {
  ofDrawCircle(mouseX, mouseY, 4);
}
```

This leaves at trail of circles on the canvas, which is cool! However, the circles are disconnected. We want to draw a line that connects each circle. We can do this by every frame drawing a line from the _current_ mouse (x, y) to the _previous_ mouse (x, y). In order to remember the mouse's last position, introduce new variables to the `.h` file:

`ofApp.h`:

```cpp
class ofApp : public ofBaseApp{
  
public:
  // functions not shown
  ofPoint lastPosition
};
```

`ofApp.cpp`:

```cpp
void ofApp::draw() {
  ofDrawLine(lastPosition.x, lastPosition.y, mouseX, mouseY);
  
  lastPosition.x = mouseX;
  lastPosition.y = mouseY;
}
```

This allows us to group conceptually related variables into a single container. `ofPoint` is a container provided to us by openFrameworks for storing coordinates (x and y), but there are lots of other types of objects that we can use to group related variables.

**Question for class:** Can you think of real world examples that you might want to model using objects?

### Arrays and vectors

There's another way to group related variables together in C++: using an array. An array is similar to an object in that it stores variables inside of it. However, it has a core difference: an array is used to store a _list_ of variables. Here's how we declare an array:

```cpp
float myArray[100];
```

This declares a list of 100 floats with the name `myArray`. If we want to set the items in the list, we use the following syntax:

```cpp
float myArray[100];
myArray[0] = 42;
myArray[1] = 100;
myArray[2] = 102;
myArray[3] = 55;
```

The `[]` syntax allows us to access items inside of the array. The number inside of the `[` and `]` is called the _index_. Note that indices start at 0. In other words, the first item in the array can be set using `myArray[0]`. We also use this syntax to access items in the array:

```cpp
// print the variable at the 0-th index in the array:
cout << myArray[0] << endl;
```

One limitation of arrays is that they have a fixed size. In the above example, we declared an array of size 100 — that means there are 100 spots in the array that we can access. There's another related structure in C++ that has a variable size: a **vector**.

**Question for class:** Can you think of real world examples that you might want to model using arrays?

### Vectors

To declare a vector:

```cpp
vector<float> myVector;
```

This declares a vector that can store a list of floats. We haven't seen the `<float>` syntax before — this is how we tell a vector what type of list it is.

Let's add some stuff to our vector:

```cpp
vector<float> myVector;
myVector.push_back(5);
myVector.push_back(7);
myVector.push_back(100);
myVector.push_back(32);
```

This `.push_back(...)` syntax allows us to append values to our vector. Every time we call `push_back`, we're adding a value to the end of the list. This is the primary difference between arrays and vectors: an array has a fixed size, and a vector has a flexible size. After we call `push_back` 4 times, our vector has 4 items inside of it. To access those items, we use the same syntax as arrays:

```cpp
cout << myVector[0] << endl;
cout << myVector[1] << endl;
cout << myVector[2] << endl;
cout << myVector[3] << endl;
```

We can ask a vector how many elements it's storing using the `.size()` function:

```cpp
cout << myVector.size() << endl;
```

This will print out 4, because we've added 4 things to our vector.

To summarize: a vector is a list of variables that we can add things to and access.

Vectors can be used in conjunction with for loops in various ways. A common use case is looping over the elements of a vector:

```cpp
for (int i = 0; i < myVector.size(); i = i + 1) {
  cout << myVector[i] << endl;
}
```

This will print out all of the elements of the vector.

We're not limited to storing `float`s inside of arrays and vectors. We can store _any_ type inside of these structures (`int`, `bool`, etc.). We can also store objects (like `ofPoint`).

```cpp
// create a list of points and add three points
vector<ofPoint> myVector;
myVector.push_back(ofPoint(5, 2));
myVector.push_back(ofPoint(50, 12));
myVector.push_back(ofPoint(999, 4));
```

This syntax is a little new. When we call `ofPoint(5, 2)`, we're constructing a new point. Then we write `myVector.push_back(ofPoint(5, 2));`, we're adding a new point to the end of the vector.

### Mouse interaction with vector

Vectors are very useful for creative coding, because they allow us to remember an arbitrarily large number of values. For example, we can use a vector to store all of the previous mouse positions. Add this to your `.h` file:

```cpp
class ofApp : public ofBaseApp{
  
public:
  // functions not shown
  vector<ofPoint> previousPoints;
};
```

Now on every frame in our `draw` function, we can append the mouse position to our vector:

```cpp
void ofApp::draw() {
  ofBackground(0);
  previousPoints.push_back(ofPoint(mouseX, mouseY));
}
```

There's a lot going on here. We're constructing a new `ofPoint` object with the `ofPoint(mouseX, mouseY)` syntax. Then we're appending that to our `previousPoints` list. As the program executes, the `previousPoints` vector will grow as new points are appended. What can we do with this vector? Let's draw circles for every point in the `previousPoints` vector:

```cpp
void ofApp::draw() {
  ofBackground(0);
  previousPoints.push_back(ofPoint(mouseX, mouseY));

  for (int i = 0; i < previousPoints; i = i + 1) {
    float x = previousPoints[i].x;
    float y = previousPoints[i].y;
    ofDrawCircle(x, y, 5);
  }
}
```

Rather than drawing circles at each point, how can we draw lines _between_ the lines? Here's an attempt at doing that:

```cpp
void ofApp::draw() {
  ofBackground(0);
  previousPoints.push_back(ofPoint(mouseX, mouseY));
  
  for (int i = 0; i < previousPoints.size(); i = i + 1) {
    float x1 = previousPoints[i - 1].x;
    float y1 = previousPoints[i - 1].y;
    float x2 = previousPoints[i].x;
    float y2 = previousPoints[i].y;
    ofDrawLine(x1, y1, x2, y2);
  }
}
```

This loops through our `previousPoints` vector, and for each point, draws a line from the previous point (at position `i - 1`) to the current point (at `i`). In this way, a line is drawn between successive pairs of points. There's a subtle bug in our loop, though. Even though this _mostly_ works, we might see weird artifacts sometimes — a line drawn in a way we don't expect. To understand why this happens, consider the case when `i = 0`. In this case, `i - 1 = -1`. If we try to access `previousPoints[-1].x;`, it's not clear what this means. What is a negative index? Even though the program runs, this code is nonsensical — we could get an `x` value back that we don't expect. **An important rule of thumb**: never use indices outside the bounds of the vector (i.e. negative values or values larger than the vector). This rule applies to arrays as well.

The solution to this subtle problem is to change the bounds of our loop so that we never access index `-1`. Let's start our loop at `i = 1` rather than `i = 0`:

```cpp
void ofApp::draw() {
  ofBackground(0);
  previousPoints.push_back(ofPoint(mouseX, mouseY));
  
  for (int i = 1; i < previousPoints.size(); i = i + 1) {
    float x1 = previousPoints[i - 1].x;
    float y1 = previousPoints[i - 1].y;
    float x2 = previousPoints[i].x;
    float y2 = previousPoints[i].y;
    ofDrawLine(x1, y1, x2, y2);
  }
}
```

One thing we can do with vectors is _remove_ elements of the list. We can use this to achieve interesting effects when drawing our mouse history. For example, after we add more than 100 positions to our vector, let's remove the first point of the vector every frame:

```cpp
void ofApp::draw() {
  ofBackground(0);
  previousPoints.push_back(ofPoint(mouseX, mouseY));
  
  for (int i = 1; i < previousPoints.size(); i = i + 1) {
    float x1 = previousPoints[i - 1].x;
    float y1 = previousPoints[i - 1].y;
    float x2 = previousPoints[i].x;
    float y2 = previousPoints[i].y;
    ofDrawLine(x1, y1, x2, y2);
  }
  
  if (previousPoints.size() > 100) {
    previousPoints.erase(previousPoints.begin());
  }
}
```

The line `previousPoints.erase(previousPoints.begin());` removes the first element of the list. If you run this program, you'll see a line that trails 100 points behind the mouse.

### Functions that return values

Some functions in C++ return a value. We've already seen some of these in action, although we haven't explicitly called them out:

- `ofGetWidth()`, `ofGetHeight()` — get the width and height of the window
- `ofRandom(max)`, `ofRandom(min, max)` — generate random numbers in a specified range

What does it mean for a function to return a value? It means that the function sends the value back to your code. For example:

```cpp
// x will be set to a random number returned by
// ofGetRandom, between 0 - 1.
float x = ofRandom(1);
```

You can visualize this by imagining that the function is replaced by a number that it returns. You can picture the line above turning into the code below when the `ofGetRandom()` function returns a value.

```cpp
// let's pretend ofRandom returned 0.45
float x = 0.45;
```

A return value is like the opposite of a parameter. While parameters are used to pass information *to* a function, returns are used to pass information *from* a function.

### Math functions in C++

We've covered the use of mathematical operators in C++ (like `+` or `/`). C++ also includes a library of common math function, like `sin` and `sqrt`. These functions all take at lease one parameter and return a result. For example, to compute the sin of 4:

```cpp
float result = sin(4);
```

| C++ | computes... | useful for... |
|----------|-------------|---------------|
| `sin(x)` | sine of x | oscillation, circular shapes |
| `cos(x)` | cosine of x | oscillation, circular shapes |
| `sqrt(x)` | square root of x | distance calculations |
| `abs(x)` | absolute value (non-negative) of x | keeping values positive |
| `pow(x, n)` | x raised to the n-th power | |
| `floor(x)` | x rounded down (ex: 0.9 becomes 0) | |
| `ceil(x)` | x rounded up (ex: 0.1 becomes 1) | |
| `atan2(y, x)` | arctangent of y / x | computing an angle from an (x, y) |

These functions can be used in combination with the operators we've already learned. For example:

```cpp
float result1 = sin(x * 5) + 20;
```

## Writing a function with input and output

Let's get back to [our previous drawing example](#Mouse-interaction-with-vector). Suppose we want the thickness of our line to relate to the speed at which the mouse moves. In other words, the farther apart points in our vector, the thicker we should draw the line. We can use the distance formula to calculate the distance between two points:

```cpp
float dx = point1.x - point2.x;
float dy = point1.y - point2.y;
float distance = sqrt(dx * dx + dy * dy);
```

Placing this into our draw function allows us to change the size of the line:

```cpp
void ofApp::draw(){
  ofBackground(0);
  previousPoints.push_back(ofPoint(mouseX, mouseY));
  
  for (int i = 1; i < previousPoints.size() - 1; i = i + 1) {
    float dx = previousPoints[i - 1].x - previousPoints[i].x;
    float dy = previousPoints[i - 1].y - previousPoints[i].y;
    float distance = sqrt(dx * dx + dy * dy);
    
    float x1 = previousPoints[i - 1].x;
    float y1 = previousPoints[i - 1].y;
    float x2 = previousPoints[i].x;
    float y2 = previousPoints[i].y;

    ofSetLineWidth(d / 5.0);
    ofDrawLine(x1, y1, x2, y2);
  }
  
  if (previousPoints.size() > 100) {
    previousPoints.erase(previousPoints.begin());
  }
}
```

// TODO: insert video

One thing you might notice is that when the line thickness changes rapidly, we get an ugly jagged line. We could make the line smoother by taking the distance of previous two line segments and averaging them. The diagram below shows what we mean by "previous two line segments":

![distances](distances.svg)

Let's modify our code to compute the two previous distances:







// TODO






## Homework 3: Rain

// TODO: change this homework to drawing a loop of letters (or maybe the loop of letters should go on day 2?)

Using a vector of ofPoints, create a program that simulates falling rain. The rain can be rendered however you want (ex. circles). The circles should start at the top of the screen at random positions and fall to the bottom. When the rain drops hit the bottom of the window, they should be removed from the vector.

![gif of falling rain](rain.gif)

TODO: twinkling stars
TODO: write your letter repeatedly

### Solution

`ofApp.h`:

```cpp
#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
  
public:
  void setup();
  void update();
  void draw();
  
  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y );
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void mouseEntered(int x, int y);
  void mouseExited(int x, int y);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
  
  vector<ofPoint> rain;
};
```

`ofApp.cpp`:

```cpp
#include "ofApp.h"

void ofApp::setup() {
  for (int i = 0; i < 100; i = i + 1) {
    rain.push_back(ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight())));
  }
}

void ofApp::draw() {
  ofBackground(0);

  for (int i = 0; i < rain.size(); i = i + 1) {
    rain[i].y = rain[i].y + 10;
    
    if (rain[i].y > ofGetHeight()) {
      rain[i].y = 0;
    }
    
    ofSetColor(0, 0, 255);
    ofDrawCircle(rain[i].x, rain[i].y, 10);
  }
}

// other functions not shown
```

## Vocabulary

## Common misconceptions & questions

TODO

- Difference between array and vector?
- Difference between object and array?
- Go off end of array?
- In the line drawing examples, why does the line always start in the upper left corner?
