#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinFriendCard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinFriendCard)
namespace GlobalNamespace {
struct JoinFriendCard_FriendGameInfo;
}
namespace GlobalNamespace {
class JoinMenu;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class JoinFriendCard;
}
namespace GlobalNamespace {
struct JoinFriendCard_FriendGameInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JoinFriendCard*);
MARK_VAL_T(::GlobalNamespace::JoinFriendCard_FriendGameInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinFriendCard*, "", "JoinFriendCard");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinFriendCard_FriendGameInfo, "", "JoinFriendCard/FriendGameInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinFriendCard/FriendGameInfo
struct CORDL_TYPE JoinFriendCard_FriendGameInfo {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*() ;

/// @brief Method Equals, addr 0x1804328d0, size 0xe0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180432830, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::JoinFriendCard_FriendGameInfo  other) ;

/// @brief Method GetHashCode, addr 0x1804329b0, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>"
constexpr ::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* i___System__IEquatable_1___GlobalNamespace__JoinFriendCard_FriendGameInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinFriendCard_FriendGameInfo() ;

// Ctor Parameters [CppParam { name: "joinCode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "worldName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hostPlatformId", ty: "::StringW", modifiers: "", def_value: None }]
constexpr JoinFriendCard_FriendGameInfo(::StringW  joinCode, ::StringW  worldName, ::StringW  playerName, ::StringW  hostPlatformId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field joinCode, offset: 0x0, size: 0x8, def value: None
 ::StringW  joinCode;

/// @brief Field worldName, offset: 0x8, size: 0x8, def value: None
 ::StringW  worldName;

/// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
 ::StringW  playerName;

/// @brief Field hostPlatformId, offset: 0x18, size: 0x8, def value: None
 ::StringW  hostPlatformId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinFriendCard_FriendGameInfo, joinCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard_FriendGameInfo, worldName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard_FriendGameInfo, playerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard_FriendGameInfo, hostPlatformId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinFriendCard_FriendGameInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoinFriendCard
class CORDL_TYPE JoinFriendCard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FriendGameInfo = ::GlobalNamespace::JoinFriendCard_FriendGameInfo;

/// @brief Field friendInfos, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendInfos, put=__cordl_internal_set_friendInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  friendInfos;

/// @brief Field hostField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostField, put=__cordl_internal_set_hostField)) ::UnityW<::GlobalNamespace::LocalizedText>  hostField;

/// @brief Field isDirty, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDirty, put=__cordl_internal_set_isDirty)) bool  isDirty;

/// @brief Field isDummy, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDummy, put=__cordl_internal_set_isDummy)) bool  isDummy;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

/// @brief Field joinMenu, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinMenu, put=__cordl_internal_set_joinMenu)) ::UnityW<::GlobalNamespace::JoinMenu>  joinMenu;

/// @brief Field showJoinCode, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_showJoinCode, put=__cordl_internal_set_showJoinCode)) bool  showJoinCode;

/// @brief Field worldField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldField, put=__cordl_internal_set_worldField)) ::UnityW<::GlobalNamespace::LocalizedText>  worldField;

/// @brief Method ActionJoin, addr 0x180434250, size 0x40, virtual false, abstract: false, final false
inline void ActionJoin() ;

/// @brief Method AddInfo, addr 0x180434290, size 0xf0, virtual false, abstract: false, final false
inline void AddInfo(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info) ;

/// @brief Method Initialize, addr 0x180434380, size 0x50, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::JoinMenu*  joinMenu) ;

/// @brief Method IsEmptyOrMatches, addr 0x1804343d0, size 0x90, virtual false, abstract: false, final false
inline bool IsEmptyOrMatches(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info) ;

/// @brief Method Matches, addr 0x180434460, size 0x80, virtual false, abstract: false, final false
inline bool Matches(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info) ;

static inline ::GlobalNamespace::JoinFriendCard* New_ctor() ;

/// @brief Method Prune, addr 0x1804344e0, size 0x230, virtual false, abstract: false, final false
inline void Prune(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  externalList) ;

/// @brief Method Refresh, addr 0x180434720, size 0x190, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RefreshIfDirty, addr 0x180434710, size 0x10, virtual false, abstract: false, final false
inline void RefreshIfDirty() ;

/// @brief Method RemoveInfo, addr 0x1804348b0, size 0x40, virtual false, abstract: false, final false
inline void RemoveInfo(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* const& __cordl_internal_get_friendInfos() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*& __cordl_internal_get_friendInfos() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_hostField() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_hostField() ;

constexpr bool const& __cordl_internal_get_isDirty() const;

constexpr bool& __cordl_internal_get_isDirty() ;

constexpr bool const& __cordl_internal_get_isDummy() const;

constexpr bool& __cordl_internal_get_isDummy() ;

constexpr ::UnityW<::GlobalNamespace::JoinMenu> const& __cordl_internal_get_joinMenu() const;

constexpr ::UnityW<::GlobalNamespace::JoinMenu>& __cordl_internal_get_joinMenu() ;

constexpr bool const& __cordl_internal_get_showJoinCode() const;

constexpr bool& __cordl_internal_get_showJoinCode() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_worldField() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_worldField() ;

constexpr void __cordl_internal_set_friendInfos(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  value) ;

constexpr void __cordl_internal_set_hostField(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_isDirty(bool  value) ;

constexpr void __cordl_internal_set_isDummy(bool  value) ;

constexpr void __cordl_internal_set_joinMenu(::UnityW<::GlobalNamespace::JoinMenu>  value) ;

constexpr void __cordl_internal_set_showJoinCode(bool  value) ;

constexpr void __cordl_internal_set_worldField(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isEmpty, addr 0x1804348f0, size 0x20, virtual false, abstract: false, final false
inline bool get_isEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinFriendCard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinFriendCard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinFriendCard(JoinFriendCard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinFriendCard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinFriendCard(JoinFriendCard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5291};

/// @brief Field joinMenu, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinMenu>  ___joinMenu;

/// @brief Field friendInfos, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  ___friendInfos;

/// @brief Field worldField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___worldField;

/// @brief Field hostField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___hostField;

/// @brief Field isDirty, offset: 0x40, size: 0x1, def value: None
 bool  ___isDirty;

/// @brief Field isDummy, offset: 0x41, size: 0x1, def value: None
 bool  ___isDummy;

/// @brief Field showJoinCode, offset: 0x42, size: 0x1, def value: None
 bool  ___showJoinCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinFriendCard, ___joinMenu) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard, ___friendInfos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard, ___worldField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard, ___hostField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard, ___isDirty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard, ___isDummy) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinFriendCard, ___showJoinCode) == 0x42, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinFriendCard) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
