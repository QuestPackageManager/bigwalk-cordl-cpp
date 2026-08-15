#pragma once
// IWYU pragma private; include "MA/Flora/MetadataValueUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetadataValueUtility)
namespace UnityEngine::Rendering {
struct MetadataValue;
}
// Forward declare root types
namespace MA::Flora {
class MetadataValueUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::MetadataValueUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::MetadataValueUtility*, "MA.Flora", "MetadataValueUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.MetadataValueUtility
class CORDL_TYPE MetadataValueUtility : public ::System::Object {
public:
// Declarations
/// @brief Method Address, addr 0x18145f560, size 0x10, virtual false, abstract: false, final false
static inline uint32_t Address(::UnityEngine::Rendering::MetadataValue  metadataValue) ;

/// @brief Method IsOverriden, addr 0x18145f570, size 0x10, virtual false, abstract: false, final false
static inline bool IsOverriden(::UnityEngine::Rendering::MetadataValue  metadataValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetadataValueUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetadataValueUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetadataValueUtility(MetadataValueUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetadataValueUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetadataValueUtility(MetadataValueUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::MetadataValueUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
