#include <iostream>

class Counter {
private:
    int count;

public:
    // Constructor initializes count to 0
    Counter() : count(0) {}

    void increment() {
        count++;
    }

    void reset() {
        count = 0;
    }

    int get() const {
        return count;
    }
};

int main() {
    // Create an array of 3 counters
    Counter counters[3];

    // Exercise the counters
    counters[0].increment();
    counters[0].increment();

    counters[1].increment();
    counters[1].increment();
    counters[1].increment();
    counters[1].reset(); // Resetting second counter
    counters[1].increment();

    counters[2].increment();

    // Display values
    for (int i = 0; i < 3; i++) {
        std::cout << "Counter " << i << " value: " << counters[i].get() << "\n";
    }

    return 0;
}
