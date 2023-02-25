#include <iostream>
#include "head.h"

int main() {
    ReadStream file("text");
    file.openStream("/Users/4ebik/CLion C/laba_2_2/text");

    for (const char &i: file.getName()) { std::cout << i; }
    std::cout << '\n';
    for (const char &i: file.getPath()) { std::cout << i; }
    std::cout << '\n';

    if (file.isOpen()) { std::cout << "File open" << '\n'; }
    if (!file.empty()) { std::cout << "File !empty()" << '\n'; }

    std::cout << "Line: ";
    for (const char &i: file.getString()) { std::cout << i; }
    std::cout << '\n';

    std::cout << "Word: ";

    for (const char &i: file.getWord()) { std::cout << i; }
    std::cout << '\n';

    file.closeStream();
    if (!file.isOpen()) { std::cout << "File close" << '\n'; }

    return 0;
}