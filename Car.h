#ifndef Car_H
#define Car_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Write_message(void);

void Read_message(void);
// 结构体用于存储底盘信息
struct Chassis
{
    string chassisID;
    string model;
    double wheelbase;
    double track;
    double groundClearance;
    double minimumTurningRadius;
    string driveType;
    double maxRange;
    string tires[4];
};

// 结构体用于存储AGX套件信息
struct AGXKit
{
    string model;
    double aiPerformance;
    int cudaCores;
    int tensorCores;
    double memory;
    double storage;
};

// 结构体用于存储双目摄像头信息
struct StereoCamera
{
    string model;
    string camera;
    string rgbResolution;
    int rgbFrameRate;
    string fov;
    int depthFrameRate;
};

// 结构体用于存储多线激光雷达信息
struct Lidar
{
    string model;
    int channels;
    double range;
    double powerConsumption;
};

// 结构体用于存储9轴陀螺仪信息
struct Gyroscope
{
    string model;
    string manufacturer;
};

// 结构体用于存储液晶显示屏信息
struct Display
{
    double size;
    string model;
};

// 结构体用于存储电池模块信息
struct Battery
{
    string parameters;
    int externalVoltage;
    double chargingTime;
};

// 结构体用于存储学生信息
struct Student
{
    string studentID;
    string studentName;
};

// 结构体用于存储智能小车信息
struct SmartCar
{
    string carID;
    Chassis chassis;
    AGXKit agxKit;
    StereoCamera stereoCamera;
    Lidar lidar;
    Gyroscope gyroscope;
    Display display;
    Battery battery;
    Student studentInfo;
};
#endif