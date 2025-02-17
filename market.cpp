#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void simulateStockMarket() {
    double stockPrice = 100.0;
    srand(time(0));

    cout << "Stock Market Simulation\n";
    for (int i = 1; i <= 10; i++) {
        double change = (rand() % 21 - 10) / 10.0;  
        stockPrice += change;
        cout << "Day " << i << " - Price: $" << stockPrice << "\n";
    }
}

int main() {
    simulateStockMarket();
    return 0;
}
