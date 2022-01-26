const int temp_pin = A0;
const int heater_pin = 8;
const int fan_pin = 9;
float min_temp = 20, 
float max_temp = 25;

#include<LiquidCrystal.h>

LiquidCrystal LCD (7,6,5,4,3,2);

void setup(){
  
LCD.begin(16,2);
  pinMode(heater_pin,OUTPUT);
  pinMode(fan_pin,OUTPUT);
  
  LCD.print("Room Temp(C): ");
  LCD.setCursor(2,1);
  LCD.print(min_temp); LCD.print("-");LCD.print(max_temp);
  
  delay(2000);
}

void loop(){
  float eqv_volt,sensor_temp;
  eqv_volt = analogRead(temp_pin)*5.0/1023;
  sensor_temp = 100.0*eqv_volt-50.0;
  
  LCD.clear();
  LCD.print("Sensor Reading: ");
  LCD.setCursor(2,1);
  LCD.print(sensor_temp); LCD.print(" C");
   
  delay(2000);
  
  if(sensor_temp>max_temp){
    LCD.clear();
    LCD.print("Temp is High!");
    LCD.setCursor(0,1); LCD.print("Turn on Fan!");
    for(int i=0; i<=255; i++){
      analogWrite(fan_pin,i);
    }
    delay(2000);
    
    LCD.clear();
    LCD.print("Temp is Ok!");
    LCD.setCursor(0,1); LCD.print("Turn off Fan!");
    for(int i=255; i>=0; i--){
      analogWrite(fan_pin,i);
    }
    delay(2000);
  }
  else if(sensor_temp<min_temp){
    
    LCD.clear();
    LCD.print("Temp is Low!");
    LCD.setCursor(0,1);
    LCD.print("Turn on Heater!");
    
    digitalWrite(heater_pin,HIGH);
    
    delay(3000);
    
    LCD.clear();
    LCD.print("Temp is Ok!");
    LCD.setCursor(0,1);
    LCD.print("Turn off Heater!");
    
    delay(1000);
    
    digitalWrite(heater_pin,LOW);
    
    LCD.clear();
  }
    else if(sensor_temp<max_temp && sensor_temp>min_temp){
    
    LCD.clear();
    LCD.print("Temp is Normal!");
    LCD.setCursor(2,1);
    LCD.print("Turn off all!");
    
    delay(1000);
    LCD.clear();
    }
  else{
    LCD.clear();
    LCD.print("Something went wrong!");
    LCD.setCursor(2,1);
    LCD.print("Wrong in circuit!");
    delay(1000);
    LCD.clear();
  }
  delay(1000);
}
    
      
    
    
    
    
    
