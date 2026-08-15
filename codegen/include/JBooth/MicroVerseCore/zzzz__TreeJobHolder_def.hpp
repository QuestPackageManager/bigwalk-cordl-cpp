#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TreeJobHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__UnpackTreeInstanceJob_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeJobHolder)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class TreeJobHolder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::TreeJobHolder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::TreeJobHolder*, "JBooth.MicroVerseCore", "TreeJobHolder");
// Dependencies JBooth.MicroVerseCore.UnpackTreeInstanceJob, System.Object, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, Unity.Mathematics.half4, UnityEngine.Rendering.AsyncGPUReadbackRequest
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.TreeJobHolder
class CORDL_TYPE TreeJobHolder : public ::System::Object {
public:
// Declarations
/// @brief Field <canceled>k__BackingField, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__canceled_k__BackingField, put=__cordl_internal_set__canceled_k__BackingField)) bool  _canceled_k__BackingField;

 __declspec(property(get=get_canceled, put=set_canceled)) bool  canceled;

/// @brief Field filteredInstances, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_filteredInstances, put=__cordl_internal_set_filteredInstances)) ::UnityW<::UnityEngine::RenderTexture>  filteredInstances;

/// @brief Field gpuRequestPlacement, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_gpuRequestPlacement, put=__cordl_internal_set_gpuRequestPlacement)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  gpuRequestPlacement;

/// @brief Field gpuRequestRandoms, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_gpuRequestRandoms, put=__cordl_internal_set_gpuRequestRandoms)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  gpuRequestRandoms;

/// @brief Field handle, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::Unity::Jobs::JobHandle  handle;

/// @brief Field job, offset 0x10, size 0x50 
 __declspec(property(get=__cordl_internal_get_job, put=__cordl_internal_set_job)) ::JBooth::MicroVerseCore::UnpackTreeInstanceJob  job;

/// @brief Field placementData, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_placementData, put=__cordl_internal_set_placementData)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  placementData;

/// @brief Field randomData, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_randomData, put=__cordl_internal_set_randomData)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  randomData;

/// @brief Field randomResults, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomResults, put=__cordl_internal_set_randomResults)) ::UnityW<::UnityEngine::RenderTexture>  randomResults;

/// @brief Field treeIndexes, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_treeIndexes, put=__cordl_internal_set_treeIndexes)) ::Unity::Collections::NativeArray_1<int32_t>  treeIndexes;

/// @brief Method AddJob, addr 0x181426670, size 0x450, virtual false, abstract: false, final false
inline void AddJob(::UnityEngine::RenderTexture*  filteredInstances, ::UnityEngine::RenderTexture*  randomResults, ::Unity::Collections::NativeArray_1<int32_t>  treeIndexes) ;

/// @brief Method Cleanup, addr 0x181426ac0, size 0x90, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Dispose, addr 0x181426ac0, size 0x90, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method IsDone, addr 0x181426b50, size 0x80, virtual false, abstract: false, final false
inline bool IsDone() ;

/// @brief Method LaunchJob, addr 0x181426bd0, size 0x130, virtual false, abstract: false, final false
inline void LaunchJob() ;

static inline ::JBooth::MicroVerseCore::TreeJobHolder* New_ctor() ;

/// @brief Method OnAsyncCompletePositions, addr 0x181426d00, size 0xe0, virtual false, abstract: false, final false
inline void OnAsyncCompletePositions(::UnityEngine::Rendering::AsyncGPUReadbackRequest  obj) ;

/// @brief Method OnAsyncCompleteRandoms, addr 0x181426de0, size 0xd0, virtual false, abstract: false, final false
inline void OnAsyncCompleteRandoms(::UnityEngine::Rendering::AsyncGPUReadbackRequest  obj) ;

constexpr bool const& __cordl_internal_get__canceled_k__BackingField() const;

constexpr bool& __cordl_internal_get__canceled_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_filteredInstances() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_filteredInstances() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_gpuRequestPlacement() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_gpuRequestPlacement() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_gpuRequestRandoms() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_gpuRequestRandoms() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_handle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_handle() ;

constexpr ::JBooth::MicroVerseCore::UnpackTreeInstanceJob const& __cordl_internal_get_job() const;

constexpr ::JBooth::MicroVerseCore::UnpackTreeInstanceJob& __cordl_internal_get_job() ;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& __cordl_internal_get_placementData() const;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& __cordl_internal_get_placementData() ;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& __cordl_internal_get_randomData() const;

constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& __cordl_internal_get_randomData() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_randomResults() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_randomResults() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_treeIndexes() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_treeIndexes() ;

constexpr void __cordl_internal_set__canceled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_filteredInstances(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_gpuRequestPlacement(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_gpuRequestRandoms(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_handle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_job(::JBooth::MicroVerseCore::UnpackTreeInstanceJob  value) ;

constexpr void __cordl_internal_set_placementData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value) ;

constexpr void __cordl_internal_set_randomData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value) ;

constexpr void __cordl_internal_set_randomResults(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_treeIndexes(::Unity::Collections::NativeArray_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canceled, addr 0x180352b10, size 0x10, virtual false, abstract: false, final false
inline bool get_canceled() ;

/// @brief Method set_canceled, addr 0x180352c30, size 0x10, virtual false, abstract: false, final false
inline void set_canceled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreeJobHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreeJobHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeJobHolder(TreeJobHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeJobHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeJobHolder(TreeJobHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17986};

/// @brief Field job, offset: 0x10, size: 0x50, def value: None
 ::JBooth::MicroVerseCore::UnpackTreeInstanceJob  ___job;

/// @brief Field handle, offset: 0x60, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___handle;

/// @brief Field placementData, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  ___placementData;

/// @brief Field randomData, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  ___randomData;

/// @brief Field filteredInstances, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___filteredInstances;

/// @brief Field randomResults, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___randomResults;

/// @brief Field gpuRequestPlacement, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___gpuRequestPlacement;

/// @brief Field gpuRequestRandoms, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___gpuRequestRandoms;

/// @brief Field treeIndexes, offset: 0xc0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___treeIndexes;

/// @brief Field <canceled>k__BackingField, offset: 0xd0, size: 0x1, def value: None
 bool  ____canceled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___job) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___handle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___placementData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___randomData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___filteredInstances) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___randomResults) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___gpuRequestPlacement) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___gpuRequestRandoms) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ___treeIndexes) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeJobHolder, ____canceled_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::TreeJobHolder) == 0xd8, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
