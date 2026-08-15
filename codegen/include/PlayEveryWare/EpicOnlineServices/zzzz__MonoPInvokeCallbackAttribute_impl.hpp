#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/MonoPInvokeCallbackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute::*)(::System::Type*)>(&::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute* PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute*>(type));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute()   {
}
