#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FlowLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FlowLod_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FlowLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IFlowProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::FlowLod_ShaderIDs::setStaticF_s_Flow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Flow", ::WaveHarmonic::Crest::FlowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FlowLod_ShaderIDs::getStaticF_s_Flow()  {
return ::cordl_internals::getStaticField<int32_t, "s_Flow", ::WaveHarmonic::Crest::FlowLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FlowLod_ShaderIDs::FlowLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825588b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825584c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182263110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825588c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182558880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182558730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::Disable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182558710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.BuildCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FlowLod::*)(::WaveHarmonic::Crest::WaterRenderer*, ::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::FlowLod::BuildCommandBuffer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182558540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.CreateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IFlowProvider* (::WaveHarmonic::Crest::FlowLod::*)(bool)>(&::WaveHarmonic::Crest::FlowLod::CreateProvider)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182558650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.SetGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FlowLod::*)(bool)>(&::WaveHarmonic::Crest::FlowLod::SetGlobals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182558790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::FlowLod::*)()>(&::WaveHarmonic::Crest::FlowLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182558500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FlowLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::FlowLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182558740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::FlowLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::FlowLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::FlowLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::FlowLod*>();
}
inline void WaveHarmonic::Crest::FlowLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::FlowLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::FlowLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::FlowLod*>();
}
inline ::StringW WaveHarmonic::Crest::FlowLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::FlowLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::FlowLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::FlowLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::FlowLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FlowLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FlowLod::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FlowLod::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FlowLod::BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, buffer);
}
inline ::WaveHarmonic::Crest::IFlowProvider* WaveHarmonic::Crest::FlowLod::CreateProvider(bool  onEnable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IFlowProvider*>(this, ___internal_method, onEnable);
}
inline void WaveHarmonic::Crest::FlowLod::SetGlobals(bool  onEnable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onEnable);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::FlowLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FlowLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FlowLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::WaveHarmonic::Crest::FlowLod* WaveHarmonic::Crest::FlowLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::FlowLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FlowLod::FlowLod()   {
}
