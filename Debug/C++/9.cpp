// To find the highest priority in a queue based on the lowest number of running time

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Task
{
public:
    int priority;
    int runningTime;

    Task(int priority, int runningTime) : priority(priority), runningTime(runningTime) {}

    bool operator<(const Task &other) const
    {
        if (this->runningTime != other.runningTime)
        {
            return this->priority < other.priority;
        }
        else
        {
            return this->runningTime < other.runningTime;
        }
    }
};

Task findHighestPriority(vector<Task> &tasks)
{
    priority_queue<Task> minHeap;
    for (Task &task : tasks)
    {
        minHeap.push(task);
    }
    Task highestPriorityTask = minHeap.top();
    minHeap.pop();
    return highestPriorityTask;
}

int main()
{
    vector<Task> tasks = {Task(1, 5), Task(2, 3), Task(3, 7), Task(1, 4)};
    Task highestPriorityTask = findHighestPriority(tasks);
    cout << "Highest priority task: Priority - " << highestPriorityTask.priority << ", Running Time - " << highestPriorityTask.runningTime << endl;
    return 0;
}
