# Bootcamp 03

## new sketch 3.01: "sine"

remind yourself what the sine function looks like. speak in terms of the **input and output**. 

- input: *any* number on the real number line.
- output: a number between -1 and 1.

### breathing screen

a sketch where sine of elapsed time is mapped to colors.

```
float color = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 255);
ofBackground(color);
```

### harmonic motion

a sketch where sine of elapsed time is mapped to position. and play with the frequency of the sine function.

```
ofBackground(0);
for (int i = 0; i < 20; i++){
    float y = ofMap(sin(ofGetElapsedTimef()*i*0.2), -1, 1, ofGetHeight()/2-100, ofGetHeight()/2+100);
    ofDrawCircle(i * 50, y, 20);
}
```

## new sketch 3.02: "bounce"

create the bouncing screen saver. key take aways:

- store the ball's position in variables `x` and `y`.
- introduce the update() method; `x` and `y` will be changed in the update.

```
x = x + 1;
// here, check if it went off screen
```

### if statements

we need if statements to catch the ball from moving off screen. an if statement is like our while loop where the () contains a boolean expression, and only runs if true.

```
x = x + 1;

if (x > ofGetWidth()) {
	// what here?
}
```

- the "what here" spot needs to modify the line above it `x = x + 1` from a `+` into a `-`. how do we modify a line outside of the if statement? *make the `+ 1` into a variable*. 

part of the leap is to understand how `x = x - 1` is equivalent to `x = x + (-1)`, and that the `1` or `-1` can be stored in a variable.

copy and paste all the content relating to the **x** to the **y**, make sure to change "widths" to "heights".

this introduces our first big problem on *code design*. many different variables conceptually relate to the same thing. classes help us package related-code bits together.

## video content: "particle"

[watch this video here](https://www.youtube.com/watch?v=efpIiXcy5tM) and re-code our bounce project into a custom particle class.

expand it by creating an **array of particles**. (this gets really fun when you add gravity!)

## Homework

have fun with `sin(ofGetElapsedTimef())`, using map for position, colors, try them in a loop, with the `i` modifying each instance.

expand your bouncing ball into a particle class. can you give each particle a unique direction, speed, color?
