#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CachedArrayAllocationException.hpp"
#include "Epic/OnlineServices/zzzz__AllocationException_impl.hpp"
#include "Epic/OnlineServices/zzzz__CachedArrayAllocationException_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CachedArrayAllocationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CachedArrayAllocationException::*)(::System::IntPtr, int32_t, int32_t)>(&::Epic::OnlineServices::CachedArrayAllocationException::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804d6b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CachedArrayAllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CachedArrayAllocationException::_ctor(::System::IntPtr  pointer, int32_t  foundLength, int32_t  expectedLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CachedArrayAllocationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, foundLength, expectedLength);
}
inline ::Epic::OnlineServices::CachedArrayAllocationException* Epic::OnlineServices::CachedArrayAllocationException::New_ctor(::System::IntPtr  pointer, int32_t  foundLength, int32_t  expectedLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CachedArrayAllocationException*>(pointer, foundLength, expectedLength));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CachedArrayAllocationException::CachedArrayAllocationException()   {
}
