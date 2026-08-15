#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystemBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystemBurst)
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
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedRendererData;
}
namespace UnityEngine::Rendering {
struct InstanceAllocators;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst*, "UnityEngine.Rendering", "InstanceDataSystemBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*, "UnityEngine.Rendering", "InstanceDataSystemBurst/FreeInstances_000002A2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceDataSystemBurst/FreeInstances_000002A2$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*, "UnityEngine.Rendering", "InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*, "UnityEngine.Rendering", "InstanceDataSystemBurst/ReallocateInstances_000002A0$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceDataSystemBurst/ReallocateInstances_000002A0$PostfixBurstDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/ReallocateInstances_000002A0$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1820b6e90, size 0x180, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  rendererGroupIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1812c0a00, size 0x76e0, virtual true, abstract: false, final false
inline void Invoke(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  rendererGroupIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18209f7d0, size 0x210, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate(InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate(InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/ReallocateInstances_000002A0$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1820b6d90, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1820b6c80, size 0x110, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1820b0530, size 0x230, virtual false, abstract: false, final false
static inline void Invoke(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  rendererGroupIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall(InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall(InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1820aecd0, size 0xf0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181309030, size 0x1790, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1820abce0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17804};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1820ae8b0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1820ae780, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1820ae9d0, size 0x300, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17805};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeInstances_000002A2$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1820ae020, size 0xf0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181309030, size 0x1790, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1820abce0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate(InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate(InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeInstances_000002A2$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1820add40, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1820adc10, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1820ade60, size 0x1c0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall(InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall(InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst
class CORDL_TYPE InstanceDataSystemBurst : public ::System::Object {
public:
// Declarations
using FreeInstances_000002A2$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;

using FreeInstances_000002A2$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate;

using FreeRendererGroupInstances_000002A1$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;

using FreeRendererGroupInstances_000002A1$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;

using ReallocateInstances_000002A0$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;

using ReallocateInstances_000002A0$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;

/// @brief Method FreeInstances, addr 0x1820ade60, size 0x1c0, virtual false, abstract: false, final false
static inline void FreeInstances(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// @brief Method FreeInstances$BurstManaged, addr 0x1820accb0, size 0x200, virtual false, abstract: false, final false
static inline void FreeInstances$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// @brief Method FreeRendererGroupInstances, addr 0x1820b0520, size 0x10, virtual false, abstract: false, final false
static inline void FreeRendererGroupInstances(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// @brief Method FreeRendererGroupInstances$BurstManaged, addr 0x1820b0360, size 0x1c0, virtual false, abstract: false, final false
static inline void FreeRendererGroupInstances$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// @brief Method ReallocateInstances, addr 0x1820b0530, size 0x230, virtual false, abstract: false, final false
static inline void ReallocateInstances(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  rendererGroupIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

/// @brief Method ReallocateInstances$BurstManaged, addr 0x1820aceb0, size 0x440, virtual false, abstract: false, final false
static inline void ReallocateInstances$BurstManaged(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  rendererGroupIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDataSystemBurst() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDataSystemBurst(InstanceDataSystemBurst && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDataSystemBurst(InstanceDataSystemBurst const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
