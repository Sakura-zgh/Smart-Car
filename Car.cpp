#include "Car.h"
extern SmartCar cars[10];

void Read_message(void)
{
    // 打开文件并按要求显示小车信息
    int currentCar = 0;
    char choice;
    bool press_flag = true;
    do
    {
        ifstream inputFile("smartcars.txt");
        if (inputFile.is_open())
        {
            if (currentCar == 0)
            {
                cout << "Press 'n' to view next car information. Press q to exit\n";
            }
            else if (currentCar == 9)
            {
                cout << "Press 'p' to view previous car information. Press q to exit\n";
            }
            else
            {
                cout << "Press 'n' to view next car information or 'p' to view previous car information. Press q to exit\n";
            }

            cin >> choice;
            if (choice == 'n' && currentCar < 9)
            {
                currentCar++;
                press_flag = true;
            }
            else if (choice == 'p' && currentCar > 0)
            {
                currentCar--;
                press_flag = true;
            }
            else if ((choice == 'p' && currentCar == 0) || (choice == 'n' && currentCar == 9))
            {
                press_flag = false;
                cout << "Unavailable Input" << endl;
            }

            if (press_flag == true)
            {
                cout << "Car Information - Car " << (currentCar + 1) << ":\n";
                string line;
                for (int i = 0, currentLine = 0; i < (currentCar + 1) * 35; i++)
                {
                    getline(inputFile, line);
                    currentLine++;
                    if (currentLine > (currentCar * 35))
                        cout << line << "\n";
                }
            }
            inputFile.close();
        }
        else
        {
            cout << "Unable to open the file for reading.\n";
        }
    } while (choice == 'n' || choice == 'p');
}

void Write_message()
{
}
void Chassis::setChassisInfo()
{
    cout << "Chassis ID: ";
    cin.ignore();
    getline(cin, chassisID);
    cout << "Chassis Model: ";
    getline(cin, model);
    cout << "Chassis Wheelbase (mm): ";
    cin >> wheelbase;
    cout << "Chassis Track (mm): ";
    cin >> track;
    cout << "Chassis Ground Clearance (mm): ";
    cin >> groundClearance;
    cout << "Chassis Minimum Turning Radius (m): ";
    cin >> minimumTurningRadius;
    cout << "Chassis Drive Type: ";
    cin.ignore();
    getline(cin, driveType);
    cout << "Chassis Max Range (KM): ";
    cin >> maxRange;
    cin.ignore();
    cout << "Chassis Tires (4 tires):\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Tire " << (i + 1) << " Model: ";
        getline(cin, tires[i]);
    }
}

void Chassis::printChassisInfo()
{
    cout << "Chassis ID: " << chassisID << "\n";
    cout << "Chassis Model: " << model << "\n";
    cout << "Chassis Wheelbase (mm): " << wheelbase << "\n";
    cout << "Chassis Track (mm): " << track << "\n";
    cout << "Chassis Ground Clearance (mm): " << groundClearance << "\n";
    cout << "Chassis Minimum Turning Radius (m): " << minimumTurningRadius << "\n";
    cout << "Chassis Drive Type: " << driveType << "\n";
    cout << "Chassis Max Range (KM): " << maxRange << "\n";
    cout << "Chassis Tires: ";
    for (int i = 0; i < 4; i++)
    {
        cout << tires[i];
        if (i < 3)
        {
            cout << ", ";
        }
    }
    cout << "\n";
}

void Chassis::saveChassisInfo(ofstream &outFile)
{
    outFile << "Chassis ID: " << chassisID << "\n";
    outFile << "Chassis Model: " << model << "\n";
    outFile << "Chassis Wheelbase (mm): " << wheelbase << "\n";
    outFile << "Chassis Track (mm): " << track << "\n";
    outFile << "Chassis Ground Clearance (mm): " << groundClearance << "\n";
    outFile << "Chassis Minimum Turning Radius (m): " << minimumTurningRadius << "\n";
    outFile << "Chassis Drive Type: " << driveType << "\n";
    outFile << "Chassis Max Range (KM): " << maxRange << "\n";
    outFile << "Chassis Tires: ";
    for (int i = 0; i < 4; i++)
    {
        outFile << tires[i];
        if (i < 3)
        {
            outFile << ", ";
        }
    }
    outFile << "\n";
}

