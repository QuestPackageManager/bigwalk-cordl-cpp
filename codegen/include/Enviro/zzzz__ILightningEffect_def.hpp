#pragma once
// IWYU pragma private; include "Enviro/ILightningEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILightningEffect)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Enviro {
class ILightningEffect;
}
// Write type traits
MARK_REF_T(::Enviro::ILightningEffect*);
DEFINE_IL2CPP_CLASS(::Enviro::ILightningEffect*, "Enviro", "ILightningEffect");
// Dependencies 
namespace Enviro {
// Is value type: false
// CS Name: Enviro.ILightningEffect
class CORDL_TYPE ILightningEffect {
public:
// Declarations
/// @brief Method CastBolt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CastBolt(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  target) ;

// Ctor Parameters [CppParam { name: "", ty: "ILightningEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILightningEffect(ILightningEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Enviro
