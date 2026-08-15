#pragma once
// IWYU pragma private; include "Enviro/EnviroConfigurationCreation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroConfigurationCreation)
namespace Enviro {
class EnviroConfiguration;
}
// Forward declare root types
namespace Enviro {
class EnviroConfigurationCreation;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroConfigurationCreation*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroConfigurationCreation*, "Enviro", "EnviroConfigurationCreation");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroConfigurationCreation
class CORDL_TYPE EnviroConfigurationCreation : public ::System::Object {
public:
// Declarations
/// @brief Method CreateMyAsset, addr 0x1805fe110, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::Enviro::EnviroConfiguration> CreateMyAsset() ;

static inline ::Enviro::EnviroConfigurationCreation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroConfigurationCreation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroConfigurationCreation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroConfigurationCreation(EnviroConfigurationCreation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroConfigurationCreation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroConfigurationCreation(EnviroConfigurationCreation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18405};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroConfigurationCreation) == 0x10, "Size mismatch!");

} // namespace end def Enviro
