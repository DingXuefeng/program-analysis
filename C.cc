/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 3/4/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#include "C.h"
namespace C {
  void A::supp() {
    int a[3];
    if(a[0]>10) {
      std::cout << "A::supp yes"<<std::endl;
    } else {
      std::cout << "A::supp no"<<std::endl;
    }
    int sum = a[0]+a[1]+a[2];
    std::cout<<"A::supp sum: "<<sum<<std::endl;
  }
  void supp() {
    int a[3];
    if(a[0]>10) {
      std::cout << "A::supp yes"<<std::endl;
    } else {
      std::cout << "A::supp no"<<std::endl;
    }
    int sum = a[0]+a[1]+a[2];
    std::cout<<"A sum: "<<sum<<std::endl;
  }
}// namespace C
