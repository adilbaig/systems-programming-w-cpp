#include<iostream>

int main()
{
  void *ptr;

  auto r = posix_memalign(&ptr, 0x1000, 42 * sizeof(int));
  if(r) {
    std::clog << "ERROR";
    ::exit(EXIT_FAILURE);
  }

  std::cout << ptr << "\n";
  free(ptr);

}