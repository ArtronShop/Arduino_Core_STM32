#include <Hanuman.h>

void setup()  {
  Serial.begin(9600);
}

void loop()  {
  int val;
  val = in(0); // 1 = pin D1 
  Serial.printf("D9= %d\t", val);
  val = in(A0); // A0 = pin A0
  Serial.printf("A0= %d\t", val);
  val = in(A1); // A1 = pin A1
  Serial.printf("A1= %d\t", val);
  val = in(A2); // A2 = pin A2
  Serial.printf("A2= %d\t", val);
  val = in(A3); // A3 = pin A3
  Serial.printf("A3= %d\t", val);
  val = in(A4); // A4 = pin A4
  Serial.printf("A4= %d\t", val);
  val = in(A5); // A5 = pin A5
  Serial.printf("A5= %d\t", val);
  val = in(A6); // A6 = pin A6
  Serial.printf("A6= %d\t", val);
  val = in(A7); // A7 = pin A7
  Serial.printf("A7= %d\n", val);
  delay(100);
}
