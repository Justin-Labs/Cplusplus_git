#include <iostream>

using std::cout;
using std::cin;
using std::endl;
//scoped enum, which means values stored in it need to be referenced with the scope resolution operator :: as seen on line 24.
enum class TaskStatus {
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
// all scoped enums are not intergers. So if we have an integer value and we'd like
// to make use of it as a scoped enum value, we are going to have to perform a cast.
    TaskStatus task_status = static_cast<TaskStatus>(status);

    switch (task_status) {
        case TaskStatus::NOT_STARTED:
            cout << "The task has not yet been started" << endl;
            break;
        case TaskStatus::IN_PROGRESS:
            cout << "The task is in progress" << endl;
            break;
        case TaskStatus::COMPLETED_SUCCESS:
            cout << "The task was completed successfully" << endl;
            break;
        case TaskStatus::COMPLETED_FAILURE:
            cout << "The task could not be completed successfully" << endl;
            break;
        default:
            cout << "Status of task unknown" << endl;
    }

    return 0;
}