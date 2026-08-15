#pragma once
// IWYU pragma private; include "MA/Flora/CullingChunkIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingChunkIndex)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct CullingChunkIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CullingChunkIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingChunkIndex, "MA.Flora", "CullingChunkIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingChunkIndex
struct CORDL_TYPE CullingChunkIndex {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CullingChunkIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::CullingChunkIndex>*() ;

/// @brief Method AsInstanceOffset, addr 0x181453af0, size 0x10, virtual false, abstract: false, final false
inline int32_t AsInstanceOffset() ;

/// @brief Method Equals, addr 0x18149ca70, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::CullingChunkIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18149b690, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::CullingChunkIndex get_None() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CullingChunkIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::CullingChunkIndex>* i___System__IEquatable_1___MA__Flora__CullingChunkIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::CullingChunkIndex  a, ::MA::Flora::CullingChunkIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::CullingChunkIndex  x) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::CullingChunkIndex  a, ::MA::Flora::CullingChunkIndex  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingChunkIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CullingChunkIndex(int32_t  Index) noexcept;

/// @brief Field InstancesPerChunkShift offset 0xffffffff size 0x4
static constexpr int32_t  InstancesPerChunkShift{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingChunkIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingChunkIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
