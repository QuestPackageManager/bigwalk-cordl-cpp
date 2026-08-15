#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Vector2Parameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Parameter)
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
class Vector2Parameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*, "UnityEngine.Rendering.PostProcessing", "Vector2Parameter");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>, UnityEngine.Vector2
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Vector2Parameter
class CORDL_TYPE Vector2Parameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief Method Interp, addr 0x181fd08b0, size 0x50, virtual true, abstract: false, final false
inline void Interp(::UnityEngine::Vector2  from, ::UnityEngine::Vector2  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::Vector2Parameter* New_ctor() ;

/// @brief Method .ctor, addr 0x181fd0900, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Implicit, addr 0x181fd0910, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  prop) ;

/// @brief Method op_Implicit, addr 0x181fd0930, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  prop) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2Parameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2Parameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2Parameter(Vector2Parameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Parameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2Parameter(Vector2Parameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18612};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Vector2Parameter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
