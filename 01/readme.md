# Bootcamp 01

allow for 30 minutes of technical setup for open frameworks.

open with a 20 minute talk about the goals of coding. what is code? [slides](https://docs.google.com/presentation/d/1LyL2s73L5CTtCaYfjDCRjG1mK-9FNm1_mgxFSXcamgQ/edit?usp=sharing)

---

## new sketch 1.01: "name"

### A: explore

spend 10 minutes learning about and exploring open frameworks drawing functions like line, rect, circle, ellipse.

lessons:
- draw one ofDrawLine together with some understanding of the (x,y,x,y) pair of endpoints, explore the coordinate system. The Y axis is upside down.
- learn basic C++ syntax, like semicolons, case-sensitivity
- different parameters mean different things sometimes, x / width / radius. there are conventions, x comes before y, width before height
- we can put math inside the parameters: `ofDrawLine(10, 10, 1024 - 10, 768 - 10);` arrive here by drawing a line from one corner to another, but with a little 10px margin.

### B: draw your name

comment out all your draw code.

*challenge: draw your name. 20 minutes*

### C: draw your name twice

make your name appear again, in another location, translated to the side, below, etc..., wherever you have room (or, allow for overlap if most of the space is already taken)

*challenge: draw your name twice, a copy right next to this one. 5-10 minutes*

### D: variables

let's come back together and learn about variables. we have some slides. 20 minutes talk about the life cycle of variables: (1) declaration, (2) assignment, (3) use it, (3) death

back to your name sketch: prepare your code in such a way that the translation was written by adding `+ 300` by typing it out like this (not doing the math yourself).

*challenge: make copies of your name using variables.*

[the solution in this video](https://www.youtube.com/watch?v=OXtYboVDcs8)

## Homework

prepare for homework by creating a new project and copy-pasting the contents from the **name** sketch over.

### new sketch 1.02: "letter-function"

your homework is two parts:

1. [watch this video](https://www.youtube.com/watch?v=bNc5wHwXPVM) to learn how to convert your letter-drawing code into a function.
2. make a new drawing using your letter-drawing function. take advantage of how you can easily repeat your letter with different parameters. maybe incorporate `mouseX` or `mouseY`.
