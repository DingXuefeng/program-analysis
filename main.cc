/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 3/4/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/
#include <iostream>
#include <cstring>
#include "C.h"
void testA() {
  int *a = new int[3]{1, 2, 3};
  std::cout << "ok: " << a[2] << std::endl;
  delete[] a;
  std::cout << "dangling pointer: " << a[2] << std::endl;// inspect will find it with static analysis
}

namespace B {
  int global[3]{};
  int *pa() {
    int a[3];
    return &a[0];
  }
  void testB(int argc) {
    int *a[3] = {new int, new int, new int};
    delete a[argc];
    std::cout << argc << " dangling pointer" << *a[argc] << std::endl;// need dynamic analysis
    std::cout << "memory leak" << std::endl;

    int b[3] = {};
    int c[3];
    int *d = new int[3]{1, 3};
    int *e = new int[3];
    std::cout << "uninitialized var " << c[argc] << std::endl;
    std::cout << "uninitialized var " << e[argc] << std::endl;
    std::cout << "over shoot stack " << b[2 + argc] << std::endl;
    std::cout << "over shoot heap " << d[2 + argc] << std::endl;
    std::cout << "over shoot global " << global[2 + argc] << std::endl;
    std::cout << "use after return" << pa()[2 + argc] << std::endl;
    int *f;
    {
      int a[3];
      f = a;
    }
    std::cout << "use after scope" << f[2 + argc] << std::endl;
    int *p = static_cast<int*>(malloc(sizeof c));
    memcpy(p,e,sizeof c);
    std::cout<<p[1]<<" "<<sizeof c<<" "<<sizeof(c)<<" "<<sizeof e<<" "<<sizeof(e)<<std::endl;
  }
}// namespace C

void testC() {
  C::A a;
  a.supp();
  C::supp();
}
int main(int argc, char *[]) {
//  testA();
//  B::testB(argc);
  testC();
  return 0;
}