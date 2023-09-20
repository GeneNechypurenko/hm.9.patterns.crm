#include "TextFileManager.h"

void TextFileManager::saveData(multiset<Task>& taskset, const string filename)
{
    ofstream file(filename);

    if (!file.is_open())
    {
        cout << "Error: Could not open file for writing." << endl;
        return;
    }

    for (const Task& task : taskset)
    {
        file << task.getTitle() << endl;     
        file << task.getDate() << endl;      
        file << task.getPriority() << endl;  
    }

    file.close();
}

multiset<Task> TextFileManager::loadData(const string& filename)
{
    multiset<Task> loadedTasks;

    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Error: Could not open file for reading." << endl;
        return loadedTasks;
    }

    string title, date, priority;

    while (getline(file, title) && getline(file, date) && getline(file, priority))
    {
        Task task;

        task.setTitle(title);
        task.setDate(date);
        task.setPriority(priority);
        loadedTasks.insert(task);
    }

    file.close();
    return loadedTasks;
}
