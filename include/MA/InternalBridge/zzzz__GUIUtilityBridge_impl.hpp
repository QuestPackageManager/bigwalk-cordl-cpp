#pragma once
// IWYU pragma private; include "MA/InternalBridge/GUIUtilityBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/zzzz__GUIUtilityBridge_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GUIUtilityBridge.GetPermanentControlID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::InternalBridge::GUIUtilityBridge::GetPermanentControlID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ecc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GUIUtilityBridge*>(),
                        {"GetPermanentControlID", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::InternalBridge::GUIUtilityBridge::GetPermanentControlID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GUIUtilityBridge*>(),
                        {"GetPermanentControlID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GUIUtilityBridge::GUIUtilityBridge()   {
}
