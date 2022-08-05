#include "Romi_Motor_Power.h"
/* Defines pin configuration of robot */
#include "RSLK_Pins.h"
#include "SimpleRSLK.h"

Romi_Motor_Power left_motor;
Romi_Motor_Power right_motor;
int motorSpeed = 10;

void setup() {
  Serial.begin(115200);

  left_motor.begin(MOTOR_L_SLP_PIN, MOTOR_L_DIR_PIN, MOTOR_L_PWM_PIN);
  right_motor.begin(MOTOR_R_SLP_PIN, MOTOR_R_DIR_PIN, MOTOR_R_PWM_PIN);

  pinMode(BP_SW_PIN_0,INPUT_PULLUP);
  pinMode(BP_SW_PIN_1,INPUT_PULLUP);
  pinMode(BP_SW_PIN_2,INPUT_PULLUP);
  pinMode(BP_SW_PIN_3,INPUT_PULLUP);
  pinMode(BP_SW_PIN_4,INPUT_PULLUP);
  pinMode(BP_SW_PIN_5,INPUT_PULLUP);

  /* Left button on Launchpad */
  pinMode(LP_LEFT_BTN, INPUT_PULLUP);
  /* Red led in rgb led */
  pinMode(RED_LED,OUTPUT);
}

void loop() {


  /* Enable both motors */
  left_motor.enableMotor();
  right_motor.enableMotor();

  /* Set both motors direction to forward */
  left_motor.directionForward();
  right_motor.directionBackward();

  delay(2000);

  /* Set motors speed to 10% of max value */
  left_motor.setSpeed(20);
  right_motor.setSpeed(20);

  delay(2000);

  


}
