#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ClearStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ClearStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IDetailModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IObjectModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITreeModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreePrototypeSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedFlowMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedTreeClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedObjectClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049d830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedObjectClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::GetBounds)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18141aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.OccludesOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::OccludesOthers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.UsesOtherTreeSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::UsesOtherTreeSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.UsesOtherObjectSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::UsesOtherObjectSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedParentSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedParentSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.NeedToGenerateSDFForChilden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::NeedToGenerateSDFForChilden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.SetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::ClearStamp::SetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.GetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::ClearStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::ClearStamp::GetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18141ac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.InqTreePrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::ClearStamp::InqTreePrototypes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ApplyTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::TreeData*)>(&::JBooth::MicroVerseCore::ClearStamp::ApplyTreeClear)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18141a6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ApplyDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::DetailData*)>(&::JBooth::MicroVerseCore::ClearStamp::ApplyDetailClear)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181419f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ApplyTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ClearStamp::ApplyTreeStamp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141aa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ProcessTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ClearStamp::ProcessTreeStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18141ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18141adc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ApplyDetailStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::DetailData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ClearStamp::ApplyDetailStamp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141a320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.InqDetailPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::ClearStamp::InqDetailPrototypes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ApplyObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::ObjectData*)>(&::JBooth::MicroVerseCore::ClearStamp::ApplyObjectClear)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18141a340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyObjectClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ApplyObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ClearStamp::ApplyObjectStamp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp.ProcessObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ClearStamp::ProcessObjectStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ProcessObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ClearStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ClearStamp::*)()>(&::JBooth::MicroVerseCore::ClearStamp::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18141b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_clearTrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearTrees;
}
constexpr bool const& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_clearTrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearTrees;
}
constexpr void JBooth::MicroVerseCore::ClearStamp::__cordl_internal_set_clearTrees(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearTrees = value;
}
constexpr bool& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_clearDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearDetails;
}
constexpr bool const& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_clearDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearDetails;
}
constexpr void JBooth::MicroVerseCore::ClearStamp::__cordl_internal_set_clearDetails(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearDetails = value;
}
constexpr bool& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_clearObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearObjects;
}
constexpr bool const& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_clearObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearObjects;
}
constexpr void JBooth::MicroVerseCore::ClearStamp::__cordl_internal_set_clearObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearObjects = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet*& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_filterSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr ::JBooth::MicroVerseCore::FilterSet* const& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_filterSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr void JBooth::MicroVerseCore::ClearStamp::__cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterSet = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::ClearStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::ClearStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
inline void JBooth::MicroVerseCore::ClearStamp::setStaticF_clearShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "clearShader", ::JBooth::MicroVerseCore::ClearStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::ClearStamp::getStaticF_clearShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "clearShader", ::JBooth::MicroVerseCore::ClearStamp*>();
}
inline void JBooth::MicroVerseCore::ClearStamp::setStaticF__Heightmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::ClearStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ClearStamp::getStaticF__Heightmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::ClearStamp*>();
}
inline void JBooth::MicroVerseCore::ClearStamp::setStaticF__Normalmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::ClearStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ClearStamp::getStaticF__Normalmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::ClearStamp*>();
}
inline void JBooth::MicroVerseCore::ClearStamp::setStaticF__Curvemap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::ClearStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ClearStamp::getStaticF__Curvemap()  {
return ::cordl_internals::getStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::ClearStamp*>();
}
inline void JBooth::MicroVerseCore::ClearStamp::setStaticF__Flowmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::ClearStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ClearStamp::getStaticF__Flowmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::ClearStamp*>();
}
inline void JBooth::MicroVerseCore::ClearStamp::setStaticF__IndexMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::ClearStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ClearStamp::getStaticF__IndexMap()  {
return ::cordl_internals::getStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::ClearStamp*>();
}
inline void JBooth::MicroVerseCore::ClearStamp::setStaticF__WeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::ClearStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ClearStamp::getStaticF__WeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::ClearStamp*>();
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedTreeClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedDetailClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedObjectClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedObjectClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::ClearStamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::ClearStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::OccludesOthers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::UsesOtherTreeSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::UsesOtherObjectSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedParentSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ClearStamp::NeedToGenerateSDFForChilden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ClearStamp::SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, rt);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::ClearStamp::GetSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::ClearStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ClearStamp::InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  trees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trees);
}
inline void JBooth::MicroVerseCore::ClearStamp::ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline void JBooth::MicroVerseCore::ClearStamp::ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  dd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dd);
}
inline void JBooth::MicroVerseCore::ClearStamp::ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td, jobs, od);
}
inline void JBooth::MicroVerseCore::ClearStamp::ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::ClearStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ClearStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ClearStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ClearStamp::ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dd, resultBuffers, od);
}
inline void JBooth::MicroVerseCore::ClearStamp::InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prototypes);
}
inline void JBooth::MicroVerseCore::ClearStamp::ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyObjectClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline void JBooth::MicroVerseCore::ClearStamp::ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ApplyObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::ClearStamp::ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {"ProcessObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::ClearStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ClearStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ClearStamp* JBooth::MicroVerseCore::ClearStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ClearStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr  JBooth::MicroVerseCore::ClearStamp::operator ::JBooth::MicroVerseCore::ITreeModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* JBooth::MicroVerseCore::ClearStamp::i___JBooth__MicroVerseCore__ITreeModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::ClearStamp::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::ClearStamp::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::ClearStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::ClearStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr  JBooth::MicroVerseCore::ClearStamp::operator ::JBooth::MicroVerseCore::IDetailModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* JBooth::MicroVerseCore::ClearStamp::i___JBooth__MicroVerseCore__IDetailModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr  JBooth::MicroVerseCore::ClearStamp::operator ::JBooth::MicroVerseCore::IObjectModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IObjectModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr ::JBooth::MicroVerseCore::IObjectModifier* JBooth::MicroVerseCore::ClearStamp::i___JBooth__MicroVerseCore__IObjectModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IObjectModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ClearStamp::ClearStamp()   {
}
