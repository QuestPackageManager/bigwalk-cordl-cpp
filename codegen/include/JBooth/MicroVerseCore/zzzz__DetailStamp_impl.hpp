#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSettings_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IDetailModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::NeedFlowMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.UsesOtherTreeSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::UsesOtherTreeSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.UsesOtherObjectSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::UsesOtherObjectSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141cdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::NeedSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.NeedParentSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::NeedParentSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.NeedToGenerateSDFForChilden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::NeedToGenerateSDFForChilden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.SetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::DetailStamp::SetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.GetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::DetailStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::DetailStamp::GetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::GetBounds)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18141c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::Initialize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18141c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.ApplyDetailStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)(::JBooth::MicroVerseCore::DetailData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::DetailStamp::ApplyDetailStamp)> {
  constexpr static std::size_t size = 0x990;
  constexpr static std::size_t addrs = 0x18141beb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18141cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18141cc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.InqDetailPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::DetailStamp::InqDetailPrototypes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18141cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.NeedDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::NeedDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp.ApplyDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)(::JBooth::MicroVerseCore::DetailData*)>(&::JBooth::MicroVerseCore::DetailStamp::ApplyDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailStamp::*)()>(&::JBooth::MicroVerseCore::DetailStamp::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18141cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable*& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_prototype()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototype;
}
constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable* const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_prototype() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototype;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_prototype(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototype = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings>& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings> const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_settings(::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet*& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_filterSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr ::JBooth::MicroVerseCore::FilterSet* const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_filterSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterSet = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr bool& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_occludedByOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludedByOthers;
}
constexpr bool const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_occludedByOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludedByOthers;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_occludedByOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludedByOthers = value;
}
constexpr float_t& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_minDistanceFromTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromTree;
}
constexpr float_t const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_minDistanceFromTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromTree;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_minDistanceFromTree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromTree = value;
}
constexpr float_t& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_maxDistanceFromTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTree;
}
constexpr float_t const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_maxDistanceFromTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTree;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_maxDistanceFromTree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromTree = value;
}
constexpr float_t& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_minDistanceFromObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromObject;
}
constexpr float_t const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_minDistanceFromObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromObject;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_minDistanceFromObject(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromObject = value;
}
constexpr float_t& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_maxDistanceFromObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromObject;
}
constexpr float_t const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_maxDistanceFromObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromObject;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_maxDistanceFromObject(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromObject = value;
}
constexpr float_t& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_minDistanceFromParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromParent;
}
constexpr float_t const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_minDistanceFromParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromParent;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_minDistanceFromParent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromParent = value;
}
constexpr float_t& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_maxDistanceFromParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromParent;
}
constexpr float_t const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_maxDistanceFromParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromParent;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_maxDistanceFromParent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromParent = value;
}
constexpr bool& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_sdfClamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfClamp;
}
constexpr bool const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_sdfClamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfClamp;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_sdfClamp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfClamp = value;
}
constexpr ::UnityEngine::Vector2& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_weightRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightRange;
}
constexpr ::UnityEngine::Vector2 const& JBooth::MicroVerseCore::DetailStamp::__cordl_internal_get_weightRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightRange;
}
constexpr void JBooth::MicroVerseCore::DetailStamp::__cordl_internal_set_weightRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weightRange = value;
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF_detailShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "detailShader", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::DetailStamp::getStaticF_detailShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "detailShader", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__Heightmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__Heightmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__Normalmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__Normalmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__Curvemap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__Curvemap()  {
return ::cordl_internals::getStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__Flowmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__Flowmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__WeightRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightRange", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__WeightRange()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightRange", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__Density(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Density", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__Density()  {
return ::cordl_internals::getStaticField<int32_t, "_Density", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__PlacementMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__PlacementMask()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__IndexMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__IndexMap()  {
return ::cordl_internals::getStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__WeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__WeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__TextureLayerWeights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TextureLayerWeights", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__TextureLayerWeights()  {
return ::cordl_internals::getStaticField<int32_t, "_TextureLayerWeights", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__ClearLayer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__ClearLayer()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__ClearMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__ClearMask()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline void JBooth::MicroVerseCore::DetailStamp::setStaticF__DensityNoise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DensityNoise", ::JBooth::MicroVerseCore::DetailStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::DetailStamp::getStaticF__DensityNoise()  {
return ::cordl_internals::getStaticField<int32_t, "_DensityNoise", ::JBooth::MicroVerseCore::DetailStamp*>();
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::DetailStamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::DetailStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::DetailStamp::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::DetailStamp::UsesOtherTreeSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::DetailStamp::UsesOtherObjectSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::DetailStamp::NeedSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::DetailStamp::NeedParentSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::DetailStamp::NeedToGenerateSDFForChilden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailStamp::SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, rt);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::DetailStamp::GetSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::DetailStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailStamp::ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dd, resultBuffers, od);
}
inline void JBooth::MicroVerseCore::DetailStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailStamp::InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prototypes);
}
inline bool JBooth::MicroVerseCore::DetailStamp::NeedDetailClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailStamp::ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline void JBooth::MicroVerseCore::DetailStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::DetailStamp* JBooth::MicroVerseCore::DetailStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::DetailStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr  JBooth::MicroVerseCore::DetailStamp::operator ::JBooth::MicroVerseCore::IDetailModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* JBooth::MicroVerseCore::DetailStamp::i___JBooth__MicroVerseCore__IDetailModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::DetailStamp::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::DetailStamp::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::DetailStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::DetailStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::DetailStamp::DetailStamp()   {
}
