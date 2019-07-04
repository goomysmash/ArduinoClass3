## Class 3: Using millis() to replace delay()
### 1. Load the final code from Class 1
### 2. Declare (long) current time, previous time, and time delay variables
- New code lines:
  - `long currentTime = 0;`
  - `long prevTime = 0;`
  - `long countDelay = 500;`
 
### 3. Update currentTime as millis() and add Serial monitor statements
- New code lines:
  - `currentTime = millis();`
  - `Serial.print("currentTime: ");`
  - `Serial.println(currentTime);`
  - `Serial.print("counter: ");`
- (Upload and watch serial monitor)
- Notice how currentTime (which is just millis()) increases by about 500 every time the counter increments
- This makes sense cause of the delay(500); as well as the few other commands after (that take 0-2ms)

### 4. 



- ``
- ``
- ``
- ``
- ``
- ``
- ``
- ``
- ``
- ``
- ``
