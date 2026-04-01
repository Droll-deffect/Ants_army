#include <thread>
#include <atomic>
#include <iostream>

#include "Anthill.hpp"

class BackgroundTask {
private:
    std::atomic<bool> isRunning;
    std::thread worker;
    Anthill anthill_;
    public:
    BackgroundTask() : anthill_() {
        isRunning = true;
        anthill_ = Anthill::getInstance();
        worker = std::thread(&BackgroundTask::loop, this);
    }

    ~BackgroundTask() {
        isRunning = false;
        if (worker.joinable()) {
            worker.join();
        }
    }
    void loop() {
        while (isRunning) {
         std::cout << "N" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
};
