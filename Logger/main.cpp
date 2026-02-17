#include <bits/stdc++.h>
using namespace std;

enum LogLevel{
    DEBUG = 0,
    INFO,
    WARN,
    ERROR
};

// Strategy Pattern
class LogAppenders{
public:
    virtual void write(const string& message) = 0;
};

class ConsoleAppender: public LogAppenders{
public:
    void write(const string &message) override{
        cout<<message<<endl;
    }
};
// can add some more appenders like file

// Handler that follows CoR and observer pattern
class LogHandler{
protected:
  LogLevel level;
  LogHandler *next;
  vector<LogAppenders*> logAppenders;
public:
    LogHandler(LogLevel lvl): level(lvl), next(nullptr){}
    
    void addAppenders(LogAppenders *appender)
    {
        logAppenders.push_back(appender);
    }
    
    void setNext(LogHandler* nextHandler)
    {
        this->next = nextHandler;
    }
    
    virtual void handle(LogLevel msgLevel, string& msg, LogLevel globalLevel)
    {
        if(next){
            next->handle(msgLevel, msg, globalLevel);
        }
    }
};

class ConcreteLogHandler: public LogHandler{
public: 
    ConcreteLogHandler(LogLevel lvl): LogHandler(lvl){}
    void handle(LogLevel msgLevel, string& msg, LogLevel globalLevel){
        if(msgLevel < globalLevel)return;

        if(msgLevel == level){
            for(auto &logAppender: logAppenders)
            {
                logAppender->write(msg);
            }
        }
        
        if(next){
            next->handle(msgLevel, msg, globalLevel);
        }
    }
};

// Main logger class with singleton pattern
class Logger{
    LogLevel level;
    LogHandler* chain;
    Logger() : level(LogLevel::INFO) {
        LogHandler* Debug = new ConcreteLogHandler(LogLevel::DEBUG);
        LogHandler* Info = new ConcreteLogHandler(LogLevel::INFO);
        LogHandler* Warn = new ConcreteLogHandler(LogLevel::WARN);
        LogHandler* Error = new ConcreteLogHandler(LogLevel::ERROR);
        Debug->setNext(Info);
        Info->setNext(Warn);
        Warn->setNext(Error);
        chain = Debug;
        LogAppenders *appender = new ConsoleAppender();
        Debug->addAppenders(appender);
        Info->addAppenders(appender);
        Warn->addAppenders(appender);
        Error->addAppenders(appender);
    }
public:
    static Logger& getInstance(){
        static Logger instance;
        return instance;
    }
    void setLevel(LogLevel level){
        this->level = level;
    }
    void debug(string& msg){
        chain->handle(LogLevel::DEBUG, msg, level);
    }
    void info(string& msg){
        chain->handle(LogLevel::INFO, msg, level);
    }
    void error(string& msg){
        chain->handle(LogLevel::ERROR, msg, level);
    }
    void warn(string& msg){
        chain->handle(LogLevel::WARN, msg, level);
    }
};


int main() {
    Logger log = Logger::getInstance();
    log.setLevel(LogLevel::DEBUG);
    string debugMessage = "test debug";
    string infoMessage = "test info";
    string warnMessage = "test warn";
    string errorMessage = "test error";
    log.debug(debugMessage);
    log.info(infoMessage);
    log.warn(warnMessage);
    log.error(errorMessage);
    return 0;
}
