#pragma once
// IWYU pragma private; include "GlobalNamespace/BitCrusher.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BitCrusher_def.hpp"
#include "GlobalNamespace/zzzz__BitCrusher_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804a3c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, int32_t, float_t, float_t, float_t, float_t, int32_t)>(&::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1804a39e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::*)(float_t*, int32_t, int32_t, int32_t, float_t, float_t, float_t, float_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804a38d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataLength, channels, step, ampVal, crushScale, dryWet, smooth, mono);
}
inline ::System::IAsyncResult* GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::BeginInvoke(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, dataLength, channels, step, ampVal, crushScale, dryWet, smooth, mono, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_10);
}
inline void GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate* GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate::BitCrusher_Process_000004A8$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804a3680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804a37b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, int32_t, float_t, float_t, float_t, float_t, int32_t)>(&::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18049d5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>();
}
inline void GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, step, ampVal, crushScale, dryWet, smooth, mono);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall::BitCrusher_Process_000004A8$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitCrusher::*)()>(&::GlobalNamespace::BitCrusher::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher::*)(bool)>(&::GlobalNamespace::BitCrusher::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitCrusher::*)()>(&::GlobalNamespace::BitCrusher::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049d830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher::*)(bool)>(&::GlobalNamespace::BitCrusher::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049d840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher::*)()>(&::GlobalNamespace::BitCrusher::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18049d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.RebuildBitDepthCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher::*)()>(&::GlobalNamespace::BitCrusher::RebuildBitDepthCache)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18049d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"RebuildBitDepthCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher::*)(float_t)>(&::GlobalNamespace::BitCrusher::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::BitCrusher::ProcessSamples)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18049d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                    {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, int32_t, float_t, float_t, float_t, float_t, int32_t)>(&::GlobalNamespace::BitCrusher::Process)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18049d5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitCrusher::*)()>(&::GlobalNamespace::BitCrusher::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitCrusher.Process$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t*, int32_t, int32_t, int32_t, float_t, float_t, float_t, float_t, int32_t)>(&::GlobalNamespace::BitCrusher::Process$BurstManaged)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x180498d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BitCrusher::__cordl_internal_get_BitDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BitDepth;
}
constexpr int32_t const& GlobalNamespace::BitCrusher::__cordl_internal_get_BitDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BitDepth;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set_BitDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BitDepth = value;
}
constexpr int32_t& GlobalNamespace::BitCrusher::__cordl_internal_get_CrushRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrushRate;
}
constexpr int32_t const& GlobalNamespace::BitCrusher::__cordl_internal_get_CrushRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrushRate;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set_CrushRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CrushRate = value;
}
constexpr float_t& GlobalNamespace::BitCrusher::__cordl_internal_get_DryWet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryWet;
}
constexpr float_t const& GlobalNamespace::BitCrusher::__cordl_internal_get_DryWet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryWet;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set_DryWet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DryWet = value;
}
constexpr float_t& GlobalNamespace::BitCrusher::__cordl_internal_get_Smooth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Smooth;
}
constexpr float_t const& GlobalNamespace::BitCrusher::__cordl_internal_get_Smooth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Smooth;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set_Smooth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Smooth = value;
}
constexpr bool& GlobalNamespace::BitCrusher::__cordl_internal_get_Mono()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mono;
}
constexpr bool const& GlobalNamespace::BitCrusher::__cordl_internal_get_Mono() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mono;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set_Mono(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mono = value;
}
constexpr bool& GlobalNamespace::BitCrusher::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::BitCrusher::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::BitCrusher::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::BitCrusher::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr int32_t& GlobalNamespace::BitCrusher::__cordl_internal_get__cachedAmpVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedAmpVal;
}
constexpr int32_t const& GlobalNamespace::BitCrusher::__cordl_internal_get__cachedAmpVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedAmpVal;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set__cachedAmpVal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedAmpVal = value;
}
constexpr float_t& GlobalNamespace::BitCrusher::__cordl_internal_get__cachedCrushScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCrushScale;
}
constexpr float_t const& GlobalNamespace::BitCrusher::__cordl_internal_get__cachedCrushScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCrushScale;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set__cachedCrushScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedCrushScale = value;
}
constexpr int32_t& GlobalNamespace::BitCrusher::__cordl_internal_get__cachedBitDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedBitDepth;
}
constexpr int32_t const& GlobalNamespace::BitCrusher::__cordl_internal_get__cachedBitDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedBitDepth;
}
constexpr void GlobalNamespace::BitCrusher::__cordl_internal_set__cachedBitDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedBitDepth = value;
}
inline void GlobalNamespace::BitCrusher::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::BitCrusher*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BitCrusher::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::BitCrusher*>();
}
inline bool GlobalNamespace::BitCrusher::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BitCrusher::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BitCrusher::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BitCrusher::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BitCrusher::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BitCrusher::RebuildBitDepthCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"RebuildBitDepthCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BitCrusher::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::BitCrusher::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BitCrusher*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::BitCrusher::Process(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"Process", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, step, ampVal, crushScale, dryWet, smooth, mono);
}
inline void GlobalNamespace::BitCrusher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BitCrusher::Process$BurstManaged(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitCrusher*>(),
                        {"Process$BurstManaged", {}, {::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, dataLength, channels, step, ampVal, crushScale, dryWet, smooth, mono);
}
inline ::GlobalNamespace::BitCrusher* GlobalNamespace::BitCrusher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitCrusher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitCrusher::BitCrusher()   {
}
