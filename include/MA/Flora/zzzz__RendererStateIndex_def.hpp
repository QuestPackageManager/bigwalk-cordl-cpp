#pragma once
// IWYU pragma private; include "MA/Flora/RendererStateIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererStateIndex)
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
struct RendererStateIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::RendererStateIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::RendererStateIndex, "MA.Flora", "RendererStateIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.RendererStateIndex
struct CORDL_TYPE RendererStateIndex {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::RendererStateIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::RendererStateIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::RendererStateIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::RendererStateIndex>*() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::RendererStateIndex  other) ;

/// @brief Method Equals, addr 0x1814a7a00, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::RendererStateIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1814a7a70, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_IsCreated, addr 0x180785420, size 0x60, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::RendererStateIndex get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::RendererStateIndex>"
constexpr ::System::IComparable_1<::MA::Flora::RendererStateIndex>* i___System__IComparable_1___MA__Flora__RendererStateIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::RendererStateIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::RendererStateIndex>* i___System__IEquatable_1___MA__Flora__RendererStateIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::RendererStateIndex  a, ::MA::Flora::RendererStateIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::RendererStateIndex op_Implicit___MA__Flora__RendererStateIndex(int32_t  index) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::RendererStateIndex  index) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::RendererStateIndex  a, ::MA::Flora::RendererStateIndex  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr RendererStateIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RendererStateIndex(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::RendererStateIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::RendererStateIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
