#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastCommand_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOcclusionManager)
namespace GlobalNamespace {
class AudioOcclusionBasic;
}
namespace GlobalNamespace {
struct AudioOcclusionManager_ComplexRequest;
}
namespace GlobalNamespace {
struct AudioOcclusionManager_Request;
}
namespace GlobalNamespace {
struct AudioOcclusion_RaycastRequest;
}
namespace GlobalNamespace {
class AudioOcclusion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioOcclusionManager;
}
namespace GlobalNamespace {
struct AudioOcclusionManager_ComplexRequest;
}
namespace GlobalNamespace {
struct AudioOcclusionManager_Request;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioOcclusionManager*);
MARK_VAL_T(::GlobalNamespace::AudioOcclusionManager_ComplexRequest);
MARK_VAL_T(::GlobalNamespace::AudioOcclusionManager_Request);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusionManager*, "", "AudioOcclusionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusionManager_ComplexRequest, "", "AudioOcclusionManager/ComplexRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusionManager_Request, "", "AudioOcclusionManager/Request");
// Dependencies UnityEngine.LayerMask, UnityEngine.Ray
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioOcclusionManager/Request
struct CORDL_TYPE AudioOcclusionManager_Request {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusionManager_Request() ;

// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::GlobalNamespace::AudioOcclusionBasic>", modifiers: "", def_value: None }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }]
constexpr AudioOcclusionManager_Request(::UnityW<::GlobalNamespace::AudioOcclusionBasic>  source, ::UnityEngine::Ray  ray, ::UnityEngine::LayerMask  layer, float_t  distance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17538};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field source, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionBasic>  source;

/// @brief Field ray, offset: 0x8, size: 0x18, def value: None
 ::UnityEngine::Ray  ray;

/// @brief Field layer, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  layer;

/// @brief Field distance, offset: 0x24, size: 0x4, def value: None
 float_t  distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager_Request, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager_Request, ray) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager_Request, layer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager_Request, distance) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusionManager_Request) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioOcclusionManager/ComplexRequest
struct CORDL_TYPE AudioOcclusionManager_ComplexRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusionManager_ComplexRequest() ;

// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::GlobalNamespace::AudioOcclusion>", modifiers: "", def_value: None }, CppParam { name: "raycastOffset", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioOcclusionManager_ComplexRequest(::UnityW<::GlobalNamespace::AudioOcclusion>  source, int32_t  raycastOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17539};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field source, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusion>  source;

/// @brief Field raycastOffset, offset: 0x8, size: 0x4, def value: None
 int32_t  raycastOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager_ComplexRequest, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager_ComplexRequest, raycastOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusionManager_ComplexRequest) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.MonoBehaviour, UnityEngine.RaycastCommand, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioOcclusionManager
class CORDL_TYPE AudioOcclusionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ComplexRequest = ::GlobalNamespace::AudioOcclusionManager_ComplexRequest;

using Request = ::GlobalNamespace::AudioOcclusionManager_Request;

/// @brief Field _complexRaycastCommands, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__complexRaycastCommands, put=__cordl_internal_set__complexRaycastCommands)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  _complexRaycastCommands;

/// @brief Field _complexRaycastHits, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__complexRaycastHits, put=__cordl_internal_set__complexRaycastHits)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  _complexRaycastHits;

/// @brief Field _complexRaycastJobHandle, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__complexRaycastJobHandle, put=__cordl_internal_set__complexRaycastJobHandle)) ::Unity::Jobs::JobHandle  _complexRaycastJobHandle;

/// @brief Field _complexRequests, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__complexRequests, put=__cordl_internal_set__complexRequests)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>*  _complexRequests;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::AudioOcclusionManager>  _instance;

/// @brief Field _isComplexJobScheduled, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__isComplexJobScheduled, put=__cordl_internal_set__isComplexJobScheduled)) bool  _isComplexJobScheduled;

/// @brief Field _isJobScheduled, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isJobScheduled, put=__cordl_internal_set__isJobScheduled)) bool  _isJobScheduled;

/// @brief Field _raycastCommands, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastCommands, put=__cordl_internal_set__raycastCommands)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  _raycastCommands;

/// @brief Field _raycastHits, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastHits, put=__cordl_internal_set__raycastHits)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  _raycastHits;

/// @brief Field _raycastJobHandle, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastJobHandle, put=__cordl_internal_set__raycastJobHandle)) ::Unity::Jobs::JobHandle  _raycastJobHandle;

/// @brief Field _requests, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__requests, put=__cordl_internal_set__requests)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>*  _requests;

/// @brief Field _totalComplexRaycastCount, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalComplexRaycastCount, put=__cordl_internal_set__totalComplexRaycastCount)) int32_t  _totalComplexRaycastCount;

/// @brief Method Awake, addr 0x180484340, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CompleteJobs, addr 0x180484470, size 0x60, virtual false, abstract: false, final false
inline void CompleteJobs() ;

/// @brief Method GetCount, addr 0x1804844d0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetCount() ;

static inline ::GlobalNamespace::AudioOcclusionManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180484500, size 0xe0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ProcessComplexRaycastResults, addr 0x1804845e0, size 0x1d0, virtual false, abstract: false, final false
inline void ProcessComplexRaycastResults() ;

