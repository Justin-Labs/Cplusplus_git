#include <iostream>
//good example of classic c style enum and switch statements
using std::cout;
using std::cin;
using std::endl;
//unscoped enum
enum TaskStatus {
    NOT_STARTED = 1, //with this set to 1, each of the successive values will be the successive intergers.
    IN_PROGRESS,
    COMPLETED_SUCCESS,
    COMPLETED_FAILURE,
};

int main()
{
    int status;
    cout << "Please enter the current status of the task: ";

    cin >> status;

    switch (status) {
        case NOT_STARTED:
            cout << "The task has not yet been started" << endl;
            break;
        case IN_PROGRESS:
            cout << "The task is in progress" << endl;
            break;
        case COMPLETED_SUCCESS:
            cout << "The task was completed successfully" << endl;
            break;
        case COMPLETED_FAILURE:
            cout << "The task could not be completed successfully" << endl;
            break;
        default:
            cout << "Status of task unknown" << endl;
    }

    return 0;
}