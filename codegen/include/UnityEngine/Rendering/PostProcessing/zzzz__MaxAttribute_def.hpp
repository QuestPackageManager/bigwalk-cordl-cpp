#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MaxAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaxAttribute)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class MaxAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::MaxAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MaxAttribute*, "UnityEngine.Rendering.PostProcessing", "MaxAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.MaxAttribute
class CORDL_TYPE MaxAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field max, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

static inline ::UnityEngine::Rendering::PostProcessing::MaxAttribute* New_ctor(float_t  max) ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr void __cordl_internal_set_max(float_t  value) ;

/// @brief Method .ctor, addr 0x180346aa0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaxAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaxAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaxAttribute(MaxAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaxAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaxAttribute(MaxAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18532};

/// @brief Field max, offset: 0x10, size: 0x4, def value: None
 float_t  ___max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MaxAttribute, ___max) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MaxAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
