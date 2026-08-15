#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Vector4Parameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector4Parameter)
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
class Vector4Parameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*, "UnityEngine.Rendering.PostProcessing", "Vector4Parameter");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>, UnityEngine.Vector4
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Vector4Parameter
class CORDL_TYPE Vector4Parameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityEngine::Vector4> {
public:
// Declarations
/// @brief Method Interp, addr 0x181fbf140, size 0x70, virtual true, abstract: false, final false
inline void Interp(::UnityEngine::Vector4  from, ::UnityEngine::Vector4  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::Vector4Parameter* New_ctor() ;

/// @brief Method .ctor, addr 0x181fbf1b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Implicit, addr 0x181fd0a10, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  prop) ;

/// @brief Method op_Implicit, addr 0x181fd0a30, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Rendering::PostProcessing::Vector4Parameter*  prop) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector4Parameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector4Parameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector4Parameter(Vector4Parameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector4Parameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector4Parameter(Vector4Parameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Vector4Parameter) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
