#pragma once
// IWYU pragma private; include "Rewired/PlayerActiveControllerChangedDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PlayerActiveControllerChangedDelegate)
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class PlayerActiveControllerChangedDelegate;
}
// Write type traits
MARK_REF_T(::Rewired::PlayerActiveControllerChangedDelegate*);
DEFINE_IL2CPP_CLASS(::Rewired::PlayerActiveControllerChangedDelegate*, "Rewired", "PlayerActiveControllerChangedDelegate");
// Dependencies System.MulticastDelegate
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerActiveControllerChangedDelegate
class CORDL_TYPE PlayerActiveControllerChangedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180582750, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::Rewired::Player*  player, ::Rewired::Controller*  controller) ;

static inline ::Rewired::PlayerActiveControllerChangedDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1805827c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerActiveControllerChangedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerActiveControllerChangedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerActiveControllerChangedDelegate(PlayerActiveControllerChangedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerActiveControllerChangedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerActiveControllerChangedDelegate(PlayerActiveControllerChangedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1938};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerActiveControllerChangedDelegate) == 0x80, "Size mismatch!");

} // namespace end def Rewired
