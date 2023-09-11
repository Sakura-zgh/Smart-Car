#ifndef Car_H
#define Car_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Write_message();
void Read_message();
// 定义底盘类
class Chassis
{
public:
    string chassisID;
    string model;
    double wheelbase;
    double track;
    double groundClearance;
    double minimumTurningRadius;
    string driveType;
    double maxRange;
    string tires[4];

    void setChassisInfo();
    void printChassisInfo();
    void saveChassisInfo(ofstream &outFile);
};

// 定义AGX套件类
class AGXKit
{
public:
    string model;
    double aiPerformance;
    int cudaCores;
    int tensorCores;
    double memory;
    double storage;

    void setAGXKitInfo();
    void printAGXKitInfo();
    void saveAGXKitInfo(ofstream &outFile);
};

// 定义双目摄像头类
class StereoCamera
{
public:
    string model;
    string camera;
    string rgbResolution;
    int rgbFrameRate;
    string fov;
    int depthFrameRate;

    void setStereoCameraInfo();
    void printStereoCameraInfo();
    void saveStereoCameraInfo(ofstream &outFile);
};

// 定义其他模块类（9轴陀螺仪、多线激光雷达、液晶显示屏、电池模块等）的代码结构类似，这里只提供部分代码。

// 定义9轴陀螺仪类
class Gyroscope
{
public:
    string model;
    string manufacturer;

    void setGyroscopeInfo();
    void printGyroscopeInfo();
    void saveGyroscopeInfo(ofstream &outFile);
};

// 定义多线激光雷达类
class Lidar
{
public:
    string model;
    int channels;
    double range;
    double powerConsumption;

    void setLidarInfo();
    void printLidarInfo();
    void saveLidarInfo(ofstream &outFile);
};

// 定义液晶显示屏类
class Display
{
public:
    double size;
    string model;

    void setDisplayInfo();
    void printDisplayInfo();
    void saveDisplayInfo(ofstream &outFile);
};

// 定义电池模块类
class Battery
{
public:
    string parameters;
    int externalVoltage;
    double chargingTime;

    void setBatteryInfo();
    void printBatteryInfo();
    void saveBatteryInfo(ofstream &outFile);
};

// 定义学生信息类
class StudentInfo
{
public:
    string studentID;
    string studentName;

    void setStudentInfo();
    void printStudentInfo();
    void saveStudentInfo(ofstream &outFile);
};

// 定义智能小车类
class SmartCar
{
public:
    string carID;
    Chassis chassis;
    AGXKit agxKit;
    StereoCamera stereoCamera;
    Gyroscope gyroscope;
    Lidar lidar;
    Display display;
    Battery battery;
    StudentInfo studentInfo;

    void setSmartCarInfo();
    void printSmartCarInfo();
    void saveSmartCarInfo(ofstream &outFile);
};
#endif