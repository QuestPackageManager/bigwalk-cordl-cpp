#pragma once
// IWYU pragma private; include "UnityEngine/GradientUsageAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(GradientUsageAttribute)
// Forward declare root types
namespace UnityEngine {
class GradientUsageAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::GradientUsageAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GradientUsageAttribute*, "UnityEngine", "GradientUsageAttribute");
// Dependencies UnityEngine.ColorSpace, UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GradientUsageAttribute
class CORDL_TYPE GradientUsageAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field colorSpace, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorSpace, put=__cordl_internal_set_colorSpace)) ::UnityEngine::ColorSpace  colorSpace;

/// @brief Field hdr, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_hdr, put=__cordl_internal_set_hdr)) bool  hdr;

static inline ::UnityEngine::GradientUsageAttribute* New_ctor(bool  hdr) ;

constexpr ::UnityEngine::ColorSpace const& __cordl_internal_get_colorSpace() const;

constexpr ::UnityEngine::ColorSpace& __cordl_internal_get_colorSpace() ;

constexpr bool const& __cordl_internal_get_hdr() const;

constexpr bool& __cordl_internal_get_hdr() ;

constexpr void __cordl_internal_set_colorSpace(::UnityEngine::ColorSpace  value) ;

constexpr void __cordl_internal_set_hdr(bool  value) ;

/// @brief Method .ctor, addr 0x182272b60, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  hdr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GradientUsageAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GradientUsageAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GradientUsageAttribute(GradientUsageAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GradientUsageAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GradientUsageAttribute(GradientUsageAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10643};

/// @brief Field hdr, offset: 0x11, size: 0x1, def value: None
 bool  ___hdr;

/// @brief Field colorSpace, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::ColorSpace  ___colorSpace;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GradientUsageAttribute, ___hdr) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GradientUsageAttribute, ___colorSpace) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GradientUsageAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
