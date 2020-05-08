# Bootcamp 02

split into groups and share homework

### animation, sine, map

two ways to approach animation:

- animate a thing based on its previous position. we need the computer to remember; we need an attribute variable in the .h file.
- there is a whole class of animations where the position (or whatever) is a **calculation** based on the current time. no variables needed!

start with #2.

### sine of elapsed time

introduce `cout <<` to peek inside `ofGetElapsedTimef()`. animate a circle moving across the screen.

```c++
// start with this
float y = ofGetElapsedTimef();
// evolve to this
float y = ofMap(sin(ofGetElapsedTimef(), -1, 1, 0, ofGetHeight()), 

ofDrawCircle(ofGetWidth() / 2, y, 10);
```

talk about sine not in terms of trigonometry but simply as a [function that has an input and output](sine.gif) (*any* number ➜ between -1 and 1). work your way up to using ofMap.

now map the the sine of elapsed time to colors, very simple, the background color.

```c++
float color = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 255);
ofBackground(color);
```

learn about phase. make these two sine of elapsed times oscillate at different rates.

### animation with memory

store a circle's position in the .h file; two floats x and y. have it chase the mouse. ease towards the mouse. talk about multiplication, easing.

```c++
float ease = 0.9;
x = (x * ease) + (mouseX * (1-ease));
```

### random

for context, show some algorists' work: Molnar, Nees, Mohr, Nake, computer pseudo-randomness kind of had a moment in these decades.

```c++
float x = ofRandom(ofGetWidth());
float y = ofRandom(ofGetHeight());
circle(x, y, 10);
```

think of random in 2 ways: directly visualizing random (the sketch above), or use random to affect a variable which in turn is visualized, so there is a layer of abstraction between you and random.

```c++
// random walker
x += ofRandom(-5, 5);
y += ofRandom(-5, 5);
circle(x, y, 2);
```

## Homework

have fun with `sin(ofGetElapsedTimef())`, using map for position, colors.

what are some other ways you can layer abstraction between you and random?
