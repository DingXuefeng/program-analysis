/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 3/7/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#include "D.h"
#include <iostream>

D::D(E *e) : E((*e)) {
}
void D::test() {
  int a[3];
  std::cout << "D::test " << a[3] << std::endl;
}
E::~E() { std::cout<<"E::~E Destructing "<<this<<" "<<this->a<<std::endl;}
D::~D() { std::cout << "D::~D Destructing " << dynamic_cast<E*>(this) << " "<<this->a<<std::endl; }
