#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx_1 = Adafruit_MLX90614(0x55); // 1st temp sensor i2c address is 0x55
Adafruit_MLX90614 mlx_2 = Adafruit_MLX90614(0x56); // 2nd temp sensor i2c address is 0x56
Adafruit_MLX90614 mlx_3 = Adafruit_MLX90614(0x57); // 3rd temp sensor i2c address is 0x57
Adafruit_MLX90614 mlx_4 = Adafruit_MLX90614(0x58); // 4th temp sensor i2c address is 0x58
Adafruit_MLX90614 mlx_5 = Adafruit_MLX90614(0x59); // 5th temp sensor i2c address is 0x59
Adafruit_MLX90614 mlx_6 = Adafruit_MLX90614(0x5A); // 6th temp sensor i2c address is 0x5A
Adafruit_MLX90614 mlx_7 = Adafruit_MLX90614(0x5B); // 7th temp sensor i2c address is 0x5B
Adafruit_MLX90614 mlx_8 = Adafruit_MLX90614(0x5C); // 8th temp sensor i2c address is 0x5C

float mlxobjvalue1_1 = 0; float mlxobjvalue1_2 = 0; float mlxobjvalue1_3 = 0; float mlxobjvalue1_4 = 0; float mlxobjvalue1 = 0;
float mlxobjvalue2_1 = 0; float mlxobjvalue2_2 = 0; float mlxobjvalue2_3 = 0; float mlxobjvalue2_4 = 0; float mlxobjvalue2 = 0;
float mlxobjvalue3_1 = 0; float mlxobjvalue3_2 = 0; float mlxobjvalue3_3 = 0; float mlxobjvalue3_4 = 0; float mlxobjvalue3 = 0;
float mlxobjvalue4_1 = 0; float mlxobjvalue4_2 = 0; float mlxobjvalue4_3 = 0; float mlxobjvalue4_4 = 0; float mlxobjvalue4 = 0;
float mlxobjvalue5_1 = 0; float mlxobjvalue5_2 = 0; float mlxobjvalue5_3 = 0; float mlxobjvalue5_4 = 0; float mlxobjvalue5 = 0;
float mlxobjvalue6_1 = 0; float mlxobjvalue6_2 = 0; float mlxobjvalue6_3 = 0; float mlxobjvalue6_4 = 0; float mlxobjvalue6 = 0;
float mlxobjvalue7_1 = 0; float mlxobjvalue7_2 = 0; float mlxobjvalue7_3 = 0; float mlxobjvalue7_4 = 0; float mlxobjvalue7 = 0;
float mlxobjvalue8_1 = 0; float mlxobjvalue8_2 = 0; float mlxobjvalue8_3 = 0; float mlxobjvalue8_4 = 0; float mlxobjvalue8 = 0;

float mlxambvalue1_1 = 0; float mlxambvalue1_2 = 0; float mlxambvalue1_3 = 0; float mlxambvalue1_4 = 0; float mlxambvalue1 = 0;
float mlxambvalue2_1 = 0; float mlxambvalue2_2 = 0; float mlxambvalue2_3 = 0; float mlxambvalue2_4 = 0; float mlxambvalue2 = 0;
float mlxambvalue3_1 = 0; float mlxambvalue3_2 = 0; float mlxambvalue3_3 = 0; float mlxambvalue3_4 = 0; float mlxambvalue3 = 0;
float mlxambvalue4_1 = 0; float mlxambvalue4_2 = 0; float mlxambvalue4_3 = 0; float mlxambvalue4_4 = 0; float mlxambvalue4 = 0;
float mlxambvalue5_1 = 0; float mlxambvalue5_2 = 0; float mlxambvalue5_3 = 0; float mlxambvalue5_4 = 0; float mlxambvalue5 = 0;
float mlxambvalue6_1 = 0; float mlxambvalue6_2 = 0; float mlxambvalue6_3 = 0; float mlxambvalue6_4 = 0; float mlxambvalue6 = 0;
float mlxambvalue7_1 = 0; float mlxambvalue7_2 = 0; float mlxambvalue7_3 = 0; float mlxambvalue7_4 = 0; float mlxambvalue7 = 0;
float mlxambvalue8_1 = 0; float mlxambvalue8_2 = 0; float mlxambvalue8_3 = 0; float mlxambvalue8_4 = 0; float mlxambvalue8 = 0;

int mlxaverage1 = 0; int mlxaverage2 = 0; int mlxaverage3 = 0; int mlxaverage4 = 0;
int mlxaverage5 = 0; int mlxaverage6 = 0; int mlxaverage7 = 0; int mlxaverage8 = 0; 

const int flexiforceValueReadings = 3;
const int mlxValueReadings = 4;
int averagereadings = 5;
int readings[flexiforceValueReadings];
int readIndex = 0;

int voltage1 = 0; int voltage2 = 0; int voltage3 = 0; int voltage4 = 0; int voltage5 = 0; int voltage6 = 0; int voltage7 = 0; int voltage8 = 0;
int voltage9 = 0; int voltage10 = 0; int voltage11 = 0; int voltage12 = 0; int voltage13 = 0; int voltage14 = 0; int voltage15 = 0;

