#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/PinnedGCHandle.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__PinnedGCHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::PinnedGCHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::PinnedGCHandle::*)(::System::Object*)>(&::Rewired::Utils::Classes::Utility::PinnedGCHandle::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181930d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::PinnedGCHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::PinnedGCHandle::*)()>(&::Rewired::Utils::Classes::Utility::PinnedGCHandle::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181930d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::PinnedGCHandle.get_Pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Rewired::Utils::Classes::Utility::PinnedGCHandle::*)()>(&::Rewired::Utils::Classes::Utility::PinnedGCHandle::get_Pointer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181930dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {"get_Pointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::PinnedGCHandle.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Rewired::Utils::Classes::Utility::PinnedGCHandle)>(&::Rewired::Utils::Classes::Utility::PinnedGCHandle::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181930e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Utility::PinnedGCHandle::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Utility::PinnedGCHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::IntPtr Rewired::Utils::Classes::Utility::PinnedGCHandle::get_Pointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {"get_Pointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline ::System::IntPtr Rewired::Utils::Classes::Utility::PinnedGCHandle::op_Implicit___System__IntPtr(::Rewired::Utils::Classes::Utility::PinnedGCHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::PinnedGCHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::PinnedGCHandle::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::PinnedGCHandle::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "JsAFzVYDzEMjIXkzTYJJWopfYjDN", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Utility::PinnedGCHandle::PinnedGCHandle(::System::Runtime::InteropServices::GCHandle  JsAFzVYDzEMjIXkzTYJJWopfYjDN) noexcept  {
this->JsAFzVYDzEMjIXkzTYJJWopfYjDN = JsAFzVYDzEMjIXkzTYJJWopfYjDN;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::PinnedGCHandle::PinnedGCHandle()   {
}
