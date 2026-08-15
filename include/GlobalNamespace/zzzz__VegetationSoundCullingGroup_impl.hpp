#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationSoundCullingGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundCullingGroup_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__RustleOperation_def.hpp"
#include "GlobalNamespace/zzzz__VegetationAudioCullingContainer_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_def.hpp"
#include "GlobalNamespace/zzzz__WindyOperation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_ParentContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VegetationAudioCullingContainer* (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_ParentContainer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_ParentContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_ParentContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::GlobalNamespace::VegetationAudioCullingContainer*)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_ParentContainer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_ParentContainer", {}, {::i2c::type_of<::GlobalNamespace::VegetationAudioCullingContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_GroupIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_GroupIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_GroupIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_GroupIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_GroupIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_GroupIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_ElementStartIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_ElementStartIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_ElementStartIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_ElementStartIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_ElementStartIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_ElementStartIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_IsDetail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_IsDetail)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_IsDetail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_IsDetail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(bool)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_IsDetail)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_IsDetail", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_Treeness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_Treeness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_Treeness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_Treeness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(float_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_Treeness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_Treeness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_Distances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_Distances)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f2bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_Distances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_Distances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::Unity::Mathematics::float3)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_Distances)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_Distances", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_TempSpheres
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::BoundingSphere> (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_TempSpheres)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_TempSpheres", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_TempSpheres
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::ArrayW<::UnityEngine::BoundingSphere>)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_TempSpheres)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_TempSpheres", {}, {::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_GO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_GO)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_GO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_GO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_GO)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_GO", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_RustleSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRandomContainer> (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_RustleSound)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_RustleSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_RustleSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::GlobalNamespace::AudioRandomContainer*)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_RustleSound)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_RustleSound", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_WindySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRandomContainer> (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_WindySound)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_WindySound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_WindySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::GlobalNamespace::AudioRandomContainer*)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_WindySound)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_WindySound", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.get_LastWindyCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::get_LastWindyCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_LastWindyCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.set_LastWindyCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::set_LastWindyCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_LastWindyCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.GetWindyResultsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::GetWindyResultsList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f2950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"GetWindyResultsList", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.ResetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::ResetIndices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803f2ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"ResetIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.ProcessRustleResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::GlobalNamespace::RustleOperation)>(&::GlobalNamespace::VegetationSoundCullingGroup::ProcessRustleResult)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f2990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"ProcessRustleResult", {}, {::i2c::type_of<::GlobalNamespace::RustleOperation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.ProcessWindyResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)(::GlobalNamespace::WindyOperation)>(&::GlobalNamespace::VegetationSoundCullingGroup::ProcessWindyResult)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f29b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"ProcessWindyResult", {}, {::i2c::type_of<::GlobalNamespace::WindyOperation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.QueryWindyIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::QueryWindyIndices)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"QueryWindyIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.QueryRustleIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::QueryRustleIndices)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f2a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"QueryRustleIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.GetResultSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VegetationSoundElement (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::GetResultSphere)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803f28e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"GetResultSphere", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup.GetSphereAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VegetationSoundElement (::GlobalNamespace::VegetationSoundCullingGroup::*)(int32_t)>(&::GlobalNamespace::VegetationSoundCullingGroup::GetSphereAt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f2910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"GetSphereAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroup::*)()>(&::GlobalNamespace::VegetationSoundCullingGroup::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f2b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VegetationAudioCullingContainer*& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__ParentContainer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentContainer_k__BackingField;
}
constexpr ::GlobalNamespace::VegetationAudioCullingContainer* const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__ParentContainer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentContainer_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__ParentContainer_k__BackingField(::GlobalNamespace::VegetationAudioCullingContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParentContainer_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__GroupIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GroupIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__GroupIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GroupIndex_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__GroupIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GroupIndex_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__ElementStartIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementStartIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__ElementStartIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementStartIndex_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__ElementStartIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ElementStartIndex_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
constexpr bool& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__IsDetail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDetail_k__BackingField;
}
constexpr bool const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__IsDetail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDetail_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__IsDetail_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDetail_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__Treeness_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Treeness_k__BackingField;
}
constexpr float_t const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__Treeness_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Treeness_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__Treeness_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Treeness_k__BackingField = value;
}
constexpr ::Unity::Mathematics::float3& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__Distances_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Distances_k__BackingField;
}
constexpr ::Unity::Mathematics::float3 const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__Distances_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Distances_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__Distances_k__BackingField(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Distances_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere>& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__TempSpheres_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TempSpheres_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__TempSpheres_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TempSpheres_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__TempSpheres_k__BackingField(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TempSpheres_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__GO_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GO_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__GO_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GO_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__GO_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GO_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__RustleSound_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RustleSound_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__RustleSound_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RustleSound_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__RustleSound_k__BackingField(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RustleSound_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__WindySound_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindySound_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__WindySound_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindySound_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__WindySound_k__BackingField(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindySound_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__LastWindyCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastWindyCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get__LastWindyCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastWindyCount_k__BackingField;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set__LastWindyCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastWindyCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyCount1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyCount1;
}
constexpr int32_t const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyCount1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyCount1;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set_windyCount1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windyCount1 = value;
}
constexpr int32_t& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyCount2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyCount2;
}
constexpr int32_t const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyCount2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyCount2;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set_windyCount2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windyCount2 = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyResults1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyResults1;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyResults1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyResults1;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set_windyResults1(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windyResults1 = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyResults2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyResults2;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_windyResults2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyResults2;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set_windyResults2(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windyResults2 = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_playerRustleCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRustleCounts;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_get_playerRustleCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRustleCounts;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroup::__cordl_internal_set_playerRustleCounts(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRustleCounts = value;
}
inline ::GlobalNamespace::VegetationAudioCullingContainer* GlobalNamespace::VegetationSoundCullingGroup::get_ParentContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_ParentContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VegetationAudioCullingContainer*>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_ParentContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_ParentContainer", {}, {::i2c::type_of<::GlobalNamespace::VegetationAudioCullingContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VegetationSoundCullingGroup::get_GroupIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_GroupIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_GroupIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_GroupIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VegetationSoundCullingGroup::get_ElementStartIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_ElementStartIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_ElementStartIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_ElementStartIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VegetationSoundCullingGroup::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::VegetationSoundCullingGroup::get_IsDetail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_IsDetail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_IsDetail(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_IsDetail", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::VegetationSoundCullingGroup::get_Treeness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_Treeness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_Treeness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_Treeness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 GlobalNamespace::VegetationSoundCullingGroup::get_Distances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_Distances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_Distances(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_Distances", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::BoundingSphere> GlobalNamespace::VegetationSoundCullingGroup::get_TempSpheres()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_TempSpheres", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::BoundingSphere>>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_TempSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_TempSpheres", {}, {::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::VegetationSoundCullingGroup::get_GO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_GO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_GO(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_GO", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GlobalNamespace::VegetationSoundCullingGroup::get_RustleSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_RustleSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRandomContainer>>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_RustleSound(::GlobalNamespace::AudioRandomContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_RustleSound", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GlobalNamespace::VegetationSoundCullingGroup::get_WindySound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_WindySound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRandomContainer>>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_WindySound(::GlobalNamespace::AudioRandomContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_WindySound", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VegetationSoundCullingGroup::get_LastWindyCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"get_LastWindyCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::set_LastWindyCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"set_LastWindyCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::VegetationSoundCullingGroup::GetWindyResultsList(int32_t  distanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"GetWindyResultsList", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, distanceIndex);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::ResetIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"ResetIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::ProcessRustleResult(::GlobalNamespace::RustleOperation  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"ProcessRustleResult", {}, {::i2c::type_of<::GlobalNamespace::RustleOperation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::ProcessWindyResult(::GlobalNamespace::WindyOperation  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"ProcessWindyResult", {}, {::i2c::type_of<::GlobalNamespace::WindyOperation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline int32_t GlobalNamespace::VegetationSoundCullingGroup::QueryWindyIndices(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"QueryWindyIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline int32_t GlobalNamespace::VegetationSoundCullingGroup::QueryRustleIndices(int32_t  playerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"QueryRustleIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerIndex);
}
inline ::GlobalNamespace::VegetationSoundElement GlobalNamespace::VegetationSoundCullingGroup::GetResultSphere(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"GetResultSphere", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VegetationSoundElement>(this, ___internal_method, index);
}
inline ::GlobalNamespace::VegetationSoundElement GlobalNamespace::VegetationSoundCullingGroup::GetSphereAt(int32_t  localIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {"GetSphereAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VegetationSoundElement>(this, ___internal_method, localIndex);
}
inline void GlobalNamespace::VegetationSoundCullingGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VegetationSoundCullingGroup* GlobalNamespace::VegetationSoundCullingGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VegetationSoundCullingGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VegetationSoundCullingGroup::VegetationSoundCullingGroup()   {
}
