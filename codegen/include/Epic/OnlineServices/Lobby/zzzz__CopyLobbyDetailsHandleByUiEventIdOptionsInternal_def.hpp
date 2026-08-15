#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CopyLobbyDetailsHandleByUiEventIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLobbyDetailsHandleByUiEventIdOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByUiEventIdOptions;
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
struct CopyLobbyDetailsHandleByUiEventIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal, "Epic.OnlineServices.Lobby", "CopyLobbyDetailsHandleByUiEventIdOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.CopyLobbyDetailsHandleByUiEventIdOptionsInternal
struct CORDL_TYPE CopyLobbyDetailsHandleByUiEventIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7a90, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__CopyLobbyDetailsHandleByUiEventIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLobbyDetailsHandleByUiEventIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr CopyLobbyDetailsHandleByUiEventIdOptionsInternal(int32_t  m_ApiVersion, uint64_t  m_UiEventId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UiEventId, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_UiEventId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal, m_UiEventId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
