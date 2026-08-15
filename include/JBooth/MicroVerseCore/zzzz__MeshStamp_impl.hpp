#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MeshStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__MeshStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHeightModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MeshStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution::MeshStamp_Resolution(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution::MeshStamp_Resolution()   {
}
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution  JBooth::MicroVerseCore::MeshStamp_Resolution::k32{static_cast<int32_t>(0x20)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution  JBooth::MicroVerseCore::MeshStamp_Resolution::k64{static_cast<int32_t>(0x40)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution  JBooth::MicroVerseCore::MeshStamp_Resolution::k128{static_cast<int32_t>(0x80)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution  JBooth::MicroVerseCore::MeshStamp_Resolution::k256{static_cast<int32_t>(0x100)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution  JBooth::MicroVerseCore::MeshStamp_Resolution::k512{static_cast<int32_t>(0x200)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution  JBooth::MicroVerseCore::MeshStamp_Resolution::k1024{static_cast<int32_t>(0x400)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution  JBooth::MicroVerseCore::MeshStamp_Resolution::k2048{static_cast<int32_t>(0x800)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode::MeshStamp_BlendMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode::MeshStamp_BlendMode()   {
}
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode  JBooth::MicroVerseCore::MeshStamp_BlendMode::Add{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode  JBooth::MicroVerseCore::MeshStamp_BlendMode::Subtract{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode  JBooth::MicroVerseCore::MeshStamp_BlendMode::Fillaround{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode  JBooth::MicroVerseCore::MeshStamp_BlendMode::Connect{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.get_targetDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::get_targetDepthTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"get_targetDepthTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.set_targetDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::MeshStamp::set_targetDepthTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"set_targetDepthTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.StripInBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::StripInBuild)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181444ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.FitCameraToTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::Camera*, ::UnityEngine::Bounds)>(&::JBooth::MicroVerseCore::MeshStamp::FitCameraToTarget)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814436d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"FitCameraToTarget", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.SetHideRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::GameObject*, bool)>(&::JBooth::MicroVerseCore::MeshStamp::SetHideRenderers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181444a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"SetHideRenderers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.ScanMeshFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::GameObject*)>(&::JBooth::MicroVerseCore::MeshStamp::ScanMeshFilters)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181444750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"ScanMeshFilters", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.GetPrefabBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::GameObject*)>(&::JBooth::MicroVerseCore::MeshStamp::GetPrefabBounds)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x181443aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"GetPrefabBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.RenderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::Camera*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::MeshStamp::RenderCamera)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181444360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.Capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::Capture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"Capture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181443f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::GetBounds)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814438b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181444030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181444080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.ApplyHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HeightmapData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::MeshStamp::ApplyHeightStamp)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x181442aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.ComputeStampMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::Terrain*, ::UnityEngine::Bounds)>(&::JBooth::MicroVerseCore::MeshStamp::ComputeStampMatrix)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x1814431b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"ComputeStampMatrix", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)(::UnityEngine::Material*, ::JBooth::MicroVerseCore::HeightmapData*, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::MeshStamp::PrepareMaterial)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181444190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshStamp::*)()>(&::JBooth::MicroVerseCore::MeshStamp::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181444c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_targetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_targetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_targetObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetObject = value;
}
constexpr bool& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_hideRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideRenderers;
}
constexpr bool const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_hideRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideRenderers;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_hideRenderers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideRenderers = value;
}
constexpr float_t& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr float_t const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr float_t& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_heightScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightScale;
}
constexpr float_t const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_heightScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightScale;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_heightScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightScale = value;
}
constexpr ::UnityEngine::Vector2& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_heightClamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightClamp;
}
constexpr ::UnityEngine::Vector2 const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_heightClamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightClamp;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_heightClamp(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightClamp = value;
}
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_resolution(::JBooth::MicroVerseCore::MeshStamp_Resolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolution = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get__targetDepthTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetDepthTexture_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get__targetDepthTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetDepthTexture_k__BackingField;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set__targetDepthTexture_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetDepthTexture_k__BackingField = value;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter*& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_falloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloff;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_falloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloff;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_falloff(::JBooth::MicroVerseCore::FalloffFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloff = value;
}
constexpr float_t& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_blur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blur;
}
constexpr float_t const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_blur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blur;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_blur(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blur = value;
}
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_blendMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMode;
}
constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_blendMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMode;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_blendMode(::JBooth::MicroVerseCore::MeshStamp_BlendMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendMode = value;
}
constexpr float_t& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_connectHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectHeight;
}
constexpr float_t const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_connectHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectHeight;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_connectHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectHeight = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr float_t& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_squeeze()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeeze;
}
constexpr float_t const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_squeeze() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeeze;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_squeeze(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeeze = value;
}
constexpr float_t& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_squash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squash;
}
constexpr float_t const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_squash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squash;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_squash(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squash = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_squeezeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_squeezeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squeezeMaterial;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_squeezeMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squeezeMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_tempFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const& JBooth::MicroVerseCore::MeshStamp::__cordl_internal_get_tempFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFilters;
}
constexpr void JBooth::MicroVerseCore::MeshStamp::__cordl_internal_set_tempFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempFilters = value;
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF_meshShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "meshShader", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::MeshStamp::getStaticF_meshShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "meshShader", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF_squeezeShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "squeezeShader", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::MeshStamp::getStaticF_squeezeShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "squeezeShader", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF_cam(::UnityW<::UnityEngine::Camera>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Camera>, "cam", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<::UnityW<::UnityEngine::Camera>>(value));
}
inline ::UnityW<::UnityEngine::Camera> JBooth::MicroVerseCore::MeshStamp::getStaticF_cam()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Camera>, "cam", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__AlphaMapSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AlphaMapSize", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__AlphaMapSize()  {
return ::cordl_internals::getStaticField<int32_t, "_AlphaMapSize", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__NoiseUV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__NoiseUV()  {
return ::cordl_internals::getStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__YBounds(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_YBounds", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__YBounds()  {
return ::cordl_internals::getStaticField<int32_t, "_YBounds", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__StampBounds(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_StampBounds", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__StampBounds()  {
return ::cordl_internals::getStaticField<int32_t, "_StampBounds", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__HeightScaleClamp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightScaleClamp", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__HeightScaleClamp()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightScaleClamp", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__ConnectHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ConnectHeight", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__ConnectHeight()  {
return ::cordl_internals::getStaticField<int32_t, "_ConnectHeight", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__Transform(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__Transform()  {
return ::cordl_internals::getStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__RealSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__RealSize()  {
return ::cordl_internals::getStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline void JBooth::MicroVerseCore::MeshStamp::setStaticF__StampTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_StampTex", ::JBooth::MicroVerseCore::MeshStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MeshStamp::getStaticF__StampTex()  {
return ::cordl_internals::getStaticField<int32_t, "_StampTex", ::JBooth::MicroVerseCore::MeshStamp*>();
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MeshStamp::get_targetDepthTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"get_targetDepthTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MeshStamp::set_targetDepthTexture(::UnityEngine::RenderTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"set_targetDepthTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::MeshStamp::StripInBuild()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MeshStamp::FitCameraToTarget(::UnityEngine::Camera*  cam, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"FitCameraToTarget", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, bounds);
}
inline void JBooth::MicroVerseCore::MeshStamp::SetHideRenderers(::UnityEngine::GameObject*  go, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"SetHideRenderers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go, enabled);
}
inline void JBooth::MicroVerseCore::MeshStamp::ScanMeshFilters(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"ScanMeshFilters", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::MeshStamp::GetPrefabBounds(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"GetPrefabBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, go);
}
inline void JBooth::MicroVerseCore::MeshStamp::RenderCamera(::UnityEngine::Camera*  cam, ::UnityEngine::RenderTexture*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, texture);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MeshStamp::Capture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"Capture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MeshStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::MeshStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MeshStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MeshStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::MeshStamp::ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, dest, heightmapData, od);
}
inline ::UnityEngine::Matrix4x4 JBooth::MicroVerseCore::MeshStamp::ComputeStampMatrix(::UnityEngine::Terrain*  terrain, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"ComputeStampMatrix", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, terrain, bounds);
}
inline void JBooth::MicroVerseCore::MeshStamp::PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, heightmapData, keywords);
}
inline void JBooth::MicroVerseCore::MeshStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MeshStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MeshStamp* JBooth::MicroVerseCore::MeshStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MeshStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr  JBooth::MicroVerseCore::MeshStamp::operator ::JBooth::MicroVerseCore::IHeightModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* JBooth::MicroVerseCore::MeshStamp::i___JBooth__MicroVerseCore__IHeightModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::MeshStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::MeshStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MeshStamp::MeshStamp()   {
}
