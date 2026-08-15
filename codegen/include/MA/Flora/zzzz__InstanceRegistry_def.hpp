#pragma once
// IWYU pragma private; include "MA/Flora/InstanceRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceRegistry)
namespace MA::Flora {
struct ChunkIndex;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__Allocated_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__Versions_e__FixedBuffer;
}
namespace MA::Flora {
struct DetailInTerrain;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
struct InstanceInChunk;
}
namespace MA::Flora {
struct InstanceInContainer;
}
namespace MA::Flora {
struct InstanceInSourceRecord;
}
namespace MA::Flora {
struct InstanceRegistry_DataBlock;
}
namespace MA::Flora {
struct InstanceRegistry_StaticIdentifier;
}
namespace MA::Flora {
struct InstanceRegistry___c__DisplayClass13_0;
}
namespace MA::Flora {
struct InstanceRegistry__m_DataBlocks_e__FixedBuffer;
}
namespace MA::Flora {
struct InstanceRegistry__m_InstanceCount_e__FixedBuffer;
}
namespace MA::Flora {
struct InstanceRendererIndex;
}
namespace MA::Flora {
struct TreeInTerrain;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace MA::Flora {
struct DataBlock_InstanceRegistry__Allocated_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer;
}
namespace MA::Flora {
struct DataBlock_InstanceRegistry__Versions_e__FixedBuffer;
}
namespace MA::Flora {
struct InstanceRegistry;
}
namespace MA::Flora {
struct InstanceRegistry_DataBlock;
}
namespace MA::Flora {
struct InstanceRegistry_StaticIdentifier;
}
namespace MA::Flora {
struct InstanceRegistry___c__DisplayClass13_0;
}
namespace MA::Flora {
struct InstanceRegistry__m_DataBlocks_e__FixedBuffer;
}
namespace MA::Flora {
struct InstanceRegistry__m_InstanceCount_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::InstanceRegistry);
MARK_VAL_T(::MA::Flora::InstanceRegistry_DataBlock);
MARK_VAL_T(::MA::Flora::InstanceRegistry_StaticIdentifier);
MARK_VAL_T(::MA::Flora::InstanceRegistry___c__DisplayClass13_0);
MARK_VAL_T(::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<Allocated>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<DetailInTerrain>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<InstanceInChunk>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<InstanceInContainer>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<InstanceInSource>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<InstanceRenderer>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<SceneEntityId>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<TreeInTerrain>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer, "MA.Flora", "InstanceRegistry/DataBlock/<Versions>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRegistry, "MA.Flora", "InstanceRegistry");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRegistry_DataBlock, "MA.Flora", "InstanceRegistry/DataBlock");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRegistry_StaticIdentifier, "MA.Flora", "InstanceRegistry/StaticIdentifier");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRegistry___c__DisplayClass13_0, "MA.Flora", "InstanceRegistry/<>c__DisplayClass13_0");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer, "MA.Flora", "InstanceRegistry/<m_DataBlocks>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer, "MA.Flora", "InstanceRegistry/<m_InstanceCount>e__FixedBuffer");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/<m_DataBlocks>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE InstanceRegistry__m_DataBlocks_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceRegistry__m_DataBlocks_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr InstanceRegistry__m_DataBlocks_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x20000 - 0x8 = 0x1fff8, packed as 0x1fff8
 uint8_t  _cordl_size_padding[0x1fff8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer) == 0x20000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/<m_InstanceCount>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE InstanceRegistry__m_InstanceCount_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceRegistry__m_InstanceCount_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceRegistry__m_InstanceCount_e__FixedBuffer(int32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13045};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 int32_t  FixedElementField;

/// @brief Size padding 0x10000 - 0x4 = 0xfffc, packed as 0xfffc
 uint8_t  _cordl_size_padding[0xfffc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer) == 0x10000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceRegistry::<m_DataBlocks>e__FixedBuffer, MA.Flora.InstanceRegistry::<m_InstanceCount>e__FixedBuffer
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry
struct CORDL_TYPE InstanceRegistry {
public:
// Declarations
using DataBlock = ::MA::Flora::InstanceRegistry_DataBlock;

using StaticIdentifier = ::MA::Flora::InstanceRegistry_StaticIdentifier;

using __c__DisplayClass13_0 = ::MA::Flora::InstanceRegistry___c__DisplayClass13_0;

using _m_DataBlocks_e__FixedBuffer = ::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer;

using _m_InstanceCount_e__FixedBuffer = ::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer;

