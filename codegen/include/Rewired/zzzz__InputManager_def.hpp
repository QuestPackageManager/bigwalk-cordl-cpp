#pragma once
// IWYU pragma private; include "Rewired/InputManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputManager_Base_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InputManager)
namespace Rewired::Utils::Interfaces {
class IExternalTools;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Rewired {
class InputManager;
}
// Write type traits
MARK_REF_T(::Rewired::InputManager*);
DEFINE_IL2CPP_CLASS(::Rewired::InputManager*, "Rewired", "InputManager");
// Dependencies Rewired.InputManager_Base
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputManager
class CORDL_TYPE InputManager : public ::Rewired::InputManager_Base {
public:
// Declarations
/// @brief Field ignoreRecompile, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreRecompile, put=__cordl_internal_set_ignoreRecompile)) bool  ignoreRecompile;

/// @brief Method CheckDeviceName, addr 0x180394920, size 0x80, virtual false, abstract: false, final false
inline bool CheckDeviceName(::StringW  searchPattern, ::StringW  deviceName, ::StringW  deviceModel) ;

/// @brief Method CheckRecompile, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void CheckRecompile() ;

/// @brief Method DetectPlatform, addr 0x1803949a0, size 0x50, virtual true, abstract: false, final false
inline void DetectPlatform() ;

/// @brief Method GetExternalTools, addr 0x1803949f0, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IExternalTools* GetExternalTools() ;

static inline ::Rewired::InputManager* New_ctor() ;

/// @brief Method OnDeinitialized, addr 0x180394a00, size 0x50, virtual true, abstract: false, final false
inline void OnDeinitialized() ;

/// @brief Method OnInitialized, addr 0x180394a50, size 0x80, virtual true, abstract: false, final false
inline void OnInitialized() ;

/// @brief Method OnSceneLoaded, addr 0x180394ad0, size 0x10, virtual false, abstract: false, final false
inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method SubscribeEvents, addr 0x180394a50, size 0x80, virtual false, abstract: false, final false
inline void SubscribeEvents() ;

/// @brief Method UnsubscribeEvents, addr 0x180394a00, size 0x50, virtual false, abstract: false, final false
inline void UnsubscribeEvents() ;

constexpr bool const& __cordl_internal_get_ignoreRecompile() const;

constexpr bool& __cordl_internal_get_ignoreRecompile() ;

constexpr void __cordl_internal_set_ignoreRecompile(bool  value) ;

/// @brief Method .ctor, addr 0x180394ae0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager(InputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager(InputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5654};

/// @brief Field ignoreRecompile, offset: 0x56, size: 0x1, def value: None
 bool  ___ignoreRecompile;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManager, ___ignoreRecompile) == 0x56, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManager) == 0x60, "Size mismatch!");

} // namespace end def Rewired
