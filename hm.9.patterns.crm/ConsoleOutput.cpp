#include "ConsoleOutput.h"

void ConsoleOutput::printTask(Task& task) 
{
    cout << "_____________________________" << endl;
    cout << "Title: " << task.getTitle() << endl;
    cout << "Due date: " << task.getDate() << endl;
    cout << "Priority: " << task.getPriority() << endl;
    cout << "_____________________________" << endl;
}