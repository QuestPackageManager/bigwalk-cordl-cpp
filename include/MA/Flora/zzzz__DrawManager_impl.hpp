#pragma once
// IWYU pragma private; include "MA/Flora/DrawManager.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawBatchKey_impl.hpp"
#include "MA/Flora/zzzz__DrawBatch_impl.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_impl.hpp"
#include "MA/Flora/zzzz__NativeBitSet_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "MA/Flora/zzzz__DrawManager_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_def.hpp"
#include "MA/Flora/zzzz__DrawBatch_def.hpp"
#include "MA/Flora/zzzz__DrawDescriptor_def.hpp"
#include "MA/Flora/zzzz__DrawManager_def.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_def.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateOptions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawManager_AddChunksToDrawsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager_AddChunksToDrawsJob::*)()>(&::MA::Flora::DrawManager_AddChunksToDrawsJob::Execute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814af0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager_AddChunksToDrawsJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::DrawManager_AddChunksToDrawsJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager_AddChunksToDrawsJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::DrawManager_AddChunksToDrawsJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::DrawManager_AddChunksToDrawsJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "DrawIDs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunksToAdd", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawManager_AddChunksToDrawsJob::DrawManager_AddChunksToDrawsJob(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>  DrawIDs, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  ChunksToAdd, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  DrawChunks) noexcept  {
this->DrawIDs = DrawIDs;
this->ChunksToAdd = ChunksToAdd;
this->DrawChunks = DrawChunks;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawManager_AddChunksToDrawsJob::DrawManager_AddChunksToDrawsJob()   {
}
//  Writing Method size for method: ::MA::Flora::DrawManager_RebuildDrawBatchIndices.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager_RebuildDrawBatchIndices::*)()>(&::MA::Flora::DrawManager_RebuildDrawBatchIndices::Execute)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814c0940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager_RebuildDrawBatchIndices>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::DrawManager_RebuildDrawBatchIndices::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager_RebuildDrawBatchIndices>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::DrawManager_RebuildDrawBatchIndices::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::DrawManager_RebuildDrawBatchIndices::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Draws", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawsByRange", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawManager_RebuildDrawBatchIndices::DrawManager_RebuildDrawBatchIndices(::MA::Flora::NativeBitSet  Draws, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  DrawsByRange) noexcept  {
this->Draws = Draws;
this->DrawBatches = DrawBatches;
this->DrawsByRange = DrawsByRange;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawManager_RebuildDrawBatchIndices::DrawManager_RebuildDrawBatchIndices()   {
}
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawRangeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawRangeCount)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814bc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawBatchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawBatchCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814bc8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawRangeIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBitSet (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawRangeIndices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawRangeKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey> (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawRangeKeys)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0x180a26490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawRangeBatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawRangeBatches)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeBatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawBatchIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBitSet (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawBatchIndices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawBatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch> (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawBatches)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawBatchRangeIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex> (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawBatchRangeIndices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814af090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchRangeIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_DrawBatchChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_DrawBatchChunks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.get_NeedsRebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::get_NeedsRebuild)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x180f187e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_NeedsRebuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::Initialize)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1814bb880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814bb610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.ResetCullingChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::ResetCullingChunks)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814bc730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ResetCullingChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.AddCullingChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>)>(&::MA::Flora::DrawManager::AddCullingChunks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814bab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"AddCullingChunks", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.ClearCullingChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)(::MA::Flora::DrawBatchIndex)>(&::MA::Flora::DrawManager::ClearCullingChunks)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814bb540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ClearCullingChunks", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.AddCullingChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)(::MA::Flora::DrawBatchIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>)>(&::MA::Flora::DrawManager::AddCullingChunks)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814babf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"AddCullingChunks", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.ContainsDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawManager::*)(::MA::Flora::DrawBatchIndex)>(&::MA::Flora::DrawManager::ContainsDraw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ContainsDraw", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)()>(&::MA::Flora::DrawManager::Rebuild)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814bbbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"Rebuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.GetOrCreateDrawRangeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawRangeIndex (::MA::Flora::DrawManager::*)(::by_ref<::MA::Flora::DrawRangeKey>)>(&::MA::Flora::DrawManager::GetOrCreateDrawRangeIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814bb730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"GetOrCreateDrawRangeIndex", {}, {::i2c::type_of<::by_ref<::MA::Flora::DrawRangeKey>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.BuildDrawDescriptors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor> (::MA::Flora::DrawManager::*)(::MA::Flora::TemplateIndex, ::UnityEngine::GameObject*, ::MA::Flora::TemplateOptions, int32_t, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::MA::Flora::BatchDomainIndex, ::Unity::Collections::Allocator)>(&::MA::Flora::DrawManager::BuildDrawDescriptors)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x1814bace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"BuildDrawDescriptors", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.RegisterDrawDescriptors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex> (::MA::Flora::DrawManager::*)(::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor>, ::Unity::Collections::Allocator)>(&::MA::Flora::DrawManager::RegisterDrawDescriptors)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814bbc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"RegisterDrawDescriptors", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.RegisterDraws
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex> (::MA::Flora::DrawManager::*)(::MA::Flora::TemplateIndex, ::UnityEngine::GameObject*, ::MA::Flora::TemplateOptions, int32_t, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::MA::Flora::BatchDomainIndex, ::Unity::Collections::Allocator)>(&::MA::Flora::DrawManager::RegisterDraws)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814bc160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"RegisterDraws", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.ReleaseDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)(::MA::Flora::DrawBatchIndex)>(&::MA::Flora::DrawManager::ReleaseDraw)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814bc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ReleaseDraw", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.ReleaseDraws
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>)>(&::MA::Flora::DrawManager::ReleaseDraws)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1814bc520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ReleaseDraws", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.RegisterDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawBatchIndex (::MA::Flora::DrawManager::*)(::by_ref<::MA::Flora::DrawDescriptor>)>(&::MA::Flora::DrawManager::RegisterDraw)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1814bbd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"RegisterDraw", {}, {::i2c::type_of<::by_ref<::MA::Flora::DrawDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawManager.EnsureDrawBatchHashCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawManager::*)(int32_t)>(&::MA::Flora::DrawManager::EnsureDrawBatchHashCapacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814bb6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"EnsureDrawBatchHashCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::DrawManager::setStaticF_MaterialBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "MaterialBuffer", ::MA::Flora::DrawManager>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* MA::Flora::DrawManager::getStaticF_MaterialBuffer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "MaterialBuffer", ::MA::Flora::DrawManager>();
}
inline int32_t MA::Flora::DrawManager::get_DrawRangeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::DrawManager::get_DrawBatchCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBitSet MA::Flora::DrawManager::get_DrawRangeIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBitSet>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey> MA::Flora::DrawManager::get_DrawRangeKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> MA::Flora::DrawManager::get_DrawRangeBatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawRangeBatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBitSet MA::Flora::DrawManager::get_DrawBatchIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBitSet>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch> MA::Flora::DrawManager::get_DrawBatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex> MA::Flora::DrawManager::get_DrawBatchRangeIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchRangeIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::DrawManager::get_DrawBatchChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_DrawBatchChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method);
}
inline bool MA::Flora::DrawManager::get_NeedsRebuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"get_NeedsRebuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::DrawManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::DrawManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::DrawManager::ResetCullingChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ResetCullingChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::DrawManager::AddCullingChunks(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>  drawIds, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  chunksToAdd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"AddCullingChunks", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, drawIds, chunksToAdd);
}
inline void MA::Flora::DrawManager::ClearCullingChunks(::MA::Flora::DrawBatchIndex  drawIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ClearCullingChunks", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, drawIndex);
}
inline void MA::Flora::DrawManager::AddCullingChunks(::MA::Flora::DrawBatchIndex  drawIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  chunksToAdd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"AddCullingChunks", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, drawIndex, chunksToAdd);
}
inline bool MA::Flora::DrawManager::ContainsDraw(::MA::Flora::DrawBatchIndex  drawIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ContainsDraw", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, drawIndex);
}
inline void MA::Flora::DrawManager::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"Rebuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::MA::Flora::DrawRangeIndex MA::Flora::DrawManager::GetOrCreateDrawRangeIndex(::by_ref<::MA::Flora::DrawRangeKey>  rangeKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"GetOrCreateDrawRangeIndex", {}, {::i2c::type_of<::by_ref<::MA::Flora::DrawRangeKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawRangeIndex>(*this, ___internal_method, rangeKey);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor> MA::Flora::DrawManager::BuildDrawDescriptors(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::MA::Flora::TemplateOptions  templateOptions, int32_t  lodIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::BatchDomainIndex  batchDomainIndex, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"BuildDrawDescriptors", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor>>(*this, ___internal_method, _cordl_template, representativeRenderSource, templateOptions, lodIndex, renderer, detailBillboardMaterial, batchDomainIndex, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex> MA::Flora::DrawManager::RegisterDrawDescriptors(::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor>  descriptors, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"RegisterDrawDescriptors", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::DrawDescriptor>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>>(*this, ___internal_method, descriptors, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex> MA::Flora::DrawManager::RegisterDraws(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::MA::Flora::TemplateOptions  templateOptions, int32_t  lodIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::BatchDomainIndex  batchDomainIndex, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"RegisterDraws", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::MA::Flora::TemplateOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>>(*this, ___internal_method, _cordl_template, representativeRenderSource, templateOptions, lodIndex, renderer, detailBillboardMaterial, batchDomainIndex, allocator);
}
inline void MA::Flora::DrawManager::ReleaseDraw(::MA::Flora::DrawBatchIndex  drawIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ReleaseDraw", {}, {::i2c::type_of<::MA::Flora::DrawBatchIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, drawIndex);
}
inline void MA::Flora::DrawManager::ReleaseDraws(::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>  drawIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"ReleaseDraws", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatchIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, drawIndices);
}
inline ::MA::Flora::DrawBatchIndex MA::Flora::DrawManager::RegisterDraw(::by_ref<::MA::Flora::DrawDescriptor>  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"RegisterDraw", {}, {::i2c::type_of<::by_ref<::MA::Flora::DrawDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawBatchIndex>(*this, ___internal_method, descriptor);
}
inline void MA::Flora::DrawManager::EnsureDrawBatchHashCapacity(int32_t  additionalEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawManager>(),
                        {"EnsureDrawBatchHashCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, additionalEntries);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::DrawManager::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::DrawManager::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_NextDrawRangeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawRangeIndices", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawRangeFreeIndices", ty: "::Unity::Collections::NativeList_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawRangeHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawRangeKey,::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawRangeKeys", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawRangeBatches", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawMatrixMap", ty: "::Unity::Collections::NativeParallelHashMap_2<::Unity::Mathematics::float4x4,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawMatrixKeys", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextDrawBatchIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawBatchIndices", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawBatchFreeIndices", ty: "::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawBatchHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawBatchKey,::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawBatchRefCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawBatchRangeIndices", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawBatchChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NeedsRebuild", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawManager::DrawManager(int32_t  m_NextDrawRangeIndex, ::MA::Flora::NativeBitSet  m_DrawRangeIndices, ::Unity::Collections::NativeList_1<::MA::Flora::DrawRangeIndex>  m_DrawRangeFreeIndices, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawRangeKey,::MA::Flora::DrawRangeIndex>  m_DrawRangeHash, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>  m_DrawRangeKeys, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_DrawRangeBatches, ::Unity::Collections::NativeParallelHashMap_2<::Unity::Mathematics::float4x4,int32_t>  m_DrawMatrixMap, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float4x4>  m_DrawMatrixKeys, int32_t  m_NextDrawBatchIndex, ::MA::Flora::NativeBitSet  m_DrawBatchIndices, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  m_DrawBatchFreeIndices, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::DrawBatchKey,::MA::Flora::DrawBatchIndex>  m_DrawBatchHash, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  m_DrawBatches, ::Unity::Collections::NativeArray_1<int32_t>  m_DrawBatchRefCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  m_DrawBatchRangeIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_DrawBatchChunks, bool  m_NeedsRebuild) noexcept  {
this->m_NextDrawRangeIndex = m_NextDrawRangeIndex;
this->m_DrawRangeIndices = m_DrawRangeIndices;
this->m_DrawRangeFreeIndices = m_DrawRangeFreeIndices;
this->m_DrawRangeHash = m_DrawRangeHash;
this->m_DrawRangeKeys = m_DrawRangeKeys;
this->m_DrawRangeBatches = m_DrawRangeBatches;
this->m_DrawMatrixMap = m_DrawMatrixMap;
this->m_DrawMatrixKeys = m_DrawMatrixKeys;
this->m_NextDrawBatchIndex = m_NextDrawBatchIndex;
this->m_DrawBatchIndices = m_DrawBatchIndices;
this->m_DrawBatchFreeIndices = m_DrawBatchFreeIndices;
this->m_DrawBatchHash = m_DrawBatchHash;
this->m_DrawBatches = m_DrawBatches;
this->m_DrawBatchRefCounts = m_DrawBatchRefCounts;
this->m_DrawBatchRangeIndices = m_DrawBatchRangeIndices;
this->m_DrawBatchChunks = m_DrawBatchChunks;
this->m_NeedsRebuild = m_NeedsRebuild;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawManager::DrawManager()   {
}
