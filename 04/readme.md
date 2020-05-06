# Bootcamp 04

## Particle class

let's wrap up, add gravity, make an array of particles generate on a mouse click, the effect can be anything from welding sparks to fireworks.

## new sketch 4.01: "draw"

introduce popular open frameworks primitives like ofPoint, ofPolyline...

### design a drawing program:

if you allow cheating (turn off auto background clear):

1. draw a circle every frame at mouseX and mouseY
2. store the last mouseX/Y positions in the .h, connect it to the present location.

now, what if we need `ofBackground` to be on? *we need to store **all** of the points*. shift to using a `vector<float> x` and `y`. introduce `ofPoint` to simplify further. cap the size of the array at 100.

### polyline

recode our draw app with an ofPolyline. show off some tricks that polyline can do, like smoothing.

## new sketch 4.03: "type"

- introduction to data folder: add a font file.
- learn affine transform to center the letter (push / popMatrix)
- convert a letter into an ofPath with `getCharacterAsPoints` and grab the ofPolyline inside.
- `polyline.getSmoothed()`
- nested loop: iterate over points inside the polyline inside the path.
- `getStringAsPoints` would require 3-nested loops
