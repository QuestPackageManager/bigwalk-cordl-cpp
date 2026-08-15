#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ExternalAllocationException.hpp"
#include "Epic/OnlineServices/zzzz__AllocationException_impl.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAllocationException_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ExternalAllocationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ExternalAllocationException::*)(::System::IntPtr, ::System::Type*)>(&::Epic::OnlineServices::ExternalAllocationException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804d8b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ExternalAllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ExternalAllocationException::_ctor(::System::IntPtr  pointer, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ExternalAllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, type);
}
inline ::Epic::OnlineServices::ExternalAllocationException* Epic::OnlineServices::ExternalAllocationException::New_ctor(::System::IntPtr  pointer, ::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::ExternalAllocationException*>(pointer, type));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ExternalAllocationException::ExternalAllocationException()   {
}
