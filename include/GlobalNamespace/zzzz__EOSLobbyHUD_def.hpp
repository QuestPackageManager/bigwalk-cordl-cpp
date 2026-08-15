#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSLobbyHUD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EOSLobbyHUD)
namespace Epic::OnlineServices::Lobby {
struct Attribute;
}
namespace Epic::OnlineServices::Lobby {
class LobbyDetails;
}
namespace GlobalNamespace {
class EOSLobbyHUD___c;
}
namespace GlobalNamespace {
class EOSLobby;
}
namespace Mirror {
class NetworkManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EOSLobbyHUD;
}
namespace GlobalNamespace {
class EOSLobbyHUD___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EOSLobbyHUD*);
MARK_REF_T(::GlobalNamespace::EOSLobbyHUD___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyHUD*, "", "EOSLobbyHUD");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyHUD___c*, "", "EOSLobbyHUD/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyHUD/<>c
class CORDL_TYPE EOSLobbyHUD___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::EOSLobbyHUD___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*  __9__12_0;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*  __9__18_0;

static inline ::GlobalNamespace::EOSLobbyHUD___c* New_ctor() ;

/// @brief Method <DrawLobbyMenu>b__18_0, addr 0x18157cd30, size 0xb0, virtual false, abstract: false, final false
inline bool _DrawLobbyMenu_b__18_0(::Epic::OnlineServices::Lobby::Attribute  x) ;

/// @brief Method <OnJoinLobbySuccess>b__12_0, addr 0x18157cfd0, size 0xb0, virtual false, abstract: false, final false
inline bool _OnJoinLobbySuccess_b__12_0(::Epic::OnlineServices::Lobby::Attribute  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::EOSLobbyHUD___c* getStaticF___9() ;

static inline ::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>* getStaticF___9__12_0() ;

static inline ::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>* getStaticF___9__18_0() ;

static inline void setStaticF___9(::GlobalNamespace::EOSLobbyHUD___c*  value) ;

static inline void setStaticF___9__12_0(::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*  value) ;

static inline void setStaticF___9__18_0(::System::Predicate_1<::Epic::OnlineServices::Lobby::Attribute>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyHUD___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyHUD___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyHUD___c(EOSLobbyHUD___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyHUD___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyHUD___c(EOSLobbyHUD___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobbyHUD___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyHUD
class CORDL_TYPE EOSLobbyHUD : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::EOSLobbyHUD___c;

/// @brief Field _eosLobby, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eosLobby, put=__cordl_internal_set__eosLobby)) ::UnityW<::GlobalNamespace::EOSLobby>  _eosLobby;

/// @brief Field _foundLobbies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__foundLobbies, put=__cordl_internal_set__foundLobbies)) ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  _foundLobbies;

/// @brief Field _lobbyData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lobbyData, put=__cordl_internal_set__lobbyData)) ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  _lobbyData;

/// @brief Field _showLobbyList, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__showLobbyList, put=__cordl_internal_set__showLobbyList)) bool  _showLobbyList;

/// @brief Field _showPlayerList, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__showPlayerList, put=__cordl_internal_set__showPlayerList)) bool  _showPlayerList;

/// @brief Field lobbyName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyName, put=__cordl_internal_set_lobbyName)) ::StringW  lobbyName;

/// @brief Field manager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::Mirror::NetworkManager>  manager;

/// @brief Method Awake, addr 0x18156cb30, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DrawLobbyList, addr 0x18156cb60, size 0x6a0, virtual false, abstract: false, final false
inline void DrawLobbyList() ;

/// @brief Method DrawLobbyMenu, addr 0x18156d200, size 0x310, virtual false, abstract: false, final false
inline void DrawLobbyMenu() ;

/// @brief Method DrawMenuButtons, addr 0x18156d510, size 0x460, virtual false, abstract: false, final false
inline void DrawMenuButtons() ;

static inline ::GlobalNamespace::EOSLobbyHUD* New_ctor() ;

/// @brief Method OnCreateLobbySuccess, addr 0x18156d970, size 0x40, virtual false, abstract: false, final false
inline void OnCreateLobbySuccess(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes) ;

/// @brief Method OnDisable, addr 0x18156d9b0, size 0x2c0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18156dc70, size 0x2c0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFindLobbiesSuccess, addr 0x18156df30, size 0x30, virtual false, abstract: false, final false
inline void OnFindLobbiesSuccess(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  lobbiesFound) ;

/// @brief Method OnGUI, addr 0x18156df60, size 0x160, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnJoinLobbySuccess, addr 0x18156e0c0, size 0x1e0, virtual false, abstract: false, final false
inline void OnJoinLobbySuccess(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes) ;

/// @brief Method OnLeaveLobbySuccess, addr 0x18156e2a0, size 0x40, virtual false, abstract: false, final false
inline void OnLeaveLobbySuccess() ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get__eosLobby() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get__eosLobby() ;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>* const& __cordl_internal_get__foundLobbies() const;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*& __cordl_internal_get__foundLobbies() ;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>* const& __cordl_internal_get__lobbyData() const;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*& __cordl_internal_get__lobbyData() ;

constexpr bool const& __cordl_internal_get__showLobbyList() const;

constexpr bool& __cordl_internal_get__showLobbyList() ;

constexpr bool const& __cordl_internal_get__showPlayerList() const;

constexpr bool& __cordl_internal_get__showPlayerList() ;

constexpr ::StringW const& __cordl_internal_get_lobbyName() const;

constexpr ::StringW& __cordl_internal_get_lobbyName() ;

constexpr ::UnityW<::Mirror::NetworkManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::Mirror::NetworkManager>& __cordl_internal_get_manager() ;

constexpr void __cordl_internal_set__eosLobby(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set__foundLobbies(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  value) ;

constexpr void __cordl_internal_set__lobbyData(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  value) ;

constexpr void __cordl_internal_set__showLobbyList(bool  value) ;

constexpr void __cordl_internal_set__showPlayerList(bool  value) ;

constexpr void __cordl_internal_set_lobbyName(::StringW  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::Mirror::NetworkManager>  value) ;

/// @brief Method .ctor, addr 0x18156e2e0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyHUD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyHUD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyHUD(EOSLobbyHUD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyHUD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyHUD(EOSLobbyHUD const& ) = delete;

/// @brief Field LobbyNameKey offset 0xffffffff size 0x8
static constexpr ::ConstString  LobbyNameKey{u"LobbyName"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19022};

/// @brief Field _eosLobby, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  ____eosLobby;

/// @brief Field manager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkManager>  ___manager;

/// @brief Field lobbyName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___lobbyName;

/// @brief Field _showLobbyList, offset: 0x38, size: 0x1, def value: None
 bool  ____showLobbyList;

/// @brief Field _showPlayerList, offset: 0x39, size: 0x1, def value: None
 bool  ____showPlayerList;

/// @brief Field _foundLobbies, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  ____foundLobbies;

/// @brief Field _lobbyData, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  ____lobbyData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyHUD, ____eosLobby) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyHUD, ___manager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyHUD, ___lobbyName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyHUD, ____showLobbyList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyHUD, ____showPlayerList) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyHUD, ____foundLobbies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyHUD, ____lobbyData) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyHUD) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
