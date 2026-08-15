#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AbsorptionLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ColorLod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__AbsorptionLod_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__AbsorptionLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
inline void WaveHarmonic::Crest::AbsorptionLod_ShaderIDs::setStaticF_s_SampleAbsorptionSimulation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SampleAbsorptionSimulation", ::WaveHarmonic::Crest::AbsorptionLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::AbsorptionLod_ShaderIDs::getStaticF_s_SampleAbsorptionSimulation()  {
return ::cordl_internals::getStaticField<int32_t, "s_SampleAbsorptionSimulation", ::WaveHarmonic::Crest::AbsorptionLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AbsorptionLod_ShaderIDs::AbsorptionLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182550140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182550140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18254fd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_RequiresClearBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_RequiresClearBorder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_AlwaysClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_AlwaysClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182550020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_GlobalShaderID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_GlobalShaderID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182550120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18254ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.SetShorelineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AbsorptionLod::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::WaveHarmonic::Crest::AbsorptionLod::SetShorelineColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18254fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::AbsorptionLod::*)()>(&::WaveHarmonic::Crest::AbsorptionLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18254fda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::AbsorptionLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18254fde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::AbsorptionLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::AbsorptionLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AbsorptionLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::AbsorptionLod*>();
}
inline void WaveHarmonic::Crest::AbsorptionLod::setStaticF_s_DefaultColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_DefaultColor", ::WaveHarmonic::Crest::AbsorptionLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AbsorptionLod::getStaticF_s_DefaultColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_DefaultColor", ::WaveHarmonic::Crest::AbsorptionLod*>();
}
inline void WaveHarmonic::Crest::AbsorptionLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::AbsorptionLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::AbsorptionLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::AbsorptionLod*>();
}
inline ::StringW WaveHarmonic::Crest::AbsorptionLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::AbsorptionLod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AbsorptionLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::AbsorptionLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::AbsorptionLod::get_RequiresClearBorder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::AbsorptionLod::get_AlwaysClear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AbsorptionLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::AbsorptionLod::get_GlobalShaderID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AbsorptionLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AbsorptionLod::SetShorelineColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::AbsorptionLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AbsorptionLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::WaveHarmonic::Crest::AbsorptionLod* WaveHarmonic::Crest::AbsorptionLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::AbsorptionLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AbsorptionLod::AbsorptionLod()   {
}
