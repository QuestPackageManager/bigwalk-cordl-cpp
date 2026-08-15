#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ScatteringLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ColorLod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ScatteringLod_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ScatteringLod_def.hpp"
inline void WaveHarmonic::Crest::ScatteringLod_ShaderIDs::setStaticF_s_SampleScatteringSimulation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SampleScatteringSimulation", ::WaveHarmonic::Crest::ScatteringLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ScatteringLod_ShaderIDs::getStaticF_s_SampleScatteringSimulation()  {
return ::cordl_internals::getStaticField<int32_t, "s_SampleScatteringSimulation", ::WaveHarmonic::Crest::ScatteringLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ScatteringLod_ShaderIDs::ScatteringLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255bf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_RequiresClearBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_RequiresClearBorder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_AlwaysClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_AlwaysClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_ClearColor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18255c270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_GlobalShaderID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_GlobalShaderID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18255c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.SetShorelineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ScatteringLod::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::WaveHarmonic::Crest::ScatteringLod::SetShorelineColor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18255c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::ScatteringLod::*)()>(&::WaveHarmonic::Crest::ScatteringLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ScatteringLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::ScatteringLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::ScatteringLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::ScatteringLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ScatteringLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::ScatteringLod*>();
}
inline void WaveHarmonic::Crest::ScatteringLod::setStaticF_s_DefaultColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_DefaultColor", ::WaveHarmonic::Crest::ScatteringLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ScatteringLod::getStaticF_s_DefaultColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_DefaultColor", ::WaveHarmonic::Crest::ScatteringLod*>();
}
inline void WaveHarmonic::Crest::ScatteringLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::ScatteringLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ScatteringLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::ScatteringLod*>();
}
inline ::StringW WaveHarmonic::Crest::ScatteringLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::ScatteringLod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ScatteringLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ScatteringLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ScatteringLod::get_RequiresClearBorder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ScatteringLod::get_AlwaysClear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ScatteringLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ScatteringLod::get_GlobalShaderID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ScatteringLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ScatteringLod::SetShorelineColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ScatteringLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ScatteringLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ScatteringLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::WaveHarmonic::Crest::ScatteringLod* WaveHarmonic::Crest::ScatteringLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ScatteringLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ScatteringLod::ScatteringLod()   {
}