int total1 = 0; int average1_1 = 0; int average1_2 = 0; int average1_3 = 0; int average1_4 = 0; int average1_5 = 0; int ffaverage1 = 0;
int total2 = 0; int average2_1 = 0; int average2_2 = 0; int average2_3 = 0; int average2_4 = 0; int average2_5 = 0; int ffaverage2 = 0;
int total3 = 0; int average3_1 = 0; int average3_2 = 0; int average3_3 = 0; int average3_4 = 0; int average3_5 = 0; int ffaverage3 = 0; 
int total4 = 0; int average4_1 = 0; int average4_2 = 0; int average4_3 = 0; int average4_4 = 0; int average4_5 = 0; int ffaverage4 = 0; 
int total5 = 0; int average5_1 = 0; int average5_2 = 0; int average5_3 = 0; int average5_4 = 0; int average5_5 = 0; int ffaverage5 = 0;
int total6 = 0; int average6_1 = 0; int average6_2 = 0; int average6_3 = 0; int average6_4 = 0; int average6_5 = 0; int ffaverage6 = 0; 
int total7 = 0; int average7_1 = 0; int average7_2 = 0; int average7_3 = 0; int average7_4 = 0; int average7_5 = 0; int ffaverage7 = 0; 
int total8 = 0; int average8_1 = 0; int average8_2 = 0; int average8_3 = 0; int average8_4 = 0; int average8_5 = 0; int ffaverage8 = 0; 
int total9 = 0; int average9_1 = 0; int average9_2 = 0; int average9_3 = 0; int average9_4 = 0; int average9_5 = 0; int ffaverage9 = 0; 
int total10 = 0; int average10_1 = 0; int average10_2 = 0; int average10_3 = 0; int average10_4 = 0; int average10_5 = 0; int ffaverage10 = 0; 
int total11 = 0; int average11_1 = 0; int average11_2 = 0; int average11_3 = 0; int average11_4 = 0; int average11_5 = 0; int ffaverage11 = 0; 
int total12 = 0; int average12_1 = 0; int average12_2 = 0; int average12_3 = 0; int average12_4 = 0; int average12_5 = 0; int ffaverage12 = 0; 
int total13 = 0; int average13_1 = 0; int average13_2 = 0; int average13_3 = 0; int average13_4 = 0; int average13_5 = 0; int ffaverage13 = 0; 
int total14 = 0; int average14_1 = 0; int average14_2 = 0; int average14_3 = 0; int average14_4 = 0; int average14_5 = 0; int ffaverage14 = 0; 
int total15 = 0; int average15_1 = 0; int average15_2 = 0; int average15_3 = 0; int average15_4 = 0; int average15_5 = 0; int ffaverage15 = 0;


int inputPin1 = A0; int inputPin2 = A1; int inputPin3 = A2; int inputPin4 = A3; int inputPin5 = A4; int inputPin6 = A5; int inputPin7 = A6; int inputPin8 = A7; 
int inputPin9 = A8; int inputPin10 = A9; int inputPin11 = A10; int inputPin12 = A11; int inputPin13 = A12; int inputPin14 = A13; int inputPin15 = A14;

int solenoid1_in = 22; int solenoid1_out = 23;
int solenoid2_in = 24; int solenoid2_out = 25;
int solenoid3_in = 26; int solenoid3_out = 27;
int solenoid4_in = 28; int solenoid4_out = 29;
int solenoid5_in = 30; int solenoid5_out = 31;
int solenoid6_in = 32; int solenoid6_out = 33;
int solenoid7_in = 34; int solenoid7_out = 35;
int solenoid8_in = 36; int solenoid8_out = 37;
int solenoid9_in = 38; int solenoid9_out = 39;
int solenoid10_in = 40; int solenoid10_out = 41;
int solenoid11_in = 42; int solenoid11_out = 43;
int solenoid12_in = 44; int solenoid12_out = 45;
int solenoid13_in = 46; int solenoid13_out = 37;
int solenoid14_in = 48; int solenoid14_out = 49;
int solenoid15_in = 50; int solenoid15_out = 51;
int fanPin = 52;        int pumpPin = 53;

void setup() {
Serial.begin(9600);
mlx_1.begin(); mlx_2.begin(); mlx_3.begin(); mlx_4.begin(); mlx_5.begin(); mlx_6.begin(); mlx_7.begin(); mlx_8.begin();

  for (int thisflexiforceValueReading = 0; 
           thisflexiforceValueReading < flexiforceValueReadings; 
           thisflexiforceValueReading++) {
           readings[thisflexiforceValueReading] = 0;}  
  }
  

void loop() {
Serial.begin(9600);
delay(180000); 
////////////////////////////////////////////////////////////////////////////////////////////0:03
  total1 = total1 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin1);
  total1 = total1 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }
  average1_1 = total1 / flexiforceValueReadings;

voltage1 = average1_1 * (3.3 / 1023.0);
Serial.print("1st set of Pressure Readings"); Serial.println();
Serial.println();
Serial.print("Voltage of FlexiForce 1 is ");  
Serial.println(voltage1);
Serial.println();  
delay(200);

  total2 = total2 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin2);
  total2 = total2 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average2_1 = total2 / flexiforceValueReadings;

voltage2 = average2_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 2 is ");  
Serial.println(voltage2);
Serial.println();  
delay(200);

  total3 = total3 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin3);
  total3 = total3 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average3_1 = total3 / flexiforceValueReadings;

voltage3 = average3_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 3 is ");  
Serial.println(voltage3);
Serial.println();  
delay(200);

  total4 = total4 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin4);
  total4 = total4 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average4_1 = total4 / flexiforceValueReadings;

voltage4 = average4_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 4 is ");  
Serial.println(voltage4);
Serial.println();  
delay(200);

  total5 = total5 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin5);
  total5 = total5 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average5_1 = total5 / flexiforceValueReadings;

voltage5 = average5_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 5 is ");  
Serial.println(voltage5);
Serial.println();  
delay(200);  

  total6 = total6 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin6);
  total6 = total6 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average6_1 = total6 / flexiforceValueReadings;
  
voltage6 = average6_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 6 is ");  
Serial.println(voltage6);
Serial.println();  
delay(200);

  total7 = total7 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin7);
  total7 = total7 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average7_1 = total7 / flexiforceValueReadings;
  
voltage7 = average7_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 7 is ");  
Serial.println(voltage7);
Serial.println();  
delay(200);  

  total8 = total8 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin8);
  total8 = total8 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average8_1 = total8 / flexiforceValueReadings;
  
voltage8 = average8_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 8 is ");  
Serial.println(voltage8);
Serial.println();  
delay(200);  

  total9 = total9 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin9);
  total9 = total9 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average9_1 = total9 / flexiforceValueReadings;
  
voltage9 = average9_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 9 is ");  
Serial.println(voltage9);
Serial.println();  
delay(200);  

  total10 = total10 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin10);
  total10 = total10 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average10_1 = total10 / flexiforceValueReadings;
  
