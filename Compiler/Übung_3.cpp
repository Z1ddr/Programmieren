#include <iostream>

#include <string>



bool scan_3a(const std::string& input) {

    if (input.empty()) return false;

    size_t i = 0;

    size_t n = input.length();

    while (i < n && input[i] == '1') i++;

    if (i >= n || input[i] != '0') return false;

    while (i < n && input[i] == '0') i++;

    return i == n;

}


bool scan_3b(const std::string& input) {

    if (input.empty()) return false;

    size_t i = 0;

    size_t n = input.length();

    if (input[i] == '+' || input[i] == '-') i++;

    if (i >= n) return false;

    if (input[i] == '0') return (i + 1 == n);

    if (input[i] >= '1' && input[i] <= '9') {

        i++;

        while (i < n && std::isdigit(input[i])) i++;

        return i == n;

    }

    return false;

}



bool scan_3c(const std::string& input) {

    if (input.empty()) return false;

    size_t i = 0;

    size_t n = input.length();

    if (input[0] == '0') return n == 1;

    if (input[0] == '1') {

        i++;

        while (i < n && (input[i] == '0' || input[i] == '1')) i++;

        return i == n;

    }

    return false;

}



int main() {

    std::cout << "=== TEST AUFGABE 3a: L(100) ===\n";

    std::cout << "0       -> " << (scan_3a("0") ? "OK" : "NOK") << "\n";

    std::cout << "10      -> " << (scan_3a("10") ? "OK" : "NOK") << "\n";

    std::cout << "111000  -> " << (scan_3a("111000") ? "OK" : "NOK") << "\n";

    std::cout << "111     -> " << (scan_3a("111") ? "OK" : "NOK") << " (erwartet NOK)\n";

    std::cout << "010     -> " << (scan_3a("010") ? "OK" : "NOK") << " (erwartet NOK)\n\n";

    std::cout << "=== TEST AUFGABE 3b: Integers mit Vorzeichen ===\n";

    std::cout << "123     -> " << (scan_3b("123") ? "OK" : "NOK") << "\n";

    std::cout << "+456    -> " << (scan_3b("+456") ? "OK" : "NOK") << "\n";

    std::cout << "-0      -> " << (scan_3b("-0") ? "OK" : "NOK") << "\n";

    std::cout << "0123    -> " << (scan_3b("0123") ? "OK" : "NOK") << " (erwartet NOK)\n";

    std::cout << "-05     -> " << (scan_3b("-05") ? "OK" : "NOK") << " (erwartet NOK)\n\n";

    std::cout << "=== TEST AUFGABE 3c: Binärzahlen ohne führende 0 ===\n";

    std::cout << "0       -> " << (scan_3c("0") ? "OK" : "NOK") << "\n";

    std::cout << "1011    -> " << (scan_3c("1011") ? "OK" : "NOK") << "\n";

    std::cout << "01      -> " << (scan_3c("01") ? "OK" : "NOK") << " (erwartet NOK)\n";

    std::cout << "000     -> " << (scan_3c("000") ? "OK" : "NOK") << " (erwartet NOK)\n";

    return 0;

}