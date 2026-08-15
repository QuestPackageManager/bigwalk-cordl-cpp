#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TreeStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITreeModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreePrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeStamp_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.get_lockScaleWidthHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::get_lockScaleWidthHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_lockScaleWidthHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.set_lockScaleWidthHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::set_lockScaleWidthHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18141e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_lockScaleWidthHeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.get_randomRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::get_randomRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_randomRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.set_randomRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::set_randomRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18141e8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_randomRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.get_densityByWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::get_densityByWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141e700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_densityByWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.set_densityByWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::set_densityByWeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18141e7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_densityByWeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.get_disabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::get_disabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_disabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.set_disabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::set_disabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18141e810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_disabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.get_mapHeightFilterToScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::get_mapHeightFilterToScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141e760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_mapHeightFilterToScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.set_mapHeightFilterToScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::set_mapHeightFilterToScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18141e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_mapHeightFilterToScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.get_mapWeightToScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::get_mapWeightToScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141e780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_mapWeightToScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.set_mapWeightToScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::set_mapWeightToScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18141e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_mapWeightToScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.get_randomScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)()>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::get_randomScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_randomScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp_Randomization.set_randomScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp_Randomization::*)(bool)>(&::JBooth::MicroVerseCore::TreeStamp_Randomization::set_randomScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18141e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_randomScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool JBooth::MicroVerseCore::TreeStamp_Randomization::get_lockScaleWidthHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_lockScaleWidthHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp_Randomization::set_lockScaleWidthHeight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_lockScaleWidthHeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::TreeStamp_Randomization::get_randomRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_randomRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp_Randomization::set_randomRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_randomRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::TreeStamp_Randomization::get_densityByWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_densityByWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp_Randomization::set_densityByWeight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_densityByWeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::TreeStamp_Randomization::get_disabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_disabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp_Randomization::set_disabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_disabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::TreeStamp_Randomization::get_mapHeightFilterToScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_mapHeightFilterToScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp_Randomization::set_mapHeightFilterToScale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_mapHeightFilterToScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::TreeStamp_Randomization::get_mapWeightToScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_mapWeightToScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp_Randomization::set_mapWeightToScale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_mapWeightToScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::TreeStamp_Randomization::get_randomScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"get_randomScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp_Randomization::set_randomScale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp_Randomization>(),
                        {"set_randomScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleHeightRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleWidthRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "sink", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleMultiplierAtBoundaries", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "weightRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::TreeStamp_Randomization::TreeStamp_Randomization(float_t  weight, ::UnityEngine::Vector2  scaleHeightRange, ::UnityEngine::Vector2  scaleWidthRange, float_t  sink, float_t  scaleMultiplierAtBoundaries, ::UnityEngine::Vector2  weightRange, int32_t  flags) noexcept  {
this->weight = weight;
this->scaleHeightRange = scaleHeightRange;
this->scaleWidthRange = scaleWidthRange;
this->sink = sink;
this->scaleMultiplierAtBoundaries = scaleMultiplierAtBoundaries;
this->weightRange = weightRange;
this->flags = flags;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::TreeStamp_Randomization::TreeStamp_Randomization()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181428700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.Revision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::Revision)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814292e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"Revision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814283a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::NeedFlowMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814283d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::GetBounds)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814279e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.OccludesOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::OccludesOthers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.UsesOtherTreeSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::UsesOtherTreeSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.UsesOtherObjectSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::UsesOtherObjectSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181429470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::NeedSDF)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181428420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.NeedParentSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::NeedParentSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181428400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.NeedToGenerateSDFForChilden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::NeedToGenerateSDFForChilden)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181428490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.SetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::TreeStamp::SetSDF)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814293b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.GetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::TreeStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::TreeStamp::GetSDF)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181427b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::Initialize)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x181427bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.InqTreePrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::TreeStamp::InqTreePrototypes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181428370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.NeedTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::NeedTreeClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.ApplyTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)(::JBooth::MicroVerseCore::TreeData*)>(&::JBooth::MicroVerseCore::TreeStamp::ApplyTreeClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.NeedDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::NeedDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.ApplyDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)(::JBooth::MicroVerseCore::DetailData*)>(&::JBooth::MicroVerseCore::TreeStamp::ApplyDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.ApplyTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::TreeStamp::ApplyTreeStamp)> {
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0x181426eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.ProcessTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::TreeStamp::ProcessTreeStamp)> {
  constexpr static std::size_t size = 0xb00;
  constexpr static std::size_t addrs = 0x1814287e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181428530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814278f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814285b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.ApplyTextureStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::TextureData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::TreeStamp::ApplyTextureStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp.InqTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::TreeStamp::InqTerrainLayers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814282d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeStamp::*)()>(&::JBooth::MicroVerseCore::TreeStamp::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181429860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_prototypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypes;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_prototypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypes;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_prototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototypes = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_randomizations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizations;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_randomizations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizations;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_randomizations(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomizations = value;
}
constexpr uint32_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr uint32_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_seed(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_poissonDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDisk;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_poissonDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDisk;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_poissonDisk(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poissonDisk = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_poissonDiskStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDiskStrength;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_poissonDiskStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poissonDiskStrength;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_poissonDiskStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poissonDiskStrength = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_density(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___density = value;
}
constexpr bool& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_occludeOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeOthers;
}
constexpr bool const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_occludeOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeOthers;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_occludeOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeOthers = value;
}
constexpr bool& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_occludedByOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludedByOthers;
}
constexpr bool const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_occludedByOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludedByOthers;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_occludedByOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludedByOthers = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minDistanceFromTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromTree;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minDistanceFromTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromTree;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_minDistanceFromTree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromTree = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_maxDistanceFromTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTree;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_maxDistanceFromTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTree;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_maxDistanceFromTree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromTree = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minDistanceFromObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromObject;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minDistanceFromObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromObject;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_minDistanceFromObject(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromObject = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_maxDistanceFromObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromObject;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_maxDistanceFromObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromObject;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_maxDistanceFromObject(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromObject = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minDistanceFromParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromParent;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minDistanceFromParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromParent;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_minDistanceFromParent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromParent = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_maxDistanceFromParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromParent;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_maxDistanceFromParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromParent;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_maxDistanceFromParent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromParent = value;
}
constexpr bool& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_sdfClamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfClamp;
}
constexpr bool const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_sdfClamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfClamp;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_sdfClamp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfClamp = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHeight;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_minHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHeight;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_minHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_heightModAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModAmount;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_heightModAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModAmount;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_heightModAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightModAmount = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_heightModWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_heightModWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModWidth;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_heightModWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightModWidth = value;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_layerWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_layerWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWeight;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_layerWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerWeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_layerWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_layerWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWidth;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_layerWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerWidth = value;
}
constexpr bool& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_applyFilteringToTextureMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyFilteringToTextureMod;
}
constexpr bool const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_applyFilteringToTextureMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyFilteringToTextureMod;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_applyFilteringToTextureMod(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyFilteringToTextureMod = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_filterSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr ::JBooth::MicroVerseCore::FilterSet* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_filterSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterSet = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_textureLayerWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureLayerWeights;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_textureLayerWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureLayerWeights;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_textureLayerWeights(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureLayerWeights = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get__mrt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mrt;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get__mrt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mrt;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set__mrt(::ArrayW<::UnityEngine::RenderBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mrt = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_sdfs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_sdfs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfs;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_sdfs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfs = value;
}
constexpr ::UnityEngine::ComputeBuffer*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_randomizationBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizationBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_randomizationBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizationBuffer;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_randomizationBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomizationBuffer = value;
}
constexpr ::ArrayW<int32_t>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_prototypeIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypeIndexes;
}
constexpr ::ArrayW<int32_t> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_prototypeIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypeIndexes;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_prototypeIndexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototypeIndexes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_posWeightRTs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posWeightRTs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_posWeightRTs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posWeightRTs;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_posWeightRTs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___posWeightRTs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_randomsRTs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomsRTs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_randomsRTs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomsRTs;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_randomsRTs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomsRTs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>*& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_prototypeMappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypeMappings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>* const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_prototypeMappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototypeMappings;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_prototypeMappings(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototypeMappings = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_heightModMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_heightModMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightModMat;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_heightModMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightModMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_splatModMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatModMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::TreeStamp::__cordl_internal_get_splatModMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatModMat;
}
constexpr void JBooth::MicroVerseCore::TreeStamp::__cordl_internal_set_splatModMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatModMat = value;
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF_randomTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "randomTexture", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> JBooth::MicroVerseCore::TreeStamp::getStaticF_randomTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "randomTexture", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF_treeStampShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "treeStampShader", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::TreeStamp::getStaticF_treeStampShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "treeStampShader", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__RandomTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RandomTex", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__RandomTex()  {
return ::cordl_internals::getStaticField<int32_t, "_RandomTex", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Disc(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Disc", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Disc()  {
return ::cordl_internals::getStaticField<int32_t, "_Disc", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__DiscStrength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DiscStrength", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__DiscStrength()  {
return ::cordl_internals::getStaticField<int32_t, "_DiscStrength", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Density(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Density", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Density()  {
return ::cordl_internals::getStaticField<int32_t, "_Density", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__InstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InstanceCount", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__InstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "_InstanceCount", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Heightmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Heightmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Normalmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Normalmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Curvemap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Curvemap()  {
return ::cordl_internals::getStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Flowmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Flowmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__ClearLayer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__ClearLayer()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__ClearMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__ClearMask()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__MinHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_MinHeight", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__MinHeight()  {
return ::cordl_internals::getStaticField<int32_t, "_MinHeight", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__NumTreeIndexes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NumTreeIndexes", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__NumTreeIndexes()  {
return ::cordl_internals::getStaticField<int32_t, "_NumTreeIndexes", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__TotalWeights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TotalWeights", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__TotalWeights()  {
return ::cordl_internals::getStaticField<int32_t, "_TotalWeights", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__HeightOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightOffset", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__HeightOffset()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightOffset", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__PlacementMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__PlacementMask()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__TerrainPixelCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerrainPixelCount", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__TerrainPixelCount()  {
return ::cordl_internals::getStaticField<int32_t, "_TerrainPixelCount", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__ModWidth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ModWidth", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__ModWidth()  {
return ::cordl_internals::getStaticField<int32_t, "_ModWidth", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__IndexMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__IndexMap()  {
return ::cordl_internals::getStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__WeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__WeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Seed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Seed", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Seed()  {
return ::cordl_internals::getStaticField<int32_t, "_Seed", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__TextureLayerWeights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TextureLayerWeights", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__TextureLayerWeights()  {
return ::cordl_internals::getStaticField<int32_t, "_TextureLayerWeights", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Randomizations(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Randomizations", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Randomizations()  {
return ::cordl_internals::getStaticField<int32_t, "_Randomizations", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__YCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_YCount", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__YCount()  {
return ::cordl_internals::getStaticField<int32_t, "_YCount", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__RealHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RealHeight", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__RealHeight()  {
return ::cordl_internals::getStaticField<int32_t, "_RealHeight", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__TreeSDF(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TreeSDF", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__TreeSDF()  {
return ::cordl_internals::getStaticField<int32_t, "_TreeSDF", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Amount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Amount", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Amount()  {
return ::cordl_internals::getStaticField<int32_t, "_Amount", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Width(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Width()  {
return ::cordl_internals::getStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline void JBooth::MicroVerseCore::TreeStamp::setStaticF__Index(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Index", ::JBooth::MicroVerseCore::TreeStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeStamp::getStaticF__Index()  {
return ::cordl_internals::getStaticField<int32_t, "_Index", ::JBooth::MicroVerseCore::TreeStamp*>();
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::TreeStamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::Revision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"Revision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::TreeStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::OccludesOthers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::UsesOtherTreeSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::UsesOtherObjectSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::NeedSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::NeedParentSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::NeedToGenerateSDFForChilden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, rt);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::TreeStamp::GetSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::TreeStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  trees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trees);
}
inline bool JBooth::MicroVerseCore::TreeStamp::NeedTreeClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline bool JBooth::MicroVerseCore::TreeStamp::NeedDetailClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline void JBooth::MicroVerseCore::TreeStamp::ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td, jobs, od);
}
inline void JBooth::MicroVerseCore::TreeStamp::ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::TreeStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeStamp::ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexSrc, indexDest, weightSrc, weightDest, splatmapData, od);
}
inline void JBooth::MicroVerseCore::TreeStamp::InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, prototypes);
}
inline void JBooth::MicroVerseCore::TreeStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::TreeStamp* JBooth::MicroVerseCore::TreeStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::TreeStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr  JBooth::MicroVerseCore::TreeStamp::operator ::JBooth::MicroVerseCore::ITreeModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* JBooth::MicroVerseCore::TreeStamp::i___JBooth__MicroVerseCore__ITreeModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::TreeStamp::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::TreeStamp::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::TreeStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::TreeStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr  JBooth::MicroVerseCore::TreeStamp::operator ::JBooth::MicroVerseCore::ITextureModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* JBooth::MicroVerseCore::TreeStamp::i___JBooth__MicroVerseCore__ITextureModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::TreeStamp::TreeStamp()   {
}
