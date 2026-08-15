#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/RegisterPlayersCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterPlayersCallbackInfoInternal)
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal, "Epic.OnlineServices.Sessions", "RegisterPlayersCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.RegisterPlayersCallbackInfoInternal
struct CORDL_TYPE RegisterPlayersCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804f1040, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__RegisterPlayersCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterPlayersCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RegisteredPlayers", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RegisteredPlayersCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SanctionedPlayers", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SanctionedPlayersCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RegisterPlayersCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_RegisteredPlayers, uint32_t  m_RegisteredPlayersCount, ::System::IntPtr  m_SanctionedPlayers, uint32_t  m_SanctionedPlayersCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7781};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_RegisteredPlayers, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RegisteredPlayers;

/// @brief Field m_RegisteredPlayersCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_RegisteredPlayersCount;

/// @brief Field m_SanctionedPlayers, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_SanctionedPlayers;

/// @brief Field m_SanctionedPlayersCount, offset: 0x28, size: 0x4, def value: None
 uint32_t  m_SanctionedPlayersCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal, m_RegisteredPlayers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal, m_RegisteredPlayersCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal, m_SanctionedPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal, m_SanctionedPlayersCount) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
