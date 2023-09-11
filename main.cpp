#include <iostream>
#include <fstream>
#include <string>
#include "Car.h"
using namespace std;
SmartCar cars[10];
int main()
{

    char instruct;

    while (true)
    {
        cout << "请输入指令选择你要的操作" << endl;
        cout << "W:写入信息   R:读取信息   Q:退出系统" << endl;
        cin >> instruct;
        cin.ignore();

        if (instruct == 'W')
        {
            // cout << "请输入指令选择一次全部写入或者部分修改" << endl;
            // cout << "A:全部写入   B:部分写入   Q:退出系统" << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << "Enter information for Smart Car " << (i + 1) << ":\n";
                cars[i].setSmartCarInfo();
                cout << "Information for Smart Car " << (i + 1) << " has been entered.\n";
            }

            // 保存到文件
            ofstream outputFile("smartcars.txt");
            if (outputFile.is_open())
            {
                for (int i = 0; i < 10; i++)
                {
                    cars[i].saveSmartCarInfo(outputFile);
                }
                outputFile.close();
                cout << "Information has been saved to 'smartcars.txt'.\n";
            }
            else
            {
                cout << "Unable to open the file for writing.\n";
            }
        }
        else if (instruct == 'R')
        {
            Read_message();
        }
        else if (instruct == 'Q')
        {
            break;
        }
    }
    return 0;
}
