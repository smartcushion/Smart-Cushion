#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx_1 = Adafruit_MLX90614(0x55); // 1st sensor i2c address is 0x55
Adafruit_MLX90614 mlx_2 = Adafruit_MLX90614(0x56); // 2nd sensor i2c address is 0x56
Adafruit_MLX90614 mlx_3 = Adafruit_MLX90614(0x57); // 3rd sensor i2c address is 0x57
Adafruit_MLX90614 mlx_4 = Adafruit_MLX90614(0x58); // 4th sensor i2c address is 0x58
Adafruit_MLX90614 mlx_5 = Adafruit_MLX90614(0x59); // 5th sensor i2c address is 0x59
Adafruit_MLX90614 mlx_6 = Adafruit_MLX90614(0x5A); // 6th sensor i2c address is 0x5A
Adafruit_MLX90614 mlx_7 = Adafruit_MLX90614(0x5B); // 7th sensor i2c address is 0x5B
Adafruit_MLX90614 mlx_8 = Adafruit_MLX90614(0x5C); // 8th sensor i2c address is 0x5C

const int flexiforceValue1Readings = 3;
const int flexiforceValue2Readings = 3;
const int flexiforceValue3Readings = 3;
const int flexiforceValue4Readings = 3;
const int flexiforceValue5Readings = 3;
const int flexiforceValue6Readings = 3;
const int flexiforceValue7Readings = 3;
const int flexiforceValue8Readings = 3;
const int flexiforceValue9Readings = 3;
const int flexiforceValue10Readings = 3;
const int flexiforceValue11Readings = 3;
const int flexiforceValue12Readings = 3;
const int flexiforceValue13Readings = 3;
const int flexiforceValue14Readings = 3;
const int flexiforceValue15Readings = 3;


int readings1[flexiforceValue1Readings];
int readIndex1 = 0;
int total1 = 0;
int average1 = 0;

int readings2[flexiforceValue2Readings];
int readIndex2 = 0;
int total2 = 0;
int average2 = 0;

int readings3[flexiforceValue3Readings];
int readIndex3 = 0;
int total3 = 0;
int average3 = 0;

int readings4[flexiforceValue4Readings];
int readIndex4 = 0;
int total4 = 0;
int average4 = 0;

int readings5[flexiforceValue5Readings];
int readIndex5 = 0;
int total5 = 0;
int average5 = 0;

int readings6[flexiforceValue6Readings];
int readIndex6 = 0;
int total6 = 0;
int average6 = 0;

int readings7[flexiforceValue7Readings];
int readIndex7 = 0;
int total7 = 0;
int average7 = 0;

int readings8[flexiforceValue8Readings];
int readIndex8 = 0;
int total8 = 0;
int average8 = 0;

int readings9[flexiforceValue9Readings];
int readIndex9 = 0;
int total9 = 0;
int average9 = 0;

int readings10[flexiforceValue10Readings];
int readIndex10 = 0;
int total10 = 0;
int average10 = 0;

int readings11[flexiforceValue11Readings];
int readIndex11 = 0;
int total11 = 0;
int average11 = 0;

int readings12[flexiforceValue12Readings];
int readIndex12 = 0;
int total12 = 0;
int average12 = 0;

int readings13[flexiforceValue13Readings];
int readIndex13 = 0;
int total13 = 0;
int average13 = 0;

int readings14[flexiforceValue14Readings];
int readIndex14 = 0;
int total14 = 0;
int average14 = 0;

int readings15[flexiforceValue15Readings];
int readIndex15 = 0;
int total15 = 0;
int average15 = 0;


int inputPin1 = A0;
int inputPin2 = A1;
int inputPin3 = A2;
int inputPin4 = A3;
int inputPin5 = A4;
int inputPin6 = A5;
int inputPin7 = A6;
int inputPin8 = A7;
int inputPin9 = A8;
int inputPin10 = A9;
int inputPin11 = A10;
int inputPin12 = A11;
int inputPin13 = A12;
int inputPin14 = A13;
int inputPin15 = A14;

