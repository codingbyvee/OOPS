#include <iostream>

class RemoteControl {
public:
    virtual void powerOn() = 0;
    virtual void powerOff() = 0;
    virtual void changeChannel(int channel) = 0;
};

class TVRemote : public RemoteControl {
public:
    void powerOn() override {
        std::cout << "TV is powered on." << std::endl;
    }

    void powerOff() override {
        std::cout << "TV is powered off." << std::endl;
    }

    void changeChannel(int channel) override {
        std::cout << "Changing TV channel to " << channel << std::endl;
    }
};

int main() {
    TVRemote tvRemote;
    tvRemote.powerOn();
    tvRemote.changeChannel(5);
    tvRemote.powerOff();

    return 0;
}
