#pragma once
// IWYU pragma private; include "GlobalNamespace/PropKernal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PropKernal)
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class PropKernal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropKernal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropKernal*, "", "PropKernal");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropKernal
class CORDL_TYPE PropKernal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field prop, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prop, put=__cordl_internal_set_prop)) ::UnityW<::GlobalNamespace::Prop>  prop;

static inline ::GlobalNamespace::PropKernal* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_prop() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_prop() ;

constexpr void __cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropKernal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropKernal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropKernal(PropKernal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropKernal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropKernal(PropKernal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5582};

/// @brief Field prop, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___prop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropKernal, ___prop) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropKernal) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
