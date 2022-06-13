#pragma once
#include <iostream>

using namespace std;

class ILogger {
public:
    virtual void log(string str) = 0;
};

class ConsoleLogger : public ILogger {
public:
    void log(string str) override {
        cout << "Logging " << str << " to Console\n";
    }
};

class ServerLogger : public ILogger {
public:
    void log(string str) override {
        cout << "Logging " << str << " to Server\n";
    }
};

class FileLogger : public ILogger {
public:
    void log(string str) override {
        cout << "Logging " << str << " to File\n";
    }
};

class LogHandler {
public:
    void Handle(ILogger& logger, string str) {
        logger.log(str);
    }
};