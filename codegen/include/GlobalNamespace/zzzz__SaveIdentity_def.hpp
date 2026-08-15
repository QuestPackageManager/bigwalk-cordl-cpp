#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveIdentity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SaveIdentity)
// Forward declare root types
namespace GlobalNamespace {
class SaveIdentity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SaveIdentity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveIdentity*, "", "SaveIdentity");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaveIdentity
class CORDL_TYPE SaveIdentity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field saveGuid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveGuid, put=__cordl_internal_set_saveGuid)) ::StringW  saveGuid;

static inline ::GlobalNamespace::SaveIdentity* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_saveGuid() const;

constexpr ::StringW& __cordl_internal_get_saveGuid() ;

constexpr void __cordl_internal_set_saveGuid(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveIdentity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveIdentity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveIdentity(SaveIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveIdentity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveIdentity(SaveIdentity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5600};

/// @brief Field saveGuid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___saveGuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveIdentity, ___saveGuid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveIdentity) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
