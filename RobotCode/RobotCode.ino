#include <Sonar.h>
#include <Motor.h>
#include <Buzzer.h>

// Constants for Sonar
#define sonarA_ECHO     44
#define sonarA_TRIG     45
#define sonarB_ECHO     46
#define sonarB_TRIG     47
#define sonarC_ECHO     48 
#define sonarC_TRIG     49
#define sonarD_ECHO     50
#define sonarD_TRIG     51
#define sonarE_ECHO     52
#define sonarE_TRIG     53
// Sonar Extras
#define sonarA_NTFY     23
#define sonarB_NTFY     25
#define sonarC_NTFY     27
#define sonarD_NTFY     29
#define sonarE_NTFY     31
#define MAX_DISTANCE    3000
#define SOUND_FACTOR    59

// Constants for Motors
#define L_Motor_A       3
#define L_Motor_B       4
#define R_Motor_A       5
#define R_Motor_B       6
#define L_Motor_EN      2
#define R_Motor_EN      7
#define L_Motor_Speed   150
#define R_Motor_Speed   150

// Constants for Buzzer
#define Buzzer_Pin      8

// Sonar Sensors
Sonar sonarA(sonarA_ECHO, sonarA_TRIG, MAX_DISTANCE, SOUND_FACTOR, sonarA_NTFY);
Sonar sonarB(sonarB_ECHO, sonarB_TRIG, MAX_DISTANCE, SOUND_FACTOR, sonarB_NTFY);
Sonar sonarC(sonarC_ECHO, sonarC_TRIG, MAX_DISTANCE, SOUND_FACTOR, sonarC_NTFY);
Sonar sonarD(sonarD_ECHO, sonarD_TRIG, MAX_DISTANCE, SOUND_FACTOR, sonarD_NTFY);
Sonar sonarE(sonarE_ECHO, sonarE_TRIG, MAX_DISTANCE, SOUND_FACTOR, sonarE_NTFY);
// Motors
Motor leftMotor(L_Motor_A, L_Motor_B, L_Motor_EN, L_Motor_Speed);
Motor rightMotor(R_Motor_A, R_Motor_B, R_Motor_EN, R_Motor_Speed);
// Buzzer
Buzzer buzzer(Buzzer_Pin);

void setup() {
  delay(100);
  buzzer.startTone();
  // Turn on some decorative lights
}

void loop() {
  sonarA.near(10);
  sonarB.near(10);
  sonarC.near(10);
  sonarD.near(10);
  sonarE.near(10);
  delay(100);
  /*
  // Move forward for 2 seconds
  leftMotor.speedUp(100);
  rightMotor.speedUp(100);
  delay(3000);
  // Play alert tone
  buzzer.alertTone();
  // Stop
  rightMotor.stopNow();
  leftMotor.stopNow();
  delay(5000);
  // Play alter tone
  buzzer.alertTone();
  // Reverse for 2 seconds
  leftMotor.reverse(100);
  rightMotor.reverse(100);
  delay(3000);
  // Play alert tone
  buzzer.alertTone();
  // Stop
  rightMotor.stopNow();
  leftMotor.stopNow();
  delay(5000);*/
  /*
  sonarA.near(10);
  sonarB.near(10);
  sonarC.near(10);
  sonarD.near(10);
  sonarE.near(10);  
  delay(100);*/
}
