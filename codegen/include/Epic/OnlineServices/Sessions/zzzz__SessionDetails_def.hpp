#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionDetails)
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsAttribute;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopyInfoOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopySessionAttributeByIndexOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopySessionAttributeByKeyOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsGetSessionAttributeCountOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsInfo;
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
class SessionDetails;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::SessionDetails*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetails*, "Epic.OnlineServices.Sessions", "SessionDetails");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.SessionDetails
class CORDL_TYPE SessionDetails : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyInfo, addr 0x1804f23e0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyInfo(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>  outSessionInfo) ;

/// @brief Method CopySessionAttributeByIndex, addr 0x1804f2460, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopySessionAttributeByIndex(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>  outSessionAttribute) ;

/// @brief Method CopySessionAttributeByKey, addr 0x1804f24e0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopySessionAttributeByKey(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>  outSessionAttribute) ;

/// @brief Method GetSessionAttributeCount, addr 0x1804f25a0, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetSessionAttributeCount(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions>  options) ;

static inline ::Epic::OnlineServices::Sessions::SessionDetails* New_ctor() ;

static inline ::Epic::OnlineServices::Sessions::SessionDetails* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804f25e0, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionDetails() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionDetails", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionDetails(SessionDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionDetails", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionDetails(SessionDetails const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetails) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
