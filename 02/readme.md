# Bootcamp 02

## new sketch 04: "random"

- draw a circle inside draw() with random position or size (see why we have to store the variable?)

- introduction to ofApp.h to store class-wide variables. use setup() to initialize them.
- introduce `cout` to peek inside of variables.

- Use ofRandom to produce random numbers in various ranges

## new sketch 05: "loops"

quick overview of boolean variables, and how they can be created as a result of a boolean expression. `5 < 10`

introduce loops by way of the while loop. our comparison needs to begin as **true** but *eventually* becomes **false**.

what should we do inside this loop that we made? because drawing the same thing over and over has no effect.

1. make a sketch that changes each loop by using random.
2. make a sketch that changes each loop by using our `int counter` variable. (maybe a sketch of concentric circles growing in size)

## new sketch 06: "for-loop-1"

now that we know how loops work, we are going to use **for loops** from now on. practice using the for loop's `i` inside the loop.

*challenge: draw a color gradient by drawing a bunch of vertical lines next to one another*

the `i` will be used to change the x-position of the lines, as well as the color.

*challenge: how can we make this gradient larger?*

right now the `i` is too-directly mapped to the location. we can use math (`* 2`) to increase the size. why is our for-loop between 0 and 255 to begin with?

## new sketch 07: "arrays"

arrays are a way of storing a list of variables. it solves the problem for how can we store one variable for every iteration of the loop.

## Homework

make a starry-night sky. can you make the stars twinkle?

play with loops without using random too, make more regular, geometric kinds of drawings.
