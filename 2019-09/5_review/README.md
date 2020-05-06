# Day 5:

- **Lecture time:** 3 hours
- **Homework time:** 2 hours

## Learning outcomes

- Nested transformations
- Perlin noise
- Keyboard input
- Using openFrameworks addons

## Lecture (3 hours)

### Exercise 1: Variable review

Consider the following questions. Some of these we haven't covered yet explicitly, but it's a good structure for a discussion with students.

1.  What are the 4 different steps of a variable's life cycle?

2.  What does the following line do?

    ```
    float myVariable;
    ```

    What does the `float` mean here?

3.  What about these lines?

    ```
    float myVariable;
    myVariable = 3.14;
    ```

4.  And this?

    ```
    float myVariable = 3.14;
    ```

5.  What's wrong with these lines?

    ```
    float myVariable = 3.14;
    float myVariable = 5.64;
    ```

6.  What's the difference between `int` and `float`?

7.  What do these lines do?
    
    ```cpp
    float x = 3.14;
    int y = x;
    ```

8.  What's the difference between putting a variable in a function versus putting it in `ofApp.h`?

9.  What happens if you declare a variable in `ofApp.h` *and* within a function?
    
    `ofApp.h`:

    ```cpp
    class ofApp : public ofBaseApp{
  
      public:
        // functions not shown
        float x
    }
    ```

    `ofApp.cpp`:
    
    ```cpp
    void ofApp::setup() {
      float x = 3.14;
    }
    ```

10. What is the result of `wholepart`?

    ```cpp
    float variable = 3.14;
    int wholepart = sqrt(abs(variable) * 3) + variable;
    ```

#### Exercise 1 solutions

1.  
    1.  Declaration
    2.  Assignment
    3.  Using the variable
    4.  Death of variable

2.  This declares a variable called `myVariable`. The type of the variable is a `float`, which can store decimal numbers.

3.  Here we're declaring a variable on one line, and assigning it on the next line.

4.  This is an example of declaring *and* assigning on the same line. It's a more compact version of #3.

5.  You can't have two variables with the same name. This will be a compiler error.

6.  `int` stores an integer, which is a "whole number". `float` stores a decimal number.

7.  When we assign a `float` number to an `int`, it truncates the `float` — in other words, it rounds down.

8.  Putting a variable in a function means the variable lives for the lifetime of the function. Putting a variable in the `.h` file means it persists for the lifetime of the program.

9.  You usually want to avoid this. The version of the variable in the function will be used, and the version of the variable in the `.h` file will not be used. This is a confusing subtlety that is best avoided. Don't name your variables the same thing.

10. Let's solve this by thinking like a computer, step-by-step. First, we plug in `variable` to the right side of the `=`:

    ```cpp
    int wholepart = sqrt(abs(3.14) * 3) + 3.14;
    ```

    Then we apply the `abs()` (abs gives us mathematical absolute value):

    ```cpp
    int wholepart = sqrt(3.14 * 3) + 3.14;
    ```

    Now multiply:

    ```cpp
    int wholepart = sqrt(9.42) + 3.14;
    ```

    Apply `sqrt`:

    ```cpp
    int wholepart = 3.0692018506 + 3.14;
    ```

    Add the two numbers:

    ```cpp
    int wholepart = 6.2092018506;
    ```

    We have a decimal number on the right hand side, but we're storing it in an integer. C++ will truncate (chop off the decimal part) of the number before storing it. So our final value will be:

    ```cpp
    int wholepart = 6;
    ```

### Exercise 2: Function review

1.  Describe a function. What is a function's purpose?

2.  The simplest type of function is one that doesn't have any parameters and doesn't have any return value. How do you add such a function to your program?

3.  You can also write a function that returns output. Write a function called `thinkOfANumber()` that returns a random `int` between 1 - 10.

4.  Now modify the `thinkOfANumber` to add a parameter called `high` that determines an inclusive upper bound for the random numbers.

#### Exercise 2: Solutions

1.  A bit of code that you can write and stash away for later, to be called whenever you want. It also can also optionally accept input (_parameters_) and produce output (_return values_).

2.  `ofApp.h`:

    ```cpp
    class ofApp : public ofBaseApp{
      public:
        // other functions not shown
        void myFunction();
    }
    ```

    `ofApp.cpp`:
    
    ```cpp
    void ofApp::myFunction() {
      // function code does here
    }
    ```

