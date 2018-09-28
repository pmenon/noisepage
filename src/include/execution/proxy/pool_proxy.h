//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// pool_proxy.h
//
// Identification: src/include/execution/proxy/pool_proxy.h
//
// Copyright (c) 2015-2018, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

#include "execution/proxy/proxy.h"
#include "type/abstract_pool.h"
#include "type/ephemeral_pool.h"

namespace terrier::execution {


PROXY(AbstractPool) {
  DECLARE_MEMBER(0, char[sizeof(peloton::type::AbstractPool)], opaque);
  DECLARE_TYPE;
};

PROXY(EphemeralPool) {
  DECLARE_MEMBER(0, char[sizeof(peloton::type::EphemeralPool)], opaque);
  DECLARE_TYPE;
};

TYPE_BUILDER(AbstractPool, peloton::type::AbstractPool);
TYPE_BUILDER(EphemeralPool, peloton::type::EphemeralPool);


}  // namespace terrier::execution