# Bootcamp 01

### functions, variables

begin with the goals of the class. [slides](https://docs.google.com/presentation/d/1LyL2s73L5CTtCaYfjDCRjG1mK-9FNm1_mgxFSXcamgQ/edit?usp=sharing)

---

### introduction

spend 10 minutes looking inside the openFrameworks folder: examples, apps/myApps, use projectGenerator to create a new project.

> new project generator sketch

introduction:

- ofDrawLine, ofDrawRectangle, ofDrawCircle
- explore the coordinate system. The Y axis is upside down
- learn basic C++ syntax, like semicolons, case-sensitivity
- different parameters mean different things sometimes, x / width / radius. there are conventions, x comes before y, width before height
- we can put math inside the parameters: `ofDrawLine(10, 10, 1024 - 10, 768 - 10);` arrive here by drawing a line from one corner to another, but with a little 10px margin.

### draw your name

comment out those few lines of practice code.

*challenge: draw your name. 20 minutes*

### draw your name twice

make your name appear again, in another location, translated to the side, below, etc..., wherever you have room (or, allow for overlap if most of the space is already taken)

*challenge: draw your name twice, a copy right next to this one. 5-10 minutes*

### colors

Colors allows us to talk about the painters algorithm (can't really demonstrate until colors, we need overlapping shapes). The last line of code = "on top". Introduce `ofSetColor`, `ofBackground`, `ofFill` and `ofNoFill`, opacity, and how grays can be simplified to one number. demonstrate how the state of the colors wraps around to the beginning of the draw loop. best practices: if a function changes the color, at the end change it back to white, full opacity.

### variables

let's come back together and learn about variables. we have some slides. 20 minutes talk about the life cycle of variables: (1) declaration, (2) assignment, (3) use it, (3) death

back to your name sketch: prepare your code in such a way that the translation was written by adding `+ 300` by typing it out like this (not doing the math yourself). the catch is the `+ 300` will be replaced by the variable.

*challenge: make copies of your name using variables.*

[the solution in this video](https://www.youtube.com/watch?v=OXtYboVDcs8)

## Homework

prepare for homework by creating a new project and copy-pasting the contents from the **name** sketch over.

your homework is two parts:

1. [watch this video](https://www.youtube.com/watch?v=bNc5wHwXPVM) to learn how to convert your letter-drawing code into a function.
2. make a new drawing using your letter-drawing function. take advantage of how you can easily repeat your letter with different parameters. maybe incorporate `mouseX` or `mouseY`.
