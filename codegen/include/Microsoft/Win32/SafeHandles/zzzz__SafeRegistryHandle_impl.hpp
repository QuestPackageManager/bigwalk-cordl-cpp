#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeRegistryHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeRegistryHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeRegistryHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeRegistryHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeRegistryHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815dd720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeRegistryHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeRegistryHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeRegistryHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815dd510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeRegistryHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeRegistryHandle::*)(::System::IntPtr, bool)>(&::Microsoft::Win32::SafeHandles::SafeRegistryHandle::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815dd4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Microsoft::Win32::SafeHandles::SafeRegistryHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Microsoft::Win32::SafeHandles::SafeRegistryHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Microsoft::Win32::SafeHandles::SafeRegistryHandle::_ctor(::System::IntPtr  preexistingHandle, bool  ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preexistingHandle, ownsHandle);
}
inline ::Microsoft::Win32::SafeHandles::SafeRegistryHandle* Microsoft::Win32::SafeHandles::SafeRegistryHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>());
}
inline ::Microsoft::Win32::SafeHandles::SafeRegistryHandle* Microsoft::Win32::SafeHandles::SafeRegistryHandle::New_ctor(::System::IntPtr  preexistingHandle, bool  ownsHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(preexistingHandle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeRegistryHandle::SafeRegistryHandle()   {
}