void setup() {
  Serial.begin(9600);

  mlx_1.begin();
  mlx_2.begin(); 
  mlx_3.begin(); 
  mlx_4.begin(); 
  mlx_5.begin(); 
  mlx_6.begin(); 
  mlx_7.begin(); 
  mlx_8.begin();  

  for (int thisflexiforceValue1Reading = 0; thisflexiforceValue1Reading < flexiforceValue1Readings; thisflexiforceValue1Reading++) {
    readings1[thisflexiforceValue1Reading] = 0;}

  for (int thisflexiforceValue2Reading = 0; thisflexiforceValue2Reading < flexiforceValue2Readings; thisflexiforceValue2Reading++) {
    readings2[thisflexiforceValue2Reading] = 0;}

  for (int thisflexiforceValue3Reading = 0; thisflexiforceValue3Reading < flexiforceValue3Readings; thisflexiforceValue3Reading++) {
    readings3[thisflexiforceValue3Reading] = 0;}
    
  for (int thisflexiforceValue4Reading = 0; thisflexiforceValue4Reading < flexiforceValue4Readings; thisflexiforceValue4Reading++) {
    readings4[thisflexiforceValue4Reading] = 0;}
    
  for (int thisflexiforceValue5Reading = 0; thisflexiforceValue5Reading < flexiforceValue5Readings; thisflexiforceValue5Reading++) {
    readings5[thisflexiforceValue5Reading] = 0;}

  for (int thisflexiforceValue6Reading = 0; thisflexiforceValue6Reading < flexiforceValue6Readings; thisflexiforceValue6Reading++) {
    readings6[thisflexiforceValue6Reading] = 0;}

  for (int thisflexiforceValue7Reading = 0; thisflexiforceValue7Reading < flexiforceValue7Readings; thisflexiforceValue7Reading++) {
    readings7[thisflexiforceValue7Reading] = 0;}

  for (int thisflexiforceValue8Reading = 0; thisflexiforceValue8Reading < flexiforceValue8Readings; thisflexiforceValue8Reading++) {
    readings8[thisflexiforceValue8Reading] = 0;}

  for (int thisflexiforceValue9Reading = 0; thisflexiforceValue9Reading < flexiforceValue9Readings; thisflexiforceValue9Reading++) {
    readings9[thisflexiforceValue9Reading] = 0;}

  for (int thisflexiforceValue10Reading = 0; thisflexiforceValue10Reading < flexiforceValue10Readings; thisflexiforceValue10Reading++) {
    readings10[thisflexiforceValue10Reading] = 0;}

  for (int thisflexiforceValue11Reading = 0; thisflexiforceValue11Reading < flexiforceValue11Readings; thisflexiforceValue11Reading++) {
    readings11[thisflexiforceValue11Reading] = 0;}

  for (int thisflexiforceValue12Reading = 0; thisflexiforceValue12Reading < flexiforceValue12Readings; thisflexiforceValue12Reading++) {
    readings12[thisflexiforceValue12Reading] = 0;} 

  for (int thisflexiforceValue13Reading = 0; thisflexiforceValue13Reading < flexiforceValue13Readings; thisflexiforceValue13Reading++) {
    readings13[thisflexiforceValue13Reading] = 0;}

  for (int thisflexiforceValue14Reading = 0; thisflexiforceValue14Reading < flexiforceValue14Readings; thisflexiforceValue14Reading++) {
    readings14[thisflexiforceValue14Reading] = 0;}

  for (int thisflexiforceValue15Reading = 0; thisflexiforceValue15Reading < flexiforceValue15Readings; thisflexiforceValue15Reading++) {
    readings15[thisflexiforceValue15Reading] = 0;}               
  
  }
  


