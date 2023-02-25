#include "head.h"

ReadStream::ReadStream() {
    filePath = "";
    fileName = "";
};
ReadStream::ReadStream(const std::string &name) {
    filePath = "";
    fileName = name;
};
void ReadStream::openStream(const std::string &path){
    in.open(path);
    filePath = path;
}
void ReadStream::closeStream(){ in.close(); }
bool ReadStream::isOpen() const{ return in.is_open(); }
bool ReadStream::empty() const{ return in.eof(); }
std::string ReadStream::getName(){ return fileName; }
std::string ReadStream::getPath(){ return filePath; }
std::string ReadStream:: getString() {
    std::string line;
    std::getline(in, line);
    return line;
}
std::string ReadStream:: getWord() {
    std::string line;
    std::getline(in, line, ' ');
    return line;
}