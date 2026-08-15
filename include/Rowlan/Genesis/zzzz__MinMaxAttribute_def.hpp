#pragma once
// IWYU pragma private; include "Rowlan/Genesis/MinMaxAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MinMaxAttribute)
// Forward declare root types
namespace Rowlan::Genesis {
class MinMaxAttribute;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::MinMaxAttribute*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::MinMaxAttribute*, "Rowlan.Genesis", "MinMaxAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.MinMaxAttribute
class CORDL_TYPE MinMaxAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field max, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

/// @brief Field maxDigits, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDigits, put=__cordl_internal_set_maxDigits)) int32_t  maxDigits;

/// @brief Field min, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

/// @brief Field useGuiContentFix, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGuiContentFix, put=__cordl_internal_set_useGuiContentFix)) bool  useGuiContentFix;

static inline ::Rowlan::Genesis::MinMaxAttribute* New_ctor(float_t  min, float_t  max, bool  useGuiContentFix, int32_t  maxDigits) ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr int32_t const& __cordl_internal_get_maxDigits() const;

constexpr int32_t& __cordl_internal_get_maxDigits() ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr bool const& __cordl_internal_get_useGuiContentFix() const;

constexpr bool& __cordl_internal_get_useGuiContentFix() ;

constexpr void __cordl_internal_set_max(float_t  value) ;

constexpr void __cordl_internal_set_maxDigits(int32_t  value) ;

constexpr void __cordl_internal_set_min(float_t  value) ;

constexpr void __cordl_internal_set_useGuiContentFix(bool  value) ;

/// @brief Method .ctor, addr 0x181abecd0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(float_t  min, float_t  max, bool  useGuiContentFix, int32_t  maxDigits) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20369};

/// @brief Field min, offset: 0x14, size: 0x4, def value: None
 float_t  ___min;

/// @brief Field max, offset: 0x18, size: 0x4, def value: None
 float_t  ___max;

/// @brief Field useGuiContentFix, offset: 0x1c, size: 0x1, def value: None
 bool  ___useGuiContentFix;

/// @brief Field maxDigits, offset: 0x20, size: 0x4, def value: None
 int32_t  ___maxDigits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::MinMaxAttribute, ___min) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::MinMaxAttribute, ___max) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::MinMaxAttribute, ___useGuiContentFix) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::MinMaxAttribute, ___maxDigits) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::MinMaxAttribute) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis
