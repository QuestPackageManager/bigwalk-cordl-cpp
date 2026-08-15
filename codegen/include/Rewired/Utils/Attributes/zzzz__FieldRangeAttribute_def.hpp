#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/FieldRangeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FieldRangeAttribute)
// Forward declare root types
namespace Rewired::Utils::Attributes {
class FieldRangeAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Attributes::FieldRangeAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Attributes::FieldRangeAttribute*, "Rewired.Utils.Attributes", "FieldRangeAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Rewired::Utils::Attributes {
// Is value type: false
// CS Name: Rewired.Utils.Attributes.FieldRangeAttribute
class CORDL_TYPE FieldRangeAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field FFewYacCdQYufcmQzBGxtPlmmepL, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_FFewYacCdQYufcmQzBGxtPlmmepL, put=__cordl_internal_set_FFewYacCdQYufcmQzBGxtPlmmepL)) float_t  FFewYacCdQYufcmQzBGxtPlmmepL;

/// @brief Field RqRUVAfNIZUqAolQjIaXNofHQcCj, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_RqRUVAfNIZUqAolQjIaXNofHQcCj, put=__cordl_internal_set_RqRUVAfNIZUqAolQjIaXNofHQcCj)) int32_t  RqRUVAfNIZUqAolQjIaXNofHQcCj;

/// @brief Field SRFSYqJKDsbtEDbJIhscMOnQdoiG, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SRFSYqJKDsbtEDbJIhscMOnQdoiG, put=__cordl_internal_set_SRFSYqJKDsbtEDbJIhscMOnQdoiG)) float_t  SRFSYqJKDsbtEDbJIhscMOnQdoiG;

 __declspec(property(get=get_maxFloat)) float_t  maxFloat;

 __declspec(property(get=get_maxInt)) int32_t  maxInt;

 __declspec(property(get=get_minFloat)) float_t  minFloat;

 __declspec(property(get=get_minInt)) int32_t  minInt;

/// @brief Field pvMfOxFLEyOCONlGMLqzuyCaJVup, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pvMfOxFLEyOCONlGMLqzuyCaJVup, put=__cordl_internal_set_pvMfOxFLEyOCONlGMLqzuyCaJVup)) int32_t  pvMfOxFLEyOCONlGMLqzuyCaJVup;

static inline ::Rewired::Utils::Attributes::FieldRangeAttribute* New_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Attributes::FieldRangeAttribute* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr float_t const& __cordl_internal_get_FFewYacCdQYufcmQzBGxtPlmmepL() const;

constexpr float_t& __cordl_internal_get_FFewYacCdQYufcmQzBGxtPlmmepL() ;

constexpr int32_t const& __cordl_internal_get_RqRUVAfNIZUqAolQjIaXNofHQcCj() const;

constexpr int32_t& __cordl_internal_get_RqRUVAfNIZUqAolQjIaXNofHQcCj() ;

constexpr float_t const& __cordl_internal_get_SRFSYqJKDsbtEDbJIhscMOnQdoiG() const;

constexpr float_t& __cordl_internal_get_SRFSYqJKDsbtEDbJIhscMOnQdoiG() ;

constexpr int32_t const& __cordl_internal_get_pvMfOxFLEyOCONlGMLqzuyCaJVup() const;

constexpr int32_t& __cordl_internal_get_pvMfOxFLEyOCONlGMLqzuyCaJVup() ;

constexpr void __cordl_internal_set_FFewYacCdQYufcmQzBGxtPlmmepL(float_t  value) ;

constexpr void __cordl_internal_set_RqRUVAfNIZUqAolQjIaXNofHQcCj(int32_t  value) ;

constexpr void __cordl_internal_set_SRFSYqJKDsbtEDbJIhscMOnQdoiG(float_t  value) ;

constexpr void __cordl_internal_set_pvMfOxFLEyOCONlGMLqzuyCaJVup(int32_t  value) ;

/// @brief Method .ctor, addr 0x181952360, size 0x50, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181952310, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_maxFloat, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_maxFloat() ;

/// @brief Method get_maxInt, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_maxInt() ;

/// @brief Method get_minFloat, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_minFloat() ;

/// @brief Method get_minInt, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_minInt() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldRangeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldRangeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldRangeAttribute(FieldRangeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldRangeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldRangeAttribute(FieldRangeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3086};

/// @brief Field FFewYacCdQYufcmQzBGxtPlmmepL, offset: 0x14, size: 0x4, def value: None
 float_t  ___FFewYacCdQYufcmQzBGxtPlmmepL;

/// @brief Field SRFSYqJKDsbtEDbJIhscMOnQdoiG, offset: 0x18, size: 0x4, def value: None
 float_t  ___SRFSYqJKDsbtEDbJIhscMOnQdoiG;

/// @brief Field pvMfOxFLEyOCONlGMLqzuyCaJVup, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___pvMfOxFLEyOCONlGMLqzuyCaJVup;

/// @brief Field RqRUVAfNIZUqAolQjIaXNofHQcCj, offset: 0x20, size: 0x4, def value: None
 int32_t  ___RqRUVAfNIZUqAolQjIaXNofHQcCj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Attributes::FieldRangeAttribute, ___FFewYacCdQYufcmQzBGxtPlmmepL) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Attributes::FieldRangeAttribute, ___SRFSYqJKDsbtEDbJIhscMOnQdoiG) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Attributes::FieldRangeAttribute, ___pvMfOxFLEyOCONlGMLqzuyCaJVup) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Attributes::FieldRangeAttribute, ___RqRUVAfNIZUqAolQjIaXNofHQcCj) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Attributes::FieldRangeAttribute) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils::Attributes