 __declspec(property(get=get_ThreadUnsafeInstanceCount)) int32_t  ThreadUnsafeInstanceCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AllocateInstances, addr 0x181482430, size 0x60, virtual false, abstract: false, final false
inline void AllocateInstances(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount) ;

/// @brief Method AllocateInstances, addr 0x181482500, size 0x360, virtual false, abstract: false, final false
inline void AllocateInstances(::MA::Flora::FloraInstanceHandle*  instances, int32_t  totalCount, ::MA::Flora::ChunkIndex  chunkIndex, int32_t  firstInstanceInChunkIndex) ;

/// @brief Method AllocateInstances, addr 0x181482490, size 0x70, virtual false, abstract: false, final false
inline void AllocateInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances) ;

/// @brief Method DeallocateInstances, addr 0x181482900, size 0x290, virtual false, abstract: false, final false
inline void DeallocateInstances(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count) ;

/// @brief Method DeallocateInstances, addr 0x1814828a0, size 0x60, virtual false, abstract: false, final false
inline void DeallocateInstances(::System::Span_1<::MA::Flora::FloraInstanceHandle>  instances) ;

/// @brief Method DeallocateInstances, addr 0x181482860, size 0x40, virtual false, abstract: false, final false
inline void DeallocateInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances) ;

/// @brief Method DebugOnlyThrowIfInstanceDoesntExist, addr 0x181482b90, size 0xc0, virtual false, abstract: false, final false
inline void DebugOnlyThrowIfInstanceDoesntExist(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceRegistry_DataBlock*  block, int32_t  indexInBlock) ;

