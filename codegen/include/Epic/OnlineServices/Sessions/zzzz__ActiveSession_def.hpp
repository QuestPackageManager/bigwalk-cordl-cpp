#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveSession)
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionCopyInfoOptions;
}
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionGetRegisteredPlayerByIndexOptions;
}
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionGetRegisteredPlayerCountOptions;
}
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class ActiveSession;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::ActiveSession*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::ActiveSession*, "Epic.OnlineServices.Sessions", "ActiveSession");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.ActiveSession
class CORDL_TYPE ActiveSession : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyInfo, addr 0x1804bde40, size 0x130, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyInfo(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>>  outActiveSessionInfo) ;

/// @brief Method GetRegisteredPlayerByIndex, addr 0x1804bdf70, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* GetRegisteredPlayerByIndex(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>  options) ;

/// @brief Method GetRegisteredPlayerCount, addr 0x1804be030, size 0xa0, virtual false, abstract: false, final false
inline uint32_t GetRegisteredPlayerCount(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions>  options) ;

static inline ::Epic::OnlineServices::Sessions::ActiveSession* New_ctor() ;

static inline ::Epic::OnlineServices::Sessions::ActiveSession* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804be0d0, size 0x80, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveSession", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveSession(ActiveSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveSession", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveSession(ActiveSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::ActiveSession) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
