#ifndef LABA_2_2_HEAD_H
#define LABA_2_2_HEAD_H
#include <iostream>
#include <fstream>

class ReadStream {
private:
    std::ifstream in;
    std::string filePath;
    std::string fileName;
public:
    ReadStream();

    explicit ReadStream(const std::string &name);

    void openStream(const std::string &path);

    void closeStream();

    bool isOpen() const;

    bool empty() const;

    std::string getName();

    std::string getPath();

    std::string getString();

    std::string getWord();
};

#endif //LABA_2_2_HEAD_H
