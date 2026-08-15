#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DebugGUI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DebugGUI_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DebugGUI_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::DebugGUI_ShaderIDs::setStaticF_s_Depth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Depth", ::WaveHarmonic::Crest::DebugGUI_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DebugGUI_ShaderIDs::getStaticF_s_Depth()  {
return ::cordl_internals::getStaticField<int32_t, "s_Depth", ::WaveHarmonic::Crest::DebugGUI_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DebugGUI_ShaderIDs::setStaticF_s_Scale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Scale", ::WaveHarmonic::Crest::DebugGUI_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DebugGUI_ShaderIDs::getStaticF_s_Scale()  {
return ::cordl_internals::getStaticField<int32_t, "s_Scale", ::WaveHarmonic::Crest::DebugGUI_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DebugGUI_ShaderIDs::setStaticF_s_Bias(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Bias", ::WaveHarmonic::Crest::DebugGUI_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DebugGUI_ShaderIDs::getStaticF_s_Bias()  {
return ::cordl_internals::getStaticField<int32_t, "s_Bias", ::WaveHarmonic::Crest::DebugGUI_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DebugGUI_ShaderIDs::DebugGUI_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.get_DebugArrayMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::WaveHarmonic::Crest::DebugGUI::get_DebugArrayMaterial)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182574d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"get_DebugArrayMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182574ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.OverGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2)>(&::WaveHarmonic::Crest::DebugGUI::OverGUI)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182574be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OverGUI", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182573e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182573f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182573ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::DebugGUI::OnUpdate)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1825749d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::OnGUI)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x1825741b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.OnGUIGerstnerSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)(float_t, ::by_ref<float_t>, float_t, float_t)>(&::WaveHarmonic::Crest::DebugGUI::OnGUIGerstnerSection)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x182573f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OnGUIGerstnerSection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.DrawShapeTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::DrawShapeTargets)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x182572ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawShapeTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.DrawSims
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::DrawSims)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x182573620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawSims", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.DrawVerticalScrollBar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::DrawVerticalScrollBar)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x182573b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawVerticalScrollBar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.DrawSim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)(::WaveHarmonic::Crest::Lod*, ::by_ref<bool>, ::by_ref<float_t>, float_t, float_t)>(&::WaveHarmonic::Crest::DebugGUI::DrawSim)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x1825730d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawSim", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.DrawTextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t, float_t, float_t)>(&::WaveHarmonic::Crest::DebugGUI::DrawTextureArray)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x182573830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawTextureArray", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.ToggleGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::ToggleGUI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182574cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"ToggleGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI.InitStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::DebugGUI::InitStatics)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182573dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"InitStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DebugGUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DebugGUI::*)()>(&::WaveHarmonic::Crest::DebugGUI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182574d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__ShowWaterData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowWaterData;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__ShowWaterData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowWaterData;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__ShowWaterData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowWaterData = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__GuiVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GuiVisible;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__GuiVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GuiVisible;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__GuiVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GuiVisible = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawLodDatasActualSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawLodDatasActualSize;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawLodDatasActualSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawLodDatasActualSize;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawLodDatasActualSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawLodDatasActualSize = value;
}
constexpr float_t& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__PausedScroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PausedScroll;
}
constexpr float_t const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__PausedScroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PausedScroll;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__PausedScroll(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PausedScroll = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawAnimatedWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawAnimatedWaves;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawAnimatedWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawAnimatedWaves;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawAnimatedWaves(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawAnimatedWaves = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawDynamicWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawDynamicWaves;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawDynamicWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawDynamicWaves;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawDynamicWaves(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawDynamicWaves = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawFoam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawFoam;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawFoam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawFoam;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawFoam(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawFoam = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawFlow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawFlow;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawFlow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawFlow;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawFlow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawFlow = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawShadow;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawShadow;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawShadow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawShadow = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawDepth;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawDepth;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawDepth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawDepth = value;
}
constexpr bool& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawClip;
}
constexpr bool const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__DrawClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawClip;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__DrawClip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawClip = value;
}
constexpr float_t& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__Scroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scroll;
}
constexpr float_t const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__Scroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scroll;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__Scroll(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Scroll = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__ViewerPositionLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerPositionLastFrame;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__ViewerPositionLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerPositionLastFrame;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__ViewerPositionLastFrame(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerPositionLastFrame = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__ViewerVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerVelocity;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::DebugGUI::__cordl_internal_get__ViewerVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewerVelocity;
}
constexpr void WaveHarmonic::Crest::DebugGUI::__cordl_internal_set__ViewerVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewerVelocity = value;
}
inline void WaveHarmonic::Crest::DebugGUI::setStaticF_s_LeftPanelWidth(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_LeftPanelWidth", ::WaveHarmonic::Crest::DebugGUI*>(std::forward<float_t>(value));
}
inline float_t WaveHarmonic::Crest::DebugGUI::getStaticF_s_LeftPanelWidth()  {
return ::cordl_internals::getStaticField<float_t, "s_LeftPanelWidth", ::WaveHarmonic::Crest::DebugGUI*>();
}
inline void WaveHarmonic::Crest::DebugGUI::setStaticF_s_BottomPanelHeight(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_BottomPanelHeight", ::WaveHarmonic::Crest::DebugGUI*>(std::forward<float_t>(value));
}
inline float_t WaveHarmonic::Crest::DebugGUI::getStaticF_s_BottomPanelHeight()  {
return ::cordl_internals::getStaticField<float_t, "s_BottomPanelHeight", ::WaveHarmonic::Crest::DebugGUI*>();
}
inline void WaveHarmonic::Crest::DebugGUI::setStaticF_s_GuiColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GuiColor", ::WaveHarmonic::Crest::DebugGUI*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DebugGUI::getStaticF_s_GuiColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GuiColor", ::WaveHarmonic::Crest::DebugGUI*>();
}
inline void WaveHarmonic::Crest::DebugGUI::setStaticF_s_SimulationNames(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*, "s_SimulationNames", ::WaveHarmonic::Crest::DebugGUI*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* WaveHarmonic::Crest::DebugGUI::getStaticF_s_SimulationNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*, "s_SimulationNames", ::WaveHarmonic::Crest::DebugGUI*>();
}
inline void WaveHarmonic::Crest::DebugGUI::setStaticF_s_DebugArrayMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_DebugArrayMaterial", ::WaveHarmonic::Crest::DebugGUI*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::DebugGUI::getStaticF_s_DebugArrayMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_DebugArrayMaterial", ::WaveHarmonic::Crest::DebugGUI*>();
}
inline void WaveHarmonic::Crest::DebugGUI::setStaticF_s_Instance(::UnityW<::WaveHarmonic::Crest::DebugGUI>  value)  {
::cordl_internals::setStaticField<::UnityW<::WaveHarmonic::Crest::DebugGUI>, "s_Instance", ::WaveHarmonic::Crest::DebugGUI*>(std::forward<::UnityW<::WaveHarmonic::Crest::DebugGUI>>(value));
}
inline ::UnityW<::WaveHarmonic::Crest::DebugGUI> WaveHarmonic::Crest::DebugGUI::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::WaveHarmonic::Crest::DebugGUI>, "s_Instance", ::WaveHarmonic::Crest::DebugGUI*>();
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::DebugGUI::get_DebugArrayMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"get_DebugArrayMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::DebugGUI::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DebugGUI::OverGUI(::UnityEngine::Vector2  screenPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OverGUI", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, screenPosition);
}
inline void WaveHarmonic::Crest::DebugGUI::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::DebugGUI::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::OnGUIGerstnerSection(float_t  x, ::by_ref<float_t>  y, float_t  w, float_t  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"OnGUIGerstnerSection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, w, h);
}
inline void WaveHarmonic::Crest::DebugGUI::DrawShapeTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawShapeTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::DrawSims()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawSims", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::DrawVerticalScrollBar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawVerticalScrollBar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::DrawSim(::WaveHarmonic::Crest::Lod*  lodData, ::by_ref<bool>  doDraw, ::by_ref<float_t>  offset, float_t  bias, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawSim", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodData, doDraw, offset, bias, scale);
}
inline void WaveHarmonic::Crest::DebugGUI::DrawTextureArray(::UnityEngine::RenderTexture*  data, int32_t  columnOffsetFromRightSide, float_t  bias, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"DrawTextureArray", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, columnOffsetFromRightSide, bias, scale);
}
inline void WaveHarmonic::Crest::DebugGUI::ToggleGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"ToggleGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::InitStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {"InitStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::DebugGUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DebugGUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DebugGUI* WaveHarmonic::Crest::DebugGUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DebugGUI*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DebugGUI::DebugGUI()   {
}
