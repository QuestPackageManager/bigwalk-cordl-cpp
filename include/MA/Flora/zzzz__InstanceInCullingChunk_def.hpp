#pragma once
// IWYU pragma private; include "MA/Flora/InstanceInCullingChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceInCullingChunk)
namespace MA::Flora {
struct CullingChunkIndex;
}
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
struct InstanceInCullingChunk;
}
// Write type traits
MARK_VAL_T(::MA::Flora::InstanceInCullingChunk);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceInCullingChunk, "MA.Flora", "InstanceInCullingChunk");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceInCullingChunk
struct CORDL_TYPE InstanceInCullingChunk {
public:
// Declarations
 __declspec(property(get=get_Chunk)) ::MA::Flora::CullingChunkIndex  Chunk;

 __declspec(property(get=get_IndexInChunk)) int32_t  IndexInChunk;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr operator  ::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::InstanceInCullingChunk  other) ;

/// @brief Method Equals, addr 0x1814bfe20, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::InstanceInCullingChunk  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1814bfe50, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x18149bbb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  chunk, int32_t  indexInChunk) ;

/// @brief Method get_Chunk, addr 0x18149bbc0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::CullingChunkIndex get_Chunk() ;

/// @brief Method get_IndexInChunk, addr 0x18149bbd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_IndexInChunk() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::InstanceInCullingChunk get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>* i___System__IComparable_1___MA__Flora__InstanceInCullingChunk_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>* i___System__IEquatable_1___MA__Flora__InstanceInCullingChunk_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceInCullingChunk() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InstanceInCullingChunk(uint32_t  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13107};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Data, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceInCullingChunk, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceInCullingChunk) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