void AGXKit::setAGXKitInfo()
{
    cout << "AGX Kit Model: ";
    cin.ignore();
    getline(cin, model);
    cout << "AGX Kit AI Performance (TOPS): ";
    cin >> aiPerformance;
    cout << "AGX Kit CUDA Cores: ";
    cin >> cudaCores;
    cout << "AGX Kit Tensor Cores: ";
    cin >> tensorCores;
    cout << "AGX Kit Memory (GB): ";
    cin >> memory;
    cout << "AGX Kit Storage (GB): ";
    cin >> storage;
}

void AGXKit::printAGXKitInfo()
{
    cout << "AGX Kit Model: " << model << "\n";
    cout << "AGX Kit AI Performance (TOPS): " << aiPerformance << "\n";
    cout << "AGX Kit CUDA Cores: " << cudaCores << "\n";
    cout << "AGX Kit Tensor Cores: " << tensorCores << "\n";
    cout << "AGX Kit Memory (GB): " << memory << "\n";
    cout << "AGX Kit Storage (GB): " << storage << "\n";
}

void AGXKit::saveAGXKitInfo(ofstream &outFile)
{
    outFile << "AGX Kit Model: " << model << "\n";
    outFile << "AGX Kit AI Performance (TOPS): " << aiPerformance << "\n";
    outFile << "AGX Kit CUDA Cores: " << cudaCores << "\n";
    outFile << "AGX Kit Tensor Cores: " << tensorCores << "\n";
    outFile << "AGX Kit Memory (GB): " << memory << "\n";
    outFile << "AGX Kit Storage (GB): " << storage << "\n";
}
void StereoCamera::setStereoCameraInfo()
{
    cout << "Stereo Camera Model: ";
    cin.ignore();
    getline(cin, model);
    cout << "Stereo Camera Camera: ";
    getline(cin, camera);
    cout << "Stereo Camera RGB Resolution: ";
    getline(cin, rgbResolution);
    cout << "Stereo Camera RGB Frame Rate: ";
    cin >> rgbFrameRate;
    cout << "Stereo Camera FOV: ";
    cin.ignore();
    getline(cin, fov);
    cout << "Stereo Camera Depth Frame Rate: ";
    cin >> depthFrameRate;
}

void StereoCamera::printStereoCameraInfo()
{
    cout << "Stereo Camera Model: " << model << "\n";
    cout << "Stereo Camera Camera: " << camera << "\n";
    cout << "Stereo Camera RGB Resolution: " << rgbResolution << "\n";
    cout << "Stereo Camera RGB Frame Rate: " << rgbFrameRate << "\n";
    cout << "Stereo Camera FOV: " << fov << "\n";
    cout << "Stereo Camera Depth Frame Rate: " << depthFrameRate << "\n";
}

void StereoCamera::saveStereoCameraInfo(ofstream &outFile)
{
    outFile << "Stereo Camera Model: " << model << "\n";
    outFile << "Stereo Camera Camera: " << camera << "\n";
    outFile << "Stereo Camera RGB Resolution: " << rgbResolution << "\n";
    outFile << "Stereo Camera RGB Frame Rate: " << rgbFrameRate << "\n";
    outFile << "Stereo Camera FOV: " << fov << "\n";
    outFile << "Stereo Camera Depth Frame Rate: " << depthFrameRate << "\n";
}
void Gyroscope::setGyroscopeInfo()
{
    cout << "Gyroscope Model: ";
    cin.ignore();
    getline(cin, model);
    cout << "Gyroscope Manufacturer: ";
    getline(cin, manufacturer);
}

void Gyroscope::printGyroscopeInfo()
{
    cout << "Gyroscope Model: " << model << "\n";
    cout << "Gyroscope Manufacturer: " << manufacturer << "\n";
}

void Gyroscope::saveGyroscopeInfo(ofstream &outFile)
{
    outFile << "Gyroscope Model: " << model << "\n";
    outFile << "Gyroscope Manufacturer: " << manufacturer << "\n";
}

