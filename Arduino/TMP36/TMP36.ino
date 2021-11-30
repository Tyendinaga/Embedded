
int pin = A0;
int input;
double temperature;

void setup() {

  // Open a 9600 Baud Serial Connection
  Serial.begin(9600);

}

void loop() {

  // Read Data Pin
  input = analogRead(pin);

  // Convetr values from TMP36
  
  
  temperature = (double)input / 1024;   //find percentage of input reading
  temperature = temperature * 5;                     //multiply by 5V to get voltage

  temperature = temperature - 0.5;                   //Subtract the offset 
  temperature = temperature * 100;                   //Convert to degrees 
  
  Serial.print("Current Temperature: ");
  Serial.println(temperature);

  // Delay Updates
  delay(1500);
}
