#pragma once
// IWYU pragma private; include "Rewired/ActiveControllerChangedDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ActiveControllerChangedDelegate)
namespace Rewired {
class Controller;
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
class ActiveControllerChangedDelegate;
}
// Write type traits
MARK_REF_T(::Rewired::ActiveControllerChangedDelegate*);
DEFINE_IL2CPP_CLASS(::Rewired::ActiveControllerChangedDelegate*, "Rewired", "ActiveControllerChangedDelegate");
// Dependencies System.MulticastDelegate
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ActiveControllerChangedDelegate
class CORDL_TYPE ActiveControllerChangedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Rewired::Controller*  controller, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::Rewired::Controller*  controller) ;

static inline ::Rewired::ActiveControllerChangedDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1805829b0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveControllerChangedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveControllerChangedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveControllerChangedDelegate(ActiveControllerChangedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveControllerChangedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveControllerChangedDelegate(ActiveControllerChangedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1937};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ActiveControllerChangedDelegate) == 0x80, "Size mismatch!");

} // namespace end def Rewired