voltage10 = average10_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 10 is ");  
Serial.println(voltage10);
Serial.println();  
delay(200);  

  total11 = total11 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin11);
  total11 = total11 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average11_1 = total11 / flexiforceValueReadings;
  
voltage11 = average11_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 11 is ");  
Serial.println(voltage11);
Serial.println();  
delay(200);  

  total12 = total12 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin12);
  total12 = total12 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average12_1 = total12 / flexiforceValueReadings;

voltage12 = average12_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 12 is ");  
Serial.println(voltage12);
Serial.println();  
delay(200);  

  total13 = total13 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin13);
  total13 = total13 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average13_1 = total13 / flexiforceValueReadings;
  
voltage13 = average13_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 13 is ");  
Serial.println(voltage13);
Serial.println();  
delay(200);  

  total14 = total14 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin14);
  total14 = total14 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average14_1 = total14 / flexiforceValueReadings;
  
voltage14 = average14_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  

  total15 = total15 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin15);
  total15 = total15 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average15_1 = total15 / flexiforceValueReadings;

voltage15 = average15_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 15 is ");  
Serial.println(voltage15);
Serial.println();  
delay(200);  

///////////////////////////////////////////////////////////////////////////////////////////////////////////////0:05
//tempaverage
mlxobjvalue1_1 = mlx_1.readObjectTempC();
Serial.print("1st set of Pressure Readings"); Serial.println();
Serial.print("Object Temperature of 1st sensor is ");  Serial.println(mlx_1.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue1_1 = mlx_1.readAmbientTempC();
delay(100);
Serial.print("Object Temperature of 1st temp. sensor is ");  Serial.println(mlx_1.readAmbientTempC()); Serial.write('°'); Serial.println();
mlxobjvalue2_1 = mlx_2.readObjectTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue2_1 = mlx_2.readAmbientTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue3_1 = mlx_3.readObjectTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue3_1 = mlx_3.readAmbientTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue4_1 = mlx_4.readObjectTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue4_1 = mlx_4.readAmbientTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue5_1 = mlx_5.readObjectTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue5_1 = mlx_5.readAmbientTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue6_1 = mlx_6.readObjectTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue6_1 = mlx_6.readAmbientTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue7_1 = mlx_7.readObjectTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue7_1 = mlx_7.readAmbientTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue8_1 = mlx_8.readObjectTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue8_1 = mlx_8.readAmbientTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(60000);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////0:06
  total1 = total1 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin1);
  total1 = total1 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }
  average1_2 = total1 / flexiforceValueReadings;

voltage1 = average1_2 * (3.3 / 1023.0);
Serial.print("2nd set of Pressure Readings");
Serial.println();
Serial.print("Voltage of FlexiForce 1 is ");  
Serial.println(voltage1);
Serial.println();  
delay(200);

  total2 = total2 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin2);
  total2 = total2 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average2_2 = total2 / flexiforceValueReadings;

voltage2 = average2_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 2 is ");  
Serial.println(voltage2);
Serial.println();  
delay(200);

  total3 = total3 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin3);
  total3 = total3 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average3_2 = total3 / flexiforceValueReadings;

voltage3 = average3_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 3 is ");  
Serial.println(voltage3);
Serial.println();  
delay(200);

  total4 = total4 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin4);
  total4 = total4 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average4_2 = total4 / flexiforceValueReadings;

voltage4 = average4_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 4 is ");  
Serial.println(voltage4);
Serial.println();  
delay(200);

  total5 = total5 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin5);
  total5 = total5 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average5_2 = total5 / flexiforceValueReadings;

voltage5 = average5_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 5 is ");  
Serial.println(voltage5);
Serial.println();  
delay(200);  

  total6 = total6 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin6);
  total6 = total6 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average6_2 = total6 / flexiforceValueReadings;
  
voltage6 = average6_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 6 is ");  
Serial.println(voltage6);
Serial.println();  
delay(200);

  total7 = total7 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin7);
  total7 = total7 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average7_2 = total7 / flexiforceValueReadings;
  
voltage7 = average7_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 7 is ");  
Serial.println(voltage7);
Serial.println();  
delay(200);  

  total8 = total8 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin8);
  total8 = total8 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average8_2 = total8 / flexiforceValueReadings;
  
voltage8 = average8_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 8 is ");  
Serial.println(voltage8);
Serial.println();  
delay(200);  

  total9 = total9 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin9);
  total9 = total9 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average9_2 = total9 / flexiforceValueReadings;
  
voltage9 = average9_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 9 is ");  
Serial.println(voltage9);
Serial.println();  
delay(200);  

  total10 = total10 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin10);
  total10 = total10 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average10_2 = total10 / flexiforceValueReadings;
  
voltage10 = average10_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 10 is ");  
Serial.println(voltage10);
Serial.println();  
delay(200);  

  total11 = total11 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin11);
  total11 = total11 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average11_2 = total11 / flexiforceValueReadings;
  
voltage11 = average11_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 11 is ");  
Serial.println(voltage11);
Serial.println();  
delay(200);  

  total12 = total12 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin12);
  total12 = total12 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average12_2 = total12 / flexiforceValueReadings;

voltage12 = average12_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 12 is ");  
Serial.println(voltage12);
Serial.println();  
delay(200);  

  total13 = total13 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin13);
  total13 = total13 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average13_2 = total13 / flexiforceValueReadings;
  
voltage13 = average13_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 13 is ");  
Serial.println(voltage13);
Serial.println();  
delay(200);  

  total14 = total14 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin14);
  total14 = total14 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average14_2 = total14 / flexiforceValueReadings;
  
voltage14 = average14_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  

  total15 = total15 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin15);
  total15 = total15 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average15_2 = total15 / flexiforceValueReadings;

voltage15 = average15_2 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 15 is ");  
Serial.println(voltage15);
Serial.println();  
delay(200);  
delay(60000);  

///////////////////////////////////////////////////////////////////////////////////////////////////////////////0:09
  total1 = total1 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin1);
  total1 = total1 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }
  average1_3 = total1 / flexiforceValueReadings;

