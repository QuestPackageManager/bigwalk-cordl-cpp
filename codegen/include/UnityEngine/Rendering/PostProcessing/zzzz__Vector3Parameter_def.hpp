#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Vector3Parameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Parameter)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Vector3Parameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*, "UnityEngine.Rendering.PostProcessing", "Vector3Parameter");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>, UnityEngine.Vector3
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Vector3Parameter
class CORDL_TYPE Vector3Parameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityEngine::Vector3> {
public:
// Declarations
/// @brief Method Interp, addr 0x181fd0950, size 0x50, virtual true, abstract: false, final false
inline void Interp(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::Vector3Parameter* New_ctor() ;

/// @brief Method .ctor, addr 0x181fd09a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Implicit, addr 0x181fd09f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*  prop) ;

/// @brief Method op_Implicit, addr 0x181fd09b0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Rendering::PostProcessing::Vector3Parameter*  prop) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector3Parameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector3Parameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3Parameter(Vector3Parameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Parameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3Parameter(Vector3Parameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18613};

/// @brief Size padding 0x28 - 0x20 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Vector3Parameter) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
