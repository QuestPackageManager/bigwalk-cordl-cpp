#pragma once
// IWYU pragma private; include "GlobalNamespace/BiquadFilters.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BiquadFilters_def.hpp"
#include "GlobalNamespace/zzzz__BiquadFilters_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BiquadFilters_FilterType::BiquadFilters_FilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BiquadFilters_FilterType::BiquadFilters_FilterType()   {
}
constexpr ::GlobalNamespace::BiquadFilters_FilterType  GlobalNamespace::BiquadFilters_FilterType::Allpass{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BiquadFilters_FilterType  GlobalNamespace::BiquadFilters_FilterType::LowPass{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BiquadFilters_FilterType  GlobalNamespace::BiquadFilters_FilterType::HighPass{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BiquadFilters_FilterType  GlobalNamespace::BiquadFilters_FilterType::Notch{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BiquadFilters_FilterType  GlobalNamespace::BiquadFilters_FilterType::LowShelf{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BiquadFilters_FilterType  GlobalNamespace::BiquadFilters_FilterType::HighShelf{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BiquadFilters_FilterType  GlobalNamespace::BiquadFilters_FilterType::PeakingEQ{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "za1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "za2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "zb1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "zb2", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BiquadFilters_DelayedSamples::BiquadFilters_DelayedSamples(float_t  za1, float_t  za2, float_t  zb1, float_t  zb2) noexcept  {
this->za1 = za1;
this->za2 = za2;
this->zb1 = zb1;
this->zb2 = zb2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BiquadFilters_DelayedSamples::BiquadFilters_DelayedSamples()   {
}
// Ctor Parameters [CppParam { name: "b0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "volWet", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dryInv", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BiquadFilters_AppliedCoefficients::BiquadFilters_AppliedCoefficients(float_t  b0, float_t  b1, float_t  b2, float_t  a1, float_t  a2, float_t  volWet, float_t  dryInv) noexcept  {
this->b0 = b0;
this->b1 = b1;
this->b2 = b2;
this->a1 = a1;
this->a2 = a2;
this->volWet = volWet;
this->dryInv = dryInv;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BiquadFilters_AppliedCoefficients::BiquadFilters_AppliedCoefficients()   {
}
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804a35c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, ::GlobalNamespace::BiquadFilters_DelayedSamples*, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, float_t)>(&::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804a33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, ::GlobalNamespace::BiquadFilters_DelayedSamples*, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804a32f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::Invoke(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length, channels, state, current, target, clampLimit);
}
inline ::System::IAsyncResult* GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::BeginInvoke(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, length, channels, state, current, target, clampLimit, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate* GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate::BiquadFilters_Process_0000049E$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804a30a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804a31d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, ::GlobalNamespace::BiquadFilters_DelayedSamples*, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, float_t)>(&::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18049cf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BiquadFilters_DelayedSamples*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>();
}
inline void GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::Invoke(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BiquadFilters_DelayedSamples*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, length, channels, state, current, target, clampLimit);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall::BiquadFilters_Process_0000049E$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_Q
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_Q)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Q", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_Q
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(float_t)>(&::GlobalNamespace::BiquadFilters::set_Q)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Q", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_Frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_Frequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Frequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_Frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(float_t)>(&::GlobalNamespace::BiquadFilters::set_Frequency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Frequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_Gain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_Gain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Gain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_Gain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(float_t)>(&::GlobalNamespace::BiquadFilters::set_Gain)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049d3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Gain", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_Vol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_Vol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Vol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_Vol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(float_t)>(&::GlobalNamespace::BiquadFilters::set_Vol)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Vol", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_DryWet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_DryWet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_DryWet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_DryWet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(float_t)>(&::GlobalNamespace::BiquadFilters::set_DryWet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049d380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_DryWet", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_ClampLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_ClampLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_ClampLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_ClampLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(float_t)>(&::GlobalNamespace::BiquadFilters::set_ClampLimit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_ClampLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cbf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(bool)>(&::GlobalNamespace::BiquadFilters::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049d330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(bool)>(&::GlobalNamespace::BiquadFilters::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18049c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(float_t)>(&::GlobalNamespace::BiquadFilters::UpdateVariables)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18049d190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.QandFrequencyCalculation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::QandFrequencyCalculation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18049d120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"QandFrequencyCalculation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.GainCalculation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(::GlobalNamespace::BiquadFilters_FilterType)>(&::GlobalNamespace::BiquadFilters::GainCalculation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18049ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"GainCalculation", {}, {::i2c::type_of<::GlobalNamespace::BiquadFilters_FilterType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.CoefficientCalculation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(::GlobalNamespace::BiquadFilters_FilterType)>(&::GlobalNamespace::BiquadFilters::CoefficientCalculation)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x18049c8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"CoefficientCalculation", {}, {::i2c::type_of<::GlobalNamespace::BiquadFilters_FilterType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::BiquadFilters::ProcessSamples)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18049cd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                    {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, ::GlobalNamespace::BiquadFilters_DelayedSamples*, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, float_t)>(&::GlobalNamespace::BiquadFilters::Process)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18049cf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BiquadFilters_DelayedSamples*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiquadFilters::*)()>(&::GlobalNamespace::BiquadFilters::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049d2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiquadFilters.Process$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, ::GlobalNamespace::BiquadFilters_DelayedSamples*, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>, float_t)>(&::GlobalNamespace::BiquadFilters::Process$BurstManaged)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180498a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BiquadFilters_DelayedSamples*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BiquadFilters_FilterType& GlobalNamespace::BiquadFilters::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::GlobalNamespace::BiquadFilters_FilterType const& GlobalNamespace::BiquadFilters::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set_Type(::GlobalNamespace::BiquadFilters_FilterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__q()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____q;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__q() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____q;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__q(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____q = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequency = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__gain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gain;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__gain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gain;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__gain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gain = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__vol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vol;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__vol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vol;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__vol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vol = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__dryWet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryWet;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__dryWet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryWet;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__dryWet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dryWet = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__clampLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clampLimit;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__clampLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clampLimit;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__clampLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clampLimit = value;
}
constexpr bool& GlobalNamespace::BiquadFilters::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::BiquadFilters::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::BiquadFilters::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::BiquadFilters::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__a0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____a0;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__a0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____a0;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__a0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____a0 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__b0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b0;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__b0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b0;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__b0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____b0 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__b1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b1;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__b1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b1;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__b1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____b1 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__b2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b2;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__b2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b2;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__b2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____b2 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__a1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____a1;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__a1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____a1;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__a1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____a1 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__a2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____a2;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__a2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____a2;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__a2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____a2 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__invA0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invA0;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__invA0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invA0;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__invA0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invA0 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__w0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____w0;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__w0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____w0;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__w0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____w0 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__alpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alpha;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__alpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alpha;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__alpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alpha = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__A()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____A;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__A() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____A;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__A(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____A = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__sampleRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__cosW0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosW0;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__cosW0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosW0;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__cosW0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosW0 = value;
}
constexpr float_t& GlobalNamespace::BiquadFilters::__cordl_internal_get__sqrtAAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrtAAlpha;
}
constexpr float_t const& GlobalNamespace::BiquadFilters::__cordl_internal_get__sqrtAAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrtAAlpha;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__sqrtAAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sqrtAAlpha = value;
}
constexpr bool& GlobalNamespace::BiquadFilters::__cordl_internal_get__dirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirty;
}
constexpr bool const& GlobalNamespace::BiquadFilters::__cordl_internal_get__dirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirty;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__dirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirty = value;
}
constexpr ::GlobalNamespace::BiquadFilters_FilterType& GlobalNamespace::BiquadFilters::__cordl_internal_get__lastType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastType;
}
constexpr ::GlobalNamespace::BiquadFilters_FilterType const& GlobalNamespace::BiquadFilters::__cordl_internal_get__lastType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastType;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__lastType(::GlobalNamespace::BiquadFilters_FilterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastType = value;
}
constexpr ::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples>& GlobalNamespace::BiquadFilters::__cordl_internal_get__delayedSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedSamples;
}
constexpr ::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples> const& GlobalNamespace::BiquadFilters::__cordl_internal_get__delayedSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedSamples;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__delayedSamples(::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedSamples = value;
}
constexpr ::GlobalNamespace::BiquadFilters_AppliedCoefficients& GlobalNamespace::BiquadFilters::__cordl_internal_get__applied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applied;
}
constexpr ::GlobalNamespace::BiquadFilters_AppliedCoefficients const& GlobalNamespace::BiquadFilters::__cordl_internal_get__applied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applied;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__applied(::GlobalNamespace::BiquadFilters_AppliedCoefficients  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applied = value;
}
constexpr bool& GlobalNamespace::BiquadFilters::__cordl_internal_get__appliedInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appliedInitialized;
}
constexpr bool const& GlobalNamespace::BiquadFilters::__cordl_internal_get__appliedInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appliedInitialized;
}
constexpr void GlobalNamespace::BiquadFilters::__cordl_internal_set__appliedInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appliedInitialized = value;
}
inline void GlobalNamespace::BiquadFilters::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::BiquadFilters*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BiquadFilters::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::BiquadFilters*>();
}
inline float_t GlobalNamespace::BiquadFilters::get_Q()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Q", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_Q(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Q", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BiquadFilters::get_Frequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Frequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_Frequency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Frequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BiquadFilters::get_Gain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Gain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_Gain(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Gain", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BiquadFilters::get_Vol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_Vol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_Vol(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_Vol", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BiquadFilters::get_DryWet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_DryWet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_DryWet(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_DryWet", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BiquadFilters::get_ClampLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"get_ClampLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_ClampLimit(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"set_ClampLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BiquadFilters::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BiquadFilters::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BiquadFilters::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::BiquadFilters::QandFrequencyCalculation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"QandFrequencyCalculation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::GainCalculation(::GlobalNamespace::BiquadFilters_FilterType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"GainCalculation", {}, {::i2c::type_of<::GlobalNamespace::BiquadFilters_FilterType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::BiquadFilters::CoefficientCalculation(::GlobalNamespace::BiquadFilters_FilterType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"CoefficientCalculation", {}, {::i2c::type_of<::GlobalNamespace::BiquadFilters_FilterType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::BiquadFilters::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiquadFilters*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::BiquadFilters::Process(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BiquadFilters_DelayedSamples*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, length, channels, state, current, target, clampLimit);
}
inline void GlobalNamespace::BiquadFilters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BiquadFilters::Process$BurstManaged(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiquadFilters*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BiquadFilters_DelayedSamples*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, length, channels, state, current, target, clampLimit);
}
inline ::GlobalNamespace::BiquadFilters* GlobalNamespace::BiquadFilters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BiquadFilters*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BiquadFilters::BiquadFilters()   {
}