voltage1 = average1_3 * (3.3 / 1023.0);
Serial.print("3rd set of Pressure Readings");
Serial.println();
Serial.print("Voltage of FlexiForce 1 is ");  
Serial.println(voltage1);
Serial.println();  
delay(200);

  total2 = total2 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin2);
  total2 = total2 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average2_3 = total2 / flexiforceValueReadings;

voltage2 = average2_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 2 is ");  
Serial.println(voltage2);
Serial.println();  
delay(200);

  total3 = total3 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin3);
  total3 = total3 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average3_3 = total3 / flexiforceValueReadings;

voltage3 = average3_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 3 is ");  
Serial.println(voltage3);
Serial.println();  
delay(200);

  total4 = total4 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin4);
  total4 = total4 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average4_3 = total4 / flexiforceValueReadings;

voltage4 = average4_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 4 is ");  
Serial.println(voltage4);
Serial.println();  
delay(200);

  total5 = total5 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin5);
  total5 = total5 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average5_3 = total5 / flexiforceValueReadings;

voltage5 = average5_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 5 is ");  
Serial.println(voltage5);
Serial.println();  
delay(200);  

  total6 = total6 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin6);
  total6 = total6 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average6_3 = total6 / flexiforceValueReadings;
  
voltage6 = average6_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 6 is ");  
Serial.println(voltage6);
Serial.println();  
delay(200);

  total7 = total7 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin7);
  total7 = total7 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average7_3 = total7 / flexiforceValueReadings;
  
voltage7 = average7_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 7 is ");  
Serial.println(voltage7);
Serial.println();  
delay(200);  

  total8 = total8 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin8);
  total8 = total8 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average8_3 = total8 / flexiforceValueReadings;
  
voltage8 = average8_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 8 is ");  
Serial.println(voltage8);
Serial.println();  
delay(200);  

  total9 = total9 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin9);
  total9 = total9 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average9_3 = total9 / flexiforceValueReadings;
  
voltage9 = average9_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 9 is ");  
Serial.println(voltage9);
Serial.println();  
delay(200);  

  total10 = total10 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin10);
  total10 = total10 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average10_3 = total10 / flexiforceValueReadings;
  
voltage10 = average10_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 10 is ");  
Serial.println(voltage10);
Serial.println();  
delay(200);  

  total11 = total11 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin11);
  total11 = total11 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average11_3 = total11 / flexiforceValueReadings;
  
voltage11 = average11_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 11 is ");  
Serial.println(voltage11);
Serial.println();  
delay(200);  

  total12 = total12 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin12);
  total12 = total12 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average12_3 = total12 / flexiforceValueReadings;

voltage12 = average12_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 12 is ");  
Serial.println(voltage12);
Serial.println();  
delay(200);  

  total13 = total13 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin13);
  total13 = total13 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average13_3 = total13 / flexiforceValueReadings;
  
voltage13 = average13_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 13 is ");  
Serial.println(voltage13);
Serial.println();  
delay(200);  

  total14 = total14 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin14);
  total14 = total14 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average14_3 = total14 / flexiforceValueReadings;
  
voltage14 = average14_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  

  total15 = total15 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin15);
  total15 = total15 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average15_3 = total15 / flexiforceValueReadings;

voltage15 = average15_3 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 15 is ");  
Serial.println(voltage15);
Serial.println();  
delay(200);  
delay(60000);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////0:10
mlxobjvalue1_2 = mlx_1.readObjectTempC();
Serial.print("2nd set of Pressure Readings"); Serial.println();
Serial.print("Object Temperature of 1st sensor is ");  Serial.println(mlx_1.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue1_2 = mlx_1.readAmbientTempC();
delay(100);
Serial.print("Object Temperature of 1st temp. sensor is ");  Serial.println(mlx_1.readAmbientTempC()); Serial.write('°'); Serial.println();
mlxobjvalue2_2 = mlx_2.readObjectTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue2_2 = mlx_2.readAmbientTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue3_2 = mlx_3.readObjectTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue3_2 = mlx_3.readAmbientTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue4_2 = mlx_4.readObjectTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue4_2 = mlx_4.readAmbientTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue5_2 = mlx_5.readObjectTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue5_2 = mlx_5.readAmbientTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue6_2 = mlx_6.readObjectTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue6_2 = mlx_6.readAmbientTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue7_2 = mlx_7.readObjectTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue7_2 = mlx_7.readAmbientTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue8_2 = mlx_8.readObjectTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue8_2 = mlx_8.readAmbientTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(60000);

////////////////////////////////////////////////////////////////////////////////////////////////////////////0:12
  total1 = total1 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin1);
  total1 = total1 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }
  average1_4 = total1 / flexiforceValueReadings;

voltage1 = average1_4 * (3.3 / 1023.0);
Serial.print("4th set of Pressure Readings");
Serial.println();
Serial.print("Voltage of FlexiForce 1 is ");  
Serial.println(voltage1);
Serial.println();  
delay(200);

  total2 = total2 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin2);
  total2 = total2 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average2_4 = total2 / flexiforceValueReadings;

voltage2 = average2_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 2 is ");  
Serial.println(voltage2);
Serial.println();  
delay(200);

  total3 = total3 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin3);
  total3 = total3 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average3_4 = total3 / flexiforceValueReadings;

voltage3 = average3_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 3 is ");  
Serial.println(voltage3);
Serial.println();  
delay(200);

  total4 = total4 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin4);
  total4 = total4 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average4_4 = total4 / flexiforceValueReadings;

voltage4 = average4_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 4 is ");  
Serial.println(voltage4);
Serial.println();  
delay(200);

  total5 = total5 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin5);
  total5 = total5 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average5_4 = total5 / flexiforceValueReadings;

voltage5 = average5_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 5 is ");  
Serial.println(voltage5);
Serial.println();  
delay(200);  

  total6 = total6 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin6);
  total6 = total6 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average6_4 = total6 / flexiforceValueReadings;
  
