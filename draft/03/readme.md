# Bootcamp 03

15 minutes, split into groups and share homework

### loops, arrays

introduction to boolean expressions, and how they result in a boolean variable. `5 < 10` turns into `true`

introduce loops first with the while loop. to prevent an infinite loop we need a boolean expression which begins as **true** but eventually becomes **false**. (we need variables. need to compare against memory and change the memory).

introduce for-loops, connect the dots: 3 parameters in the for loop relate to the 3 lines of code using the while loop.

```c++
start
while (end) {
  increment
}

for (start; end; increment)
```

> tabs are whitespace that is ignored by the compiler but *extremely* helpful for human eyes. be strict about good tab spacing!

### how to not draw the same shape 100 times on top of itself

*challenge: pick a shape (rect, circle, ellipse) and put it in the for-loop. but how can you make it different every time*. ofRandom? ofGetElapsedTimef()

the for-loop comes with a built-in counter. *you need something that changes between each iteration of the loop? use the `i` iterator.*

*challenge: draw a color gradient by drawing a bunch of vertical lines next to one another* the `i` will be used to change the x-position of the lines, as well as the color.

*problem: both position and color are tied to the same variable, how can we make this gradient larger in size than 255, without breaking the colors?* we need ofMap.

right now the `i` is too-directly mapped to the location. we can use math (`* 2`) to increase the size. why is our for-loop between 0 and 255 to begin with?

> for-loops and the draw() function are different kinds of loops. the for-loop completely finishes all in the span of nano or micro seconds. the draw() loop waits **an eternity** in computer time, 1/60th of a second (in most cases).

### harmonic motion

a sketch where sine of elapsed time is mapped to position. and play with the frequency of the sine function.

```c++
ofBackground(0);
for (int i = 0; i < 20; i++){
  float y = ofMap(sin(ofGetElapsedTimef()*i*0.2), -1, 1, ofGetHeight()/2-100, ofGetHeight()/2+100);
  ofDrawCircle(i * 50, y, 20);
}
```

### Arrays

*challenge: inside a for-loop, place 100 random tiny dots, creating the night-sky.* it's impossible because every frame, a randomly placed dot changes positions!

can you imagine writing out 100 variables? `int x1; int x2; int x3`...

arrays are a way of storing a list of variables. it solves the problem how can we store one variable for every iteration of the loop.

### watch this video: [introduction to arrays](https://www.youtube.com/watch?v=6PxIhuwvQ_4)

> you should know `for(int i = 0; i < random(10); i++)` does not do what you probably think it does.

## Homework

the iterator in the for loop counts 0 to whatever is the upper limit. play with a for-loop that represents 2 things at once (or 3, or more..), the iterator needs to be mapped. Consider the ranges of the mapped iterators (0...PI, 0...ofGetWidth(), -1...1). Play with different ranges and different increments.

have fun with harmonic animation, sine of elapsed time in a loop, with the `i` modifying each instance.
