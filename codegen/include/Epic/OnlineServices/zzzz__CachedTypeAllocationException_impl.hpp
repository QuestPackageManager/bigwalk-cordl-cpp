#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CachedTypeAllocationException.hpp"
#include "Epic/OnlineServices/zzzz__AllocationException_impl.hpp"
#include "Epic/OnlineServices/zzzz__CachedTypeAllocationException_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CachedTypeAllocationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CachedTypeAllocationException::*)(::System::IntPtr, ::System::Type*, ::System::Type*)>(&::Epic::OnlineServices::CachedTypeAllocationException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804d6c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CachedTypeAllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CachedTypeAllocationException::_ctor(::System::IntPtr  pointer, ::System::Type*  foundType, ::System::Type*  expectedType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CachedTypeAllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, foundType, expectedType);
}
inline ::Epic::OnlineServices::CachedTypeAllocationException* Epic::OnlineServices::CachedTypeAllocationException::New_ctor(::System::IntPtr  pointer, ::System::Type*  foundType, ::System::Type*  expectedType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CachedTypeAllocationException*>(pointer, foundType, expectedType));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CachedTypeAllocationException::CachedTypeAllocationException()   {
}
