#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__GraphicsBufferDescriptor_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferStoreType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferStore)
namespace MA::Flora {
struct GraphicsBufferAlignment;
}
namespace MA::Flora {
struct GraphicsBufferDescriptor;
}
namespace MA::Flora {
struct GraphicsBufferRef;
}
namespace MA::Flora {
struct GraphicsBufferStoreType;
}
namespace MA::Flora {
struct GraphicsBufferStore_DebugBufferInfo;
}
namespace MA::Flora {
struct GraphicsBufferStore_GraphicsBufferInfo;
}
namespace MA::Flora {
struct GraphicsBufferStore_SharedData;
}
namespace MA::Flora {
class GraphicsBufferStore___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
struct GraphicsBuffer_UsageFlags;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
class GraphicsBufferStore;
}
namespace MA::Flora {
class GraphicsBufferStore___c;
}
namespace MA::Flora {
struct GraphicsBufferStore_DebugBufferInfo;
}
namespace MA::Flora {
struct GraphicsBufferStore_GraphicsBufferInfo;
}
namespace MA::Flora {
struct GraphicsBufferStore_SharedData;
}
// Write type traits
MARK_REF_T(::MA::Flora::GraphicsBufferStore*);
MARK_REF_T(::MA::Flora::GraphicsBufferStore___c*);
MARK_VAL_T(::MA::Flora::GraphicsBufferStore_DebugBufferInfo);
MARK_VAL_T(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo);
MARK_VAL_T(::MA::Flora::GraphicsBufferStore_SharedData);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferStore*, "MA.Flora", "GraphicsBufferStore");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferStore___c*, "MA.Flora", "GraphicsBufferStore/<>c");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferStore_DebugBufferInfo, "MA.Flora", "GraphicsBufferStore/DebugBufferInfo");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, "MA.Flora", "GraphicsBufferStore/GraphicsBufferInfo");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferStore_SharedData, "MA.Flora", "GraphicsBufferStore/SharedData");
// Dependencies MA.Flora.GraphicsBufferDescriptor, MA.Flora.GraphicsBufferStoreType
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferStore/DebugBufferInfo
struct CORDL_TYPE GraphicsBufferStore_DebugBufferInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferStore_DebugBufferInfo() ;

// Ctor Parameters [CppParam { name: "StoreType", ty: "::MA::Flora::GraphicsBufferStoreType", modifiers: "", def_value: None }, CppParam { name: "Descriptor", ty: "::MA::Flora::GraphicsBufferDescriptor", modifiers: "", def_value: None }]
constexpr GraphicsBufferStore_DebugBufferInfo(::MA::Flora::GraphicsBufferStoreType  StoreType, ::MA::Flora::GraphicsBufferDescriptor  Descriptor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field StoreType, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferStoreType  StoreType;

/// @brief Field Descriptor, offset: 0x4, size: 0x10, def value: None
 ::MA::Flora::GraphicsBufferDescriptor  Descriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferStore_DebugBufferInfo, StoreType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_DebugBufferInfo, Descriptor) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferStore_DebugBufferInfo) == 0x14, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.GraphicsBufferDescriptor, MA.Flora.GraphicsBufferStoreType
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferStore/GraphicsBufferInfo
struct CORDL_TYPE GraphicsBufferStore_GraphicsBufferInfo {
public:
// Declarations
 __declspec(property(get=get_InFlight)) bool  InFlight;