/// @brief Method Dispose, addr 0x181482c50, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Exists, addr 0x181482cc0, size 0x70, virtual false, abstract: false, final false
inline bool Exists(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetDetailInTerrain, addr 0x181482d30, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::DetailInTerrain GetDetailInTerrain(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceByIndex, addr 0x181482db0, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle GetInstanceByIndex(int32_t  index) ;

/// @brief Method GetInstanceInChunk, addr 0x181482e10, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceInChunk GetInstanceInChunk(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceInContainer, addr 0x181482e90, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceInContainer GetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceInSourceRecord, addr 0x181482f10, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceInSourceRecord GetInstanceInSourceRecord(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetInstanceRendererIndex, addr 0x181482f90, size 0x90, virtual false, abstract: false, final false
inline ::MA::Flora::InstanceRendererIndex GetInstanceRendererIndex(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetSceneEntityId, addr 0x181483020, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId GetSceneEntityId(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method GetTreeInTerrain, addr 0x1814830b0, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::TreeInTerrain GetTreeInTerrain(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method SetDetailInTerrain, addr 0x181483130, size 0x60, virtual false, abstract: false, final false
inline void SetDetailInTerrain(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::DetailInTerrain  detailInTerrain) ;

/// @brief Method SetInstanceInChunk, addr 0x181483190, size 0x60, virtual false, abstract: false, final false
inline void SetInstanceInChunk(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceInChunk  instanceInChunk) ;

/// @brief Method SetInstanceInContainer, addr 0x1814831f0, size 0x60, virtual false, abstract: false, final false
inline void SetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceInContainer  instanceInContainer) ;

/// @brief Method SetInstanceInSourceRecord, addr 0x181483250, size 0x60, virtual false, abstract: false, final false
inline void SetInstanceInSourceRecord(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceInSourceRecord  instanceInSourceRecord) ;

/// @brief Method SetInstanceRendererIndex, addr 0x1814832b0, size 0x60, virtual false, abstract: false, final false
inline void SetInstanceRendererIndex(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceRendererIndex  instanceRendererIndex) ;

/// @brief Method SetInstanceVersion, addr 0x181483310, size 0x60, virtual false, abstract: false, final false
inline void SetInstanceVersion(::MA::Flora::FloraInstanceHandle  instance, int32_t  version) ;

/// @brief Method SetSceneEntityId, addr 0x181483370, size 0x60, virtual false, abstract: false, final false
inline void SetSceneEntityId(::MA::Flora::FloraInstanceHandle  instance, ::UnityEngine::EntityId  entityId) ;

/// @brief Method SetTreeInTerrain, addr 0x1814833d0, size 0x60, virtual false, abstract: false, final false
inline void SetTreeInTerrain(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::TreeInTerrain  treeInTerrain) ;

/// @brief Method ValidateInstances, addr 0x180631430, size 0xa670, virtual false, abstract: false, final false
inline void ValidateInstances() ;

/// @brief Method <DebugOnlyThrowIfInstanceDoesntExist>g__MissingInBitmask|13_0, addr 0x181483430, size 0x50, virtual false, abstract: false, final false
static inline bool _DebugOnlyThrowIfInstanceDoesntExist_g__MissingInBitmask_13_0(::by_ref<::MA::Flora::InstanceRegistry___c__DisplayClass13_0>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Data, addr 0x181483480, size 0x20, virtual false, abstract: false, final false
static inline ::by_ref<::MA::Flora::InstanceRegistry> get_Data() ;

/// @brief Method get_ThreadUnsafeInstanceCount, addr 0x1814834a0, size 0x50, virtual false, abstract: false, final false
inline int32_t get_ThreadUnsafeInstanceCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceRegistry() ;

// Ctor Parameters [CppParam { name: "m_DataBlocks", ty: "::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_InstanceCount", ty: "::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr InstanceRegistry(::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer  m_DataBlocks, ::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer  m_InstanceCount) noexcept;

/// @brief Field BlockBusy offset 0xffffffff size 0x4
static constexpr int32_t  BlockBusy{static_cast<int32_t>(0xffffffff)};

/// @brief Field BlockCount offset 0xffffffff size 0x4
static constexpr int32_t  BlockCount{static_cast<int32_t>(0x4000)};

/// @brief Field InstancesInBlock offset 0xffffffff size 0x4
static constexpr int32_t  InstancesInBlock{static_cast<int32_t>(0x2000)};

/// @brief Field MaximumTheoreticalAmountOfInstances offset 0xffffffff size 0x4
static constexpr int32_t  MaximumTheoreticalAmountOfInstances{static_cast<int32_t>(0x8000000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30000};

/// @brief Field m_DataBlocks, offset: 0x0, size: 0x20000, def value: None
 ::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer  m_DataBlocks;

/// @brief Field m_InstanceCount, offset: 0x20000, size: 0x10000, def value: None
 ::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer  m_InstanceCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRegistry, m_DataBlocks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry, m_InstanceCount) == 0x20000, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRegistry) == 0x30000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceRegistry, Unity.Burst.SharedStatic`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/StaticIdentifier
#pragma pack(push, 0)
struct CORDL_TYPE InstanceRegistry_StaticIdentifier {
public:
// Declarations
/// @brief Field Ref, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ref, put=setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry>  Ref;

static inline ::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry> getStaticF_Ref() ;

static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceRegistry_StaticIdentifier() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceRegistry_StaticIdentifier) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<Allocated>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__Allocated_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__Allocated_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__Allocated_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13033};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x400};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x400 - 0x8 = 0x3f8, packed as 0x3f8
 uint8_t  _cordl_size_padding[0x3f8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer) == 0x400, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<DetailInTerrain>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x10000 - 0x8 = 0xfff8, packed as 0xfff8
 uint8_t  _cordl_size_padding[0xfff8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer) == 0x10000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<InstanceInChunk>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13035};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x10000 - 0x8 = 0xfff8, packed as 0xfff8
 uint8_t  _cordl_size_padding[0xfff8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer) == 0x10000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<InstanceInContainer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x10000 - 0x8 = 0xfff8, packed as 0xfff8
 uint8_t  _cordl_size_padding[0xfff8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer) == 0x10000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<InstanceInSource>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x10000 - 0x8 = 0xfff8, packed as 0xfff8
 uint8_t  _cordl_size_padding[0xfff8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer) == 0x10000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<InstanceRenderer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer(int32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 int32_t  FixedElementField;

/// @brief Size padding 0x8000 - 0x4 = 0x7ffc, packed as 0x7ffc
 uint8_t  _cordl_size_padding[0x7ffc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer) == 0x8000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<SceneEntityId>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer(int32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 int32_t  FixedElementField;

/// @brief Size padding 0x8000 - 0x4 = 0x7ffc, packed as 0x7ffc
 uint8_t  _cordl_size_padding[0x7ffc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer) == 0x8000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<TreeInTerrain>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer(uint64_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x8, def value: None
 uint64_t  FixedElementField;

/// @brief Size padding 0x10000 - 0x8 = 0xfff8, packed as 0xfff8
 uint8_t  _cordl_size_padding[0xfff8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer) == 0x10000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock/<Versions>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DataBlock_InstanceRegistry__Versions_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataBlock_InstanceRegistry__Versions_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataBlock_InstanceRegistry__Versions_e__FixedBuffer(int32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 int32_t  FixedElementField;

/// @brief Size padding 0x8000 - 0x4 = 0x7ffc, packed as 0x7ffc
 uint8_t  _cordl_size_padding[0x7ffc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer) == 0x8000, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceRegistry::DataBlock::<Allocated>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<DetailInTerrain>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<InstanceInChunk>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<InstanceInContainer>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<InstanceInSource>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<InstanceRenderer>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<SceneEntityId>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<TreeInTerrain>e__FixedBuffer, MA.Flora.InstanceRegistry::DataBlock::<Versions>e__FixedBuffer
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/DataBlock
struct CORDL_TYPE InstanceRegistry_DataBlock {
public:
// Declarations
using _Allocated_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer;

using _DetailInTerrain_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer;

using _InstanceInChunk_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer;

using _InstanceInContainer_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer;

using _InstanceInSource_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer;

using _InstanceRenderer_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer;

using _SceneEntityId_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer;

using _TreeInTerrain_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer;

using _Versions_e__FixedBuffer = ::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceRegistry_DataBlock() ;

// Ctor Parameters [CppParam { name: "Allocated", ty: "::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "InstanceInChunk", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "InstanceInSource", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "InstanceInContainer", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "TreeInTerrain", ty: "::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "DetailInTerrain", ty: "::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "SceneEntityId", ty: "::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "InstanceRenderer", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "Versions", ty: "::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr InstanceRegistry_DataBlock(::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer  Allocated, ::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer  InstanceInChunk, ::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer  InstanceInSource, ::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer  InstanceInContainer, ::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer  TreeInTerrain, ::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer  DetailInTerrain, ::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer  SceneEntityId, ::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer  InstanceRenderer, ::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer  Versions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68400};

/// @brief Field Allocated, offset: 0x0, size: 0x400, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer  Allocated;

/// @brief Field InstanceInChunk, offset: 0x400, size: 0x10000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer  InstanceInChunk;

/// @brief Field InstanceInSource, offset: 0x10400, size: 0x10000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer  InstanceInSource;

/// @brief Field InstanceInContainer, offset: 0x20400, size: 0x10000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer  InstanceInContainer;

/// @brief Field TreeInTerrain, offset: 0x30400, size: 0x10000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer  TreeInTerrain;

/// @brief Field DetailInTerrain, offset: 0x40400, size: 0x10000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer  DetailInTerrain;

/// @brief Field SceneEntityId, offset: 0x50400, size: 0x8000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer  SceneEntityId;

/// @brief Field InstanceRenderer, offset: 0x58400, size: 0x8000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer  InstanceRenderer;

/// @brief Field Versions, offset: 0x60400, size: 0x8000, def value: None
 ::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer  Versions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, Allocated) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, InstanceInChunk) == 0x400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, InstanceInSource) == 0x10400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, InstanceInContainer) == 0x20400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, TreeInTerrain) == 0x30400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, DetailInTerrain) == 0x40400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, SceneEntityId) == 0x50400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, InstanceRenderer) == 0x58400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry_DataBlock, Versions) == 0x60400, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRegistry_DataBlock) == 0x68400, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRegistry/<>c__DisplayClass13_0
struct CORDL_TYPE InstanceRegistry___c__DisplayClass13_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceRegistry___c__DisplayClass13_0() ;

// Ctor Parameters [CppParam { name: "block", ty: "::MA::Flora::InstanceRegistry_DataBlock*", modifiers: "", def_value: None }, CppParam { name: "indexInBlock", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceRegistry___c__DisplayClass13_0(::MA::Flora::InstanceRegistry_DataBlock*  block, int32_t  indexInBlock) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13043};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field block, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::InstanceRegistry_DataBlock*  block;

/// @brief Field indexInBlock, offset: 0x8, size: 0x4, def value: None
 int32_t  indexInBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRegistry___c__DisplayClass13_0, block) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRegistry___c__DisplayClass13_0, indexInBlock) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRegistry___c__DisplayClass13_0) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
