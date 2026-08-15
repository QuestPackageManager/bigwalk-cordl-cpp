#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/CopyPasteStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__CopyPasteStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__CopyStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HoleData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IDetailModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHeightModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHoleModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITreeModifier_def.hpp"
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
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.FindClosestDivisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::JBooth::MicroVerseCore::CopyPasteStamp::FindClosestDivisible)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18143ebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"FindClosestDivisible", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.SetTerrainScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Terrain*, int32_t)>(&::JBooth::MicroVerseCore::CopyPasteStamp::SetTerrainScale)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18143f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"SetTerrainScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::OnEnable)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18143f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18143f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.NeedTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::NeedTreeClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ApplyTreeClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::JBooth::MicroVerseCore::TreeData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ApplyTreeClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.NeedDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::NeedDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ApplyDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::JBooth::MicroVerseCore::DetailData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ApplyDetailClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.UsesOtherTreeSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::UsesOtherTreeSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.UsesOtherObjectSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::UsesOtherObjectSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18143ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ApplyHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HeightmapData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ApplyHeightStamp)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18143d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.IsValidHoleStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::IsValidHoleStamp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18143f260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"IsValidHoleStamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ApplyHoleStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HoleData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ApplyHoleStamp)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18143d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyHoleStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HoleData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ApplyTextureStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::TextureData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ApplyTextureStamp)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x18143dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::NeedSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.NeedParentSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::NeedParentSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.NeedToGenerateSDFForChilden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::NeedToGenerateSDFForChilden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.SetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::SetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.GetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::GetSDF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ApplyTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ApplyTreeStamp)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x18143e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ProcessTreeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::JBooth::MicroVerseCore::TreeData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ProcessTreeStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.ApplyDetailStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::JBooth::MicroVerseCore::DetailData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::ApplyDetailStamp)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x18143d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.InqDetailPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::InqDetailPrototypes)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18143ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.InqTreePrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::InqTreePrototypes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18143f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.OccludesOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::OccludesOthers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.InqTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::CopyPasteStamp::InqTerrainLayers)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18143f050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::NeedFlowMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18143eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::GetBounds)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18143ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18143f390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CopyPasteStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CopyPasteStamp::*)()>(&::JBooth::MicroVerseCore::CopyPasteStamp::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18143f940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroVerseCore::CopyStamp>& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_stamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stamp;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::CopyStamp> const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_stamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stamp;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_stamp(::UnityW<::JBooth::MicroVerseCore::CopyStamp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stamp = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyHeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyHeights;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyHeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyHeights;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_copyHeights(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyHeights = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyTexturing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyTexturing;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyTexturing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyTexturing;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_copyTexturing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyTexturing = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyTrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyTrees;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyTrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyTrees;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_copyTrees(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyTrees = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyDetails;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyDetails;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_copyDetails(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyDetails = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyHoles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyHoles;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_copyHoles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyHoles;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_copyHoles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyHoles = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyHeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyHeights;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyHeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyHeights;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_applyHeights(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyHeights = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyTexturing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyTexturing;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyTexturing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyTexturing;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_applyTexturing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyTexturing = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyTrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyTrees;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyTrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyTrees;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_applyTrees(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyTrees = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDetails;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyDetails;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_applyDetails(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyDetails = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyHoles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyHoles;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_applyHoles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyHoles;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_applyHoles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyHoles = value;
}
constexpr bool& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_pixelQuantization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelQuantization;
}
constexpr bool const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_pixelQuantization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelQuantization;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_pixelQuantization(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pixelQuantization = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::HeightStamp>& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_heightStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStamp;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::HeightStamp> const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_heightStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStamp;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_heightStamp(::UnityW<::JBooth::MicroVerseCore::HeightStamp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightStamp = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_splatPaste()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatPaste;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_splatPaste() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatPaste;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_splatPaste(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatPaste = value;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer>& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get__mrt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mrt;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get__mrt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mrt;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set__mrt(::ArrayW<::UnityEngine::RenderBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mrt = value;
}
constexpr ::ArrayW<float_t>& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr ::ArrayW<float_t> const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_channels(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr int32_t& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void JBooth::MicroVerseCore::CopyPasteStamp::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::setStaticF_pasteStampShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "pasteStampShader", ::JBooth::MicroVerseCore::CopyPasteStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::CopyPasteStamp::getStaticF_pasteStampShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "pasteStampShader", ::JBooth::MicroVerseCore::CopyPasteStamp*>();
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::setStaticF__ClearLayer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::CopyPasteStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::CopyPasteStamp::getStaticF__ClearLayer()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearLayer", ::JBooth::MicroVerseCore::CopyPasteStamp*>();
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::setStaticF__ClearMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::CopyPasteStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::CopyPasteStamp::getStaticF__ClearMask()  {
return ::cordl_internals::getStaticField<int32_t, "_ClearMask", ::JBooth::MicroVerseCore::CopyPasteStamp*>();
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::setStaticF_treePasteShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "treePasteShader", ::JBooth::MicroVerseCore::CopyPasteStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::CopyPasteStamp::getStaticF_treePasteShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "treePasteShader", ::JBooth::MicroVerseCore::CopyPasteStamp*>();
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::setStaticF_detailPasteShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "detailPasteShader", ::JBooth::MicroVerseCore::CopyPasteStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::CopyPasteStamp::getStaticF_detailPasteShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "detailPasteShader", ::JBooth::MicroVerseCore::CopyPasteStamp*>();
}
inline float_t JBooth::MicroVerseCore::CopyPasteStamp::FindClosestDivisible(float_t  inputValue, float_t  increment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"FindClosestDivisible", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, inputValue, increment);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::SetTerrainScale(::UnityEngine::Transform*  stamp, ::UnityEngine::Terrain*  t, int32_t  textureSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"SetTerrainScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stamp, t, textureSize);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::NeedTreeClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedTreeClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyTreeClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::NeedDetailClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedDetailClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyDetailClear", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::UsesOtherTreeSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"UsesOtherTreeSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::UsesOtherObjectSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"UsesOtherObjectSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, dest, heightmapData, od);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::IsValidHoleStamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"IsValidHoleStamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::ApplyHoleStamp(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HoleData*  holeData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyHoleStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HoleData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest, holeData, od);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexSrc, indexDest, weightSrc, weightDest, splatmapData, od);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::NeedSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::NeedParentSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedParentSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::NeedToGenerateSDFForChilden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedToGenerateSDFForChilden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"SetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, rt);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::CopyPasteStamp::GetSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ProcessTreeStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreeData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vd, jobs, od);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"ApplyDetailStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::DetailData*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dd, resultBuffers, od);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"InqDetailPrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prototypes);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"InqTreePrototypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prototypes);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::OccludesOthers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"OccludesOthers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, prototypes);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::CopyPasteStamp::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::CopyPasteStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::CopyPasteStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CopyPasteStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::CopyPasteStamp* JBooth::MicroVerseCore::CopyPasteStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::CopyPasteStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr  JBooth::MicroVerseCore::CopyPasteStamp::operator ::JBooth::MicroVerseCore::IHeightModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* JBooth::MicroVerseCore::CopyPasteStamp::i___JBooth__MicroVerseCore__IHeightModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::CopyPasteStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::CopyPasteStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr  JBooth::MicroVerseCore::CopyPasteStamp::operator ::JBooth::MicroVerseCore::ITextureModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* JBooth::MicroVerseCore::CopyPasteStamp::i___JBooth__MicroVerseCore__ITextureModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IHoleModifier"
constexpr  JBooth::MicroVerseCore::CopyPasteStamp::operator ::JBooth::MicroVerseCore::IHoleModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHoleModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IHoleModifier"
constexpr ::JBooth::MicroVerseCore::IHoleModifier* JBooth::MicroVerseCore::CopyPasteStamp::i___JBooth__MicroVerseCore__IHoleModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHoleModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr  JBooth::MicroVerseCore::CopyPasteStamp::operator ::JBooth::MicroVerseCore::ITreeModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* JBooth::MicroVerseCore::CopyPasteStamp::i___JBooth__MicroVerseCore__ITreeModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITreeModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::CopyPasteStamp::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::CopyPasteStamp::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr  JBooth::MicroVerseCore::CopyPasteStamp::operator ::JBooth::MicroVerseCore::IDetailModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* JBooth::MicroVerseCore::CopyPasteStamp::i___JBooth__MicroVerseCore__IDetailModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IDetailModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::CopyPasteStamp::CopyPasteStamp()   {
}
