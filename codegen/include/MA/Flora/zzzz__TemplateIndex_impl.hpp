#pragma once
// IWYU pragma private; include "MA/Flora/TemplateIndex.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateIndex (*)()>(&::MA::Flora::TemplateIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_IsCreated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180785420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(int32_t)>(&::MA::Flora::TemplateIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_BatchDomainIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchDomainIndex (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_BatchDomainIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_BatchDomainIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_BatchDomainIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(::MA::Flora::BatchDomainIndex)>(&::MA::Flora::TemplateIndex::set_BatchDomainIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_BatchDomainIndex", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateRenderType (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_Type)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(::MA::Flora::TemplateRenderType)>(&::MA::Flora::TemplateIndex::set_Type)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a91c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_Type", {}, {::i2c::type_of<::MA::Flora::TemplateRenderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateRenderFlags (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_Flags)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a80c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(::MA::Flora::TemplateRenderFlags)>(&::MA::Flora::TemplateIndex::set_Flags)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_Flags", {}, {::i2c::type_of<::MA::Flora::TemplateRenderFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_InitialVariationColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_InitialVariationColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814a8460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_InitialVariationColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_InitialVariationColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(::Unity::Mathematics::float4)>(&::MA::Flora::TemplateIndex::set_InitialVariationColor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814a8d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_InitialVariationColor", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_IsMeshLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_IsMeshLod)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a85b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsMeshLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_IsBillboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_IsBillboard)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a84f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsBillboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_IsLodGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_IsLodGroup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsLodGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasMotionVectors)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasShadowCasters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasShadowCasters)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a83a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasShadowCasters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasLightmaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasLightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasLightProbes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasLightProbes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasRandomID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasRandomID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasRandomID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasVariationColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasVariationColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasVariationColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_MaxRenderDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_MaxRenderDistance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_MaxRenderDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_MaxRenderDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(float_t)>(&::MA::Flora::TemplateIndex::set_MaxRenderDistance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a9020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_MaxRenderDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_MaxShadowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_MaxShadowDistance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a89f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_MaxShadowDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_MaxShadowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(float_t)>(&::MA::Flora::TemplateIndex::set_MaxShadowDistance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a9090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_MaxShadowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_AffectedByGlobalDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_AffectedByGlobalDensity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a7fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_AffectedByGlobalDensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_AffectedByGlobalDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(bool)>(&::MA::Flora::TemplateIndex::set_AffectedByGlobalDensity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_AffectedByGlobalDensity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_AffectedByRangeDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_AffectedByRangeDensity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_AffectedByRangeDensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_AffectedByRangeDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(bool)>(&::MA::Flora::TemplateIndex::set_AffectedByRangeDensity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_AffectedByRangeDensity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_MinShadowLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_MinShadowLod)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_MinShadowLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_MinShadowLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(int32_t)>(&::MA::Flora::TemplateIndex::set_MinShadowLod)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a9100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_MinShadowLod", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LodCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LodCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_LodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(int32_t)>(&::MA::Flora::TemplateIndex::set_LodCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LodCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LodFadeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LODFadeMode (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LodFadeMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LodFadeMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_LodFadeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(::UnityEngine::LODFadeMode)>(&::MA::Flora::TemplateIndex::set_LodFadeMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LodFadeMode", {}, {::i2c::type_of<::UnityEngine::LODFadeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasCrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasCrossFade)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a8180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasCrossFade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_HasAnimatedCrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_HasAnimatedCrossFade)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasAnimatedCrossFade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_HasAnimatedCrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(bool)>(&::MA::Flora::TemplateIndex::set_HasAnimatedCrossFade)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_HasAnimatedCrossFade", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_SupportsFadeKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_SupportsFadeKeyword)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_SupportsFadeKeyword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_SupportsFadeKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(bool)>(&::MA::Flora::TemplateIndex::set_SupportsFadeKeyword)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a9160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_SupportsFadeKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LocalReferencePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LocalReferencePoint)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a87d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalReferencePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_LocalReferencePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(::UnityEngine::Vector3)>(&::MA::Flora::TemplateIndex::set_LocalReferencePoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814a8e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LocalReferencePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LocalSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LocalSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_LocalSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(float_t)>(&::MA::Flora::TemplateIndex::set_LocalSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a8ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LocalSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LocalAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::MA::Flora::AABB> (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LocalAABB)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a86d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalAABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LocalAnchorPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LocalAnchorPoint)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a8730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalAnchorPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.set_LocalAnchorPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateIndex::*)(::UnityEngine::Vector3)>(&::MA::Flora::TemplateIndex::set_LocalAnchorPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814a8dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LocalAnchorPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LODHeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t* (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LODHeights)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LODHeights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.get_LODTransitionHeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t* (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::get_LODTransitionHeights)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a8670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LODTransitionHeights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateIndex::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateIndex::CompareTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181453a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateIndex::*)(::System::Object*)>(&::MA::Flora::TemplateIndex::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a7ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                    {::i2c::class_of<::MA::Flora::TemplateIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                    {::i2c::class_of<::MA::Flora::TemplateIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::TemplateIndex::*)()>(&::MA::Flora::TemplateIndex::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814a7f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                    {::i2c::class_of<::MA::Flora::TemplateIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.op_Implicit___MA__Flora__TemplateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateIndex (*)(int32_t)>(&::MA::Flora::TemplateIndex::op_Implicit___MA__Flora__TemplateIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::TemplateIndex, ::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::TemplateIndex, ::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::TemplateIndex MA::Flora::TemplateIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateIndex>(nullptr, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline ::MA::Flora::BatchDomainIndex MA::Flora::TemplateIndex::get_BatchDomainIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_BatchDomainIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchDomainIndex>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_BatchDomainIndex(::MA::Flora::BatchDomainIndex  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_BatchDomainIndex", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::MA::Flora::TemplateRenderType MA::Flora::TemplateIndex::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateRenderType>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_Type(::MA::Flora::TemplateRenderType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_Type", {}, {::i2c::type_of<::MA::Flora::TemplateRenderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::MA::Flora::TemplateRenderFlags MA::Flora::TemplateIndex::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateRenderFlags>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_Flags(::MA::Flora::TemplateRenderFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_Flags", {}, {::i2c::type_of<::MA::Flora::TemplateRenderFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float4 MA::Flora::TemplateIndex::get_InitialVariationColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_InitialVariationColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_InitialVariationColor(::Unity::Mathematics::float4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_InitialVariationColor", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::TemplateIndex::get_IsMeshLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsMeshLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_IsBillboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsBillboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_IsLodGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_IsLodGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_HasMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_HasShadowCasters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasShadowCasters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_HasLightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasLightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_HasLightProbes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasLightProbes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_HasRandomID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasRandomID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_HasVariationColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasVariationColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t MA::Flora::TemplateIndex::get_MaxRenderDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_MaxRenderDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_MaxRenderDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_MaxRenderDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t MA::Flora::TemplateIndex::get_MaxShadowDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_MaxShadowDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_MaxShadowDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_MaxShadowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::TemplateIndex::get_AffectedByGlobalDensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_AffectedByGlobalDensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_AffectedByGlobalDensity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_AffectedByGlobalDensity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::TemplateIndex::get_AffectedByRangeDensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_AffectedByRangeDensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_AffectedByRangeDensity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_AffectedByRangeDensity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::TemplateIndex::get_MinShadowLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_MinShadowLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_MinShadowLod(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_MinShadowLod", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::TemplateIndex::get_LodCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LodCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_LodCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LodCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::LODFadeMode MA::Flora::TemplateIndex::get_LodFadeMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LodFadeMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LODFadeMode>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_LodFadeMode(::UnityEngine::LODFadeMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LodFadeMode", {}, {::i2c::type_of<::UnityEngine::LODFadeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::TemplateIndex::get_HasCrossFade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasCrossFade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateIndex::get_HasAnimatedCrossFade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_HasAnimatedCrossFade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_HasAnimatedCrossFade(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_HasAnimatedCrossFade", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::TemplateIndex::get_SupportsFadeKeyword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_SupportsFadeKeyword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_SupportsFadeKeyword(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_SupportsFadeKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 MA::Flora::TemplateIndex::get_LocalReferencePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalReferencePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_LocalReferencePoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LocalReferencePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t MA::Flora::TemplateIndex::get_LocalSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_LocalSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LocalSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::by_ref<::MA::Flora::AABB> MA::Flora::TemplateIndex::get_LocalAABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalAABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::MA::Flora::AABB>>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 MA::Flora::TemplateIndex::get_LocalAnchorPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LocalAnchorPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void MA::Flora::TemplateIndex::set_LocalAnchorPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"set_LocalAnchorPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t* MA::Flora::TemplateIndex::get_LODHeights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LODHeights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t*>(*this, ___internal_method);
}
inline float_t* MA::Flora::TemplateIndex::get_LODTransitionHeights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"get_LODTransitionHeights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t*>(*this, ___internal_method);
}
inline int32_t MA::Flora::TemplateIndex::CompareTo(::MA::Flora::TemplateIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::TemplateIndex::Equals(::MA::Flora::TemplateIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::TemplateIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::TemplateIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::TemplateIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::MA::Flora::TemplateIndex MA::Flora::TemplateIndex::op_Implicit___MA__Flora__TemplateIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateIndex>(nullptr, ___internal_method, index);
}
inline int32_t MA::Flora::TemplateIndex::op_Implicit_int32_t(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_template);
}
inline bool MA::Flora::TemplateIndex::op_Equality(::MA::Flora::TemplateIndex  a, ::MA::Flora::TemplateIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::TemplateIndex::op_Inequality(::MA::Flora::TemplateIndex  a, ::MA::Flora::TemplateIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateIndex>"
constexpr  MA::Flora::TemplateIndex::operator ::System::IEquatable_1<::MA::Flora::TemplateIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateIndex>* MA::Flora::TemplateIndex::i___System__IEquatable_1___MA__Flora__TemplateIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::TemplateIndex>"
constexpr  MA::Flora::TemplateIndex::operator ::System::IComparable_1<::MA::Flora::TemplateIndex>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::TemplateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::TemplateIndex>"
constexpr ::System::IComparable_1<::MA::Flora::TemplateIndex>* MA::Flora::TemplateIndex::i___System__IComparable_1___MA__Flora__TemplateIndex_()  {
return static_cast<::System::IComparable_1<::MA::Flora::TemplateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateIndex::TemplateIndex(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateIndex::TemplateIndex()   {
}
