#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DynamicWavesLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DynamicWavesLod_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DynamicWavesLodSettings_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DynamicWavesLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperCompute_def.hpp"
inline void WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::setStaticF_s_HorizontalDisplace(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_HorizontalDisplace", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::getStaticF_s_HorizontalDisplace()  {
return ::cordl_internals::getStaticField<int32_t, "s_HorizontalDisplace", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::setStaticF_s_DisplaceClamp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DisplaceClamp", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::getStaticF_s_DisplaceClamp()  {
return ::cordl_internals::getStaticField<int32_t, "s_DisplaceClamp", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::setStaticF_s_Damping(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Damping", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::getStaticF_s_Damping()  {
return ::cordl_internals::getStaticField<int32_t, "s_Damping", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::setStaticF_s_Gravity(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Gravity", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::getStaticF_s_Gravity()  {
return ::cordl_internals::getStaticField<int32_t, "s_Gravity", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::setStaticF_s_CourantNumber(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CourantNumber", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::getStaticF_s_CourantNumber()  {
return ::cordl_internals::getStaticField<int32_t, "s_CourantNumber", ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs::DynamicWavesLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182558280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182558290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182557e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182263110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_SimulationShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_SimulationShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182558440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1825582a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_TimeLeftToSimulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_TimeLeftToSimulate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803054e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"get_TimeLeftToSimulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182558240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182557f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::Disable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.SetAdditionalSimulationParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesLod::*)(::WaveHarmonic::Crest::PropertyWrapperCompute)>(&::WaveHarmonic::Crest::DynamicWavesLod::SetAdditionalSimulationParameters)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182558080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182557ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182558030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.GetSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::GetSettings)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182557f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"GetSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_AttenuationInShallows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_AttenuationInShallows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"get_AttenuationInShallows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.set_AttenuationInShallows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesLod::*)(float_t)>(&::WaveHarmonic::Crest::DynamicWavesLod::set_AttenuationInShallows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"set_AttenuationInShallows", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> (::WaveHarmonic::Crest::DynamicWavesLod::*)()>(&::WaveHarmonic::Crest::DynamicWavesLod::get_Settings)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182558350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesLod.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesLod::*)(::WaveHarmonic::Crest::DynamicWavesLodSettings*)>(&::WaveHarmonic::Crest::DynamicWavesLod::set_Settings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"set_Settings", {}, {::i2c::type_of<::WaveHarmonic::Crest::DynamicWavesLodSettings*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_get__AttenuationInShallows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttenuationInShallows;
}
constexpr float_t const& WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_get__AttenuationInShallows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttenuationInShallows;
}
constexpr void WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_set__AttenuationInShallows(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AttenuationInShallows = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>& WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_get__Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings;
}
constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> const& WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_get__Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings;
}
constexpr void WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_set__Settings(::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Settings = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>& WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_get__DefaultSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultSettings;
}
constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> const& WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_get__DefaultSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultSettings;
}
constexpr void WaveHarmonic::Crest::DynamicWavesLod::__cordl_internal_set__DefaultSettings(::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultSettings = value;
}
inline void WaveHarmonic::Crest::DynamicWavesLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::DynamicWavesLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DynamicWavesLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::DynamicWavesLod*>();
}
inline void WaveHarmonic::Crest::DynamicWavesLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::DynamicWavesLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::DynamicWavesLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::DynamicWavesLod*>();
}
inline ::StringW WaveHarmonic::Crest::DynamicWavesLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::DynamicWavesLod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DynamicWavesLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DynamicWavesLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::DynamicWavesLod::get_SimulationShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::DynamicWavesLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::DynamicWavesLod::get_TimeLeftToSimulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"get_TimeLeftToSimulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::DynamicWavesLod::Bind(T  target)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 21}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  simMaterial)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simMaterial);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::DynamicWavesLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> WaveHarmonic::Crest::DynamicWavesLod::GetSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"GetSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::DynamicWavesLod::get_AttenuationInShallows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"get_AttenuationInShallows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::set_AttenuationInShallows(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"set_AttenuationInShallows", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> WaveHarmonic::Crest::DynamicWavesLod::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesLod::set_Settings(::WaveHarmonic::Crest::DynamicWavesLodSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesLod*>(),
                        {"set_Settings", {}, {::i2c::type_of<::WaveHarmonic::Crest::DynamicWavesLodSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::DynamicWavesLod* WaveHarmonic::Crest::DynamicWavesLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DynamicWavesLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DynamicWavesLod::DynamicWavesLod()   {
}