voltage6 = average6_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 6 is ");  
Serial.println(voltage6);
Serial.println();  
delay(200);

  total7 = total7 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin7);
  total7 = total7 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average7_4 = total7 / flexiforceValueReadings;
  
voltage7 = average7_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 7 is ");  
Serial.println(voltage7);
Serial.println();  
delay(200);  

  total8 = total8 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin8);
  total8 = total8 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average8_4 = total8 / flexiforceValueReadings;
  
voltage8 = average8_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 8 is ");  
Serial.println(voltage8);
Serial.println();  
delay(200);  

  total9 = total9 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin9);
  total9 = total9 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average9_4 = total9 / flexiforceValueReadings;
  
voltage9 = average9_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 9 is ");  
Serial.println(voltage9);
Serial.println();  
delay(200);  

  total10 = total10 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin10);
  total10 = total10 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average10_4 = total10 / flexiforceValueReadings;
  
voltage10 = average10_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 10 is ");  
Serial.println(voltage10);
Serial.println();  
delay(200);  

  total11 = total11 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin11);
  total11 = total11 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average11_4 = total11 / flexiforceValueReadings;
  
voltage11 = average11_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 11 is ");  
Serial.println(voltage11);
Serial.println();  
delay(200);  

  total12 = total12 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin12);
  total12 = total12 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average12_4 = total12 / flexiforceValueReadings;

voltage12 = average12_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 12 is ");  
Serial.println(voltage12);
Serial.println();  
delay(200);  

  total13 = total13 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin13);
  total13 = total13 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average13_4 = total13 / flexiforceValueReadings;
  
voltage13 = average13_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 13 is ");  
Serial.println(voltage13);
Serial.println();  
delay(200);  

  total14 = total14 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin14);
  total14 = total14 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average14_4 = total14 / flexiforceValueReadings;
  
voltage14 = average14_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  

  total15 = total15 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin15);
  total15 = total15 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average15_4 = total15 / flexiforceValueReadings;
  
voltage15 = average15_4 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  

delay(180000);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////0:15
//temp
mlxobjvalue1_3 = mlx_1.readObjectTempC();
Serial.print("3rd set of Pressure Readings"); Serial.println();
Serial.print("Object Temperature of 1st sensor is ");  Serial.println(mlx_1.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue1_3 = mlx_1.readAmbientTempC();
delay(100);
Serial.print("Object Temperature of 1st temp. sensor is ");  Serial.println(mlx_1.readAmbientTempC()); Serial.write('°'); Serial.println();
mlxobjvalue2_3 = mlx_2.readObjectTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue2_3 = mlx_2.readAmbientTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue3_3 = mlx_3.readObjectTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue3_3 = mlx_3.readAmbientTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue4_3 = mlx_4.readObjectTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue4_3 = mlx_4.readAmbientTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue5_3 = mlx_5.readObjectTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue5_3 = mlx_5.readAmbientTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue6_3 = mlx_6.readObjectTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue6_3 = mlx_6.readAmbientTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue7_3 = mlx_7.readObjectTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue7_3 = mlx_7.readAmbientTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue8_3 = mlx_8.readObjectTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue8_3 = mlx_8.readAmbientTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(60000);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//pressure
  total1 = total1 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin1);
  total1 = total1 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }
  average1_5 = total1 / flexiforceValueReadings;

voltage1 = average1_5 * (3.3 / 1023.0);
Serial.print("5th set of Pressure Readings");
Serial.println();
Serial.print("Voltage of FlexiForce 1 is ");  
Serial.println(voltage1);
Serial.println();  
delay(200);

  total2 = total2 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin2);
  total2 = total2 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average2_5 = total2 / flexiforceValueReadings;

voltage2 = average2_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 2 is ");  
Serial.println(voltage2);
Serial.println();  
delay(200);

  total3 = total3 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin3);
  total3 = total3 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average3_5 = total3 / flexiforceValueReadings;

voltage3 = average3_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 3 is ");  
Serial.println(voltage3);
Serial.println();  
delay(200);

  total4 = total4 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin4);
  total4 = total4 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average4_5 = total4 / flexiforceValueReadings;

voltage4 = average4_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 4 is ");  
Serial.println(voltage4);
Serial.println();  
delay(200);

  total5 = total5 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin5);
  total5 = total5 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average5_5 = total5 / flexiforceValueReadings;

voltage5 = average5_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 5 is ");  
Serial.println(voltage5);
Serial.println();  
delay(200);  

  total6 = total6 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin6);
  total6 = total6 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average6_5 = total6 / flexiforceValueReadings;
  
voltage6 = average6_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 6 is ");  
Serial.println(voltage6);
Serial.println();  
delay(200);

  total7 = total7 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin7);
  total7 = total7 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average7_5 = total7 / flexiforceValueReadings;
  
voltage7 = average7_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 7 is ");  
Serial.println(voltage7);
Serial.println();  
delay(200);  

  total8 = total8 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin8);
  total8 = total8 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average8_5 = total8 / flexiforceValueReadings;
  
voltage8 = average8_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 8 is ");  
Serial.println(voltage8);
Serial.println();  
delay(200);  

  total9 = total9 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin9);
  total9 = total9 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average9_5 = total9 / flexiforceValueReadings;
  
voltage9 = average9_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 9 is ");  
Serial.println(voltage9);
Serial.println();  
delay(200);  

  total10 = total10 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin10);
  total10 = total10 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average10_5 = total10 / flexiforceValueReadings;
  
voltage10 = average10_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 10 is ");  
Serial.println(voltage10);
Serial.println();  
delay(200);  

  total11 = total11 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin11);
  total11 = total11 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average11_5 = total11 / flexiforceValueReadings;
  
voltage11 = average11_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 11 is ");  
Serial.println(voltage11);
Serial.println();  
delay(200);  

  total12 = total12 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin12);
  total12 = total12 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average12_5 = total12 / flexiforceValueReadings;

voltage12 = average12_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 12 is ");  
Serial.println(voltage12);
Serial.println();  
delay(200);  

  total13 = total13 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin13);
  total13 = total13 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average13_5 = total13 / flexiforceValueReadings;
  
