#include "Car.h"

extern SmartCar cars[10];
void Write_message(void)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter information for Smart Car " << (i + 1) << ":\n";
        cout << "Car ID: ";
        getline(cin, cars[i].carID);

        cout << "Chassis ID: ";
        getline(cin, cars[i].chassis.chassisID);
        cout << "Chassis Model: ";
        getline(cin, cars[i].chassis.model);
        cout << "Chassis Wheelbase (mm): ";
        cin >> cars[i].chassis.wheelbase;
        cout << "Chassis Track (mm): ";
        cin >> cars[i].chassis.track;
        cout << "Chassis Ground Clearance (mm): ";
        cin >> cars[i].chassis.groundClearance;
        cout << "Chassis Minimum Turning Radius (m): ";
        cin >> cars[i].chassis.minimumTurningRadius;
        cout << "Chassis Drive Type: ";
        cin.ignore();
        getline(cin, cars[i].chassis.driveType);
        cout << "Chassis Max Range (KM): ";
        cin >> cars[i].chassis.maxRange;
        cin.ignore();
        cout << "Chassis Tires (4 tires):\n";
        for (int j = 0; j < 4; j++)
        {
            cout << "Tire " << (j + 1) << " Model: ";
            getline(cin, cars[i].chassis.tires[j]);
        }

        cout << "AGX Kit Model: ";
        cin.ignore();
        getline(cin, cars[i].agxKit.model);
        cout << "AGX Kit AI Performance (TOPS): ";
        cin >> cars[i].agxKit.aiPerformance;
        cout << "AGX Kit CUDA Cores: ";
        cin >> cars[i].agxKit.cudaCores;
        cout << "AGX Kit Tensor Cores: ";
        cin >> cars[i].agxKit.tensorCores;
        cout << "AGX Kit Memory (GB): ";
        cin >> cars[i].agxKit.memory;
        cout << "AGX Kit Storage (GB): ";
        cin >> cars[i].agxKit.storage;

        cout << "Stereo Camera Model: ";
        cin.ignore();
        getline(cin, cars[i].stereoCamera.model);
        cout << "Stereo Camera Camera: ";
        getline(cin, cars[i].stereoCamera.camera);
        cout << "Stereo Camera RGB Resolution: ";
        getline(cin, cars[i].stereoCamera.rgbResolution);
        cout << "Stereo Camera RGB Frame Rate: ";
        cin >> cars[i].stereoCamera.rgbFrameRate;
        cout << "Stereo Camera FOV: ";
        cin.ignore();
        getline(cin, cars[i].stereoCamera.fov);
        cout << "Stereo Camera Depth Frame Rate: ";
        cin >> cars[i].stereoCamera.depthFrameRate;

        cout << "Lidar Model: ";
        cin.ignore();
        getline(cin, cars[i].lidar.model);
        cout << "Lidar Channels: ";
        cin >> cars[i].lidar.channels;
        cout << "Lidar Range (m): ";
        cin >> cars[i].lidar.range;
        cout << "Lidar Power Consumption (W): ";
        cin >> cars[i].lidar.powerConsumption;

        cout << "Gyroscope Model: ";
        cin.ignore();
        getline(cin, cars[i].gyroscope.model);
        cout << "Gyroscope Manufacturer: ";
        getline(cin, cars[i].gyroscope.manufacturer);

        cout << "Display Size (inches): ";
        cin >> cars[i].display.size;
        cout << "Display Model: ";
        cin.ignore();
        getline(cin, cars[i].display.model);

        cout << "Battery Parameters: ";
        getline(cin, cars[i].battery.parameters);
        cout << "Battery External Voltage (V): ";
        cin >> cars[i].battery.externalVoltage;
        cout << "Battery Charging Time (H): ";
        cin >> cars[i].battery.chargingTime;

        cout << "请输入第一位学生的信息 " << endl;
        cout << "Student ID: ";
        cin.ignore();
        getline(cin, cars[i].studentInfo.studentID);
        cout << "Student Name: ";
        getline(cin, cars[i].studentInfo.studentName);
        cout << endl;
    }

    // 将信息保存到文件
    ofstream outputFile("smartcars.txt");
    if (outputFile.is_open())
    {
        for (int i = 0; i < 10; i++)
        {
            outputFile << "Car ID: " << cars[i].carID << "\n";
            outputFile << "Chassis ID: " << cars[i].chassis.chassisID << "\n";
            outputFile << "Chassis Model: " << cars[i].chassis.model << "\n";
            outputFile << "Chassis Wheelbase (mm): " << cars[i].chassis.wheelbase << "\n";
            outputFile << "Chassis Track (mm): " << cars[i].chassis.track << "\n";
            outputFile << "Chassis Ground Clearance (mm): " << cars[i].chassis.groundClearance << "\n";
            outputFile << "Chassis Minimum Turning Radius (m): " << cars[i].chassis.minimumTurningRadius << "\n";
            outputFile << "Chassis Drive Type: " << cars[i].chassis.driveType << "\n";
            outputFile << "Chassis Max Range (KM): " << cars[i].chassis.maxRange << "\n";
            outputFile << "Chassis Tires: ";
            for (int j = 0; j < 4; j++)
            {
                outputFile << cars[i].chassis.tires[j];
                if (j < 3)
                {
                    outputFile << ", ";
                }
            }
            outputFile << "\n";

            outputFile << "AGX Kit Model: " << cars[i].agxKit.model << "\n";
            outputFile << "AGX Kit AI Performance (TOPS): " << cars[i].agxKit.aiPerformance << "\n";
            outputFile << "AGX Kit CUDA Cores: " << cars[i].agxKit.cudaCores << "\n";
            outputFile << "AGX Kit Tensor Cores: " << cars[i].agxKit.tensorCores << "\n";
            outputFile << "AGX Kit Memory (GB): " << cars[i].agxKit.memory << "\n";
            outputFile << "AGX Kit Storage (GB): " << cars[i].agxKit.storage << "\n";

            outputFile << "Stereo Camera Model: " << cars[i].stereoCamera.model << "\n";
            outputFile << "Stereo Camera Camera: " << cars[i].stereoCamera.camera << "\n";
            outputFile << "Stereo Camera RGB Resolution: " << cars[i].stereoCamera.rgbResolution << "\n";
            outputFile << "Stereo Camera RGB Frame Rate: " << cars[i].stereoCamera.rgbFrameRate << "\n";
            outputFile << "Stereo Camera FOV: " << cars[i].stereoCamera.fov << "\n";
            outputFile << "Stereo Camera Depth Frame Rate: " << cars[i].stereoCamera.depthFrameRate << "\n";

            outputFile << "Lidar Model: " << cars[i].lidar.model << "\n";
            outputFile << "Lidar Channels: " << cars[i].lidar.channels << "\n";
            outputFile << "Lidar Range (m): " << cars[i].lidar.range << "\n";
            outputFile << "Lidar Power Consumption (W): " << cars[i].lidar.powerConsumption << "\n";

            outputFile << "Gyroscope Model: " << cars[i].gyroscope.model << "\n";
            outputFile << "Gyroscope Manufacturer: " << cars[i].gyroscope.manufacturer << "\n";

            outputFile << "Display Size (inches): " << cars[i].display.size << "\n";
            outputFile << "Display Model: " << cars[i].display.model << "\n";

            outputFile << "Battery Parameters: " << cars[i].battery.parameters << "\n";
            outputFile << "Battery External Voltage (V): " << cars[i].battery.externalVoltage << "\n";
            outputFile << "Battery Charging Time (H): " << cars[i].battery.chargingTime << "\n";

            outputFile << "Student ID: " << cars[i].studentInfo.studentID << "\n";
            outputFile << "Student Name: " << cars[i].studentInfo.studentName << "\n\n";
        }
        outputFile.close();
        cout << "Information has been saved to 'smartcars.txt'.\n";
    }
    else
    {
        cout << "Unable to open the file for writing.\n";
    }
}
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