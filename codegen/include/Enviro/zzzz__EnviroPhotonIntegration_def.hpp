#pragma once
// IWYU pragma private; include "Enviro/EnviroPhotonIntegration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnviroPhotonIntegration)
// Forward declare root types
namespace Enviro {
class EnviroPhotonIntegration;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroPhotonIntegration*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroPhotonIntegration*, "Enviro", "EnviroPhotonIntegration");
// Dependencies UnityEngine.MonoBehaviour
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroPhotonIntegration
class CORDL_TYPE EnviroPhotonIntegration : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Enviro::EnviroPhotonIntegration* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroPhotonIntegration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroPhotonIntegration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroPhotonIntegration(EnviroPhotonIntegration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroPhotonIntegration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroPhotonIntegration(EnviroPhotonIntegration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroPhotonIntegration) == 0x20, "Size mismatch!");

} // namespace end def Enviro