3.  `ofApp.h`:

    ```cpp
    class ofApp : public ofBaseApp{
      public:
        // other functions not shown
        int thinkOfANumber();
    }
    ```

    `ofApp.cpp`:
    
    ```cpp
    void ofApp::thinkOfANumber() {
      return floor(ofRandom(1, 11));
    }

    void ofApp::setup() {
      // now we can use "thinkOfANumber" anywhere in our program
      cout << thinkOfANumber() << endl;
      cout << thinkOfANumber() << endl;
      cout << thinkOfANumber() << endl;
    }
    ```

4.  `ofApp.h`:

    ```cpp
    class ofApp : public ofBaseApp{
      public:
        // other functions not shown
        int thinkOfANumber();
    }
    ```

    `ofApp.cpp`:
    
    ```cpp
    void ofApp::thinkOfANumber(int high) {
      return floor(ofRandom(1, high + 1));
    }

    // alternative implementation; does the exact same thing
    void ofApp::thinkOfANumber() {
      return ceil(ofRandom(0, high));
    }

    void ofApp::setup() {
      // now we can use "thinkOfANumber" anywhere in our program
      cout << thinkOfANumber(20) << endl;
      cout << thinkOfANumber(100) << endl;
      cout << thinkOfANumber(1000) << endl;
    }
    ```

### Exercise 1: An orbiting moon

A good example of something you could do with rotations are orbiting objects. Let's build a scene with a central spinning planet and an orbiting moon.

#### Exercise 1 solution

There are multiple valid solution, and it's worth talking about the different approaches with students. Here's an approach where the rotations are done completely separately:

```cpp
void ofApp::draw() {
  ofBackground(0);

  ofPushMatrix();
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  ofRotateDeg(10 * ofGetElapsedTimef());
  ofDrawRectangle(-100, -100, 200, 200);
  ofPopMatrix();
  
  ofPushMatrix();
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  ofRotateDeg(-20 * ofGetElapsedTimef());
  ofTranslate(mouseX, 0);
  ofDrawRectangle(-20, -20, 40, 40);
  ofPopMatrix();
}
```

Here's a version where we have _nested rotations_:

```cpp
void ofApp::draw() {
  ofBackground(0);

  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  ofRotateDeg(10 * ofGetElapsedTimef());
  ofDrawRectangle(-100, -100, 200, 200);
  
  ofRotateDeg(-5 * ofGetElapsedTimef());
  ofTranslate(mouseX, 0);
  ofDrawRectangle(-20, -20, 40, 40);
}
```

### Noise

We've already used `ofRandom` to add randomness to our sketches. `ofRandom` has the property the random numbers it generates aren't related to each other. In other words, they can jump around a lot. Sometimes that's what we want, but sometimes we want our randomness to be smooth.

openFrameworks has a function for generating smooth, continuous **noise**. Noise is another word for randomness. However, the `ofNoise` function behaves differently than `ofRandom`. We pass in _coordinates_ to `ofNoise`. If we pass the same coordinates, we get the same value back. However, as we vary the coordinates, we get smoothly changing random movement.

```cpp
// grab a random value at position (5, 10)
float myValue = ofNoise(5, 10);
```

TODO: "smoother" intro here

### Keyboard input

Let's talk about how to use keyboard input to control an object on screen. There's an automatically generated function that openFrameworks gives us called `keyPressed`, often called an **event handler**:

```cpp
void ofApp::keyPressed(int key){

}
```

Let's use this function to move a rectangle up and down the window. First, add a `float y` to the `.h` file:

```cpp
class ofApp : public ofBaseApp{
    public:
        // functions not shown

        float y;
};
```

Now let's draw a rectangle at that `y` value in our `draw` function:

```cpp
void ofApp::draw() {
  ofDrawRectangle(ofGetWidth() / 2, y, 20, 20);
}
```

We can we modify our `keyPressed` event handler to change our `y` value when the user presses the up and down keys:

```cpp
void ofApp::keyPressed(int key){
  if (OF)
}
```

### Installing an openFrameworks addon

TODO

## Homework: ??


### Solution

## Vocabulary

## Common misconceptions & questions

- My if statements aren't working!

  using = instead of ==