#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/OcclusionStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IDetailModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHeightModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IObjectModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITreeModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreePrototypeSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::Initialize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181446430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedTreeClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::TreeData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyTreeClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::DetailData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.UsesOtherTreeSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::UsesOtherTreeSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.UsesOtherObjectSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::UsesOtherObjectSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::UnityEngine::Material*, ::JBooth::MicroVerseCore::OcclusionData*, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::OcclusionStamp::PrepareMaterial)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181446740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::Render)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181446a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"Render", {}, {::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HeightmapData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyHeightStamp)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814458c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyTextureStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::TextureData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyTextureStamp)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181445d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.OccludesOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::OccludesOthers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyTreeStamp)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181445f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ProcessTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ProcessTreeStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedParentSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedParentSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedToGenerateSDFForChilden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedToGenerateSDFForChilden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.SetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::OcclusionStamp::SetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.GetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::OcclusionStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::OcclusionStamp::GetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyDetailStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::DetailData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyDetailStamp)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1814455b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.InqTreePrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::OcclusionStamp::InqTreePrototypes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.InqDetailPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::OcclusionStamp::InqDetailPrototypes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.InqTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::OcclusionStamp::InqTerrainLayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181446570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedFlowMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181446590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814465b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::GetBounds)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814462a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814465f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyObjectStamp)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181445a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ProcessObjectStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::ObjectData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ProcessObjectStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ProcessObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.ApplyObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)(::JBooth::MicroVerseCore::ObjectData*)>(&::JBooth::MicroVerseCore::OcclusionStamp::ApplyObjectClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyObjectClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp.NeedObjectClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::NeedObjectClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedObjectClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionStamp::*)()>(&::JBooth::MicroVerseCore::OcclusionStamp::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181446bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeHeightWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeHeightWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightWeight;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_occludeHeightWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeHeightWeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeTextureWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeTextureWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureWeight;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_occludeTextureWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeTextureWeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeTreeWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTreeWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeTreeWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTreeWeight;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_occludeTreeWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeTreeWeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeDetailWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeDetailWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeDetailWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeDetailWeight;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_occludeDetailWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeDetailWeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeObjectWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeObjectWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_occludeObjectWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeObjectWeight;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_occludeObjectWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeObjectWeight = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet*& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_filterSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr ::JBooth::MicroVerseCore::FilterSet* const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_filterSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterSet = value;
}
constexpr bool& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_hoist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoist;
}
constexpr bool const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_hoist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoist;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_hoist(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoist = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::OcclusionStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
inline void JBooth::MicroVerseCore::OcclusionStamp::setStaticF_occlusionShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "occlusionShader", ::JBooth::MicroVerseCore::OcclusionStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::OcclusionStamp::getStaticF_occlusionShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "occlusionShader", ::JBooth::MicroVerseCore::OcclusionStamp*>();
}
inline void JBooth::MicroVerseCore::OcclusionStamp::setStaticF__Heightmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::OcclusionStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::OcclusionStamp::getStaticF__Heightmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::OcclusionStamp*>();
}
inline void JBooth::MicroVerseCore::OcclusionStamp::setStaticF__Normalmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::OcclusionStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::OcclusionStamp::getStaticF__Normalmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Normalmap", ::JBooth::MicroVerseCore::OcclusionStamp*>();
}
inline void JBooth::MicroVerseCore::OcclusionStamp::setStaticF__Curvemap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::OcclusionStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::OcclusionStamp::getStaticF__Curvemap()  {
return ::cordl_internals::getStaticField<int32_t, "_Curvemap", ::JBooth::MicroVerseCore::OcclusionStamp*>();
}
inline void JBooth::MicroVerseCore::OcclusionStamp::setStaticF__Flowmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::OcclusionStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::OcclusionStamp::getStaticF__Flowmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Flowmap", ::JBooth::MicroVerseCore::OcclusionStamp*>();
}
inline void JBooth::MicroVerseCore::OcclusionStamp::setStaticF__IndexMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::OcclusionStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::OcclusionStamp::getStaticF__IndexMap()  {
return ::cordl_internals::getStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::OcclusionStamp*>();
}
inline void JBooth::MicroVerseCore::OcclusionStamp::setStaticF__WeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::OcclusionStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::OcclusionStamp::getStaticF__WeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::OcclusionStamp*>();
}
inline void JBooth::MicroVerseCore::OcclusionStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedTreeClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedDetailClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::UsesOtherTreeSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::UsesOtherObjectSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::OcclusionStamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::OcclusionData*  od, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, od, keywords);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::Render(::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"Render", {}, {::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, od);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, dest, heightmapData, od);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexSrc, indexDest, weightSrc, weightDest, splatmapData, od);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::OccludesOthers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedParentSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedToGenerateSDFForChilden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, rt);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::OcclusionStamp::GetSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dd, resultBuffers, od);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prototypes);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prototypes);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, prototypes);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::OcclusionStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td, jobs, od);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ProcessObjectStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td, jobs, od);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"ApplyObjectClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline bool JBooth::MicroVerseCore::OcclusionStamp::NeedObjectClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {"NeedObjectClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::OcclusionStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::OcclusionStamp* JBooth::MicroVerseCore::OcclusionStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::OcclusionStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr  JBooth::MicroVerseCore::OcclusionStamp::operator ::JBooth::MicroVerseCore::IHeightModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* JBooth::MicroVerseCore::OcclusionStamp::i___JBooth__MicroVerseCore__IHeightModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::OcclusionStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::OcclusionStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr  JBooth::MicroVerseCore::OcclusionStamp::operator ::JBooth::MicroVerseCore::ITextureModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* JBooth::MicroVerseCore::OcclusionStamp::i___JBooth__MicroVerseCore__ITextureModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr  JBooth::MicroVerseCore::OcclusionStamp::operator ::JBooth::MicroVerseCore::ITreeModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* JBooth::MicroVerseCore::OcclusionStamp::i___JBooth__MicroVerseCore__ITreeModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::OcclusionStamp::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::OcclusionStamp::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr  JBooth::MicroVerseCore::OcclusionStamp::operator ::JBooth::MicroVerseCore::IDetailModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* JBooth::MicroVerseCore::OcclusionStamp::i___JBooth__MicroVerseCore__IDetailModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr  JBooth::MicroVerseCore::OcclusionStamp::operator ::JBooth::MicroVerseCore::IObjectModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IObjectModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr ::JBooth::MicroVerseCore::IObjectModifier* JBooth::MicroVerseCore::OcclusionStamp::i___JBooth__MicroVerseCore__IObjectModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IObjectModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::OcclusionStamp::OcclusionStamp()   {
}
