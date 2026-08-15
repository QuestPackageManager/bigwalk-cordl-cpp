#pragma once
// IWYU pragma private; include "Rewired/UI/IMouseInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMouseInputSource)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::UI {
class IMouseInputSource;
}
// Write type traits
MARK_REF_T(::Rewired::UI::IMouseInputSource*);
DEFINE_IL2CPP_CLASS(::Rewired::UI::IMouseInputSource*, "Rewired.UI", "IMouseInputSource");
// Dependencies 
namespace Rewired::UI {
// Is value type: false
// CS Name: Rewired.UI.IMouseInputSource
class CORDL_TYPE IMouseInputSource {
public:
// Declarations
 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_enabled)) bool  enabled;

 __declspec(property(get=get_locked)) bool  locked;

 __declspec(property(get=get_playerId)) int32_t  playerId;

 __declspec(property(get=get_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_screenPositionDelta)) ::UnityEngine::Vector2  screenPositionDelta;

 __declspec(property(get=get_wheelDelta)) ::UnityEngine::Vector2  wheelDelta;

/// @brief Method GetButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButton(int32_t  button) ;

/// @brief Method GetButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButtonDown(int32_t  button) ;

/// @brief Method GetButtonUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButtonUp(int32_t  button) ;

/// @brief Method get_buttonCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_locked, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_locked() ;

/// @brief Method get_playerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method get_screenPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_screenPositionDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPositionDelta() ;

/// @brief Method get_wheelDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_wheelDelta() ;

// Ctor Parameters [CppParam { name: "", ty: "IMouseInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMouseInputSource(IMouseInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::UI
