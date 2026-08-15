#pragma once
// IWYU pragma private; include "Animancer/IMotion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IMotion)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class IMotion;
}
// Write type traits
MARK_REF_T(::Animancer::IMotion*);
DEFINE_IL2CPP_CLASS(::Animancer::IMotion*, "Animancer", "IMotion");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IMotion
class CORDL_TYPE IMotion {
public:
// Declarations
 __declspec(property(get=get_AverageAngularSpeed)) float_t  AverageAngularSpeed;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

/// @brief Method get_AverageAngularSpeed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_AverageAngularSpeed() ;

/// @brief Method get_AverageVelocity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

// Ctor Parameters [CppParam { name: "", ty: "IMotion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMotion(IMotion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18141};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
