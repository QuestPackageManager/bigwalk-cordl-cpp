#pragma once
// IWYU pragma private; include "GlobalNamespace/EnviroModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(EnviroModule)
// Forward declare root types
namespace GlobalNamespace {
class EnviroModule;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnviroModule*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnviroModule*, "", "EnviroModule");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnviroModule
class CORDL_TYPE EnviroModule : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field active, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field showModuleInspector, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_showModuleInspector, put=__cordl_internal_set_showModuleInspector)) bool  showModuleInspector;

/// @brief Field showSaveLoad, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSaveLoad, put=__cordl_internal_set_showSaveLoad)) bool  showSaveLoad;

/// @brief Method Disable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

static inline ::GlobalNamespace::EnviroModule* New_ctor() ;

/// @brief Method UpdateModule, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr bool const& __cordl_internal_get_showModuleInspector() const;

constexpr bool& __cordl_internal_get_showModuleInspector() ;

constexpr bool const& __cordl_internal_get_showSaveLoad() const;

constexpr bool& __cordl_internal_get_showSaveLoad() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_showModuleInspector(bool  value) ;

constexpr void __cordl_internal_set_showSaveLoad(bool  value) ;

/// @brief Method .ctor, addr 0x1805fda20, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroModule(EnviroModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroModule(EnviroModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18401};

/// @brief Field showModuleInspector, offset: 0x18, size: 0x1, def value: None
 bool  ___showModuleInspector;

/// @brief Field showSaveLoad, offset: 0x19, size: 0x1, def value: None
 bool  ___showSaveLoad;

/// @brief Field active, offset: 0x1a, size: 0x1, def value: None
 bool  ___active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnviroModule, ___showModuleInspector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnviroModule, ___showSaveLoad) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnviroModule, ___active) == 0x1a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnviroModule) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
