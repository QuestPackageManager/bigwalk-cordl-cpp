#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDataBurstInterop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainDataBurstInterop)
namespace MA::Flora {
class TerrainDataBurstInterop___InteropDelegates;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct DetailInstanceTransform;
}
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::Flora {
class TerrainDataBurstInterop;
}
namespace MA::Flora {
class TerrainDataBurstInterop___InteropDelegates;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate;
}
namespace MA::Flora {
class __InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate;
}
// Write type traits
MARK_REF_T(::MA::Flora::TerrainDataBurstInterop*);
MARK_REF_T(::MA::Flora::TerrainDataBurstInterop___InteropDelegates*);
MARK_REF_T(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*);
MARK_REF_T(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*);
MARK_REF_T(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*);
MARK_REF_T(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDataBurstInterop*, "MA.Flora", "TerrainDataBurstInterop");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDataBurstInterop___InteropDelegates*, "MA.Flora", "TerrainDataBurstInterop/__InteropDelegates");
DEFINE_IL2CPP_CLASS(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*, "MA.Flora", "TerrainDataBurstInterop/__InteropDelegates/_ComputeDetailInstanceTransforms_2_Delegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*, "MA.Flora", "TerrainDataBurstInterop/__InteropDelegates/_GetInterpolatedNormal_3_Delegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*, "MA.Flora", "TerrainDataBurstInterop/__InteropDelegates/_GetTreeInstances_0_Delegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*, "MA.Flora", "TerrainDataBurstInterop/__InteropDelegates/_SetTreeInstances_1_Delegate");
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDataBurstInterop/__InteropDelegates/_GetTreeInstances_0_Delegate
class CORDL_TYPE __InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181509bd0, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181509c50, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::by_ref<::Unity::Collections::Allocator>  allocator, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator) ;

static inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1814e3a20, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate(__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate(__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDataBurstInterop/__InteropDelegates/_SetTreeInstances_1_Delegate
class CORDL_TYPE __InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181509c70, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181509d00, size 0xa0, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap) ;

static inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181509da0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate(__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate(__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDataBurstInterop/__InteropDelegates/_ComputeDetailInstanceTransforms_2_Delegate
class CORDL_TYPE __InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1815095f0, size 0x120, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181509710, size 0x1a0, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x18130a7c0, size 0x10a0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

static inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1815098b0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate(__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate(__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13368};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDataBurstInterop/__InteropDelegates/_GetInterpolatedNormal_3_Delegate
class CORDL_TYPE __InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181509970, size 0xa0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x181509a10, size 0x100, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y) ;

static inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181509b10, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate(__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate(__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDataBurstInterop/__InteropDelegates
class CORDL_TYPE TerrainDataBurstInterop___InteropDelegates : public ::System::Object {
public:
// Declarations
using _ComputeDetailInstanceTransforms_2_Delegate = ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate;

using _GetInterpolatedNormal_3_Delegate = ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate;

using _GetTreeInstances_0_Delegate = ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate;

using _SetTreeInstances_1_Delegate = ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataBurstInterop___InteropDelegates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataBurstInterop___InteropDelegates", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataBurstInterop___InteropDelegates(TerrainDataBurstInterop___InteropDelegates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataBurstInterop___InteropDelegates", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataBurstInterop___InteropDelegates(TerrainDataBurstInterop___InteropDelegates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TerrainDataBurstInterop___InteropDelegates) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object, Unity.Burst.SharedStatic`1<T>
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDataBurstInterop
class CORDL_TYPE TerrainDataBurstInterop : public ::System::Object {
public:
// Declarations
using __InteropDelegates = ::MA::Flora::TerrainDataBurstInterop___InteropDelegates;

/// @brief Field _ComputeDetailInstanceTransforms_2_BurstFP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ComputeDetailInstanceTransforms_2_BurstFP, put=setStaticF__ComputeDetailInstanceTransforms_2_BurstFP)) ::Unity::Burst::SharedStatic_1<uint64_t>  _ComputeDetailInstanceTransforms_2_BurstFP;

/// @brief Field _GetInterpolatedNormal_3_BurstFP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__GetInterpolatedNormal_3_BurstFP, put=setStaticF__GetInterpolatedNormal_3_BurstFP)) ::Unity::Burst::SharedStatic_1<uint64_t>  _GetInterpolatedNormal_3_BurstFP;

/// @brief Field _GetTreeInstances_0_BurstFP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__GetTreeInstances_0_BurstFP, put=setStaticF__GetTreeInstances_0_BurstFP)) ::Unity::Burst::SharedStatic_1<uint64_t>  _GetTreeInstances_0_BurstFP;

/// @brief Field _SetTreeInstances_1_BurstFP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__SetTreeInstances_1_BurstFP, put=setStaticF__SetTreeInstances_1_BurstFP)) ::Unity::Burst::SharedStatic_1<uint64_t>  _SetTreeInstances_1_BurstFP;

/// @brief Method ComputeDetailInstanceTransforms, addr 0x181502490, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> ComputeDetailInstanceTransforms(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method GetInterpolatedNormal, addr 0x181502550, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetInterpolatedNormal(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y) ;

/// @brief Method GetTreeInstances, addr 0x1815025e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> GetTreeInstances(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator) ;

/// @brief Method SetTreeInstances, addr 0x181502650, size 0x60, virtual false, abstract: false, final false
static inline void SetTreeInstances(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap) ;

/// @brief Method _ComputeDetailInstanceTransforms, addr 0x181502770, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> _ComputeDetailInstanceTransforms(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method _ComputeDetailInstanceTransforms_2_ForwardFromBurst, addr 0x1815026b0, size 0xc0, virtual false, abstract: false, final false
static inline void _ComputeDetailInstanceTransforms_2_ForwardFromBurst(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method _ComputeDetailInstanceTransforms_2_ForwardFromManaged, addr 0x1815026b0, size 0xc0, virtual false, abstract: false, final false
static inline void _ComputeDetailInstanceTransforms_2_ForwardFromManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method _EarlyInitInterop, addr 0x181502810, size 0x50, virtual false, abstract: false, final false
static inline void _EarlyInitInterop() ;

/// @brief Method _GetInterpolatedNormal, addr 0x1815028e0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 _GetInterpolatedNormal(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y) ;

/// @brief Method _GetInterpolatedNormal_3_ForwardFromBurst, addr 0x181502860, size 0x80, virtual false, abstract: false, final false
static inline void _GetInterpolatedNormal_3_ForwardFromBurst(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y) ;

/// @brief Method _GetInterpolatedNormal_3_ForwardFromManaged, addr 0x181502860, size 0x80, virtual false, abstract: false, final false
static inline void _GetInterpolatedNormal_3_ForwardFromManaged(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y) ;

/// @brief Method _GetTreeInstances, addr 0x1815029b0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> _GetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method _GetTreeInstances_0_ForwardFromBurst, addr 0x181502950, size 0x60, virtual false, abstract: false, final false
static inline void _GetTreeInstances_0_ForwardFromBurst(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator) ;

/// @brief Method _GetTreeInstances_0_ForwardFromManaged, addr 0x181502950, size 0x60, virtual false, abstract: false, final false
static inline void _GetTreeInstances_0_ForwardFromManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator) ;

/// @brief Method _LateInitInterop, addr 0x181502a10, size 0x360, virtual false, abstract: false, final false
static inline void _LateInitInterop() ;

/// @brief Method _SetTreeInstances, addr 0x181502dd0, size 0x60, virtual false, abstract: false, final false
static inline void _SetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap) ;

/// @brief Method _SetTreeInstances_1_ForwardFromBurst, addr 0x181502d70, size 0x60, virtual false, abstract: false, final false
static inline void _SetTreeInstances_1_ForwardFromBurst(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap) ;

/// @brief Method _SetTreeInstances_1_ForwardFromManaged, addr 0x181502d70, size 0x60, virtual false, abstract: false, final false
static inline void _SetTreeInstances_1_ForwardFromManaged(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap) ;

/// @brief Method __InteropIsBurst, addr 0x181477870, size 0x10, virtual false, abstract: false, final false
static inline void __InteropIsBurst(::by_ref<bool>  status) ;

static inline ::Unity::Burst::SharedStatic_1<uint64_t> getStaticF__ComputeDetailInstanceTransforms_2_BurstFP() ;

static inline ::Unity::Burst::SharedStatic_1<uint64_t> getStaticF__GetInterpolatedNormal_3_BurstFP() ;

static inline ::Unity::Burst::SharedStatic_1<uint64_t> getStaticF__GetTreeInstances_0_BurstFP() ;

static inline ::Unity::Burst::SharedStatic_1<uint64_t> getStaticF__SetTreeInstances_1_BurstFP() ;

static inline void setStaticF__ComputeDetailInstanceTransforms_2_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value) ;

static inline void setStaticF__GetInterpolatedNormal_3_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value) ;

static inline void setStaticF__GetTreeInstances_0_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value) ;

static inline void setStaticF__SetTreeInstances_1_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataBurstInterop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataBurstInterop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataBurstInterop(TerrainDataBurstInterop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataBurstInterop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataBurstInterop(TerrainDataBurstInterop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13371};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TerrainDataBurstInterop) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
