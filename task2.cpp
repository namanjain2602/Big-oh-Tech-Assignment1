#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Inverter {
private:
    float current;
    float voltage;

public:
    Inverter(float current, float voltage)  {
      this->current=current;
      this->voltage=voltage;
    }

    float calculatePowerRating() {
        return current * voltage;
    }
};

class SolarInverter : public Inverter {
private:
    int solarPanels;

public:
    SolarInverter(float current, float voltage, int solarPanels)
        : Inverter(current, voltage), solarPanels(solarPanels) {}
};

class PCU : public SolarInverter {
private:
    bool hasBattery;
    bool gridOn;

public:
    PCU(float current, float voltage, int solarPanels, bool hasBattery)
        : SolarInverter(current, voltage, solarPanels), hasBattery(hasBattery), gridOn(false) {}

    bool hasBatteryInstalled() {
        return hasBattery;
    }

    bool isGridOn() {
        return gridOn;
    }
};

class GTI : public SolarInverter {
private:
    bool hasBattery;
    bool gridOn;

public:
    GTI(float current, float voltage, int solarPanels)
        : SolarInverter(current, voltage, solarPanels), hasBattery(false), gridOn(true) {}

    bool hasBatteryInstalled() {
        return hasBattery;
    }

    bool isGridOn() {
        return gridOn;
    }
};

class NonSolarInverter : public Inverter {
protected:
    bool hasBattery;

public:
    NonSolarInverter(float current, float voltage, bool hasBattery)
        : Inverter(current, voltage), hasBattery(hasBattery) {}

    bool hasBatteryInstalled() {
        return hasBattery;
    }
};

class Zelio : public NonSolarInverter {
public:
    Zelio(float current, float voltage)
        : NonSolarInverter(current, voltage, true) {}
};

class Regalia : public SolarInverter {
private:
    bool hasBattery;
    bool gridOn;

public:
    Regalia(float current, float voltage, int solarPanels, bool hasBattery)
        : SolarInverter(current, voltage, solarPanels), hasBattery(hasBattery), gridOn(false) {}

    bool hasBatteryInstalled() {
        return hasBattery;
    }

    bool isGridOn() const {
        return gridOn;
    }
};

class iCruze : public NonSolarInverter {
public:
    iCruze(float current, float voltage)
        : NonSolarInverter(current, voltage, true) {}
};

int main() {
    PCU pcu(8, 230, 2, true);
    cout << "PCU Power Rating: " << pcu.calculatePowerRating() << endl;
    cout << "PCU has battery: " <<  boolalpha << pcu.hasBatteryInstalled() << endl;
    cout << "PCU GRID On: " <<  boolalpha << pcu.isGridOn() << endl;

    GTI gti(8, 220, 5);
    cout << "GTI Power Rating: " << gti.calculatePowerRating() << endl;
    cout << "GTI has battery: " <<  boolalpha << gti.hasBatteryInstalled() << endl;
    cout << "GTI GRID On: " <<  boolalpha << gti.isGridOn() << endl;

    Zelio zelio(6, 220);
    cout << "Zelio Power Rating: " << zelio.calculatePowerRating() << endl;
    cout << "Zelio has battery: " <<boolalpha << zelio.hasBatteryInstalled() << endl;

    Regalia regalia(10, 230, 4, true);
    cout << "Regalia Power Rating: " << regalia.calculatePowerRating() << endl;
    cout << "Regalia has battery: " <<  boolalpha << regalia.hasBatteryInstalled() << endl;
    cout << "Regalia GRID On: " <<  boolalpha << regalia.isGridOn() << endl;

    iCruze icruze(3, 230);
    cout << "iCruze Power Rating: " << icruze.calculatePowerRating() << endl;
    cout << "iCruze has battery: " <<  boolalpha << icruze.hasBatteryInstalled() << endl;

    return 0;
}
