#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyDetails)
namespace Epic::OnlineServices::Lobby {
struct Attribute;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyAttributeByIndexOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyAttributeByKeyOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyInfoOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyMemberAttributeByIndexOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyMemberAttributeByKeyOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyMemberInfoOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetAttributeCountOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetLobbyOwnerOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberAttributeCountOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberByIndexOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberCountOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsInfo;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsMemberInfo;
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
namespace Epic::OnlineServices::Lobby {
class LobbyDetails;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::LobbyDetails*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetails*, "Epic.OnlineServices.Lobby", "LobbyDetails");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.LobbyDetails
class CORDL_TYPE LobbyDetails : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyAttributeByIndex, addr 0x180506770, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyAttributeByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute) ;

/// @brief Method CopyAttributeByKey, addr 0x1805067f0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyAttributeByKey(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute) ;

/// @brief Method CopyInfo, addr 0x1805068b0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyInfo(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>>  outLobbyDetailsInfo) ;

/// @brief Method CopyMemberAttributeByIndex, addr 0x180506930, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyMemberAttributeByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute) ;

/// @brief Method CopyMemberAttributeByKey, addr 0x1805069f0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyMemberAttributeByKey(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute) ;

/// @brief Method CopyMemberInfo, addr 0x180506ad0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyMemberInfo(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>>  outLobbyDetailsMemberInfo) ;

/// @brief Method GetAttributeCount, addr 0x180506b90, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetAttributeCount(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions>  options) ;

/// @brief Method GetLobbyOwner, addr 0x180506bd0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* GetLobbyOwner(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions>  options) ;

/// @brief Method GetMemberAttributeCount, addr 0x180506c30, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetMemberAttributeCount(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions>  options) ;

/// @brief Method GetMemberByIndex, addr 0x180506ca0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* GetMemberByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>  options) ;

/// @brief Method GetMemberCount, addr 0x180506d00, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetMemberCount(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions>  options) ;

static inline ::Epic::OnlineServices::Lobby::LobbyDetails* New_ctor() ;

static inline ::Epic::OnlineServices::Lobby::LobbyDetails* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x180506d40, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetails() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyDetails", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyDetails(LobbyDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyDetails", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyDetails(LobbyDetails const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8510};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetails) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
