#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/DisplayNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DisplayNameAttribute)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class DisplayNameAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute*, "UnityEngine.Rendering.PostProcessing", "DisplayNameAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.DisplayNameAttribute
class CORDL_TYPE DisplayNameAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field displayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

static inline ::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute* New_ctor(::StringW  displayName) ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  displayName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisplayNameAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisplayNameAttribute(DisplayNameAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisplayNameAttribute(DisplayNameAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18531};

/// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute, ___displayName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