void loop() {
  // subtract the last reading:
  total1 = total1 - readings1[readIndex1];
  // read from the sensor:
  readings1[readIndex1] = analogRead(inputPin1);
  // add the reading to the total:
  total1 = total1 + readings1[readIndex1];
  // advance to the next position in the array:
  readIndex1 = readIndex1 + 1;
 
  // if we're at the end of the array...
  if (readIndex1 >= flexiforceValue1Readings) {
    // ...wrap around to the beginning:
    readIndex1 = 0;
  }


  total2 = total2 - readings2[readIndex2];
  readings2[readIndex2] = analogRead(inputPin2);
  total2 = total2 + readings2[readIndex2];
  readIndex2 = readIndex2 + 1;
  if (readIndex2 >= flexiforceValue2Readings) {
    readIndex2 = 0;
  }  
  average2 = total2 / flexiforceValue2Readings;


  total3 = total3 - readings3[readIndex3];
  readings3[readIndex3] = analogRead(inputPin3);
  total3 = total3 + readings3[readIndex3];
  readIndex3 = readIndex3 + 1;
  if (readIndex3 >= flexiforceValue3Readings) {
    readIndex3 = 0;
  }  
  average3 = total3 / flexiforceValue3Readings;


  total4 = total4 - readings4[readIndex4];
  readings4[readIndex4] = analogRead(inputPin4);
  total4 = total4 + readings4[readIndex4];
  readIndex4 = readIndex4 + 1;
  if (readIndex4 >= flexiforceValue4Readings) {
    readIndex4 = 0;
  }  
  average4 = total4 / flexiforceValue4Readings;


  total5 = total5 - readings5[readIndex5];
  readings5[readIndex5] = analogRead(inputPin5);
  total5 = total5 + readings5[readIndex5];
  readIndex5 = readIndex5 + 5;
  if (readIndex5 >= flexiforceValue5Readings) {
    readIndex5 = 0;
  }  
  average5 = total5 / flexiforceValue5Readings;


  total6 = total6 - readings6[readIndex6];
  readings6[readIndex6] = analogRead(inputPin6);
  total6 = total6 + readings6[readIndex6];
  readIndex6 = readIndex6 + 1;
  if (readIndex6 >= flexiforceValue6Readings) {
    readIndex6 = 0;
  }  
  average6 = total6 / flexiforceValue6Readings;


  total7 = total7 - readings7[readIndex7];
  readings7[readIndex7] = analogRead(inputPin7);
  total7 = total7 + readings7[readIndex7];
  readIndex7 = readIndex7 + 1;
  if (readIndex7 >= flexiforceValue7Readings) {
    readIndex7 = 0;
  }  
  average7 = total7 / flexiforceValue7Readings;


  total8 = total8 - readings8[readIndex8];
  readings8[readIndex8] = analogRead(inputPin8);
  total8 = total8 + readings8[readIndex8];
  readIndex8 = readIndex8 + 1;
  if (readIndex8 >= flexiforceValue8Readings) {
    readIndex8 = 0;
  }  
  average8 = total8 / flexiforceValue8Readings;


  total9 = total9 - readings9[readIndex9];
  readings9[readIndex9] = analogRead(inputPin9);
  total9 = total9 + readings9[readIndex9];
  readIndex9 = readIndex9 + 1;
  if (readIndex9 >= flexiforceValue9Readings) {
    readIndex9 = 0;
  }  
  average9 = total9 / flexiforceValue9Readings;


  total10 = total10 - readings10[readIndex10];
  readings10[readIndex10] = analogRead(inputPin10);
  total10 = total10 + readings10[readIndex10];
  readIndex10 = readIndex10 + 1;
  if (readIndex10 >= flexiforceValue10Readings) {
    readIndex10 = 0;
  }  
  average10 = total10 / flexiforceValue10Readings;


  total11 = total11 - readings11[readIndex11];
  readings11[readIndex11] = analogRead(inputPin11);
  total11 = total11 + readings11[readIndex11];
  readIndex11 = readIndex11 + 1;
  if (readIndex11 >= flexiforceValue11Readings) {
    readIndex11 = 0;
  }  
  average11 = total11 / flexiforceValue11Readings;


  total12 = total12 - readings12[readIndex12];
  readings12[readIndex12] = analogRead(inputPin12);
  total12 = total12 + readings12[readIndex12];
  readIndex12 = readIndex12 + 1;
  if (readIndex12 >= flexiforceValue12Readings) {
    readIndex12 = 0;
  }  
  average12 = total12 / flexiforceValue12Readings;


  total13 = total13 - readings13[readIndex13];
  readings13[readIndex13] = analogRead(inputPin13);
  total13 = total13 + readings13[readIndex13];
  readIndex13 = readIndex13 + 1;
  if (readIndex13 >= flexiforceValue13Readings) {
    readIndex13 = 0;
  }  
  average13 = total13 / flexiforceValue13Readings;


  total14 = total14 - readings14[readIndex14];
  readings14[readIndex14] = analogRead(inputPin14);
  total14 = total14 + readings14[readIndex14];
  readIndex14 = readIndex14 + 1;
  if (readIndex14 >= flexiforceValue14Readings) {
    readIndex14 = 0;
  }  
  average14 = total14 / flexiforceValue14Readings;


  total15 = total15 - readings15[readIndex15];
  readings15[readIndex15] = analogRead(inputPin15);
  total15 = total15 + readings15[readIndex15];
  readIndex15 = readIndex15 + 1;
  if (readIndex15 >= flexiforceValue15Readings) {
    readIndex15 = 0;
  }  
  average15 = total15 / flexiforceValue15Readings;


                        

  
 // Serial.println(average1);
 // int flexiforceValue1 = analogRead(A0);
 // int flexiforceValue2 = analogRead(A1);
 // int flexiforceValue3 = analogRead(A2);
 // int flexiforceValue4 = analogRead(A3);
 // int flexiforceValue5 = analogRead(A4);
 // int flexiforceValue6 = analogRead(A5);
 // int flexiforceValue7 = analogRead(A6);
 // int flexiforceValue8 = analogRead(A7);
 // int flexiforceValue9 = analogRead(A8);
 // int flexiforceValue10 = analogRead(A9);
 // int flexiforceValue11 = analogRead(A10);
 // int flexiforceValue12 = analogRead(A11);
 // int flexiforceValue13 = analogRead(A12);
 // int flexiforceValue14 = analogRead(A13);
 // int flexiforceValue15 = analogRead(A14);

 // Convert reading (0 - 1023) to a voltage (0 - 5V):
 // float voltage1 = flexiforceValue1 * (5.0 / 1023.0);
 // float voltage2 = flexiforceValue2 * (5.0 / 1023.0);
 // float voltage3 = flexiforceValue3 * (5.0 / 1023.0);
 // float voltage4 = flexiforceValue4 * (5.0 / 1023.0);
 // float voltage5 = flexiforceValue5 * (5.0 / 1023.0);
 // float voltage6 = flexiforceValue6 * (5.0 / 1023.0);
 // float voltage7 = flexiforceValue7 * (5.0 / 1023.0);
 // float voltage8 = flexiforceValue8 * (5.0 / 1023.0);
 // float voltage9 = flexiforceValue9 * (5.0 / 1023.0);
 // float voltage10 = flexiforceValue10 * (5.0 / 1023.0);
 // float voltage11 = flexiforceValue11 * (5.0 / 1023.0);
 // float voltage12 = flexiforceValue12 * (5.0 / 1023.0);
 // float voltage13= flexiforceValue13 * (5.0 / 1023.0);
 // float voltage14 = flexiforceValue14 * (5.0 / 1023.0);
 // float voltage15 = flexiforceValue15 * (5.0 / 1023.0);
  
  // Print out the values
  //  Serial.print("Voltage of FlexiForce 1 is ");  
  //  Serial.println(voltage1);
  //  Serial.println();
  //  delay(5000);
  //  Serial.print("Voltage of FlexiForce 2 is ");  
  //  Serial.println(voltage2);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 3 is ");  
  //  Serial.println(voltage3);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 4 is ");  
  //  Serial.println(voltage4);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 5 is ");  
  //  Serial.println(voltage5);
  // Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 6 is ");  
  //  Serial.println(voltage6);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 7 is ");  
  //  Serial.println(voltage7);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 8 is ");  
  //  Serial.println(voltage8);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 9 is ");  
  //  Serial.println(voltage9);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 10 is ");  
  //  Serial.println(voltage10);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 11 is ");  
  //  Serial.println(voltage11);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 12 is ");  
  //  Serial.println(voltage12);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 13 is ");  
  //  Serial.println(voltage13);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 14 is ");  
  //  Serial.println(voltage14);
  //  Serial.println();
  //  delay(9000);
  //  Serial.print("Voltage of FlexiForce 15 is ");  
  //  Serial.println(voltage15);
  //  Serial.println();
  //  delay(9000);
  
  
  Serial.print("Temp of 1st sensor = "); Serial.print(mlx_1.readObjectTempC()); Serial.write('°'); Serial.println("C");  
  Serial.print("Temp of 2nd sensor = "); Serial.print(mlx_2.readObjectTempC()); Serial.write('°'); Serial.println("C");
  Serial.print("Temp of 3rd sensor = "); Serial.print(mlx_3.readObjectTempC()); Serial.write('°'); Serial.println("C");
  Serial.print("Temp of 4th sensor = "); Serial.print(mlx_4.readObjectTempC()); Serial.write('°'); Serial.println("C");
  Serial.print("Temp of 5th sensor = "); Serial.print(mlx_5.readObjectTempC()); Serial.write('°'); Serial.println("C");
  Serial.print("Temp of 6th sensor = "); Serial.print(mlx_6.readObjectTempC()); Serial.write('°'); Serial.println("C");
  Serial.print("Temp of 7th sensor = "); Serial.print(mlx_7.readObjectTempC()); Serial.write('°'); Serial.println("C");
  Serial.print("Temp of 8th sensor = "); Serial.print(mlx_8.readObjectTempC()); Serial.write('°'); Serial.println("C");
  Serial.println();
  delay(6000);
}
