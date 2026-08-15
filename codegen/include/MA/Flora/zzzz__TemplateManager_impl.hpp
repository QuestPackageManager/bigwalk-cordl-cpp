#pragma once
// IWYU pragma private; include "MA/Flora/TemplateManager.hpp"
#include "MA/Flora/zzzz__ChunkIndex_impl.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawDescriptor_impl.hpp"
#include "MA/Flora/zzzz__DrawManager_impl.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__NativeBitSet_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__RendererGroupIndex_impl.hpp"
#include "MA/Flora/zzzz__RendererGroupKey_impl.hpp"
#include "MA/Flora/zzzz__RendererGroupRecord_impl.hpp"
#include "MA/Flora/zzzz__RendererStateIndex_impl.hpp"
#include "MA/Flora/zzzz__RendererStateKey_impl.hpp"
#include "MA/Flora/zzzz__RendererStateRecord_impl.hpp"
#include "MA/Flora/zzzz__SourceRecordIndex_impl.hpp"
#include "MA/Flora/zzzz__SourceRecord_impl.hpp"
#include "MA/Flora/zzzz__TemplateData_impl.hpp"
#include "MA/Flora/zzzz__TemplateIndex_impl.hpp"
#include "MA/Flora/zzzz__TemplateKey_impl.hpp"
#include "MA/Flora/zzzz__TemplateLayoutIndex_impl.hpp"
#include "MA/Flora/zzzz__TemplateLayoutKey_impl.hpp"
#include "MA/Flora/zzzz__TemplateLayoutRecord_impl.hpp"
#include "MA/Flora/zzzz__TemplateOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__BillboardRenderer_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "MA/Flora/zzzz__TemplateManager_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_def.hpp"
#include "MA/Flora/zzzz__DrawDescriptor_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeBuffer_1_def.hpp"
#include "MA/Flora/zzzz__RendererGroupIndex_def.hpp"
#include "MA/Flora/zzzz__RendererGroupRecord_def.hpp"
#include "MA/Flora/zzzz__RendererStateIndex_def.hpp"
#include "MA/Flora/zzzz__RendererStateRecord_def.hpp"
#include "MA/Flora/zzzz__SourceRecordIndex_def.hpp"
#include "MA/Flora/zzzz__SourceTemplateBinding_def.hpp"
#include "MA/Flora/zzzz__TemplateCapabilityProfile_def.hpp"
#include "MA/Flora/zzzz__TemplateData_def.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateLayoutIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateLayoutRecord_def.hpp"
#include "MA/Flora/zzzz__TemplateManager_def.hpp"
#include "MA/Flora/zzzz__TemplateOptions_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
#include "MA/Flora/zzzz__TemplateSourceInfo_def.hpp"
#include "MA/Flora/zzzz__TemplateStateChangeMask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters []
constexpr ::MA::Flora::TemplateManager___InteropDelegates::TemplateManager___InteropDelegates()   {
}
//  Writing Method size for method: ::MA::Flora::TemplateManager.DestroyComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::DestroyComponents)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18148e000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyComponents", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UpdateComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::UpdateComponents)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181497590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateComponents", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::Exists)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814901c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetIdentitySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::GetIdentitySource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814906b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetIdentitySource", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetIdentitySourceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::GetIdentitySourceId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181490640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetIdentitySourceId", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetRenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::GetRenderSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181490f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetRenderSource", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetRenderSourceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::GetRenderSourceId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181490ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetRenderSourceId", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RegisterSourceBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SourceTemplateBinding (::MA::Flora::TemplateManager::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::MA::Flora::TemplateOptions, ::UnityEngine::Material*)>(&::MA::Flora::TemplateManager::RegisterSourceBinding)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181494b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RegisterSourceBinding", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RegisterSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateIndex (::MA::Flora::TemplateManager::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::MA::Flora::TemplateOptions, ::UnityEngine::Material*)>(&::MA::Flora::TemplateManager::RegisterSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181494d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RegisterSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RegisterSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateIndex (::MA::Flora::TemplateManager::*)(::UnityEngine::GameObject*, ::MA::Flora::TemplateOptions, ::UnityEngine::Material*)>(&::MA::Flora::TemplateManager::RegisterSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181494d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RegisterSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UpdateSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::UnityEngine::EntityId)>(&::MA::Flora::TemplateManager::UpdateSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181497a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSource", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UpdateSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::UnityEngine::GameObject*)>(&::MA::Flora::TemplateManager::UpdateSource)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181497aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MaterialsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::MaterialsChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181492fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MaterialsChanged", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MaterialsDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::MaterialsDestroyed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181493030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MaterialsDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MeshesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::MeshesChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181493080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MeshesChanged", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MeshesDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::MeshesDestroyed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814930d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MeshesDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.InvalidateSourcesForAssetChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, bool, bool)>(&::MA::Flora::TemplateManager::InvalidateSourcesForAssetChanges)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x181492290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"InvalidateSourcesForAssetChanges", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CollectAffectedSourceRecords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererStateIndex, ::Unity::Collections::NativeHashSet_1<::MA::Flora::SourceRecordIndex>)>(&::MA::Flora::TemplateManager::CollectAffectedSourceRecords)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18148afd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CollectAffectedSourceRecords", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<::MA::Flora::SourceRecordIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetOrCreateSourceRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SourceRecordIndex (::MA::Flora::TemplateManager::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::MA::Flora::TemplateManager::GetOrCreateSourceRecord)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181490cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetOrCreateSourceRecord", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UpdateSourceRecordIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::UnityEngine::EntityId)>(&::MA::Flora::TemplateManager::UpdateSourceRecordIdentity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181497640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSourceRecordIdentity", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.TryGetSourceRecordTemplateVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::UnityEngine::EntityId, ::MA::Flora::TemplateOptions, ::by_ref<::MA::Flora::TemplateIndex>)>(&::MA::Flora::TemplateManager::TryGetSourceRecordTemplateVariant)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181496fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"TryGetSourceRecordTemplateVariant", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ResolveSourceTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateIndex (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::UnityEngine::GameObject*, ::MA::Flora::TemplateOptions, ::UnityEngine::Material*)>(&::MA::Flora::TemplateManager::ResolveSourceTemplate)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181495c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveSourceTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BindSourceRecordToTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::BindSourceRecordToTemplate)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181489580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BindSourceRecordToTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UnbindSourceRecordFromTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::UnbindSourceRecordFromTemplate)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181497240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UnbindSourceRecordFromTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.HasSourceRecordTemplateBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::HasSourceRecordTemplateBinding)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814911a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HasSourceRecordTemplateBinding", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.SetTemplateRepresentativeRenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::SetTemplateRepresentativeRenderSource)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181496b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"SetTemplateRepresentativeRenderSource", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RefreshTemplateRepresentativeRenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::RefreshTemplateRepresentativeRenderSource)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181494a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RefreshTemplateRepresentativeRenderSource", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RefreshSourceRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::UnityEngine::GameObject*, ::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::RefreshSourceRecord)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x181494580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RefreshSourceRecord", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CollectSourceRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*)>(&::MA::Flora::TemplateManager::CollectSourceRenderers)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18148b2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CollectSourceRenderers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AddSourceRecordComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::UnityEngine::EntityId, bool)>(&::MA::Flora::TemplateManager::AddSourceRecordComponent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181488e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddSourceRecordComponent", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RemoveSourceComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::UnityEngine::EntityId)>(&::MA::Flora::TemplateManager::RemoveSourceComponent)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1814955c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveSourceComponent", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ClearSourceRecordMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::ClearSourceRecordMappings)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18148ab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ClearSourceRecordMappings", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.TryDestroySourceRecordIfUnused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::TryDestroySourceRecordIfUnused)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181496d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"TryDestroySourceRecordIfUnused", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.DestroyTemplatesForSourceRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::DestroyTemplatesForSourceRecord)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18148f390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyTemplatesForSourceRecord", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.DestroyInstancesForSourceRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::TemplateManager::DestroyInstancesForSourceRecord)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18148e180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyInstancesForSourceRecord", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MoveSourceRecordInstancesToTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::TemplateIndex, ::MA::Flora::TemplateIndex, int32_t, ::Unity::Mathematics::float4)>(&::MA::Flora::TemplateManager::MoveSourceRecordInstancesToTemplate)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181493120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MoveSourceRecordInstancesToTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UpdateSourceRecordInstancesLightmapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::TemplateIndex, int32_t, ::Unity::Mathematics::float4)>(&::MA::Flora::TemplateManager::UpdateSourceRecordInstancesLightmapData)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181497730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSourceRecordInstancesLightmapData", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.DestroyTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::DestroyTemplate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18148f100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyTemplate", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.HashCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint32_t)>(&::MA::Flora::TemplateManager::HashCombine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814912a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HashCombine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.HashCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t)>(&::MA::Flora::TemplateManager::HashCombine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814912a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HashCombine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.HashCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, float_t)>(&::MA::Flora::TemplateManager::HashCombine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181491280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HashCombine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.TemplateDataEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::MA::Flora::TemplateData>, ::by_ref<::MA::Flora::TemplateData>)>(&::MA::Flora::TemplateManager::TemplateDataEquals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181496c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"TemplateDataEquals", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ResolveTemplateLayoutForSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateLayoutIndex (::MA::Flora::TemplateManager::*)(::UnityEngine::GameObject*, ::MA::Flora::TemplateOptions, ::UnityEngine::EntityId, ::by_ref<::MA::Flora::TemplateSourceInfo>)>(&::MA::Flora::TemplateManager::ResolveTemplateLayoutForSource)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x181495f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveTemplateLayoutForSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BuildTemplateCapabilityProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateCapabilityProfile (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::TemplateSourceInfo>, ::MA::Flora::TemplateOptions)>(&::MA::Flora::TemplateManager::BuildTemplateCapabilityProfile)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181489f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildTemplateCapabilityProfile", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>(), ::i2c::type_of<::MA::Flora::TemplateOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetRenderersForLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::ArrayW<::UnityEngine::LOD>, ::MA::Flora::TemplateRenderType, int32_t, ::by_ref<::ArrayW<::UnityEngine::Renderer*>>)>(&::MA::Flora::TemplateManager::GetRenderersForLod)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181490fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetRenderersForLod", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::LOD>>(), ::i2c::type_of<::MA::Flora::TemplateRenderType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Renderer*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BuildRendererStateRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererStateRecord (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::UnityEngine::GameObject*, ::MA::Flora::TemplateRenderType, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::MA::Flora::TemplateOptions, ::MA::Flora::TemplateCapabilityProfile, int32_t, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::TemplateManager::BuildRendererStateRecord)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1814898b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildRendererStateRecord", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateRenderType>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::MA::Flora::TemplateCapabilityProfile>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CompileRendererDrawDescriptors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::UnityEngine::GameObject*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::MA::Flora::TemplateOptions, ::MA::Flora::BatchDomainIndex, int32_t, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::TemplateManager::CompileRendererDrawDescriptors)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18148b3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CompileRendererDrawDescriptors", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BuildRendererGroupRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererGroupRecord (::MA::Flora::TemplateManager::*)(int32_t, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>)>(&::MA::Flora::TemplateManager::BuildRendererGroupRecord)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814897a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildRendererGroupRecord", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BuildTemplateLayoutRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateLayoutRecord (::MA::Flora::TemplateManager::*)(::UnityEngine::EntityId, ::MA::Flora::TemplateCapabilityProfile, ::by_ref<::MA::Flora::TemplateSourceInfo>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>)>(&::MA::Flora::TemplateManager::BuildTemplateLayoutRecord)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x18148a070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildTemplateLayoutRecord", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::MA::Flora::TemplateCapabilityProfile>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BuildTemplateBufferData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateData (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::TemplateLayoutRecord>, ::by_ref<::MA::Flora::TemplateSourceInfo>)>(&::MA::Flora::TemplateManager::BuildTemplateBufferData)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x181489b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildTemplateBufferData", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BuildRendererGroupSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>)>(&::MA::Flora::TemplateManager::BuildRendererGroupSignature)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181489870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildRendererGroupSignature", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ResolveRendererState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererStateIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::RendererStateRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::TemplateManager::ResolveRendererState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181495ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveRendererState", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.FindEquivalentRendererState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererStateIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::RendererStateRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::TemplateManager::FindEquivalentRendererState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814902d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"FindEquivalentRendererState", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.IsRendererStateEquivalent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererStateIndex, ::by_ref<::MA::Flora::RendererStateRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::TemplateManager::IsRendererStateEquivalent)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181492870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"IsRendererStateEquivalent", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.DrawDescriptorBufferEqualsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawDescriptor>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::TemplateManager::DrawDescriptorBufferEqualsList)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18148f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DrawDescriptorBufferEqualsList", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawDescriptor>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CreateRendererState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererStateIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::RendererStateRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::TemplateManager::CreateRendererState)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x18148cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CreateRendererState", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MaterializeDrawDescriptors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::MaterializeDrawDescriptors)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181492e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MaterializeDrawDescriptors", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RetainRendererState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererStateIndex)>(&::MA::Flora::TemplateManager::RetainRendererState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181496910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RetainRendererState", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ReleaseRendererState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererStateIndex)>(&::MA::Flora::TemplateManager::ReleaseRendererState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181494e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ReleaseRendererState", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.DestroyRendererState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererStateIndex)>(&::MA::Flora::TemplateManager::DestroyRendererState)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x18148e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyRendererState", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ResolveRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererGroupIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::RendererGroupRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>)>(&::MA::Flora::TemplateManager::ResolveRendererGroup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181495b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveRendererGroup", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.FindEquivalentRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererGroupIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::RendererGroupRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>)>(&::MA::Flora::TemplateManager::FindEquivalentRendererGroup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814901e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"FindEquivalentRendererGroup", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.IsRendererGroupEquivalent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererGroupIndex, ::by_ref<::MA::Flora::RendererGroupRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>)>(&::MA::Flora::TemplateManager::IsRendererGroupEquivalent)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181492740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"IsRendererGroupEquivalent", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>(), ::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CreateRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererGroupIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::RendererGroupRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>)>(&::MA::Flora::TemplateManager::CreateRendererGroup)> {
  constexpr static std::size_t size = 0xd70;
  constexpr static std::size_t addrs = 0x18148bf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CreateRendererGroup", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RetainRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererGroupIndex)>(&::MA::Flora::TemplateManager::RetainRendererGroup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814968b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RetainRendererGroup", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ReleaseRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererGroupIndex)>(&::MA::Flora::TemplateManager::ReleaseRendererGroup)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181494db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ReleaseRendererGroup", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.DestroyRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::RendererGroupIndex)>(&::MA::Flora::TemplateManager::DestroyRendererGroup)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x18148e2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyRendererGroup", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ResolveTemplateLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateLayoutIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::TemplateLayoutRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>)>(&::MA::Flora::TemplateManager::ResolveTemplateLayout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181496830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveTemplateLayout", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.FindEquivalentTemplateLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateLayoutIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::TemplateLayoutRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>)>(&::MA::Flora::TemplateManager::FindEquivalentTemplateLayout)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814903c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"FindEquivalentTemplateLayout", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.IsTemplateLayoutEquivalent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateLayoutIndex, ::by_ref<::MA::Flora::TemplateLayoutRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>)>(&::MA::Flora::TemplateManager::IsTemplateLayoutEquivalent)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181492ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"IsTemplateLayoutEquivalent", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CreateTemplateLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateLayoutIndex (::MA::Flora::TemplateManager::*)(::by_ref<::MA::Flora::TemplateLayoutRecord>, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>)>(&::MA::Flora::TemplateManager::CreateTemplateLayout)> {
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0x18148d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CreateTemplateLayout", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.BindHandleToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::UnityEngine::GameObject*, ::MA::Flora::TemplateLayoutIndex)>(&::MA::Flora::TemplateManager::BindHandleToState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181489440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BindHandleToState", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UnbindHandleFromState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, bool)>(&::MA::Flora::TemplateManager::UnbindHandleFromState)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181497110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UnbindHandleFromState", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ProjectLayoutToHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::UnityEngine::GameObject*, ::MA::Flora::TemplateLayoutIndex)>(&::MA::Flora::TemplateManager::ProjectLayoutToHandle)> {
  constexpr static std::size_t size = 0xcb0;
  constexpr static std::size_t addrs = 0x181493470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ProjectLayoutToHandle", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ClearTemplateProjection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::ClearTemplateProjection)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18148acc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ClearTemplateProjection", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ComputeStateChangeMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateStateChangeMask (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateLayoutIndex, ::MA::Flora::TemplateLayoutIndex)>(&::MA::Flora::TemplateManager::ComputeStateChangeMask)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x18148b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ComputeStateChangeMask", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>(), ::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RetainTemplateLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateLayoutIndex)>(&::MA::Flora::TemplateManager::RetainTemplateLayout)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181496990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RetainTemplateLayout", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ReleaseTemplateLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateLayoutIndex)>(&::MA::Flora::TemplateManager::ReleaseTemplateLayout)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181494f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ReleaseTemplateLayout", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.DestroyTemplateLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateLayoutIndex)>(&::MA::Flora::TemplateManager::DestroyTemplateLayout)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x18148ec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyTemplateLayout", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CopyUniqueDrawIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>)>(&::MA::Flora::TemplateManager::CopyUniqueDrawIndices)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18148bca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CopyUniqueDrawIndices", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.CopyUniqueEntityIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::CopyUniqueEntityIds)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18148bde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CopyUniqueEntityIds", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AppendUniqueDrawIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>, ::MA::Flora::NativeBitSet)>(&::MA::Flora::TemplateManager::AppendUniqueDrawIndices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814891f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueDrawIndices", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AppendUniqueDrawIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>, ::MA::Flora::NativeBitSet)>(&::MA::Flora::TemplateManager::AppendUniqueDrawIndices)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181489150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueDrawIndices", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AppendUniqueEntityIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>, ::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>, ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::AppendUniqueEntityIds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814892c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueEntityIds", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AppendUniqueEntityIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>, ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::AppendUniqueEntityIds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181489390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueEntityIds", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetMaxDrawIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>)>(&::MA::Flora::TemplateManager::GetMaxDrawIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181490a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetMaxDrawIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>)>(&::MA::Flora::TemplateManager::GetMaxDrawIndex)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181490a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetMaxDrawIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>)>(&::MA::Flora::TemplateManager::GetMaxDrawIndex)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181490730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetMaxDrawIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>, int32_t)>(&::MA::Flora::TemplateManager::GetMaxDrawIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814909a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetEntityIdCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateManager::*)(::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TemplateManager::GetEntityIdCapacity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181490550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetEntityIdCapacity", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>(), ::i2c::type_of<::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureSourceRecordCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureSourceRecordCapacity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18148fde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureSourceRecordCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureRendererStateCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureRendererStateCapacity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18148fc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererStateCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureRendererStateLookupCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureRendererStateLookupCapacity)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18148fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererStateLookupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureRendererGroupCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureRendererGroupCapacity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18148fab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererGroupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureRendererGroupLookupCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureRendererGroupLookupCapacity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18148fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererGroupLookupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureTemplateLayoutCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureTemplateLayoutCapacity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181490040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureTemplateLayoutCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureTemplateLayoutLookupCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureTemplateLayoutLookupCapacity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181490120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureTemplateLayoutLookupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_MaxCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_MaxCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814981f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_MaxCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_MaxUsedLodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_MaxUsedLodCount)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x181498220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_MaxUsedLodCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_Allocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBitSet (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_Allocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_Allocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_CameraDrawIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_CameraDrawIndices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18147a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CameraDrawIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_CameraDrawIndicesPerLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_CameraDrawIndicesPerLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18147a360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CameraDrawIndicesPerLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_ShadowDrawIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_ShadowDrawIndices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18147a390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_ShadowDrawIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_ShadowDrawIndicesPerLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_ShadowDrawIndicesPerLod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18147a380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_ShadowDrawIndicesPerLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_CullingChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_CullingChunks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CullingChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_TemplateDataBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_TemplateDataBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18147a3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_TemplateDataBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_CanInstancesHaveMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_CanInstancesHaveMotionVectors)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181498180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CanInstancesHaveMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.get_CanInstancesHaveLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::get_CanInstancesHaveLightProbes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181498140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CanInstancesHaveLightProbes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::InstanceContext)>(&::MA::Flora::TemplateManager::Initialize)> {
  constexpr static std::size_t size = 0xfd0;
  constexpr static std::size_t addrs = 0x1814912c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::Dispose)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18148f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RebuildDrawBatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::RebuildDrawBatches)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181494420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RebuildDrawBatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AddCullingChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::MA::Flora::CullingChunkIndex, ::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::Flora::TemplateManager::AddCullingChunk)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181488b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddCullingChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RemoveCullingChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::MA::Flora::CullingChunkIndex, ::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::Flora::TemplateManager::RemoveCullingChunk)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181495230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveCullingChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureDrawTrackingCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureDrawTrackingCapacity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18148fa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureDrawTrackingCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MarkTemplateDataDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::MarkTemplateDataDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181492d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MarkTemplateDataDirty", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.ResetTemplateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::ResetTemplateData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181495a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResetTemplateData", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetTemplateRepresentativeRenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::GetTemplateRepresentativeRenderSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181491130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetTemplateRepresentativeRenderSource", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.GetTemplateRepresentativeRenderSourceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::GetTemplateRepresentativeRenderSourceId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814910d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetTemplateRepresentativeRenderSourceId", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.MarkTemplateDrawsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateManager::MarkTemplateDrawsDirty)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181492d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MarkTemplateDrawsDirty", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AddTemplateDrawOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>)>(&::MA::Flora::TemplateManager::AddTemplateDrawOwnership)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181488fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddTemplateDrawOwnership", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RemoveTemplateDrawOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>)>(&::MA::Flora::TemplateManager::RemoveTemplateDrawOwnership)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814958c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveTemplateDrawOwnership", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RebuildDirtyDrawChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::RebuildDirtyDrawChunks)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181494120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RebuildDirtyDrawChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.UploadDirtyTemplateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)()>(&::MA::Flora::TemplateManager::UploadDirtyTemplateData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181497e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UploadDirtyTemplateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.EnsureTemplateCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(int32_t)>(&::MA::Flora::TemplateManager::EnsureTemplateCapacity)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18148fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureTemplateCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AddChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::MA::Flora::ChunkIndex)>(&::MA::Flora::TemplateManager::AddChunk)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181488a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RemoveChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateManager::*)(::MA::Flora::TemplateIndex, ::MA::Flora::ChunkIndex)>(&::MA::Flora::TemplateManager::RemoveChunk)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181495100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.AddInstancesToSourceRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::FloraInstanceHandle*, int32_t)>(&::MA::Flora::TemplateManager::AddInstancesToSourceRecord)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181488c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddInstancesToSourceRecord", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.RemoveInstancesFromSourceRecords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateManager::*)(::MA::Flora::FloraInstanceHandle*, int32_t)>(&::MA::Flora::TemplateManager::RemoveInstancesFromSourceRecords)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181495350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveInstancesFromSourceRecords", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager.__InteropIsBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::MA::Flora::TemplateManager::__InteropIsBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181477870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"__InteropIsBurst", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager._EarlyInitInterop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TemplateManager::_EarlyInitInterop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181498010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"_EarlyInitInterop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateManager._LateInitInterop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TemplateManager::_LateInitInterop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"_LateInitInterop", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TemplateManager::setStaticF_s_MeshLodRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>, "s_MeshLodRenderers", ::MA::Flora::TemplateManager>(std::forward<::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> MA::Flora::TemplateManager::getStaticF_s_MeshLodRenderers()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>, "s_MeshLodRenderers", ::MA::Flora::TemplateManager>();
}
inline void MA::Flora::TemplateManager::setStaticF_s_BillboardRenderers(::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>>, "s_BillboardRenderers", ::MA::Flora::TemplateManager>(std::forward<::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>> MA::Flora::TemplateManager::getStaticF_s_BillboardRenderers()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>>, "s_BillboardRenderers", ::MA::Flora::TemplateManager>();
}
inline void MA::Flora::TemplateManager::DestroyComponents(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyComponents", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceComponents);
}
inline void MA::Flora::TemplateManager::UpdateComponents(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateComponents", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceComponents);
}
inline bool MA::Flora::TemplateManager::Exists(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, _cordl_template);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::TemplateManager::GetIdentitySource(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetIdentitySource", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method, sourceRecord);
}
inline ::UnityEngine::EntityId MA::Flora::TemplateManager::GetIdentitySourceId(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetIdentitySourceId", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method, sourceRecord);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::TemplateManager::GetRenderSource(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetRenderSource", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method, sourceRecord);
}
inline ::UnityEngine::EntityId MA::Flora::TemplateManager::GetRenderSourceId(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetRenderSourceId", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method, sourceRecord);
}
inline ::MA::Flora::SourceTemplateBinding MA::Flora::TemplateManager::RegisterSourceBinding(::UnityEngine::GameObject*  identitySource, ::UnityEngine::GameObject*  renderSource, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RegisterSourceBinding", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SourceTemplateBinding>(*this, ___internal_method, identitySource, renderSource, options, grassMaterial);
}
inline ::MA::Flora::TemplateIndex MA::Flora::TemplateManager::RegisterSource(::UnityEngine::GameObject*  identitySource, ::UnityEngine::GameObject*  renderSource, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RegisterSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateIndex>(*this, ___internal_method, identitySource, renderSource, options, grassMaterial);
}
inline ::MA::Flora::TemplateIndex MA::Flora::TemplateManager::RegisterSource(::UnityEngine::GameObject*  source, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RegisterSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateIndex>(*this, ___internal_method, source, options, grassMaterial);
}
inline void MA::Flora::TemplateManager::UpdateSource(::UnityEngine::EntityId  sourceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSource", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceId);
}
inline void MA::Flora::TemplateManager::UpdateSource(::UnityEngine::GameObject*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
inline void MA::Flora::TemplateManager::MaterialsChanged(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialInstanceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MaterialsChanged", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, materialInstanceIds);
}
inline void MA::Flora::TemplateManager::MaterialsDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialInstanceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MaterialsDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, materialInstanceIds);
}
inline void MA::Flora::TemplateManager::MeshesChanged(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshInstanceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MeshesChanged", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshInstanceIds);
}
inline void MA::Flora::TemplateManager::MeshesDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshInstanceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MeshesDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshInstanceIds);
}
inline void MA::Flora::TemplateManager::InvalidateSourcesForAssetChanges(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  assetIds, bool  invalidateMaterials, bool  removeLookupEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"InvalidateSourcesForAssetChanges", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, assetIds, invalidateMaterials, removeLookupEntries);
}
inline void MA::Flora::TemplateManager::CollectAffectedSourceRecords(::MA::Flora::RendererStateIndex  rendererState, ::Unity::Collections::NativeHashSet_1<::MA::Flora::SourceRecordIndex>  uniqueSourceRecords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CollectAffectedSourceRecords", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<::MA::Flora::SourceRecordIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererState, uniqueSourceRecords);
}
inline ::MA::Flora::SourceRecordIndex MA::Flora::TemplateManager::GetOrCreateSourceRecord(::UnityEngine::GameObject*  identitySource, ::UnityEngine::GameObject*  renderSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetOrCreateSourceRecord", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SourceRecordIndex>(*this, ___internal_method, identitySource, renderSource);
}
inline void MA::Flora::TemplateManager::UpdateSourceRecordIdentity(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  newIdentitySourceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSourceRecordIdentity", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, newIdentitySourceId);
}
inline bool MA::Flora::TemplateManager::TryGetSourceRecordTemplateVariant(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  grassMaterialId, ::MA::Flora::TemplateOptions  options, ::by_ref<::MA::Flora::TemplateIndex>  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"TryGetSourceRecordTemplateVariant", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, sourceRecord, grassMaterialId, options, _cordl_template);
}
inline ::MA::Flora::TemplateIndex MA::Flora::TemplateManager::ResolveSourceTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::GameObject*  renderSource, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveSourceTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateIndex>(*this, ___internal_method, sourceRecord, renderSource, options, grassMaterial);
}
inline void MA::Flora::TemplateManager::BindSourceRecordToTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BindSourceRecordToTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, _cordl_template);
}
inline void MA::Flora::TemplateManager::UnbindSourceRecordFromTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UnbindSourceRecordFromTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, _cordl_template);
}
inline bool MA::Flora::TemplateManager::HasSourceRecordTemplateBinding(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HasSourceRecordTemplateBinding", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, sourceRecord, _cordl_template);
}
inline void MA::Flora::TemplateManager::SetTemplateRepresentativeRenderSource(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"SetTemplateRepresentativeRenderSource", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, sourceRecord);
}
inline void MA::Flora::TemplateManager::RefreshTemplateRepresentativeRenderSource(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RefreshTemplateRepresentativeRenderSource", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
inline void MA::Flora::TemplateManager::RefreshSourceRecord(::UnityEngine::GameObject*  source, ::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RefreshSourceRecord", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, sourceRecord);
}
inline void MA::Flora::TemplateManager::CollectSourceRenderers(::UnityEngine::GameObject*  source, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CollectSourceRenderers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, renderers);
}
inline void MA::Flora::TemplateManager::AddSourceRecordComponent(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  componentId, bool  isRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddSourceRecordComponent", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, componentId, isRenderer);
}
inline void MA::Flora::TemplateManager::RemoveSourceComponent(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  componentId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveSourceComponent", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, componentId);
}
inline void MA::Flora::TemplateManager::ClearSourceRecordMappings(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ClearSourceRecordMappings", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord);
}
inline void MA::Flora::TemplateManager::TryDestroySourceRecordIfUnused(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"TryDestroySourceRecordIfUnused", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord);
}
inline void MA::Flora::TemplateManager::DestroyTemplatesForSourceRecord(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyTemplatesForSourceRecord", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord);
}
inline void MA::Flora::TemplateManager::DestroyInstancesForSourceRecord(::MA::Flora::SourceRecordIndex  sourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyInstancesForSourceRecord", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord);
}
inline void MA::Flora::TemplateManager::MoveSourceRecordInstancesToTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  oldTemplate, ::MA::Flora::TemplateIndex  newTemplate, int32_t  lightmapIndex, ::Unity::Mathematics::float4  lightmapScaleOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MoveSourceRecordInstancesToTemplate", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, oldTemplate, newTemplate, lightmapIndex, lightmapScaleOffset);
}
inline void MA::Flora::TemplateManager::UpdateSourceRecordInstancesLightmapData(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template, int32_t  lightmapIndex, ::Unity::Mathematics::float4  lightmapScaleOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UpdateSourceRecordInstancesLightmapData", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, _cordl_template, lightmapIndex, lightmapScaleOffset);
}
inline void MA::Flora::TemplateManager::DestroyTemplate(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyTemplate", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
inline uint64_t MA::Flora::TemplateManager::HashCombine(uint64_t  hash, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HashCombine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, hash, value);
}
inline uint64_t MA::Flora::TemplateManager::HashCombine(uint64_t  hash, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HashCombine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, hash, value);
}
inline uint64_t MA::Flora::TemplateManager::HashCombine(uint64_t  hash, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"HashCombine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, hash, value);
}
inline bool MA::Flora::TemplateManager::TemplateDataEquals(::by_ref<::MA::Flora::TemplateData>  a, ::by_ref<::MA::Flora::TemplateData>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"TemplateDataEquals", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::MA::Flora::TemplateLayoutIndex MA::Flora::TemplateManager::ResolveTemplateLayoutForSource(::UnityEngine::GameObject*  source, ::MA::Flora::TemplateOptions  templateOptions, ::UnityEngine::EntityId  grassMaterialId, ::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveTemplateLayoutForSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateLayoutIndex>(*this, ___internal_method, source, templateOptions, grassMaterialId, templateSourceInfo);
}
inline ::MA::Flora::TemplateCapabilityProfile MA::Flora::TemplateManager::BuildTemplateCapabilityProfile(::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo, ::MA::Flora::TemplateOptions  templateOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildTemplateCapabilityProfile", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>(), ::i2c::type_of<::MA::Flora::TemplateOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateCapabilityProfile>(*this, ___internal_method, templateSourceInfo, templateOptions);
}
inline void MA::Flora::TemplateManager::GetRenderersForLod(::UnityEngine::GameObject*  source, ::ArrayW<::UnityEngine::LOD>  lods, ::MA::Flora::TemplateRenderType  type, int32_t  lodIndex, ::by_ref<::ArrayW<::UnityEngine::Renderer*>>  renderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetRenderersForLod", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::LOD>>(), ::i2c::type_of<::MA::Flora::TemplateRenderType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Renderer*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, lods, type, lodIndex, renderers);
}
inline ::MA::Flora::RendererStateRecord MA::Flora::TemplateManager::BuildRendererStateRecord(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::MA::Flora::TemplateRenderType  sourceType, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::TemplateOptions  templateOptions, ::MA::Flora::TemplateCapabilityProfile  capabilityProfile, int32_t  lodIndex, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildRendererStateRecord", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateRenderType>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::MA::Flora::TemplateCapabilityProfile>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererStateRecord>(*this, ___internal_method, _cordl_template, representativeRenderSource, sourceType, renderer, detailBillboardMaterial, templateOptions, capabilityProfile, lodIndex, drawDescriptors);
}
inline uint64_t MA::Flora::TemplateManager::CompileRendererDrawDescriptors(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::TemplateOptions  templateOptions, ::MA::Flora::BatchDomainIndex  batchDomainIndex, int32_t  lodIndex, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CompileRendererDrawDescriptors", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, _cordl_template, representativeRenderSource, renderer, detailBillboardMaterial, templateOptions, batchDomainIndex, lodIndex, drawDescriptors);
}
inline ::MA::Flora::RendererGroupRecord MA::Flora::TemplateManager::BuildRendererGroupRecord(int32_t  lodIndex, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildRendererGroupRecord", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererGroupRecord>(*this, ___internal_method, lodIndex, rendererStates);
}
inline ::MA::Flora::TemplateLayoutRecord MA::Flora::TemplateManager::BuildTemplateLayoutRecord(::UnityEngine::EntityId  grassMaterialId, ::MA::Flora::TemplateCapabilityProfile  capabilityProfile, ::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildTemplateLayoutRecord", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::MA::Flora::TemplateCapabilityProfile>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateLayoutRecord>(*this, ___internal_method, grassMaterialId, capabilityProfile, templateSourceInfo, rendererGroups);
}
inline ::MA::Flora::TemplateData MA::Flora::TemplateManager::BuildTemplateBufferData(::by_ref<::MA::Flora::TemplateLayoutRecord>  layoutRecord, ::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildTemplateBufferData", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateData>(*this, ___internal_method, layoutRecord, templateSourceInfo);
}
inline uint64_t MA::Flora::TemplateManager::BuildRendererGroupSignature(::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BuildRendererGroupSignature", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, rendererGroups);
}
inline ::MA::Flora::RendererStateIndex MA::Flora::TemplateManager::ResolveRendererState(::by_ref<::MA::Flora::RendererStateRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidateDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveRendererState", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererStateIndex>(*this, ___internal_method, candidateRecord, candidateDescriptors);
}
inline ::MA::Flora::RendererStateIndex MA::Flora::TemplateManager::FindEquivalentRendererState(::by_ref<::MA::Flora::RendererStateRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidateDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"FindEquivalentRendererState", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererStateIndex>(*this, ___internal_method, candidateRecord, candidateDescriptors);
}
inline bool MA::Flora::TemplateManager::IsRendererStateEquivalent(::MA::Flora::RendererStateIndex  rendererState, ::by_ref<::MA::Flora::RendererStateRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidateDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"IsRendererStateEquivalent", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rendererState, candidateRecord, candidateDescriptors);
}
inline bool MA::Flora::TemplateManager::DrawDescriptorBufferEqualsList(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawDescriptor>  existing, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DrawDescriptorBufferEqualsList", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawDescriptor>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, existing, candidate);
}
inline ::MA::Flora::RendererStateIndex MA::Flora::TemplateManager::CreateRendererState(::by_ref<::MA::Flora::RendererStateRecord>  stateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CreateRendererState", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererStateRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererStateIndex>(*this, ___internal_method, stateRecord, drawDescriptors);
}
inline void MA::Flora::TemplateManager::MaterializeDrawDescriptors(::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  registeredDraws, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  cameraDraws, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  shadowDraws, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  materialIds, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  meshIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MaterializeDrawDescriptors", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, drawDescriptors, registeredDraws, cameraDraws, shadowDraws, materialIds, meshIds);
}
inline void MA::Flora::TemplateManager::RetainRendererState(::MA::Flora::RendererStateIndex  rendererState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RetainRendererState", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererState);
}
inline void MA::Flora::TemplateManager::ReleaseRendererState(::MA::Flora::RendererStateIndex  rendererState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ReleaseRendererState", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererState);
}
inline void MA::Flora::TemplateManager::DestroyRendererState(::MA::Flora::RendererStateIndex  rendererState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyRendererState", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererState);
}
inline ::MA::Flora::RendererGroupIndex MA::Flora::TemplateManager::ResolveRendererGroup(::by_ref<::MA::Flora::RendererGroupRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  candidateStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveRendererGroup", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererGroupIndex>(*this, ___internal_method, candidateRecord, candidateStates);
}
inline ::MA::Flora::RendererGroupIndex MA::Flora::TemplateManager::FindEquivalentRendererGroup(::by_ref<::MA::Flora::RendererGroupRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  candidateStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"FindEquivalentRendererGroup", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererGroupIndex>(*this, ___internal_method, candidateRecord, candidateStates);
}
inline bool MA::Flora::TemplateManager::IsRendererGroupEquivalent(::MA::Flora::RendererGroupIndex  rendererGroup, ::by_ref<::MA::Flora::RendererGroupRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  candidateStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"IsRendererGroupEquivalent", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>(), ::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rendererGroup, candidateRecord, candidateStates);
}
inline ::MA::Flora::RendererGroupIndex MA::Flora::TemplateManager::CreateRendererGroup(::by_ref<::MA::Flora::RendererGroupRecord>  groupRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CreateRendererGroup", {}, {::i2c::type_of<::by_ref<::MA::Flora::RendererGroupRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererGroupIndex>(*this, ___internal_method, groupRecord, rendererStates);
}
inline void MA::Flora::TemplateManager::RetainRendererGroup(::MA::Flora::RendererGroupIndex  rendererGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RetainRendererGroup", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererGroup);
}
inline void MA::Flora::TemplateManager::ReleaseRendererGroup(::MA::Flora::RendererGroupIndex  rendererGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ReleaseRendererGroup", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererGroup);
}
inline void MA::Flora::TemplateManager::DestroyRendererGroup(::MA::Flora::RendererGroupIndex  rendererGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyRendererGroup", {}, {::i2c::type_of<::MA::Flora::RendererGroupIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererGroup);
}
inline ::MA::Flora::TemplateLayoutIndex MA::Flora::TemplateManager::ResolveTemplateLayout(::by_ref<::MA::Flora::TemplateLayoutRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  candidateGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResolveTemplateLayout", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateLayoutIndex>(*this, ___internal_method, candidateRecord, candidateGroups);
}
inline ::MA::Flora::TemplateLayoutIndex MA::Flora::TemplateManager::FindEquivalentTemplateLayout(::by_ref<::MA::Flora::TemplateLayoutRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  candidateGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"FindEquivalentTemplateLayout", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateLayoutIndex>(*this, ___internal_method, candidateRecord, candidateGroups);
}
inline bool MA::Flora::TemplateManager::IsTemplateLayoutEquivalent(::MA::Flora::TemplateLayoutIndex  templateLayout, ::by_ref<::MA::Flora::TemplateLayoutRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  candidateGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"IsTemplateLayoutEquivalent", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, templateLayout, candidateRecord, candidateGroups);
}
inline ::MA::Flora::TemplateLayoutIndex MA::Flora::TemplateManager::CreateTemplateLayout(::by_ref<::MA::Flora::TemplateLayoutRecord>  layoutRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CreateTemplateLayout", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateLayoutRecord>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateLayoutIndex>(*this, ___internal_method, layoutRecord, rendererGroups);
}
inline void MA::Flora::TemplateManager::BindHandleToState(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  source, ::MA::Flora::TemplateLayoutIndex  newLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"BindHandleToState", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, source, newLayout);
}
inline void MA::Flora::TemplateManager::UnbindHandleFromState(::MA::Flora::TemplateIndex  _cordl_template, bool  notifyStateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UnbindHandleFromState", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, notifyStateChange);
}
inline void MA::Flora::TemplateManager::ProjectLayoutToHandle(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  source, ::MA::Flora::TemplateLayoutIndex  templateLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ProjectLayoutToHandle", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, source, templateLayout);
}
inline void MA::Flora::TemplateManager::ClearTemplateProjection(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ClearTemplateProjection", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
inline ::MA::Flora::TemplateStateChangeMask MA::Flora::TemplateManager::ComputeStateChangeMask(::MA::Flora::TemplateLayoutIndex  oldLayout, ::MA::Flora::TemplateLayoutIndex  newLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ComputeStateChangeMask", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>(), ::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateStateChangeMask>(*this, ___internal_method, oldLayout, newLayout);
}
inline void MA::Flora::TemplateManager::RetainTemplateLayout(::MA::Flora::TemplateLayoutIndex  templateLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RetainTemplateLayout", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, templateLayout);
}
inline void MA::Flora::TemplateManager::ReleaseTemplateLayout(::MA::Flora::TemplateLayoutIndex  templateLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ReleaseTemplateLayout", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, templateLayout);
}
inline void MA::Flora::TemplateManager::DestroyTemplateLayout(::MA::Flora::TemplateLayoutIndex  templateLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"DestroyTemplateLayout", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, templateLayout);
}
inline void MA::Flora::TemplateManager::CopyUniqueDrawIndices(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  destination, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CopyUniqueDrawIndices", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, source);
}
inline void MA::Flora::TemplateManager::CopyUniqueEntityIds(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  destination, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"CopyUniqueEntityIds", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, source);
}
inline void MA::Flora::TemplateManager::AppendUniqueDrawIndices(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  destination, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  source, ::MA::Flora::NativeBitSet  seen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueDrawIndices", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, source, seen);
}
inline void MA::Flora::TemplateManager::AppendUniqueDrawIndices(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  destination, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  source, ::MA::Flora::NativeBitSet  seen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueDrawIndices", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, source, seen);
}
inline void MA::Flora::TemplateManager::AppendUniqueEntityIds(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  destination, ::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  source, ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>  seen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueEntityIds", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, source, seen);
}
inline void MA::Flora::TemplateManager::AppendUniqueEntityIds(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  destination, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  source, ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>  seen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AppendUniqueEntityIds", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, source, seen);
}
inline int32_t MA::Flora::TemplateManager::GetMaxDrawIndex(::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  drawIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, drawIndices);
}
inline int32_t MA::Flora::TemplateManager::GetMaxDrawIndex(::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, rendererStates);
}
inline int32_t MA::Flora::TemplateManager::GetMaxDrawIndex(::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, rendererGroups);
}
inline int32_t MA::Flora::TemplateManager::GetMaxDrawIndex(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  drawIndices, int32_t  maxDrawIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetMaxDrawIndex", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, drawIndices, maxDrawIndex);
}
inline int32_t MA::Flora::TemplateManager::GetEntityIdCapacity(::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  sourceBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetEntityIdCapacity", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>>(), ::i2c::type_of<::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, rendererStates, sourceBuffers);
}
inline void MA::Flora::TemplateManager::EnsureSourceRecordCapacity(int32_t  minCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureSourceRecordCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minCapacity);
}
inline void MA::Flora::TemplateManager::EnsureRendererStateCapacity(int32_t  minCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererStateCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minCapacity);
}
inline void MA::Flora::TemplateManager::EnsureRendererStateLookupCapacity(int32_t  additionalEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererStateLookupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, additionalEntries);
}
inline void MA::Flora::TemplateManager::EnsureRendererGroupCapacity(int32_t  minCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererGroupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minCapacity);
}
inline void MA::Flora::TemplateManager::EnsureRendererGroupLookupCapacity(int32_t  additionalEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureRendererGroupLookupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, additionalEntries);
}
inline void MA::Flora::TemplateManager::EnsureTemplateLayoutCapacity(int32_t  minCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureTemplateLayoutCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minCapacity);
}
inline void MA::Flora::TemplateManager::EnsureTemplateLayoutLookupCapacity(int32_t  additionalEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureTemplateLayoutLookupCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, additionalEntries);
}
inline int32_t MA::Flora::TemplateManager::get_MaxCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_MaxCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::TemplateManager::get_MaxUsedLodCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_MaxUsedLodCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBitSet MA::Flora::TemplateManager::get_Allocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_Allocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBitSet>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> MA::Flora::TemplateManager::get_CameraDrawIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CameraDrawIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> MA::Flora::TemplateManager::get_CameraDrawIndicesPerLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CameraDrawIndicesPerLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> MA::Flora::TemplateManager::get_ShadowDrawIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_ShadowDrawIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> MA::Flora::TemplateManager::get_ShadowDrawIndicesPerLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_ShadowDrawIndicesPerLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::TemplateManager::get_CullingChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CullingChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::TemplateManager::get_TemplateDataBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_TemplateDataBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateManager::get_CanInstancesHaveMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CanInstancesHaveMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateManager::get_CanInstancesHaveLightProbes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"get_CanInstancesHaveLightProbes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TemplateManager::Initialize(::MA::Flora::InstanceContext  instanceContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceContext);
}
inline void MA::Flora::TemplateManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TemplateManager::RebuildDrawBatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RebuildDrawBatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TemplateManager::AddCullingChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::CullingChunkIndex  chunk, ::Unity::Collections::NativeArray_1<int32_t>  chunkIndexInTemplateList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddCullingChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, chunk, chunkIndexInTemplateList);
}
inline void MA::Flora::TemplateManager::RemoveCullingChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::CullingChunkIndex  chunk, ::Unity::Collections::NativeArray_1<int32_t>  chunkIndexInTemplateList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveCullingChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, chunk, chunkIndexInTemplateList);
}
inline void MA::Flora::TemplateManager::EnsureDrawTrackingCapacity(int32_t  minCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureDrawTrackingCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minCapacity);
}
inline void MA::Flora::TemplateManager::MarkTemplateDataDirty(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MarkTemplateDataDirty", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
inline void MA::Flora::TemplateManager::ResetTemplateData(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"ResetTemplateData", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::TemplateManager::GetTemplateRepresentativeRenderSource(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetTemplateRepresentativeRenderSource", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method, _cordl_template);
}
inline ::UnityEngine::EntityId MA::Flora::TemplateManager::GetTemplateRepresentativeRenderSourceId(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"GetTemplateRepresentativeRenderSourceId", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method, _cordl_template);
}
inline void MA::Flora::TemplateManager::MarkTemplateDrawsDirty(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"MarkTemplateDrawsDirty", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
inline void MA::Flora::TemplateManager::AddTemplateDrawOwnership(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  drawIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddTemplateDrawOwnership", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, drawIndices);
}
inline void MA::Flora::TemplateManager::RemoveTemplateDrawOwnership(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  drawIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveTemplateDrawOwnership", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template, drawIndices);
}
inline void MA::Flora::TemplateManager::RebuildDirtyDrawChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RebuildDirtyDrawChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TemplateManager::UploadDirtyTemplateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"UploadDirtyTemplateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TemplateManager::EnsureTemplateCapacity(int32_t  minCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"EnsureTemplateCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minCapacity);
}
inline bool MA::Flora::TemplateManager::AddChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::ChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, _cordl_template, chunk);
}
inline bool MA::Flora::TemplateManager::RemoveChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::ChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveChunk", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, _cordl_template, chunk);
}
inline void MA::Flora::TemplateManager::AddInstancesToSourceRecord(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"AddInstancesToSourceRecord", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceRecord, instances, count);
}
inline void MA::Flora::TemplateManager::RemoveInstancesFromSourceRecords(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"RemoveInstancesFromSourceRecords", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances, count);
}
inline void MA::Flora::TemplateManager::__InteropIsBurst(::by_ref<bool>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"__InteropIsBurst", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status);
}
inline void MA::Flora::TemplateManager::_EarlyInitInterop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"_EarlyInitInterop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::TemplateManager::_LateInitInterop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateManager>(),
                        {"_LateInitInterop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::TemplateManager::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::TemplateManager::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceBuffer", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextTemplateId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplatesAreGrass", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::TemplateKey,::MA::Flora::TemplateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextSourceRecordId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordBySource", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordByComponent", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::SourceRecord>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordComponentIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordRendererIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordTemplates", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceRecordInstances", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextRendererStateId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererStateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateKey,::MA::Flora::RendererStateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::RendererStateRecord>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateDrawDescriptors", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawDescriptor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateRegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateCameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateMaterialInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStateMeshInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStatesByMaterial", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererStatesByMesh", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextRendererGroupId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupKey,::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupsByState", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateIndex,::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::RendererGroupRecord>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupStates", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererStateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupRegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupCameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupMaterialInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RendererGroupMeshInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextTemplateLayoutId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::TemplateLayoutKey,::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutsByGroup", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupIndex,::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutBindings", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutRecord>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutGroups", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutRegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutCameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateLayoutShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GrassMaterialIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateOptions", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateOptions>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateRepresentativeRenderSourceIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateSourceRecords", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Chunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ShadowDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxDrawBatchIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxUsedLodCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateDataArray", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateDataBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DirtyTemplateData", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawTemplates", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DirtyDrawChunks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateDataNeedsUpload", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateManager::TemplateManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer, ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  m_DrawManager, int32_t  m_NextTemplateId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateIndex>  m_TemplateFreeList, ::MA::Flora::NativeBitSet  m_TemplateAllocated, ::MA::Flora::NativeBitSet  m_TemplatesAreGrass, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::TemplateKey,::MA::Flora::TemplateIndex>  m_TemplateByKey, int32_t  m_NextSourceRecordId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SourceRecordIndex>  m_SourceRecordFreeList, ::MA::Flora::NativeBitSet  m_SourceRecordAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>  m_SourceRecordBySource, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>  m_SourceRecordByComponent, ::Unity::Collections::NativeArray_1<::MA::Flora::SourceRecord>  m_SourceRecords, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_SourceRecordComponentIds, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_SourceRecordRendererIds, ::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>  m_SourceRecordTemplates, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_SourceRecordInstances, int32_t  m_NextRendererStateId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererStateIndex>  m_RendererStateFreeList, ::MA::Flora::NativeBitSet  m_RendererStateAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateKey,::MA::Flora::RendererStateIndex>  m_RendererStateByKey, ::Unity::Collections::NativeArray_1<::MA::Flora::RendererStateRecord>  m_RendererStateRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawDescriptor>  m_RendererStateDrawDescriptors, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateRegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateCameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateShadowDrawIndices, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererStateMaterialInstanceIds, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererStateMeshInstanceIds, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>  m_RendererStatesByMaterial, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>  m_RendererStatesByMesh, int32_t  m_NextRendererGroupId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererGroupIndex>  m_RendererGroupFreeList, ::MA::Flora::NativeBitSet  m_RendererGroupAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupKey,::MA::Flora::RendererGroupIndex>  m_RendererGroupByKey, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateIndex,::MA::Flora::RendererGroupIndex>  m_RendererGroupsByState, ::Unity::Collections::NativeArray_1<::MA::Flora::RendererGroupRecord>  m_RendererGroupRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererStateIndex>  m_RendererGroupStates, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupRegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupCameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupShadowDrawIndices, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererGroupMaterialInstanceIds, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererGroupMeshInstanceIds, int32_t  m_NextTemplateLayoutId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutFreeList, ::MA::Flora::NativeBitSet  m_TemplateLayoutAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::TemplateLayoutKey,::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutByKey, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupIndex,::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutsByGroup, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutBindings, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutRecord>  m_TemplateLayoutRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererGroupIndex>  m_TemplateLayoutGroups, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutRegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutCameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutShadowDrawIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_GrassMaterialIds, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateOptions>  m_TemplateOptions, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_TemplateRepresentativeRenderSourceIds, ::MA::Flora::NativeBufferArray_1<::MA::Flora::SourceRecordIndex>  m_TemplateSourceRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_Chunks, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_CullingChunks, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_CameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_CameraDrawIndicesPerLod, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_ShadowDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_ShadowDrawIndicesPerLod, int32_t  m_MaxDrawBatchIndices, int32_t  m_MaxUsedLodCount, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateData>  m_TemplateDataArray, ::MA::Flora::GraphicsBufferRef  m_TemplateDataBuffer, ::MA::Flora::NativeBitSet  m_DirtyTemplateData, ::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>  m_DrawTemplates, ::MA::Flora::NativeBitSet  m_DirtyDrawChunks, bool  m_TemplateDataNeedsUpload) noexcept  {
this->m_InstanceManager = m_InstanceManager;
this->m_InstanceBuffer = m_InstanceBuffer;
this->m_DrawManager = m_DrawManager;
this->m_NextTemplateId = m_NextTemplateId;
this->m_TemplateFreeList = m_TemplateFreeList;
this->m_TemplateAllocated = m_TemplateAllocated;
this->m_TemplatesAreGrass = m_TemplatesAreGrass;
this->m_TemplateByKey = m_TemplateByKey;
this->m_NextSourceRecordId = m_NextSourceRecordId;
this->m_SourceRecordFreeList = m_SourceRecordFreeList;
this->m_SourceRecordAllocated = m_SourceRecordAllocated;
this->m_SourceRecordBySource = m_SourceRecordBySource;
this->m_SourceRecordByComponent = m_SourceRecordByComponent;
this->m_SourceRecords = m_SourceRecords;
this->m_SourceRecordComponentIds = m_SourceRecordComponentIds;
this->m_SourceRecordRendererIds = m_SourceRecordRendererIds;
this->m_SourceRecordTemplates = m_SourceRecordTemplates;
this->m_SourceRecordInstances = m_SourceRecordInstances;
this->m_NextRendererStateId = m_NextRendererStateId;
this->m_RendererStateFreeList = m_RendererStateFreeList;
this->m_RendererStateAllocated = m_RendererStateAllocated;
this->m_RendererStateByKey = m_RendererStateByKey;
this->m_RendererStateRecords = m_RendererStateRecords;
this->m_RendererStateDrawDescriptors = m_RendererStateDrawDescriptors;
this->m_RendererStateRegisteredDrawIndices = m_RendererStateRegisteredDrawIndices;
this->m_RendererStateCameraDrawIndices = m_RendererStateCameraDrawIndices;
this->m_RendererStateShadowDrawIndices = m_RendererStateShadowDrawIndices;
this->m_RendererStateMaterialInstanceIds = m_RendererStateMaterialInstanceIds;
this->m_RendererStateMeshInstanceIds = m_RendererStateMeshInstanceIds;
this->m_RendererStatesByMaterial = m_RendererStatesByMaterial;
this->m_RendererStatesByMesh = m_RendererStatesByMesh;
this->m_NextRendererGroupId = m_NextRendererGroupId;
this->m_RendererGroupFreeList = m_RendererGroupFreeList;
this->m_RendererGroupAllocated = m_RendererGroupAllocated;
this->m_RendererGroupByKey = m_RendererGroupByKey;
this->m_RendererGroupsByState = m_RendererGroupsByState;
this->m_RendererGroupRecords = m_RendererGroupRecords;
this->m_RendererGroupStates = m_RendererGroupStates;
this->m_RendererGroupRegisteredDrawIndices = m_RendererGroupRegisteredDrawIndices;
this->m_RendererGroupCameraDrawIndices = m_RendererGroupCameraDrawIndices;
this->m_RendererGroupShadowDrawIndices = m_RendererGroupShadowDrawIndices;
this->m_RendererGroupMaterialInstanceIds = m_RendererGroupMaterialInstanceIds;
this->m_RendererGroupMeshInstanceIds = m_RendererGroupMeshInstanceIds;
this->m_NextTemplateLayoutId = m_NextTemplateLayoutId;
this->m_TemplateLayoutFreeList = m_TemplateLayoutFreeList;
this->m_TemplateLayoutAllocated = m_TemplateLayoutAllocated;
this->m_TemplateLayoutByKey = m_TemplateLayoutByKey;
this->m_TemplateLayoutsByGroup = m_TemplateLayoutsByGroup;
this->m_TemplateLayoutBindings = m_TemplateLayoutBindings;
this->m_TemplateLayoutRecords = m_TemplateLayoutRecords;
this->m_TemplateLayoutGroups = m_TemplateLayoutGroups;
this->m_TemplateLayoutRegisteredDrawIndices = m_TemplateLayoutRegisteredDrawIndices;
this->m_TemplateLayoutCameraDrawIndices = m_TemplateLayoutCameraDrawIndices;
this->m_TemplateLayoutShadowDrawIndices = m_TemplateLayoutShadowDrawIndices;
this->m_GrassMaterialIds = m_GrassMaterialIds;
this->m_TemplateOptions = m_TemplateOptions;
this->m_TemplateRepresentativeRenderSourceIds = m_TemplateRepresentativeRenderSourceIds;
this->m_TemplateSourceRecords = m_TemplateSourceRecords;
this->m_RegisteredDrawIndices = m_RegisteredDrawIndices;
this->m_Chunks = m_Chunks;
this->m_CullingChunks = m_CullingChunks;
this->m_CameraDrawIndices = m_CameraDrawIndices;
this->m_CameraDrawIndicesPerLod = m_CameraDrawIndicesPerLod;
this->m_ShadowDrawIndices = m_ShadowDrawIndices;
this->m_ShadowDrawIndicesPerLod = m_ShadowDrawIndicesPerLod;
this->m_MaxDrawBatchIndices = m_MaxDrawBatchIndices;
this->m_MaxUsedLodCount = m_MaxUsedLodCount;
this->m_TemplateDataArray = m_TemplateDataArray;
this->m_TemplateDataBuffer = m_TemplateDataBuffer;
this->m_DirtyTemplateData = m_DirtyTemplateData;
this->m_DrawTemplates = m_DrawTemplates;
this->m_DirtyDrawChunks = m_DirtyDrawChunks;
this->m_TemplateDataNeedsUpload = m_TemplateDataNeedsUpload;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateManager::TemplateManager()   {
}
