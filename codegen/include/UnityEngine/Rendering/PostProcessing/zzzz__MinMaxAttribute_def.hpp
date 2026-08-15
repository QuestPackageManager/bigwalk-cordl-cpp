#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MinMaxAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MinMaxAttribute)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class MinMaxAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::MinMaxAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MinMaxAttribute*, "UnityEngine.Rendering.PostProcessing", "MinMaxAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.MinMaxAttribute
class CORDL_TYPE MinMaxAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field max, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

/// @brief Field min, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

static inline ::UnityEngine::Rendering::PostProcessing::MinMaxAttribute* New_ctor(float_t  min, float_t  max) ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr void __cordl_internal_set_max(float_t  value) ;

constexpr void __cordl_internal_set_min(float_t  value) ;

/// @brief Method .ctor, addr 0x181fb7900, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  min, float_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinMaxAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinMaxAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinMaxAttribute(MinMaxAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinMaxAttribute(MinMaxAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18534};

/// @brief Field min, offset: 0x10, size: 0x4, def value: None
 float_t  ___min;

/// @brief Field max, offset: 0x14, size: 0x4, def value: None
 float_t  ___max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MinMaxAttribute, ___min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MinMaxAttribute, ___max) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MinMaxAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