/// @brief Method ProcessRaycastResults, addr 0x1804847b0, size 0x270, virtual false, abstract: false, final false
inline void ProcessRaycastResults() ;

/// @brief Method ScheduleComplexRaycastJob, addr 0x180484a20, size 0xd0, virtual false, abstract: false, final false
inline void ScheduleComplexRaycastJob() ;

/// @brief Method ScheduleComplexRaycasts, addr 0x180484dd0, size 0x50, virtual false, abstract: false, final false
static inline void ScheduleComplexRaycasts(::GlobalNamespace::AudioOcclusion*  source, ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  requests, ::UnityEngine::LayerMask  layer) ;

/// @brief Method ScheduleComplexRaycastsInternal, addr 0x180484af0, size 0x2e0, virtual false, abstract: false, final false
inline void ScheduleComplexRaycastsInternal(::GlobalNamespace::AudioOcclusion*  source, ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  requests, ::UnityEngine::LayerMask  layer) ;

/// @brief Method ScheduleRaycast, addr 0x180484f50, size 0x160, virtual false, abstract: false, final false
static inline void ScheduleRaycast(::GlobalNamespace::AudioOcclusionBasic*  source, ::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::LayerMask  layer) ;

/// @brief Method ScheduleRaycastInternal, addr 0x180484e20, size 0x130, virtual false, abstract: false, final false
inline void ScheduleRaycastInternal(::GlobalNamespace::AudioOcclusionBasic*  source, ::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::LayerMask  layer) ;

/// @brief Method ScheduleRaycasts, addr 0x1804850b0, size 0x280, virtual false, abstract: false, final false
inline void ScheduleRaycasts() ;

/// @brief Method Update, addr 0x180485330, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& __cordl_internal_get__complexRaycastCommands() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& __cordl_internal_get__complexRaycastCommands() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get__complexRaycastHits() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get__complexRaycastHits() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__complexRaycastJobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__complexRaycastJobHandle() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>* const& __cordl_internal_get__complexRequests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>*& __cordl_internal_get__complexRequests() ;

constexpr bool const& __cordl_internal_get__isComplexJobScheduled() const;

constexpr bool& __cordl_internal_get__isComplexJobScheduled() ;

constexpr bool const& __cordl_internal_get__isJobScheduled() const;

constexpr bool& __cordl_internal_get__isJobScheduled() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& __cordl_internal_get__raycastCommands() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& __cordl_internal_get__raycastCommands() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get__raycastHits() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get__raycastHits() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__raycastJobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__raycastJobHandle() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>* const& __cordl_internal_get__requests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>*& __cordl_internal_get__requests() ;

constexpr int32_t const& __cordl_internal_get__totalComplexRaycastCount() const;

constexpr int32_t& __cordl_internal_get__totalComplexRaycastCount() ;

constexpr void __cordl_internal_set__complexRaycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value) ;

constexpr void __cordl_internal_set__complexRaycastHits(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__complexRaycastJobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__complexRequests(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>*  value) ;

constexpr void __cordl_internal_set__isComplexJobScheduled(bool  value) ;

constexpr void __cordl_internal_set__isJobScheduled(bool  value) ;

constexpr void __cordl_internal_set__raycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value) ;

constexpr void __cordl_internal_set__raycastHits(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__raycastJobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__requests(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>*  value) ;

constexpr void __cordl_internal_set__totalComplexRaycastCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x180485410, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::AudioOcclusionManager> getStaticF__instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::AudioOcclusionManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOcclusionManager(AudioOcclusionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOcclusionManager(AudioOcclusionManager const& ) = delete;

/// @brief Field MaxComplexRaycasts offset 0xffffffff size 0x4
static constexpr int32_t  MaxComplexRaycasts{static_cast<int32_t>(0x100)};

/// @brief Field MaxRaycasts offset 0xffffffff size 0x4
static constexpr int32_t  MaxRaycasts{static_cast<int32_t>(0x40)};

/// @brief Field MinCommandsPerJob offset 0xffffffff size 0x4
static constexpr int32_t  MinCommandsPerJob{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17540};

/// @brief Field _requests, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>*  ____requests;

/// @brief Field _raycastCommands, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  ____raycastCommands;

/// @brief Field _raycastHits, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  ____raycastHits;

/// @brief Field _raycastJobHandle, offset: 0x48, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____raycastJobHandle;

/// @brief Field _isJobScheduled, offset: 0x58, size: 0x1, def value: None
 bool  ____isJobScheduled;

/// @brief Field _complexRequests, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>*  ____complexRequests;

/// @brief Field _complexRaycastCommands, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  ____complexRaycastCommands;

/// @brief Field _complexRaycastHits, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  ____complexRaycastHits;

/// @brief Field _complexRaycastJobHandle, offset: 0x88, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____complexRaycastJobHandle;

/// @brief Field _isComplexJobScheduled, offset: 0x98, size: 0x1, def value: None
 bool  ____isComplexJobScheduled;

/// @brief Field _totalComplexRaycastCount, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____totalComplexRaycastCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____requests) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____raycastCommands) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____raycastHits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____raycastJobHandle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____isJobScheduled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____complexRequests) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____complexRaycastCommands) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____complexRaycastHits) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____complexRaycastJobHandle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____isComplexJobScheduled) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionManager, ____totalComplexRaycastCount) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusionManager) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
