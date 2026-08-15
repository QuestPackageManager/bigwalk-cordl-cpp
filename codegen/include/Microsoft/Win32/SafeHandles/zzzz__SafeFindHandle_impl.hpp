#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeFindHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFindHandle_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeFindHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeFindHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeFindHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815dd510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeFindHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeFindHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeFindHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815dd500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeFindHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Microsoft::Win32::SafeHandles::SafeFindHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* Microsoft::Win32::SafeHandles::SafeFindHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeFindHandle*>());
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeFindHandle::SafeFindHandle()   {
}
