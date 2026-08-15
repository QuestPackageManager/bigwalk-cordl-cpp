#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceChangedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceChangedCallbackInfoInternal)
namespace Epic::OnlineServices::Presence {
struct PresenceChangedCallbackInfo;
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
namespace Epic::OnlineServices::Presence {
struct PresenceChangedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal, "Epic.OnlineServices.Presence", "PresenceChangedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceChangedCallbackInfoInternal
struct CORDL_TYPE PresenceChangedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804fe470, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Presence__PresenceChangedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceChangedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PresenceUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PresenceChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_PresenceUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8231};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_PresenceUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_PresenceUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal, m_PresenceUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
