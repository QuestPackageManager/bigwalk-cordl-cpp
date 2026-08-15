#pragma once
// IWYU pragma private; include "GlobalNamespace/Distortion.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Distortion_def.hpp"
#include "GlobalNamespace/zzzz__Distortion_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804a4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804a33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, float_t, float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1804a3f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataLength, channels, driveStart, driveEnd, dryWet, wetGain);
}
inline ::System::IAsyncResult* GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::BeginInvoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, dataLength, channels, driveStart, driveEnd, dryWet, wetGain, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate* GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate::Distortion_Process_000004B0$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804a3d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804a3e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18049e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>();
}
inline void GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, driveStart, driveEnd, dryWet, wetGain);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall::Distortion_Process_000004B0$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Distortion.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Distortion::*)()>(&::GlobalNamespace::Distortion::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion::*)(bool)>(&::GlobalNamespace::Distortion::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Distortion::*)()>(&::GlobalNamespace::Distortion::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion::*)(bool)>(&::GlobalNamespace::Distortion::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion::*)(float_t)>(&::GlobalNamespace::Distortion::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::Distortion::ProcessSamples)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18049e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                    {::i2c::class_of<::GlobalNamespace::Distortion*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::Distortion::Process)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18049e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.SoftClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::Distortion::SoftClip)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18049ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {"SoftClip", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Distortion::*)()>(&::GlobalNamespace::Distortion::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049ec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Distortion.Process$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::Distortion::Process$BurstManaged)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x180499400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::Distortion::__cordl_internal_get_Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr float_t const& GlobalNamespace::Distortion::__cordl_internal_get_Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr void GlobalNamespace::Distortion::__cordl_internal_set_Level(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Level = value;
}
constexpr float_t& GlobalNamespace::Distortion::__cordl_internal_get_DryWet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryWet;
}
constexpr float_t const& GlobalNamespace::Distortion::__cordl_internal_get_DryWet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryWet;
}
constexpr void GlobalNamespace::Distortion::__cordl_internal_set_DryWet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DryWet = value;
}
constexpr float_t& GlobalNamespace::Distortion::__cordl_internal_get_WetGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetGain;
}
constexpr float_t const& GlobalNamespace::Distortion::__cordl_internal_get_WetGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetGain;
}
constexpr void GlobalNamespace::Distortion::__cordl_internal_set_WetGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WetGain = value;
}
constexpr bool& GlobalNamespace::Distortion::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::Distortion::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::Distortion::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::Distortion::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::Distortion::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::Distortion::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr float_t& GlobalNamespace::Distortion::__cordl_internal_get__drive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drive;
}
constexpr float_t const& GlobalNamespace::Distortion::__cordl_internal_get__drive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drive;
}
constexpr void GlobalNamespace::Distortion::__cordl_internal_set__drive(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drive = value;
}
inline void GlobalNamespace::Distortion::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::Distortion*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::Distortion::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::Distortion*>();
}
inline bool GlobalNamespace::Distortion::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Distortion::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::Distortion::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Distortion::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Distortion::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::Distortion::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Distortion*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::Distortion::Process(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, driveStart, driveEnd, dryWet, wetGain);
}
inline float_t GlobalNamespace::Distortion::SoftClip(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {"SoftClip", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline void GlobalNamespace::Distortion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Distortion::Process$BurstManaged(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Distortion*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, driveStart, driveEnd, dryWet, wetGain);
}
inline ::GlobalNamespace::Distortion* GlobalNamespace::Distortion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Distortion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Distortion::Distortion()   {
}
