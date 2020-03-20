const int digits [10][7]= // clock digits
    {{0,1,1,1,1,1,1}
    ,{0,1,1,0,0,0,0}
    ,{1,0,1,1,0,1,1}
    ,{1,1,1,1,0,0,1}
    ,{1,1,1,0,1,0,0}
    ,{1,1,0,1,1,0,1}
    ,{1,1,0,1,1,1,1}
    ,{0,1,1,1,0,0,0}
    ,{1,1,1,1,1,1,1}
    ,{1,1,1,1,1,0,1}};
const int initial_pin=5; // the first pin that will be used for turning the leds on 

void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(9600);
  Serial.print(digits[0][1]);
  for(int i=initial_pin; i<initial_pin+7; i++) // seven bits
  {
    pinMode(i, OUTPUT); 
  }
}

  
void digits2led(int digit){

  for(int i=0; i<7;i++)
  {
    int led_val= digits[digit][i];
    analogWrite(initial_pin+i,  led_val*1023); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
