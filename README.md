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

- [Day 1: Graphics, variables, functions](01/)
- [Day 2: Loops and arrays](02/)
- [Day 3: Animations, if-statements, classes](03/)
- [Day 4: OF primitives: points, polylines, paths, data folder](04/)
- Day 5: event handlers, ofxAddons

## Day 1

- Create and run openFrameworks projects
- Introduce basic C++ syntax
- Use openFrameworks graphics functions (`ofDrawLine`, `ofDrawCircle` etc.) in the `draw` loop
- Declare and assign primitive variables (`int`, `float`)
- Use variables to reduce redundancy
- styling in openFrameworks
- understand the painter's algorithm

video content

- Declare and define functions with parameters

## Day 2

- Use `ofRandom` to produce random numbers in various ranges
- Use `cout` to log values
- persistent variables using `ofApp.h` and `setup()`
- introduction to boolean expressions
- introduction to loops and making use of the `i` iterator inside the loop

video content

- arrays (c++ vector), how they can relate to each iteration of a loop.

## Day 3

- `ofMap()`, sine and cosine and `ofGetElapsedTimef()`
- if statements
- using variables to modify other variables (position-velocity)
- Using the openFrameworks `update` function
- uncover the need for a class, to encapsulate similar-objects.
- create our own particle class

video content

- c++ classes

## Day 4

- ofPoint, ofPolyline, ofPath
- functions that return
- type, fonts, and conversion to ofPath
- nested loops
- transformations, push / popMatrix

## Day 5

- 3D
- lighting
- nested transformations
- Perlin noise
- Keyboard input
- Using openFrameworks addons
