#include "Task.h"
#include "TaskManager.h"
#include "ConsoleOutput.h"
#include "KeyboardInput.h"
#include "TextFileManager.h"

int main()
{
    KeyboardInput keyboardInput;
    ConsoleOutput consoleOutput;
    TextFileManager binaryFileManager;

    TaskManager taskManager(&keyboardInput, &consoleOutput, &binaryFileManager);

    taskManager.loadData("save.txt");

    taskManager.printTasks();

    taskManager.addTask();

    //taskManager.findTaskByTitle("2222");
    //taskManager.findTasksByDate("1111");
    //taskManager.findTasksByPriority("12311");

    //taskManager.editTask("4444");
    //taskManager.removeTask("4444");

    taskManager.printTasks();

    taskManager.saveData("save.txt");

    return 0;
}