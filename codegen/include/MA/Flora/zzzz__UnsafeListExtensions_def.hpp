#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsafeListExtensions)
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct UnsafeList_1;
}
// Forward declare root types
namespace MA::Flora {
class UnsafeListExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::UnsafeListExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::UnsafeListExtensions*, "MA.Flora", "UnsafeListExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.UnsafeListExtensions
class CORDL_TYPE UnsafeListExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Pop(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeListExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeListExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeListExtensions(UnsafeListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeListExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeListExtensions(UnsafeListExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::UnsafeListExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