 __declspec(property(get=get_IsLocked)) bool  IsLocked;

/// @brief Method Lock, addr 0x1814fa660, size 0x20, virtual false, abstract: false, final false
inline void Lock() ;

/// @brief Method LockForWrite, addr 0x1814fa610, size 0x50, virtual false, abstract: false, final false
inline void LockForWrite() ;

/// @brief Method Unlock, addr 0x1814fa6e0, size 0x20, virtual false, abstract: false, final false
inline void Unlock() ;

/// @brief Method UnlockForWrite, addr 0x1814fa680, size 0x60, virtual false, abstract: false, final false
inline void UnlockForWrite() ;

/// @brief Method get_InFlight, addr 0x1814fa700, size 0x90, virtual false, abstract: false, final false
inline bool get_InFlight() ;

/// @brief Method get_IsLocked, addr 0x1814fa790, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsLocked() ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferStore_GraphicsBufferInfo() ;

// Ctor Parameters [CppParam { name: "IsCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Hash", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexInPool", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexInAllocated", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StoreType", ty: "::MA::Flora::GraphicsBufferStoreType", modifiers: "", def_value: None }, CppParam { name: "Descriptor", ty: "::MA::Flora::GraphicsBufferDescriptor", modifiers: "", def_value: None }, CppParam { name: "LastUsedFrame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "FenceFrame", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferStore_GraphicsBufferInfo(bool  IsCreated, int32_t  Hash, int32_t  IndexInPool, int32_t  IndexInAllocated, ::MA::Flora::GraphicsBufferStoreType  StoreType, ::MA::Flora::GraphicsBufferDescriptor  Descriptor, int32_t  LastUsedFrame, int32_t  FenceFrame) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13333};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field IsCreated, offset: 0x0, size: 0x1, def value: None
 bool  IsCreated;

/// @brief Field Hash, offset: 0x4, size: 0x4, def value: None
 int32_t  Hash;

/// @brief Field IndexInPool, offset: 0x8, size: 0x4, def value: None
 int32_t  IndexInPool;

/// @brief Field IndexInAllocated, offset: 0xc, size: 0x4, def value: None
 int32_t  IndexInAllocated;

/// @brief Field StoreType, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferStoreType  StoreType;

/// @brief Field Descriptor, offset: 0x14, size: 0x10, def value: None
 ::MA::Flora::GraphicsBufferDescriptor  Descriptor;

/// @brief Field LastUsedFrame, offset: 0x24, size: 0x4, def value: None
 int32_t  LastUsedFrame;

/// @brief Field FenceFrame, offset: 0x28, size: 0x4, def value: None
 int32_t  FenceFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, IsCreated) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, Hash) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, IndexInPool) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, IndexInAllocated) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, StoreType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, Descriptor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, LastUsedFrame) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo, FenceFrame) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo) == 0x2c, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.GraphicsBufferStore::GraphicsBufferInfo, UnityEngine.GraphicsBuffer
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferStore/SharedData
struct CORDL_TYPE GraphicsBufferStore_SharedData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferStore_SharedData() ;

// Ctor Parameters [CppParam { name: "IsInitialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "FreeIndices", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "PooledBufferIndices", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "AllocatedBufferIndices", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "BufferInfoArray", ty: "::ArrayW<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>", modifiers: "", def_value: None }, CppParam { name: "Buffers", ty: "::ArrayW<::UnityEngine::GraphicsBuffer*>", modifiers: "", def_value: None }, CppParam { name: "NextBufferIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferStore_SharedData(bool  IsInitialized, int32_t  FrameIndex, ::System::Collections::Generic::List_1<int32_t>*  FreeIndices, ::System::Collections::Generic::List_1<int32_t>*  PooledBufferIndices, ::System::Collections::Generic::List_1<int32_t>*  AllocatedBufferIndices, ::ArrayW<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>  BufferInfoArray, ::ArrayW<::UnityEngine::GraphicsBuffer*>  Buffers, int32_t  NextBufferIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field IsInitialized, offset: 0x0, size: 0x1, def value: None
 bool  IsInitialized;

/// @brief Field FrameIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  FrameIndex;

/// @brief Field FreeIndices, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  FreeIndices;

/// @brief Field PooledBufferIndices, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  PooledBufferIndices;

/// @brief Field AllocatedBufferIndices, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  AllocatedBufferIndices;

/// @brief Field BufferInfoArray, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>  BufferInfoArray;

/// @brief Field Buffers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::GraphicsBuffer*>  Buffers;

/// @brief Field NextBufferIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  NextBufferIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, IsInitialized) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, FrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, FreeIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, PooledBufferIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, AllocatedBufferIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, BufferInfoArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, Buffers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferStore_SharedData, NextBufferIndex) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferStore_SharedData) == 0x38, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferStore/<>c
class CORDL_TYPE GraphicsBufferStore___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::GraphicsBufferStore___c*  __9;

/// @brief Field <>9__47_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__47_1, put=setStaticF___9__47_1)) ::System::EventHandler*  __9__47_1;

/// @brief Field <>9__47_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__47_2, put=setStaticF___9__47_2)) ::System::EventHandler*  __9__47_2;

static inline ::MA::Flora::GraphicsBufferStore___c* New_ctor() ;

