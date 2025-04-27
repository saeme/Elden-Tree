#include <gtest/gtest.h>
#include "EventHandler.h"


TEST(EventHandlerTest, AddAndProcessEvent) {
    EventHandler handler;
    handler.addEvent("Zeus", "Thunderstorm");
    handler.addEvent("Poseidon", "Tsunami");

    // Process events 
    handler.processEvents();
}