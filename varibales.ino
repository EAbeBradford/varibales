//declaring a variable type int
int a;
int b;
//constant var with the value of 12 no semi colon needed
#define LED_PIN 2

void setup() {
  // put your setup code here, to run once:
  //initialise varibale a
  a = 4;
  a = a + 4;
  b = a + 3;
  Serial.begin(9600);
  Serial.println("a");
  Serial.println(a);
  Serial.println("b");

  Serial.println(b);
  Serial.println("a +b");

  //adds a and b
  Serial.println(b + a);
  Serial.println("b, a");

  Serial.println(b , a);// prints13 idk why
  
  Serial.println("constant");
  Serial.println(LED_PIN);

}

void loop() {
  // put your main code here, to run repeatedly:

}
