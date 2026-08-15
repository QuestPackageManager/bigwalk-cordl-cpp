#pragma once
// IWYU pragma private; include "MA/Flora/BatchDomainIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchDomainIndex)
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
struct BatchDomainIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchDomainIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchDomainIndex, "MA.Flora", "BatchDomainIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchDomainIndex
struct CORDL_TYPE BatchDomainIndex {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::BatchDomainIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::BatchDomainIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchDomainIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::BatchDomainIndex>*() ;

/// @brief Method CompareTo, addr 0x181453a90, size 0x10, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::BatchDomainIndex  other) ;

/// @brief Method Equals, addr 0x180673f20, size 0x60, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::BatchDomainIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181453aa0, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_IsCreated, addr 0x180785420, size 0x60, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::BatchDomainIndex get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::BatchDomainIndex>"
constexpr ::System::IComparable_1<::MA::Flora::BatchDomainIndex>* i___System__IComparable_1___MA__Flora__BatchDomainIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchDomainIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchDomainIndex>* i___System__IEquatable_1___MA__Flora__BatchDomainIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::BatchDomainIndex  a, ::MA::Flora::BatchDomainIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::BatchDomainIndex  domainIndex) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::BatchDomainIndex  a, ::MA::Flora::BatchDomainIndex  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr BatchDomainIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BatchDomainIndex(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12913};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchDomainIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchDomainIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
