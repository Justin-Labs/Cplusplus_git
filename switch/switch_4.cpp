#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

}
int main()
{
    string status;
    cout << "Please enter the current status of the task: ";
    getline(cin, status);

    switch (status) {
        case "not_started":
            cout << "The task has not yet been started" << endl;
            break;
        case "in_progress":
            cout << "The task is in progress" << endl;
            break;
        case "completed_success":
            cout << "The task was completed successfully" << endl;
            break;
        case "completed_failure":
            cout << "The task could not be completed successfully" << endl;
            break;
        default:
            cout << "Status of task unknown" << endl;
    }
    
    return 0;
}