/// @brief Method <Initialize>b__47_1, addr 0x1815095a0, size 0x10, virtual false, abstract: false, final false
inline void _Initialize_b__47_1(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method <Initialize>b__47_2, addr 0x1815095a0, size 0x10, virtual false, abstract: false, final false
inline void _Initialize_b__47_2(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::GraphicsBufferStore___c* getStaticF___9() ;

static inline ::System::EventHandler* getStaticF___9__47_1() ;

static inline ::System::EventHandler* getStaticF___9__47_2() ;

static inline void setStaticF___9(::MA::Flora::GraphicsBufferStore___c*  value) ;

static inline void setStaticF___9__47_1(::System::EventHandler*  value) ;

static inline void setStaticF___9__47_2(::System::EventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferStore___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferStore___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferStore___c(GraphicsBufferStore___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferStore___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferStore___c(GraphicsBufferStore___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferStore___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.GraphicsBufferStore::SharedData, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferStore
class CORDL_TYPE GraphicsBufferStore : public ::System::Object {
public:
// Declarations
using DebugBufferInfo = ::MA::Flora::GraphicsBufferStore_DebugBufferInfo;

using GraphicsBufferInfo = ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo;

using SharedData = ::MA::Flora::GraphicsBufferStore_SharedData;

using __c = ::MA::Flora::GraphicsBufferStore___c;

/// @brief Field s_Shared, offset 0xffffffff, size 0x38 
 __declspec(property(get=getStaticF_s_Shared, put=setStaticF_s_Shared)) ::MA::Flora::GraphicsBufferStore_SharedData  s_Shared;

/// @brief Method AlignDescriptor, addr 0x1814fbca0, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferDescriptor AlignDescriptor(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method AllocateBufferIndex, addr 0x1814fbd40, size 0x120, virtual false, abstract: false, final false
static inline int32_t AllocateBufferIndex() ;

/// @brief Method CheckExists, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void CheckExists(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method ComputeAllocatedSizeInBytes, addr 0x1814fbe60, size 0xe0, virtual false, abstract: false, final false
static inline int64_t ComputeAllocatedSizeInBytes() ;

/// @brief Method Create, addr 0x1814fc2a0, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef Create(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride, ::StringW  name) ;

/// @brief Method CreateInternal, addr 0x1814fbf40, size 0x360, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef CreateInternal(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::StringW  debugName, ::MA::Flora::GraphicsBufferStoreType  type) ;

/// @brief Method DestroyBufferImmediate, addr 0x1814fc2e0, size 0x230, virtual false, abstract: false, final false
static inline void DestroyBufferImmediate(int32_t  bufferIndex) ;

/// @brief Method Exists, addr 0x1814fc510, size 0x60, virtual false, abstract: false, final false
static inline bool Exists(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method GetBufferHandle, addr 0x1814fc570, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBufferHandle GetBufferHandle(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method GetBufferUnchecked, addr 0x1814fc5d0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* GetBufferUnchecked(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method GetDebugBufferInfos, addr 0x1814fc660, size 0x170, virtual false, abstract: false, final false
static inline void GetDebugBufferInfos(::System::Collections::Generic::List_1<::MA::Flora::GraphicsBufferStore_DebugBufferInfo>*  outInfos) ;

/// @brief Method GetDebugName, addr 0x180393520, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetDebugName(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method GetDescriptor, addr 0x1814fc7d0, size 0x60, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferDescriptor GetDescriptor(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method Initialize, addr 0x1814fc830, size 0x290, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method IsValid, addr 0x1814fcac0, size 0xa0, virtual false, abstract: false, final false
static inline bool IsValid(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method LockBuffer, addr 0x1814fcb60, size 0x60, virtual false, abstract: false, final false
static inline void LockBuffer(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method LockBufferForWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Collections::NativeArray_1<T> LockBufferForWrite(::MA::Flora::GraphicsBufferRef  buffer, int32_t  index, int32_t  count) ;

/// @brief Method NextFrame, addr 0x1814fcbc0, size 0x1c0, virtual false, abstract: false, final false
static inline void NextFrame() ;

/// @brief Method Release, addr 0x1814fcf90, size 0xb0, virtual false, abstract: false, final false
static inline void Release(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method ReleaseAll, addr 0x1814fcd80, size 0x1a0, virtual false, abstract: false, final false
static inline void ReleaseAll() ;

/// @brief Method ReleaseBuffer, addr 0x1814fcf20, size 0x70, virtual false, abstract: false, final false
static inline void ReleaseBuffer(int32_t  bufferIndex) ;

/// @brief Method Request, addr 0x1814fd260, size 0x270, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef Request(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method Request, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef Request(::UnityEngine::GraphicsBuffer_Target  target, int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestDataAsync, addr 0x1814fd040, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestDataAsync(::MA::Flora::GraphicsBufferRef  buffer, ::Unity::Collections::NativeArray_1<uint8_t>  data) ;

/// @brief Method RequestDataAsync, addr 0x1814fd0d0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestDataAsync(::MA::Flora::GraphicsBufferRef  buffer, int64_t  offsetInBytes, int64_t  sizeInBytes) ;

/// @brief Method RequestIndirect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestIndirect(::Unity::Collections::NativeArray_1<T>  args, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestIndirect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestIndirect(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Collections::NativeArray_1<T>  args, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestIndirect, addr 0x1814fd160, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef RequestIndirect(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestIndirect, addr 0x1814fd1a0, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef RequestIndirect(int32_t  count, int32_t  stride, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestRaw, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestRaw(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestRaw, addr 0x1814fd1e0, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef RequestRaw(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestRaw, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestRaw(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestRaw, addr 0x1814fd220, size 0x40, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef RequestRaw(int32_t  count, int32_t  stride, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestRaw, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestRaw(::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestStructured, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestStructured(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestStructured, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestStructured(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestStructured, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestStructured(::ArrayW<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method RequestStructured, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::GraphicsBufferRef RequestStructured(::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment) ;

/// @brief Method Resize, addr 0x1814fd5a0, size 0x2c0, virtual false, abstract: false, final false
static inline void Resize(::MA::Flora::GraphicsBufferRef  buffer, int32_t  newLength, bool  copyContents) ;

/// @brief Method ResizeAndCopySOA, addr 0x1814fd4d0, size 0xd0, virtual false, abstract: false, final false
static inline void ResizeAndCopySOA(::MA::Flora::GraphicsBufferRef  buffer, int32_t  newLength, int32_t  arrayCount) ;

/// @brief Method SetData, addr 0x1814fd9e0, size 0x90, virtual false, abstract: false, final false
static inline void SetData(::MA::Flora::GraphicsBufferRef  buffer, ::System::Array*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetData, addr 0x1814fd860, size 0xc0, virtual false, abstract: false, final false
static inline void SetData(::MA::Flora::GraphicsBufferRef  buffer, ::Unity::Collections::NativeArray_1<uint8_t>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elementSize) ;

/// @brief Method SetData, addr 0x1814fd920, size 0xc0, virtual false, abstract: false, final false
static inline void SetData(::MA::Flora::GraphicsBufferRef  buffer, void*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elementSize) ;

/// @brief Method SetDebugName, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetDebugName(::MA::Flora::GraphicsBufferRef  buffer, ::StringW  name) ;

/// @brief Method TryFindPooledBuffer, addr 0x1814fda70, size 0x150, virtual false, abstract: false, final false
static inline bool TryFindPooledBuffer(int32_t  descriptorHash, ::by_ref<::MA::Flora::GraphicsBufferDescriptor>  descriptor, ::by_ref<::MA::Flora::GraphicsBufferRef>  pooledBuffer) ;

/// @brief Method UnlockBuffer, addr 0x1814fdf30, size 0x60, virtual false, abstract: false, final false
static inline void UnlockBuffer(::MA::Flora::GraphicsBufferRef  buffer) ;

/// @brief Method UnlockBufferAfterWrite, addr 0x1814fde70, size 0xc0, virtual false, abstract: false, final false
static inline void UnlockBufferAfterWrite(::MA::Flora::GraphicsBufferRef  buffer, int32_t  bytesWritten) ;

/// @brief Method UnlockBufferAfterWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void UnlockBufferAfterWrite(::MA::Flora::GraphicsBufferRef  buffer, int32_t  countWritten) ;

/// @brief Method UnlockBufferAfterWriteInternal, addr 0x1814fdd90, size 0xe0, virtual false, abstract: false, final false
static inline void UnlockBufferAfterWriteInternal(int32_t  bufferIndex, int32_t  countWritten, int32_t  elemSize) ;

/// @brief Method <Initialize>g__Shutdown|47_0, addr 0x1814fdbc0, size 0x1d0, virtual false, abstract: false, final false
static inline void _Initialize_g__Shutdown_47_0() ;

static inline ::MA::Flora::GraphicsBufferStore_SharedData getStaticF_s_Shared() ;

/// @brief Method get_AllocatedBufferCount, addr 0x1814fe0e0, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_AllocatedBufferCount() ;

static inline void setStaticF_s_Shared(::MA::Flora::GraphicsBufferStore_SharedData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferStore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferStore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferStore(GraphicsBufferStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferStore(GraphicsBufferStore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13336};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferStore) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
