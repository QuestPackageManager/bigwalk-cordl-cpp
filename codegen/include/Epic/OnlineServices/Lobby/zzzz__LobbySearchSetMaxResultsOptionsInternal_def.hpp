#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchSetMaxResultsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbySearchSetMaxResultsOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetMaxResultsOptions;
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
struct LobbySearchSetMaxResultsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptionsInternal, "Epic.OnlineServices.Lobby", "LobbySearchSetMaxResultsOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbySearchSetMaxResultsOptionsInternal
struct CORDL_TYPE LobbySearchSetMaxResultsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbySearchSetMaxResultsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbySearchSetMaxResultsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxResults", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbySearchSetMaxResultsOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_MaxResults) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8587};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_MaxResults, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_MaxResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptionsInternal, m_MaxResults) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
