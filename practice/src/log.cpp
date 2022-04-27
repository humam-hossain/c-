#include <iostream>
#include <string.h>

class Log
{
public:
    enum Level{
        LevelError, LevelWarning, LevelInfo
    };

private:
    Level m_level = LevelInfo;

public:
    void setLevel(Level level){
        m_level = level;
    }
    
    void error(const char* messages){
        if(m_level >= LevelError)
            std::cout << "[ERROR]: " << messages << std::endl;
    }

    void warn(const char* messages){
        if(m_level >= LevelWarning)
            std::cout << "[WARNING]: " << messages << std::endl;
    }

    void info(const char* messages){
        if(m_level >= LevelInfo)
            std::cout << "[INFO]: " << messages << std::endl;
    }
};

int main()
{
    Log log;
    log.setLevel(Log::LevelError);
    log.warn("Hello");
    log.error("Hello");
    log.info("Hello");
}