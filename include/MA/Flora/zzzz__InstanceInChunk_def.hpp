#pragma once
// IWYU pragma private; include "MA/Flora/InstanceInChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceInChunk)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace MA::Flora {
struct InstanceInChunk;
}
// Write type traits
MARK_VAL_T(::MA::Flora::InstanceInChunk);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceInChunk, "MA.Flora", "InstanceInChunk");
// Dependencies MA.Flora.ChunkIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceInChunk
struct CORDL_TYPE InstanceInChunk {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceInChunk>"
constexpr operator  ::System::IComparable_1<::MA::Flora::InstanceInChunk>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceInChunk>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::InstanceInChunk>*() ;

/// @brief Method CompareTo, addr 0x1814820e0, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::InstanceInChunk  other) ;

/// @brief Method Equals, addr 0x181482100, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::InstanceInChunk  other) ;

/// @brief Method GetHashCode, addr 0x18147c820, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181482130, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::InstanceInChunk get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceInChunk>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceInChunk>* i___System__IComparable_1___MA__Flora__InstanceInChunk_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceInChunk>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceInChunk>* i___System__IEquatable_1___MA__Flora__InstanceInChunk_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceInChunk() ;

// Ctor Parameters [CppParam { name: "Chunk", ty: "::MA::Flora::ChunkIndex", modifiers: "", def_value: None }, CppParam { name: "IndexInChunk", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceInChunk(::MA::Flora::ChunkIndex  Chunk, int32_t  IndexInChunk) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13027};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Chunk, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::ChunkIndex  Chunk;

/// @brief Field IndexInChunk, offset: 0x4, size: 0x4, def value: None
 int32_t  IndexInChunk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceInChunk, Chunk) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceInChunk, IndexInChunk) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceInChunk) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
