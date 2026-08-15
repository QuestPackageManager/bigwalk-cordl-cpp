#pragma once
// IWYU pragma private; include "GlobalNamespace/ConductorLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConductorLight)
// Forward declare root types
namespace GlobalNamespace {
class ConductorLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConductorLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConductorLight*, "", "ConductorLight");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConductorLight
class CORDL_TYPE ConductorLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field promptSystem, offset 0x48, size 0x28 
 __declspec(property(get=__cordl_internal_get_promptSystem, put=__cordl_internal_set_promptSystem)) ::GlobalNamespace::PeckSystemReference  promptSystem;

/// @brief Field showSystem, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_showSystem, put=__cordl_internal_set_showSystem)) ::GlobalNamespace::PeckSystemReference  showSystem;

static inline ::GlobalNamespace::ConductorLight* New_ctor() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_promptSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_promptSystem() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_showSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_showSystem() ;

constexpr void __cordl_internal_set_promptSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_showSystem(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConductorLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConductorLight", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConductorLight(ConductorLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConductorLight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConductorLight(ConductorLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5030};

/// @brief Field showSystem, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___showSystem;

/// @brief Field promptSystem, offset: 0x48, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___promptSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConductorLight, ___showSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConductorLight, ___promptSystem) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConductorLight) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
