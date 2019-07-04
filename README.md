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

### 4. Update prevTime to be what currentTime used to be and Serial print the result
- New code lines:
  -`prevTime = currentTime;`
  -`Serial.print("prevTime: ");`
  - `Serial.println(prevTime);`
- (Upload and watch serial monitor)
- Notice how the prevTime is just the last currentTime
### 5. Comment out unnecessary lines, add if statement, move update to inside if statement
- New code lines:
  - `if (currentTime - prevTime > countDelay) {Serial.print("prevTime before update: ");`
  - `Serial.println(prevTime);`
  - `prevTime = currentTime;`
  - `Serial.print("prevTime after update: ");`
  - `Serial.println(prevTime);}`
- Comment out
  - `delay(500);`
  - Other unnecessary print statements
- (Upload and watch serial monitor)
- Notice how every 500 ms the if statement activates and the previous time updates
- Now we can add stuff in the if statement and have the same effect as delay()

### 6. Move the increment line into the timer if statement
- Move these lines into the timer if statement:
  - `counter = counter + 1;`
  - `Serial.print("counter: ");`
  - `Serial.println(counter);`
- Comment out unecessary Serial print statements
- (Upload and watch serial monitor and LEDs and press button)
- Notice how the button is much more responsive

### 7. Change the time it takes to turn on the LEDs in the timer if statement
- Change this line from 10 to 5 or whatever number you desire
  - `if (counter > 10)`
- (Upload and watch serial monitor and LEDs and press button)

