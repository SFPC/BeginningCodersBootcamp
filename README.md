# Creative Coding Bootcamp
A three week program to introduce the foundations of coding to beginners by creating visual art and animations in openFrameworks. This 5 course session will be open to anyone who wants to learn to code.

## Spring 2020 session, Tuesday April 21st – Tuesday May 5th  
Instructor: [Robby Kraft](http://robbykraft.com/)  
Teaching Assistant: [Ilona Brand](https://theilonabrand.com)  
Location: Zoom  
Class Time: Tuesdays and Thursdays 1pm - 3pm ET  
Office Hours: Approximately 3 hours of Teacher & TA support during the week based on student availability.  

During this course students will be coding in C++, learning concepts like variables, memory, and scope; branching, looping, boolean evaluations, and logic; functions, recursion, and events; object-oriented design; and working with media like video, sound, and responding to keyboard and mouse inputs. Students will become competent in Xcode/Visual Studio, GitHub, and openFrameworks.

## Before Class
Before the first day of class, please try installing both an IDE and openFrameworks. An IDE stands for “integrated development environment” and is what allows you to run programming code on your computer. openFrameworks is a coding library that you’ll be using extensively at SFPC. Here are specific instructions for Mac and Windows:

### Mac OSX
- Install the latest version of Xcode [Xcode 11](https://apps.apple.com/us/app/xcode/id497799835?mt=12) (or xcode 10) from the app store. If you have an older version of Xcode already installed, we recommend upgrading to the latest version.  You can also install multiple versions of xcode side by side if needed (see details [here](https://medium.com/@hacknicity/working-with-multiple-versions-of-xcode-e331c01aa6bc)).
- If you need to install earlier version of xcode (xcode 10 should work) because of your operating system, you can find them [here](https://developer.apple.com/download/more/?q=xcode).  You will need a developer login for apple but don't need a paid developer account.  
- Download and install [openFrameworks for Mac.](https://openframeworks.cc/download/)
- There are more details instructions [here](https://openframeworks.cc/setup/xcode/) to test your setup, you only need the first two sections: “First Steps” and “Testing your setup”.
- We recommend you use the latest version of OF and Xcode. If this is not possible, just drop us an email and we will help you sort it out.
- Note that Xcode is fairly large, you should clear space on your hard drive if necessary.  If you run into any space issues, we recommend the free app [OmniDiskSweeper](https://www.omnigroup.com/more) to help see where you can gain/free space.
- Once you have xcode installed, a quick intro to openFrameworks on a Mac [VIDEO](https://www.youtube.com/watch?v=lzBJsK9_l3o)

### Windows
- Install [Visual Studio Community 2017](https://www.techspot.com/downloads/6278-visual-studio.html).  Choose the free community edition.   Once the installer loads, choose "Desktop development with C++" as what to install.  you don't need to choose any other option.  Note that this is an older version of Visual Studio.  You can work with 2019 if you have installed it for c++ development. 
- Microsoft may ask you to sign in with your mirosoft password.  You can make one if you need to. 
- If you have visual studio 2019 installed, you can update your projects when you load them to work with the newer tool as long as you have c++ installed and an appropriate SDK.  When you load a project, it will ask you to "retarget" it, which is updating it for 2019. 
- Install [openFrameworks for Visual Studio.](https://openframeworks.cc/download/)
- More detailed setup guide is [here](https://openframeworks.cc/setup/vs/). We will also be able to help you in class.
- Once you have visual studio intall, a quick intro to openFrameworks on a PC is here [VIDEO](https://www.dropbox.com/s/2y2pvfmznknnayi/VS.mp4?dl=0)

### Linux
- QT Creator is the officially supported IDE. [Here are instructions](https://openframeworks.cc/setup/qtcreator/) for working with QT creator. If you’re using a different IDE [start here.](https://openframeworks.cc/setup/linux-install/)

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
