
#include <iostream>
#include <queue>

using namespace std;

struct Process {
    int id;
    int burstTime;
    int priority;
    int remainingTime;
};

class EnhancedRRScheduler {
private:
    queue<Process> processQueue;
    int initialTimeQuantum;

public:
    EnhancedRRScheduler(int initialTimeQuantum) {
        this->initialTimeQuantum = initialTimeQuantum;
    }

    void addProcess(int id, int burstTime, int priority) {
        Process p;
        p.id = id;
        p.burstTime = burstTime;
        p.priority = priority;
        p.remainingTime = burstTime;
        processQueue.push(p);
    }

    void execute() {
        int timeQuantum = initialTimeQuantum;

        while (!processQueue.empty()) {
            Process currentProcess = processQueue.front();
            processQueue.pop();

            int executionTime = min(timeQuantum, currentProcess.remainingTime);
            currentProcess.remainingTime -= executionTime;

            cout << "Executing process " << currentProcess.id << " for " << executionTime << " units" << endl;

            // Adjust time quantum based on process characteristics
            if (currentProcess.remainingTime > 0) {
                if (currentProcess.priority > 0) {
                    // Increase time quantum for higher priority processes
                    timeQuantum += 5;
                } else {
                    // Reduce time quantum for processes with shorter burst times
                    timeQuantum -= 5;
                }
            }

            // Re-insert process into queue if it's not completed
            if (currentProcess.remainingTime > 0) {
                processQueue.push(currentProcess);
            }
        }
    }
};

int main() {
    EnhancedRRScheduler scheduler(20); // Initial time quantum set to 20 units
    // Adding processes to the scheduler (id, burstTime, priority)
    scheduler.addProcess(1, 30, 0); // Process with longer burst time
    scheduler.addProcess(2, 20, 1); // Process with higher priority
    scheduler.addProcess(3, 15, 0); // Process with shorter burst time

    // Execute processes using enhanced Round Robin scheduling
    scheduler.execute();

    return 0;
}

