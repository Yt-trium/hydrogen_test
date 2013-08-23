#include <iostream>
#include "main.h"

using namespace std;

void hydrogen_test();
void memoryEditing_test();
void console_test();

int main()
{
    while(1)
    {
    int id;
    cout << "-- Hydrogen Test --"   << endl;
    cout << "1 - hydrogen"          << endl;
    cout << "2 - memoryEditing"     << endl;
    cout << "3 - console"           << endl;
    cout << "0 - Quit"              << endl;
    cin >> id;
    switch(id)
    {
        case 0:
            return 0;
        break;
        case 1:
            hydrogen_test();
        break;
        case 2:
            memoryEditing_test();
        break;
        case 3:
            console_test();
        break;
        default:
            cout << "Error 404" << endl;
        break;
    }
    }
    return 0;
}

void hydrogen_test()
{
    int id;
    cout << "-- hydrogen Test --"   << endl;
    cout << "1 - about()"           << endl;
    cout << "2 - testFunc()"        << endl;
    cout << "0 - Return"            << endl;
    cin >> id;

    hydrogen test;

    switch(id)
    {
        case 0:
            return;
        break;
        case 1:
            test.about();
        break;
        case 2:
            cout << test.testFunc() << endl;
        break;
        default:
            cout << "Error 404" << endl;
        break;
    }
}
void memoryEditing_test()
{
    int id;
    memoryEditing test;
    string  tmp_string;
    int     tmp_int;

    while(1)
    {
    cout << "-- memoryEditing Test --"  << endl;
    cout << "1  - Read()"                << endl;
    cout << "2  - Write()"               << endl;
    cout << "3  - setProcessName()"      << endl;
    cout << "4  - setValueAddress()"     << endl;
    cout << "11 - SetGoodValue"          << endl;
    cout << "0  - Return"                << endl;
    cin >> id;

    cout << "Process Name  : " << test.getProcessName() << endl;
    cout << "Value Address : " << "0x" << hex << test.getValueAddress() << endl;

    switch(id)
    {
        case 0:
            return;
        break;
        case 1:
            cout << test.read() << endl;
        break;
        case 2:
            cout << test.write(5) << endl;
        break;
        case 3:
            cin >> tmp_string;
            test.setProcessName(tmp_string);
        break;
        case 4:
            cin >> tmp_int;
            test.setValueAddress(tmp_int);
        break;
        case 11:
            test.setProcessName("hydrogen_test.exe");
            test.setValueAddress(0x0008D2D8);
        break;
        default:
            cout << "Error 404" << endl;
        break;
    }
    }
}
void console_test()
{
    int id;
    cout << "-- console Test --"    << endl;
    cout << "1 - askKey()"          << endl;
    cout << "0 - Return"            << endl;
    cin >> id;

    console test;

    switch(id)
    {
        case 0:
            return;
        break;
        case 1:
            cout << test.askKey() << endl;
        break;
        default:
            cout << "Error 404" << endl;
        break;
    }
}
