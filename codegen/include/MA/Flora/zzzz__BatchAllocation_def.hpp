#pragma once
// IWYU pragma private; include "MA/Flora/BatchAllocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchAllocation)
namespace MA::Flora {
struct BatchDomainIndex;
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
struct BatchAllocation;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchAllocation);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchAllocation, "MA.Flora", "BatchAllocation");
// Dependencies MA.Flora.BatchDomainIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchAllocation
struct CORDL_TYPE BatchAllocation {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchAllocation>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::BatchAllocation>*() ;

/// @brief Method Equals, addr 0x181455d00, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181455cb0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::BatchAllocation  other) ;

/// @brief Method GetHashCode, addr 0x181455d90, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0x181455db0, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method .ctor, addr 0x1805d74c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::BatchDomainIndex  domain, int32_t  offset, int32_t  count) ;

/// @brief Method get_None, addr 0x181455dd0, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::BatchAllocation get_None() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchAllocation>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchAllocation>* i___System__IEquatable_1___MA__Flora__BatchAllocation_() ;

/// @brief Method op_Equality, addr 0x181455de0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::BatchAllocation  a, ::MA::Flora::BatchAllocation  b) ;

/// @brief Method op_Inequality, addr 0x181455e20, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::BatchAllocation  a, ::MA::Flora::BatchAllocation  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr BatchAllocation() ;

// Ctor Parameters [CppParam { name: "Domain", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BatchAllocation(::MA::Flora::BatchDomainIndex  Domain, int32_t  Offset, int32_t  Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Domain, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::BatchDomainIndex  Domain;

/// @brief Field Offset, offset: 0x4, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field Length, offset: 0x8, size: 0x4, def value: None
 int32_t  Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchAllocation, Domain) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchAllocation, Offset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchAllocation, Length) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchAllocation) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
