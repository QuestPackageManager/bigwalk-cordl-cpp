#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicDelay.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BasicDelay_def.hpp"
#include "GlobalNamespace/zzzz__BasicDelay_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "WriteHead", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CrossfadePosition", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CrossfadeIncrement", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDelayChanging", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OldDelayLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DelayLength", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BasicDelay_DelayState::BasicDelay_DelayState(int32_t  WriteHead, float_t  CrossfadePosition, float_t  CrossfadeIncrement, int32_t  IsDelayChanging, float_t  OldDelayLength, float_t  DelayLength) noexcept  {
this->WriteHead = WriteHead;
this->CrossfadePosition = CrossfadePosition;
this->CrossfadeIncrement = CrossfadeIncrement;
this->IsDelayChanging = IsDelayChanging;
this->OldDelayLength = OldDelayLength;
this->DelayLength = DelayLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicDelay_DelayState::BasicDelay_DelayState()   {
}
//  Writing Method size for method: ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804a2fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, float_t*, int32_t, int32_t, float_t, float_t, float_t, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>)>(&::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1804a2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, float_t*, int32_t, int32_t, float_t, float_t, float_t, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804a2c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataLength, channels, delayBuffers, bufferLength, bufferMask, decayRatio, dryMix, wetMix, state);
}
inline ::System::IAsyncResult* GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::BeginInvoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, dataLength, channels, delayBuffers, bufferLength, bufferMask, decayRatio, dryMix, wetMix, state, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate* GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicDelay_Process_00000486$PostfixBurstDelegate::BasicDelay_Process_00000486$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804a29f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804a2b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, float_t*, int32_t, int32_t, float_t, float_t, float_t, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>)>(&::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18049c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BasicDelay_DelayState>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>();
}
inline void GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BasicDelay_DelayState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, delayBuffers, bufferLength, bufferMask, decayRatio, dryMix, wetMix, state);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicDelay_Process_00000486$BurstDirectCall::BasicDelay_Process_00000486$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.get_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::get_Delay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_Delay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.set_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(int32_t)>(&::GlobalNamespace::BasicDelay::set_Delay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_Delay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.get_DecayRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::get_DecayRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_DecayRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.set_DecayRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(float_t)>(&::GlobalNamespace::BasicDelay::set_DecayRatio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049c430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_DecayRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.get_DryMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::get_DryMix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_DryMix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.set_DryMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(float_t)>(&::GlobalNamespace::BasicDelay::set_DryMix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_DryMix", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.get_WetMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::get_WetMix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_WetMix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.set_WetMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(float_t)>(&::GlobalNamespace::BasicDelay::set_WetMix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_WetMix", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(bool)>(&::GlobalNamespace::BasicDelay::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180499eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(bool)>(&::GlobalNamespace::BasicDelay::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18049bdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::Init)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18049bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(float_t)>(&::GlobalNamespace::BasicDelay::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::BasicDelay::ProcessSamples)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18049bf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, float_t*, int32_t, int32_t, float_t, float_t, float_t, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>)>(&::GlobalNamespace::BasicDelay::Process)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18049c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BasicDelay_DelayState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicDelay::*)()>(&::GlobalNamespace::BasicDelay::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicDelay.Process$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, float_t*, int32_t, int32_t, float_t, float_t, float_t, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>)>(&::GlobalNamespace::BasicDelay::Process$BurstManaged)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0x180497f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BasicDelay_DelayState>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BasicDelay::__cordl_internal_get__delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr int32_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__delay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delay = value;
}
constexpr float_t& GlobalNamespace::BasicDelay::__cordl_internal_get__decayRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayRatio;
}
constexpr float_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__decayRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayRatio;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__decayRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decayRatio = value;
}
constexpr float_t& GlobalNamespace::BasicDelay::__cordl_internal_get__dryMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryMix;
}
constexpr float_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__dryMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryMix;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__dryMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dryMix = value;
}
constexpr float_t& GlobalNamespace::BasicDelay::__cordl_internal_get__wetMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wetMix;
}
constexpr float_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__wetMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wetMix;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__wetMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wetMix = value;
}
constexpr bool& GlobalNamespace::BasicDelay::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::BasicDelay::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::BasicDelay::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::BasicDelay::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BasicDelay::__cordl_internal_get__delayBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBuffers;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BasicDelay::__cordl_internal_get__delayBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBuffers;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__delayBuffers(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayBuffers = value;
}
constexpr int32_t& GlobalNamespace::BasicDelay::__cordl_internal_get__bufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
constexpr int32_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__bufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__bufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferLength = value;
}
constexpr int32_t& GlobalNamespace::BasicDelay::__cordl_internal_get__bufferMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferMask;
}
constexpr int32_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__bufferMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferMask;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__bufferMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferMask = value;
}
constexpr int32_t& GlobalNamespace::BasicDelay::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr int32_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
constexpr int32_t& GlobalNamespace::BasicDelay::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr int32_t& GlobalNamespace::BasicDelay::__cordl_internal_get__writeHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeHead;
}
constexpr int32_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__writeHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeHead;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__writeHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeHead = value;
}
constexpr bool& GlobalNamespace::BasicDelay::__cordl_internal_get__isDelayChanging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDelayChanging;
}
constexpr bool const& GlobalNamespace::BasicDelay::__cordl_internal_get__isDelayChanging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDelayChanging;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__isDelayChanging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDelayChanging = value;
}
constexpr float_t& GlobalNamespace::BasicDelay::__cordl_internal_get__crossfadePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crossfadePosition;
}
constexpr float_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__crossfadePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crossfadePosition;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__crossfadePosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crossfadePosition = value;
}
constexpr float_t& GlobalNamespace::BasicDelay::__cordl_internal_get__crossfadeIncrement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crossfadeIncrement;
}
constexpr float_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__crossfadeIncrement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crossfadeIncrement;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__crossfadeIncrement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crossfadeIncrement = value;
}
constexpr float_t& GlobalNamespace::BasicDelay::__cordl_internal_get__oldDelayBufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldDelayBufferLength;
}
constexpr float_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__oldDelayBufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldDelayBufferLength;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__oldDelayBufferLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oldDelayBufferLength = value;
}
constexpr float_t& GlobalNamespace::BasicDelay::__cordl_internal_get__delayBufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBufferLength;
}
constexpr float_t const& GlobalNamespace::BasicDelay::__cordl_internal_get__delayBufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBufferLength;
}
constexpr void GlobalNamespace::BasicDelay::__cordl_internal_set__delayBufferLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayBufferLength = value;
}
inline void GlobalNamespace::BasicDelay::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::BasicDelay*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BasicDelay::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::BasicDelay*>();
}
inline int32_t GlobalNamespace::BasicDelay::get_Delay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_Delay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::set_Delay(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_Delay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BasicDelay::get_DecayRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_DecayRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::set_DecayRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_DecayRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BasicDelay::get_DryMix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_DryMix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::set_DryMix(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_DryMix", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BasicDelay::get_WetMix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"get_WetMix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::set_WetMix(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"set_WetMix", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BasicDelay::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BasicDelay::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicDelay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::BasicDelay::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BasicDelay*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::BasicDelay::Process(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BasicDelay_DelayState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, delayBuffers, bufferLength, bufferMask, decayRatio, dryMix, wetMix, state);
}
inline void GlobalNamespace::BasicDelay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicDelay::Process$BurstManaged(float_t*  data, int32_t  dataLength, int32_t  channels, float_t*  delayBuffers, int32_t  bufferLength, int32_t  bufferMask, float_t  decayRatio, float_t  dryMix, float_t  wetMix, ::by_ref<::GlobalNamespace::BasicDelay_DelayState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicDelay*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BasicDelay_DelayState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, delayBuffers, bufferLength, bufferMask, decayRatio, dryMix, wetMix, state);
}
inline ::GlobalNamespace::BasicDelay* GlobalNamespace::BasicDelay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicDelay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicDelay::BasicDelay()   {
}
