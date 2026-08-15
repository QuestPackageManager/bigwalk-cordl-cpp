#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CameraTrigger)
namespace GlobalNamespace {
class CameraTriggerController;
}
namespace GlobalNamespace {
class CameraTriggerEventHandler;
}
namespace GlobalNamespace {
class CameraTriggerRemoveHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CameraTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraTrigger*, "", "CameraTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraTrigger
class CORDL_TYPE CameraTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnEnter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::GlobalNamespace::CameraTriggerEventHandler*  OnEnter;

/// @brief Field OnExit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnExit, put=__cordl_internal_set_OnExit)) ::GlobalNamespace::CameraTriggerEventHandler*  OnExit;

/// @brief Field OnRemove, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRemove, put=__cordl_internal_set_OnRemove)) ::GlobalNamespace::CameraTriggerRemoveHandler*  OnRemove;

/// @brief Method EnterTrigger, addr 0x1803e3d30, size 0x20, virtual false, abstract: false, final false
inline void EnterTrigger(::GlobalNamespace::CameraTriggerController*  controller) ;

/// @brief Method ExitTrigger, addr 0x1803e3d50, size 0x20, virtual false, abstract: false, final false
inline void ExitTrigger(::GlobalNamespace::CameraTriggerController*  controller) ;

static inline ::GlobalNamespace::CameraTrigger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803e3d70, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803e3d90, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

constexpr ::GlobalNamespace::CameraTriggerEventHandler* const& __cordl_internal_get_OnEnter() const;

constexpr ::GlobalNamespace::CameraTriggerEventHandler*& __cordl_internal_get_OnEnter() ;

constexpr ::GlobalNamespace::CameraTriggerEventHandler* const& __cordl_internal_get_OnExit() const;

constexpr ::GlobalNamespace::CameraTriggerEventHandler*& __cordl_internal_get_OnExit() ;

constexpr ::GlobalNamespace::CameraTriggerRemoveHandler* const& __cordl_internal_get_OnRemove() const;

constexpr ::GlobalNamespace::CameraTriggerRemoveHandler*& __cordl_internal_get_OnRemove() ;

constexpr void __cordl_internal_set_OnEnter(::GlobalNamespace::CameraTriggerEventHandler*  value) ;

constexpr void __cordl_internal_set_OnExit(::GlobalNamespace::CameraTriggerEventHandler*  value) ;

constexpr void __cordl_internal_set_OnRemove(::GlobalNamespace::CameraTriggerRemoveHandler*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnEnter, addr 0x1803e3df0, size 0x80, virtual false, abstract: false, final false
inline void add_OnEnter(::GlobalNamespace::CameraTriggerEventHandler*  value) ;

/// @brief Method add_OnExit, addr 0x1803e3e70, size 0x80, virtual false, abstract: false, final false
inline void add_OnExit(::GlobalNamespace::CameraTriggerEventHandler*  value) ;

/// @brief Method add_OnRemove, addr 0x1803e3ef0, size 0x80, virtual false, abstract: false, final false
inline void add_OnRemove(::GlobalNamespace::CameraTriggerRemoveHandler*  value) ;

/// @brief Method remove_OnEnter, addr 0x1803e3f70, size 0x80, virtual false, abstract: false, final false
inline void remove_OnEnter(::GlobalNamespace::CameraTriggerEventHandler*  value) ;

/// @brief Method remove_OnExit, addr 0x1803e3ff0, size 0x80, virtual false, abstract: false, final false
inline void remove_OnExit(::GlobalNamespace::CameraTriggerEventHandler*  value) ;

/// @brief Method remove_OnRemove, addr 0x1803e4070, size 0x80, virtual false, abstract: false, final false
inline void remove_OnRemove(::GlobalNamespace::CameraTriggerRemoveHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraTrigger(CameraTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraTrigger(CameraTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4975};

/// @brief Field OnEnter, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::CameraTriggerEventHandler*  ___OnEnter;

/// @brief Field OnExit, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CameraTriggerEventHandler*  ___OnExit;

/// @brief Field OnRemove, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CameraTriggerRemoveHandler*  ___OnRemove;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraTrigger, ___OnEnter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraTrigger, ___OnExit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraTrigger, ___OnRemove) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraTrigger) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
