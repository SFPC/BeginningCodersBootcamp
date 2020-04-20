# Bootcamp 01

open with a 20 minute talk about the goals of coding. what is code? [slides](https://docs.google.com/presentation/d/1LyL2s73L5CTtCaYfjDCRjG1mK-9FNm1_mgxFSXcamgQ/edit?usp=sharing)

---

## new sketch 01: "name"

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

## new sketch 02: "letter"

### A: repeat one letter

setup this sketch by copying and pasting your code for your **first letter only**.

*challenge: draw this letter twice, a copy right next to this one. 5-10 minutes*

### B: variables

let's come back together and learn about variables. we have some slides. 20 minutes talk about the life cycle of variables:

1. declaration — a variable is created
2. assignment — a variable is filled with data
3. usage — ask the computer to retrieve the data
4. death — outside a variable's scope it no longer exists.

**arithmetic** prepare your code so you see many copies of the same number. a translation in the x looks like adding `+ 300` to all your x values. what other arithmetic operations can the computer do?

challenge: make copies of your letter using variables. 

[the solution in this video](https://www.youtube.com/watch?v=OXtYboVDcs8)

### C: colors

this allows us to talk about painters algorithm (can't really demonstrate until colors).

lessons:

- the last line of code is the thing on top.
- learn about how the state of the colors wraps around to the beginning of the draw loop.
- ofSetColor, ofBackground, ofFill and ofNoFill

## Homework

prepare for homework by creating a new project and copy-pasting the contents from the **02: letter** sketch over.

### new sketch 03: "letter-function"

your homework is two parts:

1. [watch this video](https://www.youtube.com/watch?v=bNc5wHwXPVM) to learn how to convert your letter-drawing code into a function.
2. make a new drawing using your letter-drawing function.
