Overview

The Elden Tree serves as the central hub for managing events from various gods. Each god has its own queue of events, and the event handler ensures that events are processed fairly and efficiently. The library is implemented in modern C++ (C++17) and provides a reusable interface for adding and processing events.

Features

Thread-Safe : Ensures safe concurrent access using std::mutex.
Scalable : Handles a large number of gods and events efficiently.
Fairness : Processes events in a round-robin fashion to avoid starvation.
Reusable Library : Encapsulated as a standalone library (EventHandlerLib) for easy integration.
Benchmarked : Includes performance benchmarks to measure efficiency under different workloads.

Requirements

Compiler : A C++17-compliant compiler (e.g., GCC 7+, Clang 5+, MSVC 2017+).
CMake : Version 3.10 or higher.
Google Test : For running unit tests.
Google Benchmark : For performance benchmarks (optional).
