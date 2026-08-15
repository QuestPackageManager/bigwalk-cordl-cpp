#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerObjectToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerObjectToggle)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerObjectToggle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TriggerObjectToggle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerObjectToggle*, "", "TriggerObjectToggle");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerObjectToggle
class CORDL_TYPE TriggerObjectToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Reverse, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Reverse, put=__cordl_internal_set_Reverse)) bool  Reverse;

/// @brief Field ToggleObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggleObjects, put=__cordl_internal_set_ToggleObjects)) ::ArrayW<::UnityW<::UnityEngine::Object>>  ToggleObjects;

/// @brief Field _inZoneCounter, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__inZoneCounter, put=__cordl_internal_set__inZoneCounter)) int32_t  _inZoneCounter;

static inline ::GlobalNamespace::TriggerObjectToggle* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803e1bd0, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnter, addr 0x1803e1c00, size 0x100, virtual false, abstract: false, final false
inline void OnEnter() ;

/// @brief Method OnExit, addr 0x1803e1d00, size 0xf0, virtual false, abstract: false, final false
inline void OnExit() ;

/// @brief Method OnTriggerEnter, addr 0x1803e1df0, size 0x140, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x1803e1f30, size 0x60, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_Reverse() const;

constexpr bool& __cordl_internal_get_Reverse() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_ToggleObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_ToggleObjects() ;

constexpr int32_t const& __cordl_internal_get__inZoneCounter() const;

constexpr int32_t& __cordl_internal_get__inZoneCounter() ;

constexpr void __cordl_internal_set_Reverse(bool  value) ;

constexpr void __cordl_internal_set_ToggleObjects(::ArrayW<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set__inZoneCounter(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerObjectToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerObjectToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerObjectToggle(TriggerObjectToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerObjectToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerObjectToggle(TriggerObjectToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4878};

/// @brief Field ToggleObjects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Object>>  ___ToggleObjects;

/// @brief Field Reverse, offset: 0x28, size: 0x1, def value: None
 bool  ___Reverse;

/// @brief Field _inZoneCounter, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____inZoneCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerObjectToggle, ___ToggleObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerObjectToggle, ___Reverse) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerObjectToggle, ____inZoneCounter) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerObjectToggle) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
