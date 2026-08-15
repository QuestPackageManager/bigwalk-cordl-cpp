#pragma once
// IWYU pragma private; include "Epic/OnlineServices/DynamicBindingException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Epic/OnlineServices/zzzz__DynamicBindingException_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::DynamicBindingException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::DynamicBindingException::*)(::StringW)>(&::Epic::OnlineServices::DynamicBindingException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::DynamicBindingException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::DynamicBindingException::_ctor(::StringW  bindingName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::DynamicBindingException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingName);
}
inline ::Epic::OnlineServices::DynamicBindingException* Epic::OnlineServices::DynamicBindingException::New_ctor(::StringW  bindingName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::DynamicBindingException*>(bindingName));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::DynamicBindingException::DynamicBindingException()   {
}
