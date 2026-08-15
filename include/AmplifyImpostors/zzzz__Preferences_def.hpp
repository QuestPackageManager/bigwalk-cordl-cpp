#pragma once
// IWYU pragma private; include "AmplifyImpostors/Preferences.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Preferences)
// Forward declare root types
namespace AmplifyImpostors {
class Preferences;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::Preferences*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::Preferences*, "AmplifyImpostors", "Preferences");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.Preferences
class CORDL_TYPE Preferences : public ::System::Object {
public:
// Declarations
static inline ::AmplifyImpostors::Preferences* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Preferences() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Preferences", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Preferences(Preferences && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Preferences", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Preferences(Preferences const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20968};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::Preferences) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
