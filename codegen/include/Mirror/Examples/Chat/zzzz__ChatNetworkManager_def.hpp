#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/ChatNetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ChatNetworkManager)
namespace Mirror {
class NetworkConnectionToClient;
}
// Forward declare root types
namespace Mirror::Examples::Chat {
class ChatNetworkManager;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Chat::ChatNetworkManager*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::ChatNetworkManager*, "Mirror.Examples.Chat", "ChatNetworkManager");
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::Chat {
// Is value type: false
// CS Name: Mirror.Examples.Chat.ChatNetworkManager
class CORDL_TYPE ChatNetworkManager : public ::Mirror::NetworkManager {
public:
// Declarations
/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::Examples::Chat::ChatNetworkManager>  _singleton_k__BackingField;

/// @brief Method Awake, addr 0x181558320, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::Examples::Chat::ChatNetworkManager* New_ctor() ;

/// @brief Method OnClientDisconnect, addr 0x181558360, size 0xa0, virtual true, abstract: false, final false
inline void OnClientDisconnect() ;

/// @brief Method OnServerDisconnect, addr 0x181558400, size 0xe0, virtual true, abstract: false, final false
inline void OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method SetHostname, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void SetHostname(::StringW  hostname) ;

/// @brief Method .ctor, addr 0x1804226f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::Chat::ChatNetworkManager> getStaticF__singleton_k__BackingField() ;

/// @brief Method get_singleton, addr 0x1815584e0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::Examples::Chat::ChatNetworkManager> get_singleton() ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::Chat::ChatNetworkManager>  value) ;

/// @brief Method set_singleton, addr 0x181558500, size 0x30, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::Examples::Chat::ChatNetworkManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatNetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatNetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatNetworkManager(ChatNetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatNetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatNetworkManager(ChatNetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::Chat::ChatNetworkManager) == 0x88, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
