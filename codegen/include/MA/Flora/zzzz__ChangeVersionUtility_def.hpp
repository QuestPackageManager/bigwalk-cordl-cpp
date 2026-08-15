#pragma once
// IWYU pragma private; include "MA/Flora/ChangeVersionUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeVersionUtility)
// Forward declare root types
namespace MA::Flora {
class ChangeVersionUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::ChangeVersionUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::ChangeVersionUtility*, "MA.Flora", "ChangeVersionUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ChangeVersionUtility
class CORDL_TYPE ChangeVersionUtility : public ::System::Object {
public:
// Declarations
/// @brief Method DidChange, addr 0x18145b790, size 0x160, virtual false, abstract: false, final false
static inline bool DidChange(uint32_t  changeVersion, uint32_t  currentVersion) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeVersionUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeVersionUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeVersionUtility(ChangeVersionUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeVersionUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeVersionUtility(ChangeVersionUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ChangeVersionUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
