#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FoamLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FoamLod_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FoamLodSettings_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FoamLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperCompute_def.hpp"
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_MinimumWavesSlice(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_MinimumWavesSlice", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_MinimumWavesSlice()  {
return ::cordl_internals::getStaticField<int32_t, "s_MinimumWavesSlice", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_FoamMaximum(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_FoamMaximum", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_FoamMaximum()  {
return ::cordl_internals::getStaticField<int32_t, "s_FoamMaximum", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_FoamFadeRate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_FoamFadeRate", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_FoamFadeRate()  {
return ::cordl_internals::getStaticField<int32_t, "s_FoamFadeRate", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_WaveFoamStrength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveFoamStrength", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_WaveFoamStrength()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveFoamStrength", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_WaveFoamCoverage(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveFoamCoverage", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_WaveFoamCoverage()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveFoamCoverage", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_ShorelineFoamMaxDepth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ShorelineFoamMaxDepth", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_ShorelineFoamMaxDepth()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShorelineFoamMaxDepth", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_ShorelineFoamStrength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ShorelineFoamStrength", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_ShorelineFoamStrength()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShorelineFoamStrength", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_NeedsPrewarming(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_NeedsPrewarming", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_NeedsPrewarming()  {
return ::cordl_internals::getStaticField<int32_t, "s_NeedsPrewarming", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::FoamLod_ShaderIDs::setStaticF_s_FoamNegativeDepthPriming(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_FoamNegativeDepthPriming", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::FoamLod_ShaderIDs::getStaticF_s_FoamNegativeDepthPriming()  {
return ::cordl_internals::getStaticField<int32_t, "s_FoamNegativeDepthPriming", ::WaveHarmonic::Crest::FoamLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FoamLod_ShaderIDs::FoamLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182558e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825589a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182263110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_SimulationShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_SimulationShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182558fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182558e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.SetAdditionalSimulationParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLod::*)(::WaveHarmonic::Crest::PropertyWrapperCompute)>(&::WaveHarmonic::Crest::FoamLod::SetAdditionalSimulationParameters)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x182558b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182558e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825589e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::FoamLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182558b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.GetSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::FoamLodSettings> (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::GetSettings)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182558a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"GetSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_Prewarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_Prewarm)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x180f187e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"get_Prewarm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.set_Prewarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLod::*)(bool)>(&::WaveHarmonic::Crest::FoamLod::set_Prewarm)> {
  constexpr static std::size_t size = 0xedb0;
  constexpr static std::size_t addrs = 0x180f18e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"set_Prewarm", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::FoamLodSettings> (::WaveHarmonic::Crest::FoamLod::*)()>(&::WaveHarmonic::Crest::FoamLod::get_Settings)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182558eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLod.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLod::*)(::WaveHarmonic::Crest::FoamLodSettings*)>(&::WaveHarmonic::Crest::FoamLod::set_Settings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"set_Settings", {}, {::i2c::type_of<::WaveHarmonic::Crest::FoamLodSettings*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::FoamLod::__cordl_internal_get__Prewarm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Prewarm;
}
constexpr bool const& WaveHarmonic::Crest::FoamLod::__cordl_internal_get__Prewarm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Prewarm;
}
constexpr void WaveHarmonic::Crest::FoamLod::__cordl_internal_set__Prewarm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Prewarm = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>& WaveHarmonic::Crest::FoamLod::__cordl_internal_get__Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings;
}
constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> const& WaveHarmonic::Crest::FoamLod::__cordl_internal_get__Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings;
}
constexpr void WaveHarmonic::Crest::FoamLod::__cordl_internal_set__Settings(::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Settings = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>& WaveHarmonic::Crest::FoamLod::__cordl_internal_get__DefaultSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultSettings;
}
constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> const& WaveHarmonic::Crest::FoamLod::__cordl_internal_get__DefaultSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultSettings;
}
constexpr void WaveHarmonic::Crest::FoamLod::__cordl_internal_set__DefaultSettings(::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultSettings = value;
}
inline void WaveHarmonic::Crest::FoamLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::FoamLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::FoamLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::FoamLod*>();
}
inline void WaveHarmonic::Crest::FoamLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::FoamLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::FoamLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::FoamLod*>();
}
inline ::StringW WaveHarmonic::Crest::FoamLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::FoamLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::FoamLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::FoamLod::get_SimulationShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::FoamLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLod::SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void WaveHarmonic::Crest::FoamLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::FoamLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> WaveHarmonic::Crest::FoamLod::GetSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"GetSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::FoamLodSettings>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLod::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::FoamLod::get_Prewarm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"get_Prewarm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLod::set_Prewarm(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"set_Prewarm", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> WaveHarmonic::Crest::FoamLod::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::FoamLodSettings>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLod::set_Settings(::WaveHarmonic::Crest::FoamLodSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLod*>(),
                        {"set_Settings", {}, {::i2c::type_of<::WaveHarmonic::Crest::FoamLodSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::FoamLod* WaveHarmonic::Crest::FoamLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::FoamLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FoamLod::FoamLod()   {
}
