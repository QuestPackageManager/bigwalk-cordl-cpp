#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchCopySearchResultByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbySearchCopySearchResultByIndexOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct LobbySearchCopySearchResultByIndexOptions;
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
struct LobbySearchCopySearchResultByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptionsInternal, "Epic.OnlineServices.Lobby", "LobbySearchCopySearchResultByIndexOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbySearchCopySearchResultByIndexOptionsInternal
struct CORDL_TYPE LobbySearchCopySearchResultByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbySearchCopySearchResultByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbySearchCopySearchResultByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LobbyIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbySearchCopySearchResultByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_LobbyIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LobbyIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_LobbyIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptionsInternal, m_LobbyIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
