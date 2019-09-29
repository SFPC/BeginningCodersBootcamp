# Day 5:

- **Lecture time:** 3 hours
- **Homework time:** 2 hours

## Learning outcomes

- Nested transformations
- Perlin noise
- Keyboard input
- Using openFrameworks addons

## Lecture (3 hours)

// TODO: maybe this is for day 4?

### Exercise 1: An orbiting moon

A good example of something you could do with rotations are orbiting objects. Let's build a scene with a central spinning planet and an orbiting moon.

#### Exercise 1 solution

There are multiple valid solution, and it's worth talking about the different approaches with students. Here's an approach where the rotations are done completely separately:

```cpp
void ofApp::draw() {
  ofBackground(0);

  ofPushMatrix();
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  ofRotateDeg(10 * ofGetElapsedTimef());
  ofDrawRectangle(-100, -100, 200, 200);
  ofPopMatrix();
  
  ofPushMatrix();
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  ofRotateDeg(-20 * ofGetElapsedTimef());
  ofTranslate(mouseX, 0);
  ofDrawRectangle(-20, -20, 40, 40);
  ofPopMatrix();
}
```

Here's a version where we have _nested rotations_:

```cpp
void ofApp::draw() {
  ofBackground(0);

  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  ofRotateDeg(10 * ofGetElapsedTimef());
  ofDrawRectangle(-100, -100, 200, 200);
  
  ofRotateDeg(-5 * ofGetElapsedTimef());
  ofTranslate(mouseX, 0);
  ofDrawRectangle(-20, -20, 40, 40);
}
```

### Noise

We've already used `ofRandom` to add randomness to our sketches. `ofRandom` has the property the random numbers it generates aren't related to each other. In other words, they can jump around a lot. Sometimes that's what we want, but sometimes we want our randomness to be smooth.

openFrameworks has a function for generating smooth, continuous **noise**. Noise is another word for randomness. However, the `ofNoise` function behaves differently than `ofRandom`. We pass in _coordinates_ to `ofNoise`. If we pass the same coordinates, we get the same value back. However, as we vary the coordinates, we get smoothly changing random movement.

```cpp
// grab a random value at position (5, 10)
float myValue = ofNoise(5, 10);
```

TODO: "smoother" intro here

### Keyboard input

Let's talk about how to use keyboard input to control an object on screen. There's an automatically generated function that openFrameworks gives us called `keyPressed`, often called an **event handler**:

```cpp
void ofApp::keyPressed(int key){

}
```

Let's use this function to move a rectangle up and down the window. First, add a `float y` to the `.h` file:

```cpp
class ofApp : public ofBaseApp{
    public:
        // functions not shown

        float y;
};
```

Now let's draw a rectangle at that `y` value in our `draw` function:

```cpp
void ofApp::draw() {
  ofDrawRectangle(ofGetWidth() / 2, y, 20, 20);
}
```

We can we modify our `keyPressed` event handler to change our `y` value when the user presses the up and down keys:

```cpp
void ofApp::keyPressed(int key){
  if (OF)
}
```

### Installing an openFrameworks addon

TODO

## Homework: ??


### Solution

## Vocabulary

## Common misconceptions & questions

- My if statements aren't working!

  using = instead of ==