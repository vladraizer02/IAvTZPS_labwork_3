#include <iostream>
extern "C" {
char* getCpuName();
}
int main() {
std::cout << getCpuName() <<'\n';
return 0;
}
