// To find the highest priority in a queue based on the lowest number of running time

package Debug.Java;

import java.util.PriorityQueue;

class Task implements Comparable<Task> {
    int priority;
    int runningTime;

    public Task(int priority, int runningTime) {
        this.priority = priority;
        this.runningTime = runningTime;
    }

    @Override
    public int compareTo(Task other) {
        if (this.runningTime == other.runningTime) {
            return Integer.compare(this.runningTime, other.runningTime);
        } else {
            return Integer.compare(priority, other.priority);
        }
    }
}

public class Main9 {
    public static Task findHighestPriority(Task[] tasks) {
        PriorityQueue<Task> minHeap = new PriorityQueue<Task>();
        for (Task task : tasks) {
            minHeap.offer(task);
        }
        return minHeap.poll();
    }

    public static void main(String[] args) {
        Task[] tasks = {new Task(1, 5), new Task(2, 3), new Task(3, 7), new Task(1, 4)};
        Task highestPriorityTask = findHighestPriority(tasks);
        System.out.println("Highest priority task: Priority - " + highestPriorityTask.priority +
                           ", Running Time - " + highestPriorityTask.runningTime);
    }
}
