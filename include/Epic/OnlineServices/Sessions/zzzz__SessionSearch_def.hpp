#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSearch)
namespace Epic::OnlineServices::Sessions {
class SessionDetails;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchCopySearchResultByIndexOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchFindOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchGetSearchResultCountOptions;
}
namespace Epic::OnlineServices::Sessions {
class SessionSearchOnFindCallback;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchRemoveParameterOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetMaxResultsOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetParameterOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetSessionIdOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetTargetUserIdOptions;
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
namespace Epic::OnlineServices::Sessions {
class SessionSearch;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::SessionSearch*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearch*, "Epic.OnlineServices.Sessions", "SessionSearch");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.SessionSearch
class CORDL_TYPE SessionSearch : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopySearchResultByIndex, addr 0x1804f32f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopySearchResultByIndex(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle) ;

/// @brief Method Find, addr 0x1804f3360, size 0x200, virtual false, abstract: false, final false
inline void Find(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallback*  completionDelegate) ;

/// @brief Method GetSearchResultCount, addr 0x1804f3560, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetSearchResultCount(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions>  options) ;

static inline ::Epic::OnlineServices::Sessions::SessionSearch* New_ctor() ;

static inline ::Epic::OnlineServices::Sessions::SessionSearch* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804f35a0, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RemoveParameter, addr 0x1804f35b0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RemoveParameter(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>  options) ;

/// @brief Method SetMaxResults, addr 0x1804f3630, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetMaxResults(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>  options) ;

/// @brief Method SetParameter, addr 0x1804f3670, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetParameter(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>  options) ;

/// @brief Method SetSessionId, addr 0x1804f3730, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetSessionId(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions>  options) ;

/// @brief Method SetTargetUserId, addr 0x1804f37a0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetTargetUserId(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionSearch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionSearch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionSearch(SessionSearch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionSearch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionSearch(SessionSearch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearch) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
