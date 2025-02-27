//==-------------- spec_const_int64.cpp  - DPC++ ESIMD on-device test -----===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// REQUIRES: gpu
// RUN: %clangxx -fsycl -D__SYCL_INTERNAL_API -I%S/.. %s -o %t.out
// RUN: %GPU_RUN_PLACEHOLDER %t.out
// UNSUPPORTED: cuda || hip

#include <cstdint>

#define DEF_VAL -99776644220011ll
#define REDEF_VAL 22001144668855ll
#define STORE 1

using spec_const_t = int64_t;
using container_t = int64_t;

#include "Inputs/spec_const_common.hpp"
