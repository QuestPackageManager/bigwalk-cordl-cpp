#pragma once
// IWYU pragma private; include "Enviro/EnviroQualityCreation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroQualityCreation)
namespace Enviro {
class EnviroQuality;
}
// Forward declare root types
namespace Enviro {
class EnviroQualityCreation;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroQualityCreation*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroQualityCreation*, "Enviro", "EnviroQualityCreation");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroQualityCreation
class CORDL_TYPE EnviroQualityCreation : public ::System::Object {
public:
// Declarations
/// @brief Method CreateMyAsset, addr 0x180615c10, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::Enviro::EnviroQuality> CreateMyAsset() ;

static inline ::Enviro::EnviroQualityCreation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroQualityCreation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroQualityCreation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroQualityCreation(EnviroQualityCreation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroQualityCreation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroQualityCreation(EnviroQualityCreation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroQualityCreation) == 0x10, "Size mismatch!");

} // namespace end def Enviro
