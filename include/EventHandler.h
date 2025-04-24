#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

#include <queue>
#include <unordered_map>
#include <mutex>
#include <string>

class EventHandler {
public:
    void addEvent(const std::string& god, const std::string& event);
    void processEvents();

private:
    std::unordered_map<std::string, std::queue<std::string>> eventQueues;
    std::mutex queueMutex;
};

#endif