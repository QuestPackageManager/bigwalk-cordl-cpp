#pragma once
// IWYU pragma private; include "Mirror/SyncVarAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SyncVarAttribute)
// Forward declare root types
namespace Mirror {
class SyncVarAttribute;
}
// Write type traits
MARK_REF_T(::Mirror::SyncVarAttribute*);
DEFINE_IL2CPP_CLASS(::Mirror::SyncVarAttribute*, "Mirror", "SyncVarAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SyncVarAttribute
class CORDL_TYPE SyncVarAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field hook, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_hook, put=__cordl_internal_set_hook)) ::StringW  hook;

static inline ::Mirror::SyncVarAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_hook() const;

constexpr ::StringW& __cordl_internal_get_hook() ;

constexpr void __cordl_internal_set_hook(::StringW  value) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncVarAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncVarAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncVarAttribute(SyncVarAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncVarAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncVarAttribute(SyncVarAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18260};

/// @brief Field hook, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___hook;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SyncVarAttribute, ___hook) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::SyncVarAttribute) == 0x20, "Size mismatch!");

} // namespace end def Mirror
