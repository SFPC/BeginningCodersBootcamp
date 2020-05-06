# Bootcamp 05

15 minutes of share work time, 3-4 person groups.

## going inside of an image. pixels

load an image and read its pixels with `getColor`, learn about the `ofColor` object and `getBrightness`, and our first loop inside a loop. discuss the row/column order of execution.

```c++
void ofApp::draw(){
    ofBackground(0);
    img.draw(0,0);
    for (int i = 0; i < img.getWidth(); i+=10){
        for (int j = 0; j < img.getHeight(); j+=10){
            float brightness = img.getColor(i,j).getBrightness();
            ofDrawCircle(img.getWidth()+i, j, ofMap(brightness, 0, 255, 0, 5));
        }
    }
}
```

For video, `ofVideoGrabber`, you will want to use `getPixels()` and iterate over the array. review sizes of data types (chart below). unsigned means everything is in the positive range. `unsigned char` is 0-255, like our colors.

image array span goes [0]:red, [1]:green, [2]:blue, (and 4 if alpha) neighboring pixels are 3 indices away.

```
1 bytes _  8 bits _ char   _ -128 to 127
2 bytes _ 16 bits _ short  _ -32,768 to 32,768
4 bytes _ 32 bits _ int    _ -1 billion to 1 billion
8 bytes _ 64 bits _ long   _ very very very big range
4 bytes _ 32 bits _ float  _ (about 7 decimals)
8 bytes _ 64 bits _ double _ (about 14 decimals)
```

## Recursion

talk about how recursion is similar to and unlike a loop. we need to repeat for a while but eventually stop.

```C++
void ofApp::splitRectangle(float x, float y, float width, float height){
    if (width > 1 && ofRandom(0, 1) > 0.5){
        splitRectangle(x          , y           , width/2, height/2);
        splitRectangle(x + width/2, y           , width/2, height/2);
        splitRectangle(x + width/2, y + height/2, width/2, height/2);
        splitRectangle(x          , y + height/2, width/2, height/2);
    } else {
        ofDrawRectangle(x,y,width, height);
    }
    //ofDrawRectangle(x,y,width, height);
}
```

## 3D

Students should know about transforms and push and pop matrix before this. Use `ofEasyCam`. An `ofCamera` is like a push/pop matrix, it wraps code, and additionally transforms the space.

Rotate the grass-colored plane to lie flat. discuss the three axes parameters of `ofRotateDeg`. Use `ofEnableDepthTest()` to disable painter's algorithm. Talk about z-fighting, `ofLight`, and how cameras have `setPosition` and `lookAt`.

```c++
void ofApp::draw(){
    cam.begin();
    ofSetColor(100, 20, 10);  // brown
    ofDrawBox(0, 50, 0, 100, 100, 100);
    
    ofPushMatrix();
        ofSetColor(50, 190, 10);  // green
        ofRotateDeg(90, 1, 0, 0);
        // ground plane
        ofDrawRectangle(-250, -250, 500, 500);
    ofPopMatrix();
    cam.end();
}
```

## Wrap up

- How to share openFrameworks apps, debug release, OS specific builds.
- ofxAddons
- continue sharing screenshots on Slack
