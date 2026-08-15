#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LobbySearch)
namespace Epic::OnlineServices::Lobby {
class LobbyDetails;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchCopySearchResultByIndexOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchFindOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchGetSearchResultCountOptions;
}
namespace Epic::OnlineServices::Lobby {
class LobbySearchOnFindCallback;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchRemoveParameterOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetLobbyIdOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetMaxResultsOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetParameterOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetTargetUserIdOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class LobbySearch;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::LobbySearch*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbySearch*, "Epic.OnlineServices.Lobby", "LobbySearch");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.LobbySearch
class CORDL_TYPE LobbySearch : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopySearchResultByIndex, addr 0x18050b6f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopySearchResultByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>  outLobbyDetailsHandle) ;

/// @brief Method Find, addr 0x18050b760, size 0x200, virtual false, abstract: false, final false
inline void Find(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback*  completionDelegate) ;

/// @brief Method GetSearchResultCount, addr 0x18050b960, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetSearchResultCount(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions>  options) ;

static inline ::Epic::OnlineServices::Lobby::LobbySearch* New_ctor() ;

static inline ::Epic::OnlineServices::Lobby::LobbySearch* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x18050b9a0, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RemoveParameter, addr 0x18050b9b0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RemoveParameter(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions>  options) ;

/// @brief Method SetLobbyId, addr 0x18050ba30, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetLobbyId(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions>  options) ;

/// @brief Method SetMaxResults, addr 0x18050baa0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetMaxResults(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>  options) ;

/// @brief Method SetParameter, addr 0x18050bae0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetParameter(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>  options) ;

/// @brief Method SetTargetUserId, addr 0x18050bba0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetTargetUserId(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbySearch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbySearch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbySearch(LobbySearch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbySearch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbySearch(LobbySearch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbySearch) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
