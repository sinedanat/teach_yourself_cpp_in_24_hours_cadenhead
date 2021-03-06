// In the SimpleEvent program in Listing 22.1,
// add a std::cout message to each destructor
// to find out when the destructors are called.

#include <iostream>

class Condition
{
public:
    Condition() { }
    virtual ~Condition()
    {
        std::cout << "Condition destructor ..." << std::endl;
    }
    virtual void log() = 0;
};

class Normal : public Condition
{
public:
    Normal()
    {
        log();
    }
    virtual ~Normal()
    {
        std::cout << "Normal destructor ..." << std::endl;
    }
    virtual void log()
    {
        std::cout << "Logging normal conditions ...\n";
    }
};

class Error : public Condition
{
public:
    Error()
    {
        log();
    }
    virtual ~Error()
    {
        std::cout << "Error destructor ..." << std::endl;
    }
    virtual void log()
    {
        std::cout << "Logging error!\n";
    }
};

class Alarm : public Condition
{
public:
    Alarm();
    virtual ~Alarm()
    {
        std::cout << "Alarm destructor ..." << std::endl;
    }
    virtual void warn()
    {
        std::cout << "Warning!\n";
    }
    virtual void log()
    {
        std::cout << "General alarm log\n";
    }
    virtual void call() = 0;
};

Alarm::Alarm()
{
    log();
    warn();
}

class FireAlarm : public Alarm
{
public:
    FireAlarm()
    {
        log();
    };
    virtual ~FireAlarm()
    {
        std::cout << "FireAlarm destructor ..." << std::endl;
    }
    virtual void call()
    {
        std::cout << "Calling fire department!\n";
    }
    virtual void log()
    {
        std::cout << "Logging fire call\n";
    }
};

int main()
{
    int input;
    int okay = 1;
    Condition* pCondition;

    while (okay)
    {
        std::cout << "(0) Quit (1) Normal (2) Fire: ";
        std::cin >> input;
        okay = input;

        switch (input)
        {
            case 0:
                break;

            case 1:
                pCondition = new Normal;
                delete pCondition;
                break;

            case 2:
                pCondition = new FireAlarm;
                delete pCondition;
                break;

            default:
                pCondition = new Error;
                delete pCondition;
                okay = 0;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}

// (0) Quit (1) Normal (2) Fire: 1
// Logging normal conditions ...
// Normal destructor ...
// Condition destructor ...
// 
// (0) Quit (1) Normal (2) Fire: 2
// General alarm log
// Warning!
// Logging fire call
// FireAlarm destructor ...
// Alarm destructor ...
// Condition destructor ...
// 
// (0) Quit (1) Normal (2) Fire: 0
