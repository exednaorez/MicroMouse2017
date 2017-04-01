#ifndef PIN_ASSIGNMENTS_H
#define PIN_ASSIGNMENTS_H

#include "motor.h"
#include "encoder.h"
#include "ir_sensor.h"

AnalogIn battery(PA_3);
Serial pc(PA_9, PA_10);

// Motor
Motor leftMotor(PC_8, PC_7); // PB7, PB6
Motor rightMotor(PB_9, PB_8); // PB9, PB8

// Encoders
Encoder leftEncoder(PB_3, PB_4); //PC9, PC8
Encoder rightEncoder(PB_7, PB_6); //PA1, PA0

// IRSensors 
IRSensor leftIR(PC_3, PC_5); //PC7,pc5
IRSensor rightIR(PH_0, PA_4);//pb10,pa4
IRSensor rightDiagonalIR(PH_1, PA_5);//pa8,pa5
IRSensor rightFrontIR(PC_0, PA_6);//pb0,pa6
IRSensor leftFrontIR(PC_1, PA_7);//pb1, pa7
IRSensor leftDiagonalIR(PC_4, PC_2);//pc6,pc4

#endif
