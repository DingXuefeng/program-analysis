/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 3/7/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/

#ifndef PROGRAM_ANALYSIS_D_H
#define PROGRAM_ANALYSIS_D_H

#include <string>
struct E {
  ~E();
  void run() { a += 1; }
  int a = 3;
  int b;
  E *c;
  std::string d;
};
#include <iostream>
class D : public E {
public:
  explicit D(E *e);
  ~D();

  static void test();
};


#endif//PROGRAM_ANALYSIS_D_H
