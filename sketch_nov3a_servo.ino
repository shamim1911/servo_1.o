// shamim_islam's code

// control servo with arduino


#include <Servo.h>

int pos = 0;
Servo servo_9;
int timestamp = 0; // Initialize timestamp

void setup()
{
  servo_9.attach(9);
  Serial.begin(9600); // Initialize serial communication
  Serial.println("Timestamp, Servo Position"); // Print column headers
}

void loop()
{
  for (pos = 0; pos <= 180; pos += 1) {
    servo_9.write(pos);
    delay(15);
    Serial.print(timestamp); // Send timestamp
    Serial.print(","); // Separate values with a comma
    Serial.println(pos); // Send servo position with a newline
    timestamp++; // Increment timestamp
  }
  
  for (pos = 180; pos >= 0; pos -= 1) {
    servo_9.write(pos);
    delay(15);
    Serial.print(timestamp); // Send timestamp
    Serial.print(","); // Separate values with a comma
    Serial.println(pos); // Send servo position with a newline
    timestamp++; // Increment timestamp
  }
}


//bye bye