#include <fmt/core.h>
#include <fmt/format.h>

int main() {
    int number = 42;
    std::string name = "DissimilarityTool";

    fmt::print("Hello from {}! The answer is {}.\n", name, number);
    fmt::print("Formatted hex value: {:#04x}\n", number);
    fmt::print("Floating-point value: {:.2f}\n", 3.14159);

    return 0;
}
