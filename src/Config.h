#ifndef _CONFIG_H
#define _CONFIG_H

#define DEBUG

#include <Arduino.h>
#include <TaskSchedulerDeclarations.h>

#define NORTH_SENSOR A0
#define SOUTH_SENSOR A3
#define EAST_SENSOR A1
#define WEST_SENSOR A2
#define LED 13

#define NORTH_SWITCH 2
#define SOUTH_SWITCH 3
#define EAST_SWITCH 4
#define WEST_SWITCH 5
#define NORTH_LIMIT_SWITCH 6
#define SOUTH_LIMIT_SWITCH 7

#define EPSILON 30
#define MOTOR_MOVEMENT_TIME 2 * TASK_SECOND

#define SENSOR_CHECK_INTERVAL 5 * TASK_SECOND
#define COMMUNICATION_INTERVAL 10 * TASK_SECOND

#endif