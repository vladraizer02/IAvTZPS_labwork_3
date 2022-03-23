#include <iostream>
extern "C" {
 unsigned int crc32c(const unsigned int* buf, unsigned long len);
}
int main()
{
 unsigned int massiv[] = {1,2,3,4,5,6,7,8,9,11};
 unsigned int res = crc32c(massiv, 10);
 std::cout<<std::hex<<res<<std::endl;
 return 0;
}
