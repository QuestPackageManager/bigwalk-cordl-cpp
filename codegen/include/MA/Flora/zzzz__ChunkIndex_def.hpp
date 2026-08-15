#pragma once
// IWYU pragma private; include "MA/Flora/ChunkIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkIndex)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct ArchetypeIndex;
}
namespace MA::Flora {
struct BatchAllocation;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct ChunkIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::ChunkIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::ChunkIndex, "MA.Flora", "ChunkIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ChunkIndex
struct CORDL_TYPE ChunkIndex {
public:
// Declarations
 __declspec(property(get=get_AllocatedMask)) uint64_t  AllocatedMask;

 __declspec(property(get=get_Archetype, put=set_Archetype)) ::MA::Flora::ArchetypeIndex  Archetype;

 __declspec(property(get=get_BatchAllocation, put=set_BatchAllocation)) ::MA::Flora::BatchAllocation  BatchAllocation;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_IndexInArchetype, put=set_IndexInArchetype)) int32_t  IndexInArchetype;

 __declspec(property(get=get_IndexInArchetypeFreeSlotList, put=set_IndexInArchetypeFreeSlotList)) int32_t  IndexInArchetypeFreeSlotList;

 __declspec(property(get=get_IndexInTemplateList, put=set_IndexInTemplateList)) int32_t  IndexInTemplateList;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_LocalAABB)) ::MA::Flora::AABB  LocalAABB;

 __declspec(property(get=get_SpaceRemaining)) int32_t  SpaceRemaining;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::ChunkIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::ChunkIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::ChunkIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::ChunkIndex>*() ;

/// @brief Method AsInstanceOffset, addr 0x181453af0, size 0x10, virtual false, abstract: false, final false
inline int32_t AsInstanceOffset() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::ChunkIndex  other) ;

/// @brief Method Equals, addr 0x180645c30, size 0x60, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::ChunkIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInstanceCount, addr 0x181453b00, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetInstanceCount(::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method ToString, addr 0x181453b40, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_AllocatedMask, addr 0x181453be0, size 0x90, virtual false, abstract: false, final false
inline uint64_t get_AllocatedMask() ;

/// @brief Method get_Archetype, addr 0x181453c70, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::ArchetypeIndex get_Archetype() ;

/// @brief Method get_BatchAllocation, addr 0x181453cb0, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::BatchAllocation get_BatchAllocation() ;

/// @brief Method get_Count, addr 0x181453d10, size 0x40, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IndexInArchetype, addr 0x181453d90, size 0x40, virtual false, abstract: false, final false
inline int32_t get_IndexInArchetype() ;

/// @brief Method get_IndexInArchetypeFreeSlotList, addr 0x181453d50, size 0x40, virtual false, abstract: false, final false
inline int32_t get_IndexInArchetypeFreeSlotList() ;

/// @brief Method get_IndexInTemplateList, addr 0x181453dd0, size 0x40, virtual false, abstract: false, final false
inline int32_t get_IndexInTemplateList() ;

/// @brief Method get_IsEnabled, addr 0x181453e10, size 0x60, virtual false, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_IsFull, addr 0x181453e70, size 0x40, virtual false, abstract: false, final false
inline bool get_IsFull() ;

/// @brief Method get_LocalAABB, addr 0x181453eb0, size 0x80, virtual false, abstract: false, final false
inline ::by_ref<::MA::Flora::AABB> get_LocalAABB() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::ChunkIndex get_None() ;

/// @brief Method get_SpaceRemaining, addr 0x181453f30, size 0x40, virtual false, abstract: false, final false
inline int32_t get_SpaceRemaining() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::ChunkIndex>"
constexpr ::System::IComparable_1<::MA::Flora::ChunkIndex>* i___System__IComparable_1___MA__Flora__ChunkIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::ChunkIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::ChunkIndex>* i___System__IEquatable_1___MA__Flora__ChunkIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b) ;

/// @brief Method op_GreaterThan, addr 0x181455ab0, size 0x10, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::ChunkIndex  chunkIndex) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b) ;

/// @brief Method op_LessThan, addr 0x181455ac0, size 0x30, virtual false, abstract: false, final false
static inline bool op_LessThan(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b) ;

/// @brief Method set_Archetype, addr 0x181453f70, size 0x50, virtual false, abstract: false, final false
inline void set_Archetype(::MA::Flora::ArchetypeIndex  value) ;

/// @brief Method set_BatchAllocation, addr 0x181453fc0, size 0x60, virtual false, abstract: false, final false
inline void set_BatchAllocation(::MA::Flora::BatchAllocation  value) ;

/// @brief Method set_Count, addr 0x181454020, size 0x50, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_IndexInArchetype, addr 0x1814540c0, size 0x50, virtual false, abstract: false, final false
inline void set_IndexInArchetype(int32_t  value) ;

/// @brief Method set_IndexInArchetypeFreeSlotList, addr 0x181454070, size 0x50, virtual false, abstract: false, final false
inline void set_IndexInArchetypeFreeSlotList(int32_t  value) ;

/// @brief Method set_IndexInTemplateList, addr 0x181454110, size 0x50, virtual false, abstract: false, final false
inline void set_IndexInTemplateList(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ChunkIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChunkIndex(int32_t  Index) noexcept;

/// @brief Field Capacity offset 0xffffffff size 0x4
static constexpr int32_t  Capacity{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ChunkIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ChunkIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
