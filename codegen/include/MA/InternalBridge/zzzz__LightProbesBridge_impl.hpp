#pragma once
// IWYU pragma private; include "MA/InternalBridge/LightProbesBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/zzzz__LightProbesBridge_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::LightProbesBridge.GetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::InternalBridge::LightProbesBridge::GetCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::LightProbesBridge*>(),
                        {"GetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::InternalBridge::LightProbesBridge::GetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::LightProbesBridge*>(),
                        {"GetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::LightProbesBridge::LightProbesBridge()   {
}
