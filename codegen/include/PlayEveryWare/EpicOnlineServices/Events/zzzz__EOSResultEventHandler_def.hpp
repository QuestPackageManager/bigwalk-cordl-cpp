#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Events/EOSResultEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(EOSResultEventHandler)
namespace Epic::OnlineServices {
struct Result;
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
namespace PlayEveryWare::EpicOnlineServices::Events {
class EOSResultEventHandler;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*, "PlayEveryWare.EpicOnlineServices.Events", "EOSResultEventHandler");
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices::Events {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Events.EOSResultEventHandler
class CORDL_TYPE EOSResultEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180539140, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Result  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Result  result) ;

static inline ::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSResultEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSResultEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSResultEventHandler(EOSResultEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSResultEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSResultEventHandler(EOSResultEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18936};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Events
