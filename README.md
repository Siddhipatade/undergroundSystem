# UndergroundSystem
 
An underground railway system is keeping track of customer travel times between different stations. They are using this data to calculate the average time it takes to travel from one station to another.

UndergroundSystem is a class that represents a simplified version of an underground transportation system. It allows users to check in and check out at different stations and calculates the average travel time between stations.

## Usage

To use the UndergroundSystem class, follow these steps:

1. Create an instance of the UndergroundSystem class.
    ```cpp
    UndergroundSystem undergroundSystem;
    ```

2. Use the `checkIn` method to record a user's check-in at a station.
    ```cpp
    undergroundSystem.checkIn(userId, stationName, timestamp);
    ```

3. Use the `checkOut` method to record a user's check-out at a station.
    ```cpp
    undergroundSystem.checkOut(userId, stationName, timestamp);
    ```

4. Use the `getAverageTime` method to calculate the average travel time between two stations.
    ```cpp
    double averageTime = undergroundSystem.getAverageTime(startStation, endStation);
    ```

5. Print the average travel time to the console or use it as needed.
    ```cpp
    cout << "Average Time: " << averageTime << endl;
    ```

## Example

Here's an example usage of the UndergroundSystem class:

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

// Include the UndergroundSystem class here

int main() {
    UndergroundSystem undergroundSystem;

    undergroundSystem.checkIn(1, "A", 10);
    undergroundSystem.checkOut(1, "B", 15);
    double averageTime = undergroundSystem.getAverageTime("A", "B");
    cout << "Average Time: " << averageTime << endl;

    return 0;
}