voltage13 = average13_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 13 is ");  
Serial.println(voltage13);
Serial.println();  
delay(200);  

  total14 = total14 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin14);
  total14 = total14 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average14_5 = total14 / flexiforceValueReadings;
  
voltage14 = average14_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  

  total15 = total15 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin15);
  total15 = total15 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average15_5 = total15 / flexiforceValueReadings;
  
voltage15 = average15_5 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  



/////////////////////////////////////////////////////////////////////////////////////////////////////////total pressure average
ffaverage1 = (average1_1 + average1_2 + average1_3 + average1_4 + average1_5)/ averagereadings;
ffaverage2 = (average2_1 + average2_2 + average2_3 + average2_4 + average2_5)/ averagereadings;
ffaverage3 = (average3_1 + average3_2 + average3_3 + average3_4 + average3_5)/ averagereadings;
ffaverage4 = (average4_1 + average4_2 + average4_3 + average4_4 + average4_5)/ averagereadings;
ffaverage5 = (average5_1 + average5_2 + average5_3 + average5_4 + average5_5)/ averagereadings;
ffaverage6 = (average6_1 + average6_2 + average6_3 + average6_4 + average6_5)/ averagereadings;
ffaverage7 = (average7_1 + average7_2 + average7_3 + average7_4 + average7_5)/ averagereadings;
ffaverage8 = (average8_1 + average8_2 + average8_3 + average8_4 + average8_5)/ averagereadings;
ffaverage9 = (average9_1 + average9_2 + average9_3 + average9_4 + average9_5)/ averagereadings;
ffaverage10 = (average10_1 + average10_2 + average10_3 + average10_4 + average10_5)/ averagereadings;
ffaverage11 = (average11_1 + average11_2 + average11_3 + average11_4 + average11_5)/ averagereadings;
ffaverage12 = (average12_1 + average12_2 + average12_3 + average12_4 + average12_5)/ averagereadings;
ffaverage13 = (average13_1 + average13_2 + average13_3 + average13_4 + average13_5)/ averagereadings;
ffaverage14 = (average14_1 + average14_2 + average14_3 + average14_4 + average14_5)/ averagereadings;
ffaverage15 = (average15_1 + average15_2 + average15_3 + average15_4 + average15_5)/ averagereadings;
///////////////////////////////////////////////////////////////////////////////////////////////////////
if (voltage1 <= 2.49)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid1_out, HIGH);
    delay(10000); //how long is the delay for?
    digitalWrite(solenoid1_out, LOW);
    delay(10000);
    digitalWrite(solenoid1_in, HIGH);
    delay(10000);
    digitalWrite(solenoid1_in, LOW);
    digitalWrite(pumpPin, LOW);
  }
 
if (voltage2 <= 2.47)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid2_out, HIGH);
    delay(10000);
    digitalWrite(solenoid2_out, LOW);
    delay(10000);
    digitalWrite(solenoid2_in, HIGH);
    delay(10000);
    digitalWrite(solenoid2_in, LOW);
    digitalWrite(pumpPin, LOW);
  }


if (voltage3 <= 2.51)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid3_out, HIGH);
    delay(10000);
    digitalWrite(solenoid3_out, LOW);
    delay(10000);
    digitalWrite(solenoid3_in, HIGH);
    delay(10000);
    digitalWrite(solenoid3_in, LOW);
    digitalWrite(pumpPin, LOW);
  }   


if (voltage4 <= 1.85)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid4_out, HIGH);
    delay(10000);
    digitalWrite(solenoid4_out, LOW);
    delay(10000);
    digitalWrite(solenoid4_in, HIGH);
    delay(10000);
    digitalWrite(solenoid4_in, LOW);
    digitalWrite(pumpPin, LOW);
  }
  
if (voltage5 <= 2.07)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid5_out, HIGH);
    delay(10000);
    digitalWrite(solenoid5_out, LOW);
    delay(10000);
    digitalWrite(solenoid5_in, HIGH);
    delay(10000);
    digitalWrite(solenoid5_in, LOW);
    digitalWrite(pumpPin, LOW);
  }


if (voltage6 <= 2.58)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid6_out, HIGH);
    delay(10000);
    digitalWrite(solenoid6_out, LOW);
    delay(10000);
    digitalWrite(solenoid6_in, HIGH);
    delay(10000);
    digitalWrite(solenoid6_in, LOW);
    digitalWrite(pumpPin, LOW);
  }


if (voltage7 <= 2.21)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid7_out, HIGH);
    delay(10000);
    digitalWrite(solenoid7_out, LOW);
    delay(10000);
    digitalWrite(solenoid7_in, HIGH);
    delay(10000);
    digitalWrite(solenoid7_in, LOW);
    digitalWrite(pumpPin, LOW);
  }

if (voltage8 <= 0.47)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid8_out, HIGH);
    delay(10000); 
    digitalWrite(solenoid8_out, LOW);
    delay(10000);
    digitalWrite(solenoid8_in, HIGH);
    delay(10000);
    digitalWrite(solenoid8_in, LOW);
    digitalWrite(pumpPin, LOW);
  }

if (voltage9 <= 2.06);
  {
    digitalWrite(pumpPin, HIGH);
   digitalWrite(solenoid9_out, HIGH);
    delay(10000); 
    digitalWrite(solenoid9_out, LOW);
    delay(10000);
    digitalWrite(solenoid9_in, HIGH);
    delay(10000);
    digitalWrite(solenoid9_in, LOW);
    digitalWrite(pumpPin, LOW);
  }


if (voltage10 <= 2.58)
  {
   digitalWrite(pumpPin, HIGH);
   digitalWrite(solenoid10_out, HIGH);
   delay(10000);
   digitalWrite(solenoid10_out, LOW);
   delay(10000);
   digitalWrite(solenoid10_in, HIGH);
   delay(10000);
   digitalWrite(solenoid10_in, LOW);
   digitalWrite(pumpPin, LOW);
   
  }

