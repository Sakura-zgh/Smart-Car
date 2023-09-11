#include <iostream>
#include <fstream>
#include <string>
#include "Car.h"
using namespace std;
SmartCar cars[10];
int main()
{
    // 创建10个小车的信息

    char instruct;
    while (true)
    {
        cout << "请输入指令选择你要的操作" << endl;
        cout << "W:写入信息   R:读取信息   Q:退出系统" << endl;
        cin >> instruct;
        cin.ignore();
        // 填充小车信息（从键盘输入）
        if (instruct == 'W')
        {
            Write_message();
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
    system("pause");
    return 0;
}