void Lidar::setLidarInfo()
{
    cout << "Lidar Model: ";
    cin.ignore();
    getline(cin, model);
    cout << "Lidar Channels: ";
    cin >> channels;
    cout << "Lidar Range (m): ";
    cin >> range;
    cout << "Lidar Power Consumption (W): ";
    cin >> powerConsumption;
}

void Lidar::printLidarInfo()
{
    cout << "Lidar Model: " << model << "\n";
    cout << "Lidar Channels: " << channels << "\n";
    cout << "Lidar Range (m): " << range << "\n";
    cout << "Lidar Power Consumption (W): " << powerConsumption << "\n";
}

void Lidar::saveLidarInfo(ofstream &outFile)
{
    outFile << "Lidar Model: " << model << "\n";
    outFile << "Lidar Channels: " << channels << "\n";
    outFile << "Lidar Range (m): " << range << "\n";
    outFile << "Lidar Power Consumption (W): " << powerConsumption << "\n";
}

void Display::setDisplayInfo()
{
    cout << "Display Size (inches): ";
    cin >> size;
    cout << "Display Model: ";
    cin.ignore();
    getline(cin, model);
}

void Display::printDisplayInfo()
{
    cout << "Display Size (inches): " << size << "\n";
    cout << "Display Model: " << model << "\n";
}

void Display::saveDisplayInfo(ofstream &outFile)
{
    outFile << "Display Size (inches): " << size << "\n";
    outFile << "Display Model: " << model << "\n";
}
void Battery::setBatteryInfo()
{
    cout << "Battery Parameters: ";
    cin.ignore();
    getline(cin, parameters);
    cout << "Battery External Voltage (V): ";
    cin >> externalVoltage;
    cout << "Battery Charging Time (H): ";
    cin >> chargingTime;
}

void Battery::printBatteryInfo()
{
    cout << "Battery Parameters: " << parameters << "\n";
    cout << "Battery External Voltage (V): " << externalVoltage << "\n";
    cout << "Battery Charging Time (H): " << chargingTime << "\n";
}

void Battery::saveBatteryInfo(ofstream &outFile)
{
    outFile << "Battery Parameters: " << parameters << "\n";
    outFile << "Battery External Voltage (V): " << externalVoltage << "\n";
    outFile << "Battery Charging Time (H): " << chargingTime << "\n";
}
void StudentInfo::setStudentInfo()
{
    cout << "Student ID: ";
    cin.ignore();
    getline(cin, studentID);
    cout << "Student Name: ";
    getline(cin, studentName);
}

void StudentInfo::printStudentInfo()
{
    cout << "Student ID: " << studentID << "\n";
    cout << "Student Name: " << studentName << "\n";
}

void StudentInfo::saveStudentInfo(ofstream &outFile)
{
    outFile << "Student ID: " << studentID << "\n";
    outFile << "Student Name: " << studentName << "\n";
}
void SmartCar::setSmartCarInfo()
{
    cout << "Car ID: ";
    cin.ignore();
    getline(cin, carID);
    chassis.setChassisInfo();
    agxKit.setAGXKitInfo();
    stereoCamera.setStereoCameraInfo();
    gyroscope.setGyroscopeInfo();
    lidar.setLidarInfo();
    display.setDisplayInfo();
    battery.setBatteryInfo();
    studentInfo.setStudentInfo();
}

void SmartCar::printSmartCarInfo()
{
    cout << "Car ID: " << carID << "\n";
    chassis.printChassisInfo();
    agxKit.printAGXKitInfo();
    stereoCamera.printStereoCameraInfo();
    gyroscope.printGyroscopeInfo();
    lidar.printLidarInfo();
    display.printDisplayInfo();
    battery.printBatteryInfo();
    studentInfo.printStudentInfo();
}

void SmartCar::saveSmartCarInfo(ofstream &outFile)
{
    outFile << "Car ID: " << carID << "\n";
    chassis.saveChassisInfo(outFile);
    agxKit.saveAGXKitInfo(outFile);
    stereoCamera.saveStereoCameraInfo(outFile);
    gyroscope.saveGyroscopeInfo(outFile);
    lidar.saveLidarInfo(outFile);
    display.saveDisplayInfo(outFile);
    battery.saveBatteryInfo(outFile);
    studentInfo.saveStudentInfo(outFile);
    outFile << "\n";
}