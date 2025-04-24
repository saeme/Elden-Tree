#include "EventHandler.h"
#include <iostream>

void EventHandler::addEvent(const std::string& god, const std::string& event) {
    std::lock_guard<std::mutex> lock(queueMutex);
    eventQueues[god].push(event);
}
void EventHandler::processEvents() {
    std::lock_guard<std::mutex> lock(queueMutex);
    for (auto& [god, queue] : eventQueues) {
        if (!queue.empty()) {
            std::string event = queue.front();
            queue.pop();
            std::cout << "Processing event for god: " << god << " - Event: " << event << std::endl;
        }
    }
}