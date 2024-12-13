#include <iostream>

using namespace std;

class VideoCard {
    string t;
public:
    VideoCard() {
        t = "VideoCard RTX4090";
    }

    string getName() {
        return t;
    }
};

class CPU {
    string t;
public:
    CPU() {
        t = "CPU3000";
    }

    string getName() {
        return t;
    }
};

class Motherboard {
    string t;
public:
    Motherboard() {
        t = "Motherboard10000";
    }

    string getName() {
        return t;
    }
};

class PowerUnit {
    string t;
public:
    PowerUnit() {
        t = "PowerUnit52";
    }

    string getName() {
        return t;
    }
};

class Computer {
    VideoCard videocard;
    CPU cpu;
    Motherboard motherboard;
    PowerUnit powerUnit;

public:
    void startPC() {
        cout << videocard.getName() << endl;
        cout << cpu.getName() << endl;
        cout << motherboard.getName() << endl;
        cout << powerUnit.getName() << endl;
    }
};

int main() {
    Computer pc = Computer();
    pc.startPC();
}