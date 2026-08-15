#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperCompute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryBase)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
template<typename T>
class IQueryableLod_1;
}
namespace WaveHarmonic::Crest {
class IQueryable;
}
namespace WaveHarmonic::Crest {
struct QueryBase_QueryStatus;
}
namespace WaveHarmonic::Crest {
struct QueryBase_ReadbackRequest;
}
namespace WaveHarmonic::Crest {
class QueryBase_SegmentRegistrarRingBuffer;
}
namespace WaveHarmonic::Crest {
class QueryBase_SegmentRegistrar;
}
namespace WaveHarmonic::Crest {
class QueryBase_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct QueryBase_QueryStatus;
}
namespace WaveHarmonic::Crest {
class QueryBase;
}
namespace WaveHarmonic::Crest {
class QueryBase_SegmentRegistrar;
}
namespace WaveHarmonic::Crest {
class QueryBase_SegmentRegistrarRingBuffer;
}
namespace WaveHarmonic::Crest {
class QueryBase_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct QueryBase_ReadbackRequest;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::QueryBase_QueryStatus);
MARK_REF_T(::WaveHarmonic::Crest::QueryBase*);
MARK_REF_T(::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*);
MARK_REF_T(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*);
MARK_REF_T(::WaveHarmonic::Crest::QueryBase_ShaderIDs*);
MARK_VAL_T(::WaveHarmonic::Crest::QueryBase_ReadbackRequest);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryBase_QueryStatus, "WaveHarmonic.Crest", "QueryBase/QueryStatus");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryBase*, "WaveHarmonic.Crest", "QueryBase");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*, "WaveHarmonic.Crest", "QueryBase/SegmentRegistrar");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*, "WaveHarmonic.Crest", "QueryBase/SegmentRegistrarRingBuffer");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryBase_ShaderIDs*, "WaveHarmonic.Crest", "QueryBase/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryBase_ReadbackRequest, "WaveHarmonic.Crest", "QueryBase/ReadbackRequest");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryBase/ShaderIDs
class CORDL_TYPE QueryBase_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_QueryPositions_MinimumGridSizes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_QueryPositions_MinimumGridSizes, put=setStaticF_s_QueryPositions_MinimumGridSizes)) int32_t  s_QueryPositions_MinimumGridSizes;

static inline int32_t getStaticF_s_QueryPositions_MinimumGridSizes() ;

