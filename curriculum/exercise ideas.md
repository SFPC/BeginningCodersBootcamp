exercise ideas

## for loops

## Triangle grid

```cpp
void ofApp::draw() {
  ofBackground(0);
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < i + 1; j++) {
      ofDrawRectangle(j * 50, i * 50, 20, 20);
    }
  }
}
```