if (voltage11 <= 1.81)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid11_out, HIGH);
    delay(10000);
    digitalWrite(solenoid11_out, LOW);
    delay(10000);
    digitalWrite(solenoid11_in, HIGH);
    delay(10000);
    digitalWrite(solenoid11_in, LOW);
    digitalWrite(pumpPin, LOW);
  }

if (voltage12 <= 2.75)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid12_out, HIGH);
    delay(10000);
    digitalWrite(solenoid12_out, LOW);
    delay(10000);
    digitalWrite(solenoid12_in, HIGH);
    delay(10000);
    digitalWrite(solenoid12_in, LOW);
    digitalWrite(pumpPin, LOW);
  }

if (voltage13 <= 1.59)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid13_out, HIGH);
    delay(10000);
    digitalWrite(solenoid13_out, LOW);
    delay(10000);
    digitalWrite(solenoid13_in, HIGH);
    delay(10000);
    digitalWrite(solenoid13_in, LOW);
    digitalWrite(pumpPin, LOW);
  }


if (voltage14 <= 2.68)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid14_out, HIGH);
    delay(10000);
    digitalWrite(solenoid14_out, LOW);
    delay(10000);
    digitalWrite(solenoid14_in, HIGH);
    delay(10000);
    digitalWrite(solenoid14_in, LOW);
    digitalWrite(pumpPin, LOW);
  }

if (voltage15 <= 2.69)
  {
    digitalWrite(pumpPin, HIGH);
    digitalWrite(solenoid15_out, HIGH);
    delay(10000);
    digitalWrite(solenoid15_out, LOW);
    delay(10000);
    digitalWrite(solenoid15_in, HIGH);
    delay(10000);
    digitalWrite(solenoid15_in, LOW);
    digitalWrite(pumpPin, LOW);
  }   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////0:18
  total1 = total1 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin1);
  total1 = total1 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }
  average1_1 = total1 / flexiforceValueReadings;

voltage1 = average1_1 * (3.3 / 1023.0);
Serial.print("5th set of Pressure Readings"); Serial.println();
Serial.println();
Serial.print("Voltage of FlexiForce 1 is ");  
Serial.println(voltage1);
Serial.println();  
delay(200);

  total2 = total2 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin2);
  total2 = total2 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average2_1 = total2 / flexiforceValueReadings;

voltage2 = average2_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 2 is ");  
Serial.println(voltage2);
Serial.println();  
delay(200);

  total3 = total3 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin3);
  total3 = total3 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average3_1 = total3 / flexiforceValueReadings;

voltage3 = average3_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 3 is ");  
Serial.println(voltage3);
Serial.println();  
delay(200);

  total4 = total4 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin4);
  total4 = total4 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average4_1 = total4 / flexiforceValueReadings;

voltage4 = average4_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 4 is ");  
Serial.println(voltage4);
Serial.println();  
delay(200);

  total5 = total5 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin5);
  total5 = total5 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average5_1 = total5 / flexiforceValueReadings;

voltage5 = average5_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 5 is ");  
Serial.println(voltage5);
Serial.println();  
delay(200);  

  total6 = total6 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin6);
  total6 = total6 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average6_1 = total6 / flexiforceValueReadings;
  
voltage6 = average6_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 6 is ");  
Serial.println(voltage6);
Serial.println();  
delay(200);

  total7 = total7 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin7);
  total7 = total7 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average7_1 = total7 / flexiforceValueReadings;
  
voltage7 = average7_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 7 is ");  
Serial.println(voltage7);
Serial.println();  
delay(200);  

  total8 = total8 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin8);
  total8 = total8 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average8_1 = total8 / flexiforceValueReadings;
  
voltage8 = average8_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 8 is ");  
Serial.println(voltage8);
Serial.println();  
delay(200);  

  total9 = total9 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin9);
  total9 = total9 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average9_1 = total9 / flexiforceValueReadings;
  
voltage9 = average9_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 9 is ");  
Serial.println(voltage9);
Serial.println();  
delay(200);  

  total10 = total10 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin10);
  total10 = total10 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average10_1 = total10 / flexiforceValueReadings;
  
voltage10 = average10_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 10 is ");  
Serial.println(voltage10);
Serial.println();  
delay(200);  

  total11 = total11 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin11);
  total11 = total11 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average11_1 = total11 / flexiforceValueReadings;
  
voltage11 = average11_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 11 is ");  
Serial.println(voltage11);
Serial.println();  
delay(200);  

  total12 = total12 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin12);
  total12 = total12 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average12_1 = total12 / flexiforceValueReadings;

voltage12 = average12_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 12 is ");  
Serial.println(voltage12);
Serial.println();  
delay(200);  

  total13 = total13 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin13);
  total13 = total13 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average13_1 = total13 / flexiforceValueReadings;
  
voltage13 = average13_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 13 is ");  
Serial.println(voltage13);
Serial.println();  
delay(200);  

  total14 = total14 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin14);
  total14 = total14 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average14_1 = total14 / flexiforceValueReadings;
  
voltage14 = average14_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 14 is ");  
Serial.println(voltage14);
Serial.println();  
delay(200);  

  total15 = total15 - readings[readIndex];
  readings[readIndex] = analogRead(inputPin15);
  total15 = total15 + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= flexiforceValueReadings) {
    readIndex = 0;
  }  
  average15_1 = total15 / flexiforceValueReadings;