static inline void setStaticF_s_QueryPositions_MinimumGridSizes(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryBase_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryBase_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryBase_ShaderIDs(QueryBase_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryBase_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryBase_ShaderIDs(QueryBase_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::QueryBase_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryBase/SegmentRegistrar
class CORDL_TYPE QueryBase_SegmentRegistrar : public ::System::Object {
public:
// Declarations
/// @brief Field _QueryCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__QueryCount, put=__cordl_internal_set__QueryCount)) int32_t  _QueryCount;

/// @brief Field _Segments, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Segments, put=__cordl_internal_set__Segments)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  _Segments;

static inline ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__QueryCount() const;

constexpr int32_t& __cordl_internal_get__QueryCount() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>* const& __cordl_internal_get__Segments() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*& __cordl_internal_get__Segments() ;

constexpr void __cordl_internal_set__QueryCount(int32_t  value) ;

constexpr void __cordl_internal_set__Segments(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  value) ;

/// @brief Method .ctor, addr 0x18257ea40, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryBase_SegmentRegistrar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryBase_SegmentRegistrar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryBase_SegmentRegistrar(QueryBase_SegmentRegistrar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryBase_SegmentRegistrar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryBase_SegmentRegistrar(QueryBase_SegmentRegistrar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16611};

/// @brief Field _Segments, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  ____Segments;

/// @brief Field _QueryCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____QueryCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_SegmentRegistrar, ____Segments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_SegmentRegistrar, ____QueryCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::QueryBase_SegmentRegistrar) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, WaveHarmonic.Crest.QueryBase::SegmentRegistrar
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryBase/SegmentRegistrarRingBuffer
class CORDL_TYPE QueryBase_SegmentRegistrarRingBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*  Current;

/// @brief Field _SegmentAcquire, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SegmentAcquire, put=__cordl_internal_set__SegmentAcquire)) int32_t  _SegmentAcquire;

/// @brief Field _SegmentRelease, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__SegmentRelease, put=__cordl_internal_set__SegmentRelease)) int32_t  _SegmentRelease;

/// @brief Field _Segments, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Segments, put=__cordl_internal_set__Segments)) ::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>  _Segments;

/// @brief Field s_PoolSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PoolSize, put=setStaticF_s_PoolSize)) int32_t  s_PoolSize;

/// @brief Method AcquireNew, addr 0x18257e550, size 0x1c0, virtual false, abstract: false, final false
inline void AcquireNew() ;

/// @brief Method ClearAll, addr 0x18257e710, size 0xa0, virtual false, abstract: false, final false
inline void ClearAll() ;

/// @brief Method ClearAvailable, addr 0x18257e7b0, size 0x90, virtual false, abstract: false, final false
inline void ClearAvailable() ;

static inline ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer* New_ctor() ;

/// @brief Method ReleaseLast, addr 0x18110fa30, size 0x940, virtual false, abstract: false, final false
inline void ReleaseLast() ;

/// @brief Method RemoveRegistrations, addr 0x18257e840, size 0xb0, virtual false, abstract: false, final false
inline void RemoveRegistrations(int32_t  key) ;

constexpr int32_t const& __cordl_internal_get__SegmentAcquire() const;

constexpr int32_t& __cordl_internal_get__SegmentAcquire() ;

constexpr int32_t const& __cordl_internal_get__SegmentRelease() const;

constexpr int32_t& __cordl_internal_get__SegmentRelease() ;

constexpr ::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*> const& __cordl_internal_get__Segments() const;

constexpr ::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>& __cordl_internal_get__Segments() ;

constexpr void __cordl_internal_set__SegmentAcquire(int32_t  value) ;

constexpr void __cordl_internal_set__SegmentRelease(int32_t  value) ;

constexpr void __cordl_internal_set__Segments(::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>  value) ;

/// @brief Method .ctor, addr 0x18257e920, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_PoolSize() ;

/// @brief Method get_Current, addr 0x18257ea10, size 0x30, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar* get_Current() ;

static inline void setStaticF_s_PoolSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryBase_SegmentRegistrarRingBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryBase_SegmentRegistrarRingBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryBase_SegmentRegistrarRingBuffer(QueryBase_SegmentRegistrarRingBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryBase_SegmentRegistrarRingBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryBase_SegmentRegistrarRingBuffer(QueryBase_SegmentRegistrarRingBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16612};

/// @brief Field _Segments, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>  ____Segments;

/// @brief Field _SegmentRelease, offset: 0x18, size: 0x4, def value: None
 int32_t  ____SegmentRelease;

/// @brief Field _SegmentAcquire, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____SegmentAcquire;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer, ____Segments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer, ____SegmentRelease) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer, ____SegmentAcquire) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.AsyncGPUReadbackRequest
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.QueryBase/ReadbackRequest
struct CORDL_TYPE QueryBase_ReadbackRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr QueryBase_ReadbackRequest() ;

// Ctor Parameters [CppParam { name: "_Request", ty: "::UnityEngine::Rendering::AsyncGPUReadbackRequest", modifiers: "", def_value: None }, CppParam { name: "_DataTimestamp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Segments", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*", modifiers: "", def_value: None }]
constexpr QueryBase_ReadbackRequest(::UnityEngine::Rendering::AsyncGPUReadbackRequest  _Request, float_t  _DataTimestamp, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  _Segments) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16613};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _Request, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  _Request;

/// @brief Field _DataTimestamp, offset: 0x10, size: 0x4, def value: None
 float_t  _DataTimestamp;

/// @brief Field _Segments, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  _Segments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_ReadbackRequest, _Request) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_ReadbackRequest, _DataTimestamp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_ReadbackRequest, _Segments) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::QueryBase_ReadbackRequest) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.QueryBase/QueryStatus
struct CORDL_TYPE QueryBase_QueryStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __QueryBase_QueryStatus_Unwrapped
enum struct __QueryBase_QueryStatus_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_RetrieveFailed = static_cast<int32_t>(0x1),
__E_PostFailed = static_cast<int32_t>(0x2),
__E_NotEnoughDataForVels = static_cast<int32_t>(0x4),
__E_VelocityDataInvalidated = static_cast<int32_t>(0x8),
__E_InvalidDtForVelocity = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __QueryBase_QueryStatus_Unwrapped () const noexcept {
return static_cast<__QueryBase_QueryStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr QueryBase_QueryStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QueryBase_QueryStatus(int32_t  value__) noexcept;

/// @brief Field InvalidDtForVelocity value: I32(16)
static ::WaveHarmonic::Crest::QueryBase_QueryStatus const InvalidDtForVelocity;

/// @brief Field NotEnoughDataForVels value: I32(4)
static ::WaveHarmonic::Crest::QueryBase_QueryStatus const NotEnoughDataForVels;

/// @brief Field OK value: I32(0)
static ::WaveHarmonic::Crest::QueryBase_QueryStatus const OK;

/// @brief Field PostFailed value: I32(2)
static ::WaveHarmonic::Crest::QueryBase_QueryStatus const PostFailed;

/// @brief Field RetrieveFailed value: I32(1)
static ::WaveHarmonic::Crest::QueryBase_QueryStatus const RetrieveFailed;

/// @brief Field VelocityDataInvalidated value: I32(8)
static ::WaveHarmonic::Crest::QueryBase_QueryStatus const VelocityDataInvalidated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::QueryBase_QueryStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::QueryBase_QueryStatus) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3, WaveHarmonic.Crest.PropertyWrapperCompute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryBase
class CORDL_TYPE QueryBase : public ::System::Object {
public:
// Declarations
using QueryStatus = ::WaveHarmonic::Crest::QueryBase_QueryStatus;

using ReadbackRequest = ::WaveHarmonic::Crest::QueryBase_ReadbackRequest;

using SegmentRegistrar = ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar;

using SegmentRegistrarRingBuffer = ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer;

using ShaderIDs = ::WaveHarmonic::Crest::QueryBase_ShaderIDs;

 __declspec(property(get=get_Kernel)) int32_t  Kernel;

 __declspec(property(get=get_QueryCount)) int32_t  QueryCount;

 __declspec(property(get=get_RequestCount)) int32_t  RequestCount;

 __declspec(property(get=get_ResultGuidCount)) int32_t  ResultGuidCount;

/// @brief Field _ComputeBufferQueries, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ComputeBufferQueries, put=__cordl_internal_set__ComputeBufferQueries)) ::UnityEngine::ComputeBuffer*  _ComputeBufferQueries;

/// @brief Field _ComputeBufferResults, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ComputeBufferResults, put=__cordl_internal_set__ComputeBufferResults)) ::UnityEngine::ComputeBuffer*  _ComputeBufferResults;

/// @brief Field _DataArrivedAction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__DataArrivedAction, put=__cordl_internal_set__DataArrivedAction)) ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  _DataArrivedAction;

/// @brief Field _Lod, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Lod, put=__cordl_internal_set__Lod)) ::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  _Lod;

/// @brief Field _MaximumQueryCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumQueryCount, put=__cordl_internal_set__MaximumQueryCount)) int32_t  _MaximumQueryCount;

/// @brief Field _QueryPositionXZ_MinimumGridSize, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryPositionXZ_MinimumGridSize, put=__cordl_internal_set__QueryPositionXZ_MinimumGridSize)) ::ArrayW<::UnityEngine::Vector3>  _QueryPositionXZ_MinimumGridSize;

/// @brief Field _QueryResults, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__QueryResults, put=__cordl_internal_set__QueryResults)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  _QueryResults;

/// @brief Field _QueryResultsLast, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__QueryResultsLast, put=__cordl_internal_set__QueryResultsLast)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  _QueryResultsLast;

/// @brief Field _QueryResultsTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__QueryResultsTime, put=__cordl_internal_set__QueryResultsTime)) float_t  _QueryResultsTime;

/// @brief Field _QueryResultsTimeLast, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__QueryResultsTimeLast, put=__cordl_internal_set__QueryResultsTimeLast)) float_t  _QueryResultsTimeLast;

/// @brief Field _Requests, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Requests, put=__cordl_internal_set__Requests)) ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>*  _Requests;

/// @brief Field _ResultSegments, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResultSegments, put=__cordl_internal_set__ResultSegments)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  _ResultSegments;

/// @brief Field _ResultSegmentsLast, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResultSegmentsLast, put=__cordl_internal_set__ResultSegmentsLast)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  _ResultSegmentsLast;

/// @brief Field _SegmentRegistrarRingBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__SegmentRegistrarRingBuffer, put=__cordl_internal_set__SegmentRegistrarRingBuffer)) ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*  _SegmentRegistrarRingBuffer;

/// @brief Field _Water, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field _Wrapper, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get__Wrapper, put=__cordl_internal_set__Wrapper)) ::WaveHarmonic::Crest::PropertyWrapperCompute  _Wrapper;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr operator  ::WaveHarmonic::Crest::IQueryable*() noexcept;

/// @brief Method CalculateVelocities, addr 0x182579c30, size 0x1f0, virtual false, abstract: false, final false
inline int32_t CalculateVelocities(int32_t  ownerHash, ::ArrayW<::UnityEngine::Vector3>  results) ;

/// @brief Method CleanUp, addr 0x182579e20, size 0x100, virtual true, abstract: false, final true
inline void CleanUp() ;

/// @brief Method CompactQueryStorage, addr 0x182579f20, size 0x90, virtual false, abstract: false, final false
inline void CompactQueryStorage() ;

/// @brief Method DataArrived, addr 0x182579fb0, size 0x2c0, virtual false, abstract: false, final false
inline void DataArrived(::UnityEngine::Rendering::AsyncGPUReadbackRequest  req) ;

/// @brief Method ExecuteQueries, addr 0x18257a270, size 0x100, virtual false, abstract: false, final false
inline void ExecuteQueries() ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Initialize(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method LogMaximumQueryCountExceededError, addr 0x18257a370, size 0x150, virtual false, abstract: false, final false
inline void LogMaximumQueryCountExceededError() ;

static inline ::WaveHarmonic::Crest::QueryBase* New_ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod) ;

/// @brief Method RemoveQueryPoints, addr 0x18257a4c0, size 0xb0, virtual false, abstract: false, final false
inline void RemoveQueryPoints(int32_t  guid) ;

/// @brief Method RetrieveResults, addr 0x18257a570, size 0x3c0, virtual false, abstract: false, final false
inline bool RetrieveResults(int32_t  guid, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals) ;

/// @brief Method SendReadBack, addr 0x18257a930, size 0x3f0, virtual true, abstract: false, final true
inline void SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method UpdateQueries, addr 0x18257ad20, size 0x120, virtual true, abstract: false, final true
inline void UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method UpdateQueryPoints, addr 0x18257ae40, size 0x470, virtual false, abstract: false, final false
inline bool UpdateQueryPoints(int32_t  ownerHash, float_t  minSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<::UnityEngine::Vector3>  queryNormals) ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__ComputeBufferQueries() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__ComputeBufferQueries() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__ComputeBufferResults() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__ComputeBufferResults() ;

constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const& __cordl_internal_get__DataArrivedAction() const;

constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& __cordl_internal_get__DataArrivedAction() ;

constexpr ::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>* const& __cordl_internal_get__Lod() const;

constexpr ::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*& __cordl_internal_get__Lod() ;

constexpr int32_t const& __cordl_internal_get__MaximumQueryCount() const;

constexpr int32_t& __cordl_internal_get__MaximumQueryCount() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryPositionXZ_MinimumGridSize() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryPositionXZ_MinimumGridSize() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResults() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get__QueryResults() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResultsLast() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get__QueryResultsLast() ;

constexpr float_t const& __cordl_internal_get__QueryResultsTime() const;

constexpr float_t& __cordl_internal_get__QueryResultsTime() ;

constexpr float_t const& __cordl_internal_get__QueryResultsTimeLast() const;

constexpr float_t& __cordl_internal_get__QueryResultsTimeLast() ;

constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>* const& __cordl_internal_get__Requests() const;

constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>*& __cordl_internal_get__Requests() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>* const& __cordl_internal_get__ResultSegments() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*& __cordl_internal_get__ResultSegments() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>* const& __cordl_internal_get__ResultSegmentsLast() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*& __cordl_internal_get__ResultSegmentsLast() ;

constexpr ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer* const& __cordl_internal_get__SegmentRegistrarRingBuffer() const;

constexpr ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*& __cordl_internal_get__SegmentRegistrarRingBuffer() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr ::WaveHarmonic::Crest::PropertyWrapperCompute const& __cordl_internal_get__Wrapper() const;

constexpr ::WaveHarmonic::Crest::PropertyWrapperCompute& __cordl_internal_get__Wrapper() ;

constexpr void __cordl_internal_set__ComputeBufferQueries(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set__ComputeBufferResults(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set__DataArrivedAction(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  value) ;

constexpr void __cordl_internal_set__Lod(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  value) ;

constexpr void __cordl_internal_set__MaximumQueryCount(int32_t  value) ;

constexpr void __cordl_internal_set__QueryPositionXZ_MinimumGridSize(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResults(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResultsLast(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResultsTime(float_t  value) ;

constexpr void __cordl_internal_set__QueryResultsTimeLast(float_t  value) ;

constexpr void __cordl_internal_set__Requests(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>*  value) ;

constexpr void __cordl_internal_set__ResultSegments(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  value) ;

constexpr void __cordl_internal_set__ResultSegmentsLast(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  value) ;

constexpr void __cordl_internal_set__SegmentRegistrarRingBuffer(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

constexpr void __cordl_internal_set__Wrapper(::WaveHarmonic::Crest::PropertyWrapperCompute  value) ;

/// @brief Method .ctor, addr 0x18257b2b0, size 0x480, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod) ;

/// @brief Method get_Kernel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Kernel() ;

/// @brief Method get_QueryCount, addr 0x18257b730, size 0x40, virtual true, abstract: false, final true
inline int32_t get_QueryCount() ;

/// @brief Method get_RequestCount, addr 0x18257b770, size 0x20, virtual true, abstract: false, final true
inline int32_t get_RequestCount() ;

/// @brief Method get_ResultGuidCount, addr 0x18257b790, size 0x20, virtual true, abstract: false, final true
inline int32_t get_ResultGuidCount() ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* i___WaveHarmonic__Crest__IQueryable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryBase(QueryBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryBase(QueryBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16615};

/// @brief Field k_ComputeGroupSize offset 0xffffffff size 0x4
static constexpr int32_t  k_ComputeGroupSize{static_cast<int32_t>(0x40)};

/// @brief Field k_DefaultMaximumQueryCount offset 0xffffffff size 0x4
static constexpr int32_t  k_DefaultMaximumQueryCount{static_cast<int32_t>(0x1000)};

/// @brief Field k_FiniteDifferenceDx offset 0xffffffff size 0x4
static constexpr float_t  k_FiniteDifferenceDx{static_cast<float_t>(0.1f)};

/// @brief Field k_MaximumGuids offset 0xffffffff size 0x4
static constexpr int32_t  k_MaximumGuids{static_cast<int32_t>(0x400)};

/// @brief Field k_MaximumRequests offset 0xffffffff size 0x4
static constexpr int32_t  k_MaximumRequests{static_cast<int32_t>(0x7)};

/// @brief Field k_NormalAdditionalQueryCount offset 0xffffffff size 0x4
static constexpr int32_t  k_NormalAdditionalQueryCount{static_cast<int32_t>(0x2)};

/// @brief Field _Water, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _Lod, offset: 0x18, size: 0x8, def value: None
 ::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  ____Lod;

/// @brief Field _Wrapper, offset: 0x20, size: 0x18, def value: None
 ::WaveHarmonic::Crest::PropertyWrapperCompute  ____Wrapper;

/// @brief Field _DataArrivedAction, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  ____DataArrivedAction;

/// @brief Field _ComputeBufferQueries, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ____ComputeBufferQueries;

/// @brief Field _ComputeBufferResults, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ____ComputeBufferResults;

/// @brief Field _MaximumQueryCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ____MaximumQueryCount;

/// @brief Field _QueryPositionXZ_MinimumGridSize, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryPositionXZ_MinimumGridSize;

/// @brief Field _SegmentRegistrarRingBuffer, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*  ____SegmentRegistrarRingBuffer;

/// @brief Field _QueryResults, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ____QueryResults;

/// @brief Field _QueryResultsTime, offset: 0x78, size: 0x4, def value: None
 float_t  ____QueryResultsTime;

/// @brief Field _ResultSegments, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  ____ResultSegments;

/// @brief Field _QueryResultsLast, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ____QueryResultsLast;

/// @brief Field _QueryResultsTimeLast, offset: 0x98, size: 0x4, def value: None
 float_t  ____QueryResultsTimeLast;

/// @brief Field _ResultSegmentsLast, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  ____ResultSegmentsLast;

/// @brief Field _Requests, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>*  ____Requests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____Water) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____Lod) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____Wrapper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____DataArrivedAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____ComputeBufferQueries) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____ComputeBufferResults) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____MaximumQueryCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____QueryPositionXZ_MinimumGridSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____SegmentRegistrarRingBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____QueryResults) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____QueryResultsTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____ResultSegments) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____QueryResultsLast) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____QueryResultsTimeLast) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____ResultSegmentsLast) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::QueryBase, ____Requests) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::QueryBase) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
