#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeLibraryHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeLibraryHandle_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeLibraryHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeLibraryHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeLibraryHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815dd510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeLibraryHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeLibraryHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeLibraryHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815dd610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeLibraryHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Microsoft::Win32::SafeHandles::SafeLibraryHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeLibraryHandle* Microsoft::Win32::SafeHandles::SafeLibraryHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>());
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeLibraryHandle::SafeLibraryHandle()   {
}
