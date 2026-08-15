#pragma once
// IWYU pragma private; include "GlobalNamespace/FunctionButtonAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FunctionButtonAttribute)
// Forward declare root types
namespace GlobalNamespace {
class FunctionButtonAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FunctionButtonAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FunctionButtonAttribute*, "", "FunctionButtonAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: FunctionButtonAttribute
class CORDL_TYPE FunctionButtonAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field Label, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Label, put=__cordl_internal_set_Label)) ::StringW  Label;

static inline ::GlobalNamespace::FunctionButtonAttribute* New_ctor(::StringW  label) ;

constexpr ::StringW const& __cordl_internal_get_Label() const;

constexpr ::StringW& __cordl_internal_get_Label() ;

constexpr void __cordl_internal_set_Label(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818382a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  label) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FunctionButtonAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FunctionButtonAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FunctionButtonAttribute(FunctionButtonAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FunctionButtonAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FunctionButtonAttribute(FunctionButtonAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21050};

/// @brief Field Label, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Label;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FunctionButtonAttribute, ___Label) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FunctionButtonAttribute) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
