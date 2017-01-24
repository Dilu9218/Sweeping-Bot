#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int INA, int INB, int EN, int BaseSpeed) {
	// Initiate instance variables
	_INA = INA;
	_INB = INB;
	_EN = EN;
	_BaseSpeed = BaseSpeed;
	// Initiate Motor pins
	initiatePins();
}

void Motor::initiatePins() {
	// Initiate Motor pins
	pinMode(_INA, OUTPUT);
	pinMode(_INB, OUTPUT);
	pinMode(_EN, OUTPUT);	
}

void Motor::stopNow() {
	// Make motor pins HIGH
	digitalWrite(_INA, HIGH);
	digitalWrite(_INB, HIGH);
	// Disable the motor
	digitalWrite(_EN, LOW);
}