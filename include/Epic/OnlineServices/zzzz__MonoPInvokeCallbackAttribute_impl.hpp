#pragma once
// IWYU pragma private; include "Epic/OnlineServices/MonoPInvokeCallbackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Epic/OnlineServices/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::MonoPInvokeCallbackAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::MonoPInvokeCallbackAttribute::*)(::System::Type*)>(&::Epic::OnlineServices::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::MonoPInvokeCallbackAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::MonoPInvokeCallbackAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::MonoPInvokeCallbackAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::Epic::OnlineServices::MonoPInvokeCallbackAttribute* Epic::OnlineServices::MonoPInvokeCallbackAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::MonoPInvokeCallbackAttribute*>(type));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute()   {
}
