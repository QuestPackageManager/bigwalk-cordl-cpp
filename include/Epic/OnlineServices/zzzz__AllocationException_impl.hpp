#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AllocationException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Epic/OnlineServices/zzzz__AllocationException_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AllocationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AllocationException::*)(::StringW)>(&::Epic::OnlineServices::AllocationException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804be150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AllocationException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Epic::OnlineServices::AllocationException* Epic::OnlineServices::AllocationException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AllocationException*>(message));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AllocationException::AllocationException()   {
}
