# To find the highest priority in a queue based on the lowest number of running time

import heapq

class Task:
    def __init__(self, priority, running_time):
        self.priority = priority
        self.running_time = running_time
    def __lt__(self, other):
        return (self.running_time, self.priority) < (other.running_time, other.priority)

def find_highest_priority(tasks):
    min_heap = {}
    for task in tasks:
        heapq.heappush(task,min_heap)
    highest_priority_task = heapq.heappush(min_heap)
    return highest_priority_task

tasks = [Task(1, 5), Task(2, 3), Task(3, 7), Task(1, 4)]
highest_priority_task = find_highest_priority(tasks)
print("Highest priority task: Priority -", highest_priority_task.priority, ", Running Time -", highest_priority_task.running_time)
