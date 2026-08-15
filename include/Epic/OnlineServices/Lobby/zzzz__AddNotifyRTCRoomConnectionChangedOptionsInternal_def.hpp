#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AddNotifyRTCRoomConnectionChangedOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddNotifyRTCRoomConnectionChangedOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct AddNotifyRTCRoomConnectionChangedOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct AddNotifyRTCRoomConnectionChangedOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptionsInternal, "Epic.OnlineServices.Lobby", "AddNotifyRTCRoomConnectionChangedOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.AddNotifyRTCRoomConnectionChangedOptionsInternal
struct CORDL_TYPE AddNotifyRTCRoomConnectionChangedOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180503d40, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__AddNotifyRTCRoomConnectionChangedOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyRTCRoomConnectionChangedOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AddNotifyRTCRoomConnectionChangedOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId_DEPRECATED, ::System::IntPtr  m_LocalUserId_DEPRECATED) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LobbyId_DEPRECATED, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId_DEPRECATED;

/// @brief Field m_LocalUserId_DEPRECATED, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId_DEPRECATED;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptionsInternal, m_LobbyId_DEPRECATED) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptionsInternal, m_LocalUserId_DEPRECATED) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
