// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: discovery6

#include <Arduino.h>
#include "ui.h"
#include <SmartDrive.h>

SmartDrive smd = SmartDrive(SmartDrive_DefaultAddress);

bool STOP01 =  true;


void run01right(lv_event_t * e)
{
	// Your code here
    while (STOP01)
    {
    smd.Run_Unlimited(SmartDrive_Motor_ID_1, SmartDrive_Dir_Reverse, 90);
    }
    STOP01 = true;
}

void run02right(lv_event_t * e)
{
	// Your code here
    smd.Run_Unlimited(SmartDrive_Motor_ID_2, SmartDrive_Dir_Reverse, 90);
}

void stopmotor01(lv_event_t * e)
{
	// Your code here
    STOP01 = false;
    smd.StopMotor(SmartDrive_Motor_ID_1, SmartDrive_Action_Brake);
    STOP01 = true;

}

void run01left(lv_event_t * e)
{
	// Your code here
    while (STOP01)
    {
    smd.Run_Unlimited(SmartDrive_Motor_ID_1, SmartDrive_Dir_Forward, 90);
    }
    STOP01 = true;
}

void run02left(lv_event_t * e)
{
	// Your code here
    smd.Run_Unlimited(SmartDrive_Motor_ID_2, SmartDrive_Dir_Forward, 90);
}

void stopmotor02(lv_event_t * e)
{
	// Your code here
    smd.StopMotor(SmartDrive_Motor_ID_2, SmartDrive_Action_Brake);
}
