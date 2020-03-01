# Beginning Coders Bootcamp
A one week program to introduce the foundations of coding to beginners by creating visual art and animations in openFrameworks.

## Spring 2020 session, Monday March 23rd – Friday March 27th  
Instructor: [Robby Kraft](http://robbykraft.com/)  
Teaching Assistant: TBD
Location: School for Poetic Computation | 155 Bank St, New York, NY 10014  
Class Time: 10am - 1pm  
Office Hours: Thursdays 2pm to 4pm (or by appointment)  

School for Poetic Computation’s Bootcamp introduces the foundations of coding to beginners by creating visual art and animations in openFrameworks. This 5 day session will be open both to incoming SFPC students and anyone who wants to learn to code.

During this week students will be coding in C++, learning concepts like variables, memory, and scope; branching, looping, boolean evaluations, and logic; functions, recursion, and events; object-oriented design; and working with media like video, sound, and responding to keyboard and mouse inputs. Students will become competent in Xcode/Visual Studio, GitHub, and openFrameworks.

## Before Class
Before the first day of class, please try installing both an IDE and openFrameworks. An IDE stands for “integrated development environment” and is what allows you to run programming code on your computer. openFrameworks is a coding library that you’ll be using extensively at SFPC. Here are specific instructions for Mac and Windows:

### Mac OSX
- Install [Xcode 10](https://apps.apple.com/us/app/xcode/id497799835?mt=12) from the app store. If you have an older version of Xcode already installed, we recommend upgrading to the latest version.
- When installing Xcode, you may be prompted to update your operating system. We recommend you do this.
- Download and install [openFrameworks for Mac.](https://openframeworks.cc/download/)
- There are more details instructions [here](https://openframeworks.cc/setup/xcode/) to test your setup, you only need the first two sections: “First Steps” and “Testing your setup”.
- We recommend you use the latest version of OF and Xcode. If this is not possible, just drop us an email and we will help you sort it out.

### Windows
- Install [Visual Studio Community 2017](https://www.techspot.com/downloads/6278-visual-studio.html). Note that this is an older version of Visual Studio; please install this older version even if you have a newer version installed.
- Install [openFrameworks for Visual Studio.](https://openframeworks.cc/download/)
- More detailed setup guide is [here](https://openframeworks.cc/setup/vs/). We will also be able to help you in class.

### Linux
- QT Creator is the officially supported IDE. [Here are instructions](https://openframeworks.cc/setup/qtcreator/) for working with QT creator. If you’re using a different IDE [start here.](https://openframeworks.cc/setup/linux-install/)
- One request -- you'll need to install a compiler -- if you are on OSX, you should install xcode.  You can install this through the OSX app store (search for xcode). If you have an older version of OSX, it may ask you update the OS.  

Also, download openFrameworks for your given platform: http://openframeworks.cc/download/

## Schedule

- [Day 1: Graphics, variables and functions](1_graphics_variables_functions)
- [Day 2: Parameters, returns and conditionals](2_parameters_returns_conditionals)
- [Day 3: Objects, arrays and vectors](3_objects_arrays_vectors)
- [Day 4: Polylines and classes](4_polylines_classes)
- [Day 5: Review](5_review)

TODO: motivation behind each exercise (pre and post conditions / pre reqs and outcomes)
TODO: asteroid -> astroid
TODO: "turn to student next to you" moments

## Day 1

- Create and run openFrameworks projects
- Introduce basic C++ syntax
- Use openFrameworks graphics functions (`ofDrawLine`, `ofDrawCircle` etc.) in the `draw` loop
- Understand the painter's algorithm
- Declare and assign primitive variables (`int`, `float`)
- Use variables to reduce redundancy
- Declare and define functions
- Generalize a function with parameters

- ADD: introduce cout here earlier
- ADD: strings?

## Day 2

- Use `cout` to log values
- Use `ofRandom` to produce random numbers in various ranges
- Draw shapes with different colors; understand how `ofSetColor` fits into painter's algorithm
- Put variables in `ofApp.h` that persist over the lifetime of the program
- Use the openFrameworks `setup` function to initialize variables
- If statements
- ADD: While loops here
- For loops
- Nested for loops (MOVE TO DAY 3?)
- Use the `sin` function for animation
- Write functions that return values
- Understand state updates of the form `x = transform(x)`

- ADD: Celsius / Fahrenheit example
- ADD: another example?
- ADD: Boolean types and logic
- ADD: More if statements and for loops
- ADD: introduce while loops here
- ADD: more for loop drawing problems



## Day 3

- Review variables
  - Life cycle of variable
  - Variable types
  - Variables in functions vs. variables in `.h` file
- Review functions
  - What is a function?
  - Parameters
  - Return values
  - CHANGE: move function example from day 3 to day 2?
- Introduce C++ objects as containers for groups of variables
- While loops (CHANGE: move to day 2)
- Arrays
- Vectors
- average temperature
- average position w polyline


## Day 4

- Use Polylines to draw shapes
- How to share openFrameworks apps
- Using the openFrameworks `update` function
- Basic intro to C++ classes (member variables, functions)
- Transformations
- Using pushMatrix / popMatrix to remember transformation state
- 3D graphics
- Basic Lighting in openFrameworks

## Day 5

- Nested transformations
- Perlin noise
- Keyboard input
- Using openFrameworks addons
