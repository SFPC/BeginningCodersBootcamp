# Bootcamp 03

### Homework review: show off your results on slack

### A: colors

Colors allows us to talk about the painters algorithm (can't really demonstrate until colors, we need overlapping shapes). The last line of code = "on top". Introduce `ofSetColor`, `ofBackground`, `ofFill` and `ofNoFill`, opacity, and how grays can be simplified to one number. demonstrate how the state of the colors wraps around to the beginning of the draw loop. best practices: if a function changes the color, at the end change it back to white, full opacity.

## new sketch 3.01: "random"

for context, show some algorists' work: Molnar, Nees, Mohr, Nake, there was a moment around the use of computational randomness in art.

draw a circle inside draw() with random position or size (see why we have to store the variable?). solve the problem by introducing ofApp.h to store class-wide variables. use setup() to initialize them.

- `cout` to peek inside of variables. *"what is inside our random variable?"*
- discuss start-end range of ofRandom
- show them the seed

## new sketch 3.02: "loops"

quick overview of boolean variables, and how they can be created as a result of a boolean expression. `5 < 10`

introduce loops by way of the while loop. our comparison needs to begin as **true** but *eventually* becomes **false**.

what should we do inside this loop that we made? because drawing the same thing over and over has no effect.

### A: iterate and use random

*challenge: pick a shape (rect, circle, ellipse), pick a property of that shape to become randomized (position, radius, ...), draw many shapes.*

Problem: how do you prevent the shapes flashing in random places? `ofSetFrameRate(1);`. This doesn't solve the problem, we will actually be solving this later in the "arrays" section.

### B: iterate without random

without random, how do we prevent drawing the same shape 100x times on top of itself? *we need something that changes within the loop. use the `counter` iterator.*

*challenge: maybe a sketch of concentric circles growing in size.*

show how `while(random(10) < 1)` does not do what you probably think it does

## new sketch 3.03: "for-loop"

now that we know how loops work, we are going to use **for loops** from now on.

*challenge: draw a color gradient by drawing a bunch of vertical lines next to one another* the `i` will be used to change the x-position of the lines, as well as the color.

### ofMap()

*problem: both position and color are tied to the same variable, how can we make this gradient larger in size than 255, without breaking the colors?*

right now the `i` is too-directly mapped to the location. we can use math (`* 2`) to increase the size. why is our for-loop between 0 and 255 to begin with?


## video content: "particle"

[watch this video here](https://www.youtube.com/watch?v=efpIiXcy5tM) and re-code our bounce project into a custom particle class.

expand it by creating an **array of particles**. (this gets really fun when you add gravity!)

## Homework


expand your bouncing ball into a particle class. can you give each particle a unique direction, speed, color?

### Arrays

arrays are a way of storing a list of variables. it solves the problem for how can we store one variable for every iteration of the loop.

### watch this video: [introduction to arrays](https://www.youtube.com/watch?v=6PxIhuwvQ_4)

your homework is to play with for-loops, arrays, and random together.

- make a starry-night sky. can you make the stars twinkle?
- can you make a rainy sky? (this is a little more advanced than stars)

alternatively, try playing with loops and arrays without using random to make more regular, geometric kinds of drawings.