#include <modern/lib.hpp>
#include <fmt/format.h>

int main(int argc, const char** argv) {
    int x = 15;
    int result = ModernFact::Factorial(x);
    fmt::print("Factorial of {} is {}.\n", x, result);
    return result;
}