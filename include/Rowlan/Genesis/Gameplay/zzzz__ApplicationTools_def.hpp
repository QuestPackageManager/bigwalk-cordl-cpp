#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Gameplay/ApplicationTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationTools)
namespace Rowlan::Genesis::Gameplay {
struct ApplicationTools_HideCursor;
}
// Forward declare root types
namespace Rowlan::Genesis::Gameplay {
struct ApplicationTools_HideCursor;
}
namespace Rowlan::Genesis::Gameplay {
class ApplicationTools;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor);
MARK_REF_T(::Rowlan::Genesis::Gameplay::ApplicationTools*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor, "Rowlan.Genesis.Gameplay", "ApplicationTools/HideCursor");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Gameplay::ApplicationTools*, "Rowlan.Genesis.Gameplay", "ApplicationTools");
// Dependencies 
namespace Rowlan::Genesis::Gameplay {
// Is value type: true
// CS Name: Rowlan.Genesis.Gameplay.ApplicationTools/HideCursor
struct CORDL_TYPE ApplicationTools_HideCursor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ApplicationTools_HideCursor_Unwrapped
enum struct __ApplicationTools_HideCursor_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Editor = static_cast<int32_t>(0x1),
__E_Build = static_cast<int32_t>(0x2),
__E_Both = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApplicationTools_HideCursor_Unwrapped () const noexcept {
return static_cast<__ApplicationTools_HideCursor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApplicationTools_HideCursor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ApplicationTools_HideCursor(int32_t  value__) noexcept;

/// @brief Field Both value: I32(3)
static ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor const Both;

/// @brief Field Build value: I32(2)
static ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor const Build;

/// @brief Field Editor value: I32(1)
static ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor const Editor;

/// @brief Field None value: I32(0)
static ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Gameplay
// Dependencies Rowlan.Genesis.Gameplay.ApplicationTools::HideCursor, UnityEngine.KeyCode, UnityEngine.MonoBehaviour
namespace Rowlan::Genesis::Gameplay {
// Is value type: false
// CS Name: Rowlan.Genesis.Gameplay.ApplicationTools
class CORDL_TYPE ApplicationTools : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HideCursor = ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor;

/// @brief Field hideCursor, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_hideCursor, put=__cordl_internal_set_hideCursor)) ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  hideCursor;

/// @brief Field quitGameKey, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_quitGameKey, put=__cordl_internal_set_quitGameKey)) ::UnityEngine::KeyCode  quitGameKey;

/// @brief Field restartKey, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_restartKey, put=__cordl_internal_set_restartKey)) ::UnityEngine::KeyCode  restartKey;

/// @brief Method ApplyCursorLogic, addr 0x181abd100, size 0x60, virtual false, abstract: false, final false
inline void ApplyCursorLogic() ;

/// @brief Method HandleInputKeys, addr 0x181abd160, size 0x70, virtual false, abstract: false, final false
inline void HandleInputKeys() ;

static inline ::Rowlan::Genesis::Gameplay::ApplicationTools* New_ctor() ;

/// @brief Method QuitGame, addr 0x181abd1d0, size 0x10, virtual false, abstract: false, final false
inline void QuitGame() ;

/// @brief Method RestartScene, addr 0x181abd1e0, size 0x40, virtual false, abstract: false, final false
inline void RestartScene() ;

/// @brief Method Start, addr 0x181abd100, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181abd160, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor const& __cordl_internal_get_hideCursor() const;

constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor& __cordl_internal_get_hideCursor() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_quitGameKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_quitGameKey() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_restartKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_restartKey() ;

constexpr void __cordl_internal_set_hideCursor(::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  value) ;

constexpr void __cordl_internal_set_quitGameKey(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_restartKey(::UnityEngine::KeyCode  value) ;

/// @brief Method .ctor, addr 0x181abd220, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplicationTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplicationTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplicationTools(ApplicationTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplicationTools(ApplicationTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20421};

/// @brief Field quitGameKey, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___quitGameKey;

/// @brief Field restartKey, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___restartKey;

/// @brief Field hideCursor, offset: 0x28, size: 0x4, def value: None
 ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  ___hideCursor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Gameplay::ApplicationTools, ___quitGameKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Gameplay::ApplicationTools, ___restartKey) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Gameplay::ApplicationTools, ___hideCursor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Gameplay::ApplicationTools) == 0x30, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Gameplay
