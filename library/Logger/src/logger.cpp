#include "logger.hpp"

Logger::Logger(std::string filePath, std::string fileName) {
  this->filePath = filePath;
  this->fileName = fileName;
}

Logger::~Logger() {}

int Logger::Begin(std::string filePath, std::string fileName) {
  this->filePath = filePath;
  this->fileName = fileName;
  return 0;
}

void Logger::PrintToConsole(std::string str) { std::cout << str; }

void Logger::logToFile(std::string str) {}
