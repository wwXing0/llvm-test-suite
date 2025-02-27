// RUN: %clangxx -fsycl -fsycl-unnamed-lambda -fsycl-targets=%sycl_triple %s -o %t.out
// RUN: %HOST_RUN_PLACEHOLDER %t.out
// RUN: %GPU_RUN_PLACEHOLDER %t.out
// RUN: %CPU_RUN_PLACEHOLDER %t.out
// RUN: %ACC_RUN_PLACEHOLDER %t.out

// Barrier is not supported on host. HIP does not support native floating point
// atomics
// XFAIL: host, hip

#define SYCL_USE_NATIVE_FP_ATOMICS
#define FP_TESTS_ONLY

#include "sub.h"

int main() { sub_test_all<access::address_space::local_space>(); }
