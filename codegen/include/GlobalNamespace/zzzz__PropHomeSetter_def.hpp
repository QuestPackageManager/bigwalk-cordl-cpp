#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHomeSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaveableHomeName_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PropHomeSetter)
namespace GlobalNamespace {
class PropHomeBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHomeSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHomeSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHomeSetter*, "", "PropHomeSetter");
// Dependencies SaveableHomeName, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHomeSetter
class CORDL_TYPE PropHomeSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field propHomeBlock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHomeBlock, put=__cordl_internal_set_propHomeBlock)) ::UnityW<::GlobalNamespace::PropHomeBlock>  propHomeBlock;

/// @brief Field savableHomeName, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_savableHomeName, put=__cordl_internal_set_savableHomeName)) ::GlobalNamespace::SaveableHomeName  savableHomeName;

static inline ::GlobalNamespace::PropHomeSetter* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::PropHomeBlock> const& __cordl_internal_get_propHomeBlock() const;

constexpr ::UnityW<::GlobalNamespace::PropHomeBlock>& __cordl_internal_get_propHomeBlock() ;

constexpr ::GlobalNamespace::SaveableHomeName const& __cordl_internal_get_savableHomeName() const;

constexpr ::GlobalNamespace::SaveableHomeName& __cordl_internal_get_savableHomeName() ;

constexpr void __cordl_internal_set_propHomeBlock(::UnityW<::GlobalNamespace::PropHomeBlock>  value) ;

constexpr void __cordl_internal_set_savableHomeName(::GlobalNamespace::SaveableHomeName  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHomeSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHomeSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHomeSetter(PropHomeSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHomeSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHomeSetter(PropHomeSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4959};

/// @brief Field propHomeBlock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHomeBlock>  ___propHomeBlock;

/// @brief Field savableHomeName, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SaveableHomeName  ___savableHomeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHomeSetter, ___propHomeBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeSetter, ___savableHomeName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHomeSetter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
