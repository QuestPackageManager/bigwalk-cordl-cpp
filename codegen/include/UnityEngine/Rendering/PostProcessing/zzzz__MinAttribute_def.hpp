#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MinAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MinAttribute)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class MinAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::MinAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MinAttribute*, "UnityEngine.Rendering.PostProcessing", "MinAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.MinAttribute
class CORDL_TYPE MinAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field min, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

static inline ::UnityEngine::Rendering::PostProcessing::MinAttribute* New_ctor(float_t  min) ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr void __cordl_internal_set_min(float_t  value) ;

/// @brief Method .ctor, addr 0x180346aa0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  min) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinAttribute(MinAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinAttribute(MinAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18533};

/// @brief Field min, offset: 0x10, size: 0x4, def value: None
 float_t  ___min;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MinAttribute, ___min) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MinAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
