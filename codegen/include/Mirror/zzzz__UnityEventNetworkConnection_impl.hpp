#pragma once
// IWYU pragma private; include "Mirror/UnityEventNetworkConnection.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Mirror/zzzz__UnityEventNetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
//  Writing Method size for method: ::Mirror::UnityEventNetworkConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::UnityEventNetworkConnection::*)()>(&::Mirror::UnityEventNetworkConnection::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::UnityEventNetworkConnection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::UnityEventNetworkConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::UnityEventNetworkConnection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::UnityEventNetworkConnection* Mirror::UnityEventNetworkConnection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::UnityEventNetworkConnection*>());
}
// Ctor Parameters []
constexpr ::Mirror::UnityEventNetworkConnection::UnityEventNetworkConnection()   {
}