voltage15 = average15_1 * (3.3 / 1023.0);
Serial.print("Voltage of FlexiForce 15 is ");  
Serial.println(voltage15);
Serial.println();  
delay(200);  

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////0:20
//temp
mlxobjvalue1_4 = mlx_1.readObjectTempC();
Serial.print("3rd set of Pressure Readings"); Serial.println();
Serial.print("Object Temperature of 1st sensor is ");  Serial.println(mlx_1.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue1_4 = mlx_1.readAmbientTempC();
delay(100);
Serial.print("Object Temperature of 1st temp. sensor is ");  Serial.println(mlx_1.readAmbientTempC()); Serial.write('°'); Serial.println();
mlxobjvalue2_4 = mlx_2.readObjectTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue2_4 = mlx_2.readAmbientTempC();
Serial.print("Object Temperature of 2nd temp. sensor is ");  Serial.println(mlx_2.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue3_4 = mlx_3.readObjectTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue3_4 = mlx_3.readAmbientTempC();
Serial.print("Object Temperature of 3rd temp. sensor is ");  Serial.println(mlx_3.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue4_4 = mlx_4.readObjectTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue4_4 = mlx_4.readAmbientTempC();
Serial.print("Object Temperature of 4th temp. sensor is ");  Serial.println(mlx_4.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue5_4 = mlx_5.readObjectTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue5_4 = mlx_5.readAmbientTempC();
Serial.print("Object Temperature of 5th temp. sensor is ");  Serial.println(mlx_5.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue6_4 = mlx_6.readObjectTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue6_4 = mlx_6.readAmbientTempC();
Serial.print("Object Temperature of 6th temp. sensor is ");  Serial.println(mlx_6.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue7_4 = mlx_7.readObjectTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue7_4 = mlx_7.readAmbientTempC();
Serial.print("Object Temperature of 7th temp. sensor is ");  Serial.println(mlx_7.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
mlxobjvalue8_4 = mlx_8.readObjectTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readObjectTempC()); Serial.write('°'); Serial.println(); 
delay(100);
mlxambvalue8_4 = mlx_8.readAmbientTempC();
Serial.print("Object Temperature of 8th temp. sensor is ");  Serial.println(mlx_8.readAmbientTempC()); Serial.write('°'); Serial.println();
delay(100);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//temp average
mlxobjaverage1 = (mlxobjvalue1_1 + mlxobjvalue1_2 + mlxobjvalue1_3 + mlxobjvalue1_4 + mlxobjvalue1_5)/ mlxValuereadings;
mlxambaverage1 = (mlxambvalue1_1 + mlxambvalue1_2 + mlxambvalue1_3 + mlxambvalue1_4 + mlxambvalue1_5)/ mlxValuereadings;
mlxobjaverage2 = (mlxobjvalue2_1 + mlxobjvalue2_2 + mlxobjvalue2_3 + mlxobjvalue2_4 + mlxobjvalue2_5)/ mlxValuereadings;
mlxambaverage2 = (mlxambvalue2_1 + mlxambvalue2_2 + mlxambvalue2_3 + mlxambvalue2_4 + mlxambvalue2_5)/ mlxValuereadings;
mlxobjaverage3 = (mlxobjvalue3_1 + mlxobjvalue3_2 + mlxobjvalue3_3 + mlxobjvalue3_4 + mlxobjvalue3_5)/ mlxValuereadings;
mlxambaverage3 = (mlxambvalue3_1 + mlxambvalue3_2 + mlxambvalue3_3 + mlxambvalue3_4 + mlxambvalue3_5)/ mlxValuereadings;
mlxobjaverage4 = (mlxobjvalue4_1 + mlxobjvalue4_2 + mlxobjvalue4_3 + mlxobjvalue4_4 + mlxobjvalue4_5)/ mlxValuereadings;
mlxambaverage4 = (mlxambvalue4_1 + mlxambvalue4_2 + mlxambvalue4_3 + mlxambvalue4_4 + mlxambvalue4_5)/ mlxValuereadings;
mlxobjaverage5 = (mlxobjvalue5_1 + mlxobjvalue5_2 + mlxobjvalue5_3 + mlxobjvalue5_4 + mlxobjvalue5_5)/ mlxValuereadings;
mlxambaverage5 = (mlxambvalue5_1 + mlxambvalue5_2 + mlxambvalue5_3 + mlxambvalue5_4 + mlxambvalue5_5)/ mlxValuereadings;
mlxobjaverage6 = (mlxobjvalue6_1 + mlxobjvalue6_2 + mlxobjvalue6_3 + mlxobjvalue6_4 + mlxobjvalue6_5)/ mlxValuereadings;
mlxambaverage6 = (mlxambvalue6_1 + mlxambvalue6_2 + mlxambvalue6_3 + mlxambvalue6_4 + mlxambvalue6_5)/ mlxValuereadings;
mlxobjaverage7 = (mlxobjvalue7_1 + mlxobjvalue7_2 + mlxobjvalue7_3 + mlxobjvalue7_4 + mlxobjvalue7_5)/ mlxValuereadings;
mlxambaverage7 = (mlxambvalue7_1 + mlxambvalue7_2 + mlxambvalue7_3 + mlxambvalue7_4 + mlxambvalue7_5)/ mlxValuereadings;
mlxobjaverage8 = (mlxobjvalue8_1 + mlxobjvalue8_2 + mlxobjvalue8_3 + mlxobjvalue8_4 + mlxobjvalue8_5)/ mlxValuereadings;
mlxambaverage8 = (mlxambvalue8_1 + mlxambvalue8_2 + mlxambvalue8_3 + mlxambvalue8_4 + mlxambvalue8_5)/ mlxValuereadings;

///////////////

//if (newtemp1-oldtemp1 >= 1 || newtemp2-oldtemp2 >= 1 || newtemp3-oldtemp3 >= 1 || newtemp4-oldtemp4 >= 1 || newtemp5-oldtemp5 >= 1 || newtemp6-oldtemp6 >= 1 || newtemp7-oldtemp7 >= 1 ||
//    newtemp8-oldtemp8 >= 1)
//{
//  digitalWrite(fanPin, HIGH) // turn fan on 
//  delay(180000) //how long are we keeping the fan on for?  *set to 3 mins as an arbitrary time for testing
//  digitalWrite(fan, LOW)
//}


//If the temperature is above 32 then turn fan on!
else if (mlxobjaverage1 >= 32 || mlxobjaverage2 >= 32 || mlxobjaverage3 >= 32 || mlxobjaverage4 >= 32 || mlxobjaverage5 >= 32 || mlxobjaverage6 >= 32 ||mlxobjaverage7 >= 32 || mlxobjaverage8 >= 32 )

{
  digitalWrite(fanPin, HIGH) // turn fan on 
  delay(180000) //how long are we keeping the fan on for? * can we keep it on until it gets to certain point *set to 3 mins
  digitalWrite(fan, LOW)
}

