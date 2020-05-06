TODO: motivation behind each exercise (pre and post conditions / pre reqs and outcomes)
TODO: asteroid -> astroid 
TODO: "turn to student next to you" moments

## Day 1

- Create and run openFrameworks projects
- Introduce basic C++ syntax
- Use openFrameworks graphics functions (`ofDrawLine`, `ofDrawCircle` etc.) in the `draw` loop
- Understand the painter's algorithm
- Declare and assign primitive variables (`int`, `float`)
    - mention strings briefly but not emphasized
    - ADD: better explanation of variable syntax
- Use variables to reduce redundancy
- Declare and define functions
- Generalize a function with parameters

- ADD: introduce cout here earlier
- ADD: strings?

## Day 2

- Use `cout` to log values
- Use `ofRandom` to produce random numbers in various ranges
- Draw shapes with different colors; understand how `ofSetColor` fits into painter's algorithm
- Put variables in `ofApp.h` that persist over the lifetime of the program (introduction to animation with state)
    - TODO: emphasize draw loop
- Use the openFrameworks `setup` function to initialize variables
- If statements
- Boolean logic (or, and, ==, <, > all that good stuff)
- While loops
- For loops
  - TODO: revisit talking about loops in general (powers of 10 magnitude between draw and for)
  - for loops are instant
  - example of for loop that runs too long and slows down draw loop
- % inside of for loops to test parity
- HSB color space (using mod to wrap around with % 255)

- ADD: Boolean types and logic
- ADD: More if statements and for loops
- ADD: introduce while loops here
- ADD: more for loop drawing problems



## Day 3

- Nested for loops (MOVE TO DAY 3?)
- Use the `sin` function for animation
- Write functions that return values
    - Celsius / Fahrenheit example
- ADD: another example?

- Introduce C++ objects as containers for groups of variables
- While loops (CHANGE: move to day 2)

- Arrays
    - average temperature
    - use cout (no drawing)

- drawing with mouseX / mouseY

- Vectors
  - wiggly drawing program

- average position


- change homework to draw letter in for loops
- target symbol homework or exercise?

- easy homework: twinkling stars
- homework: rain
    - part b: inner for loop that draws multiple circles in drop shape

## Day 4

- Use Polylines to draw shapes
- How to share openFrameworks apps
- Using the openFrameworks `update` function
- Basic intro to C++ classes (member variables, functions)
- Transformations
- Using pushMatrix / popMatrix to remember transformation state
- Nested transformations
- New Homework: solar system

## Day 5

- 3D graphics
- Basic Lighting in openFrameworks
- Perlin noise
    - draw mountain range first
- Keyboard input
    - triggers / boolean flags
      if (!hasBeenTriggered) {
        hasBeenTriggered = true;
        // only runs once
      }
- Media art stuff
- Using openFrameworks addons
- screen recording w quicktime
- ofImage / ofVideoGrabber
- face tracking addoon after break?

- workshop time: 




WORKSHOP TIPS
-------------

- ask students how they're doing; dont wait for question
- more TAs = good

