#pragma once
// IWYU pragma private; include "MA/Flora/CellIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CellIndex)
namespace MA::Flora {
struct BlockIndex;
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
struct CellIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CellIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::CellIndex, "MA.Flora", "CellIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CellIndex
struct CORDL_TYPE CellIndex {
public:
// Declarations
 __declspec(property(get=get_BlockIndex)) ::MA::Flora::BlockIndex  BlockIndex;

 __declspec(property(get=get_IndexInBlock)) int32_t  IndexInBlock;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::CellIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::CellIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CellIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::CellIndex>*() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::CellIndex  other) ;

/// @brief Method Equals, addr 0x180645b00, size 0x60, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::CellIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18149b3e0, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_BlockIndex, addr 0x18149b430, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::BlockIndex get_BlockIndex() ;

/// @brief Method get_IndexInBlock, addr 0x18149b440, size 0x10, virtual false, abstract: false, final false
inline int32_t get_IndexInBlock() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::CellIndex get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::CellIndex>"
constexpr ::System::IComparable_1<::MA::Flora::CellIndex>* i___System__IComparable_1___MA__Flora__CellIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CellIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::CellIndex>* i___System__IEquatable_1___MA__Flora__CellIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::CellIndex  left, ::MA::Flora::CellIndex  right) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::CellIndex  cellIndex) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::CellIndex  left, ::MA::Flora::CellIndex  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr CellIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CellIndex(int32_t  Index) noexcept;

/// @brief Field LocalIndexMask offset 0xffffffff size 0x4
static constexpr int32_t  LocalIndexMask{static_cast<int32_t>(0x1ff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CellIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CellIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
