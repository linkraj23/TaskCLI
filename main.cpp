#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
    bool validInput = false;
    while (!validInput)
    {

        cout << "welcome to task manager app\n";
        cout << "What do you want to do of the following: \n";
        cout << "1.add task 2.delete task 3.manage task\n";
        cout << "4.see completed task 5.see unfinished task\n";
        cout << "6.see the task that are in progress" << endl;
        cin >> a;
        
    }
        
        switch (a)
        {
            case 1:
            cout << "add" << endl;
            break;
            case 2: 
            cout << "delete" << endl;
    break;
    case 3: 
    cout << "manage task" << endl;
    break;
    case 4: 
    cout << "completed task" << endl;
    break;
    case 5: 
    cout << "unfinished task" << endl;
    break;
    case 6: 
    cout << "Task that are in progress" << endl;
    break;
    default:
    cout << "Choose the right option" << endl;
    break;
}

    return 0;
}