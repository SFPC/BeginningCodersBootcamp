# Bootcamp 04

### branching, classes

Here is an example of an animation based on asking the computer to *remember* the last position. create the bouncing screen saver (bouncing DVD logo). key take aways:

- store the ball's position in variables `x` and `y`.
- introduce the update() method; `x` and `y` will be changed in the update.

```c++
x = x + 1;
// here, check if it went off screen
```

we need if statements to catch the ball from moving off screen. an if statement is like our while loop where the () contains a boolean expression, and only runs if true.

```c++
x = x + 1;

if (x > ofGetWidth()) {
	// what here?
}
```

- the "what here" spot needs to modify the line above it `x = x + 1` from a `+` into a `-`. how do we modify a line outside of the if statement? *make the `+ 1` into a variable*. 

part of the leap is to understand how `x = x - 1` is equivalent to `x = x + (-1)`, and that the `1` or `-1` can be stored in a variable.

copy and paste all the content relating to the **x** to the **y**, make sure to change "widths" to "heights".

### design a drawing program:

if you allow cheating (turn off auto background clear):

1. draw a circle every frame at mouseX and mouseY
2. store the last mouseX/Y positions in the .h, connect it to the present location.

now, what if we need `ofBackground` to be on? *we need to store **all** of the points*. shift to using a `vector<float> x` and `y`. introduce `ofPoint` to simplify further. cap the size of the array at 100.

### polyline

recode our draw app with an ofPolyline. show off some tricks that polyline can do, like smoothing.

## ofImage and transforms

loading and drawing an image from a file. rotate it to see the need to introduce `ofTranslate()` before the `ofRotate()`.

[video content](https://www.youtube.com/watch?v=2IPq8QJldyQ&t=44s) and a [follow up video](https://www.youtube.com/watch?v=m0XPthKnyv4)

## Homework

### convert the bouncing ball into a class

Many different variables in this bounce sketch conceptually relate to the same thing; the "particle". classes help us package related-code bits together.

re-code our bounce project into a custom particle class. [the solution is in this video](https://www.youtube.com/watch?v=efpIiXcy5tM).

expand it by creating an **array of particles**. (this gets really fun when you add gravity!) make an array of particles generate on a mouse click to look like welding sparks or fireworks.

## typography

bonus video content, [getting a polyline from a font](https://www.youtube.com/watch?v=A-_0AhArveM).

- introduction to data folder: add a font file.
- learn affine transform to center the letter (push / popMatrix)
- convert a letter into an ofPath with `getCharacterAsPoints` and grab the ofPolyline inside.
- `polyline.getSmoothed()`
- nested loop: iterate over points inside the polyline inside the path.
- `getStringAsPoints` would require 3-nested loops
