#pragma once
// IWYU pragma private; include "Mirror/Transport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Transport)
namespace Mirror {
struct TransportError;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror {
class Transport;
}
// Write type traits
MARK_REF_T(::Mirror::Transport*);
DEFINE_IL2CPP_CLASS(::Mirror::Transport*, "Mirror", "Transport");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Transport
class CORDL_TYPE Transport : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnClientConnected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientConnected, put=__cordl_internal_set_OnClientConnected)) ::System::Action*  OnClientConnected;

/// @brief Field OnClientDataReceived, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientDataReceived, put=__cordl_internal_set_OnClientDataReceived)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*  OnClientDataReceived;

/// @brief Field OnClientDataSent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientDataSent, put=__cordl_internal_set_OnClientDataSent)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*  OnClientDataSent;

/// @brief Field OnClientDisconnected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientDisconnected, put=__cordl_internal_set_OnClientDisconnected)) ::System::Action*  OnClientDisconnected;

/// @brief Field OnClientError, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientError, put=__cordl_internal_set_OnClientError)) ::System::Action_2<::Mirror::TransportError,::StringW>*  OnClientError;

/// @brief Field OnServerConnected, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerConnected, put=__cordl_internal_set_OnServerConnected)) ::System::Action_1<int32_t>*  OnServerConnected;

/// @brief Field OnServerDataReceived, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerDataReceived, put=__cordl_internal_set_OnServerDataReceived)) ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*  OnServerDataReceived;

/// @brief Field OnServerDataSent, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerDataSent, put=__cordl_internal_set_OnServerDataSent)) ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*  OnServerDataSent;

/// @brief Field OnServerDisconnected, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerDisconnected, put=__cordl_internal_set_OnServerDisconnected)) ::System::Action_1<int32_t>*  OnServerDisconnected;

/// @brief Field OnServerError, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerError, put=__cordl_internal_set_OnServerError)) ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  OnServerError;

/// @brief Field active, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_active, put=setStaticF_active)) ::UnityW<::Mirror::Transport>  active;

/// @brief Method Available, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method ClientConnect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x1815987c0, size 0x40, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method GetBatchThreshold, addr 0x1810f80a0, size 0x8520, virtual true, abstract: false, final false
inline int32_t GetBatchThreshold(int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

/// @brief Method LateUpdate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Mirror::Transport* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x18062b520, size 0x20, virtual true, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method ServerActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ServerLateUpdate() ;

/// @brief Method ServerSend, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_OnClientConnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnClientConnected() ;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>* const& __cordl_internal_get_OnClientDataReceived() const;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*& __cordl_internal_get_OnClientDataReceived() ;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>* const& __cordl_internal_get_OnClientDataSent() const;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*& __cordl_internal_get_OnClientDataSent() ;

constexpr ::System::Action* const& __cordl_internal_get_OnClientDisconnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnClientDisconnected() ;

constexpr ::System::Action_2<::Mirror::TransportError,::StringW>* const& __cordl_internal_get_OnClientError() const;

constexpr ::System::Action_2<::Mirror::TransportError,::StringW>*& __cordl_internal_get_OnClientError() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnServerConnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnServerConnected() ;

constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>* const& __cordl_internal_get_OnServerDataReceived() const;

constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*& __cordl_internal_get_OnServerDataReceived() ;

constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>* const& __cordl_internal_get_OnServerDataSent() const;

constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*& __cordl_internal_get_OnServerDataSent() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnServerDisconnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnServerDisconnected() ;

constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>* const& __cordl_internal_get_OnServerError() const;

constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*& __cordl_internal_get_OnServerError() ;

constexpr void __cordl_internal_set_OnClientConnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnClientDataReceived(::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnClientDataSent(::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnClientDisconnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnClientError(::System::Action_2<::Mirror::TransportError,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnServerConnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnServerDataReceived(::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnServerDataSent(::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnServerDisconnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnServerError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Transport> getStaticF_active() ;

static inline void setStaticF_active(::UnityW<::Mirror::Transport>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Transport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Transport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transport(Transport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transport(Transport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18390};

/// @brief Field OnClientConnected, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnClientConnected;

/// @brief Field OnClientDataReceived, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*  ___OnClientDataReceived;

/// @brief Field OnClientDataSent, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::System::ArraySegment_1<uint8_t>,int32_t>*  ___OnClientDataSent;

/// @brief Field OnClientError, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::Mirror::TransportError,::StringW>*  ___OnClientError;

/// @brief Field OnClientDisconnected, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnClientDisconnected;

/// @brief Field OnServerConnected, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnServerConnected;

/// @brief Field OnServerDataReceived, offset: 0x50, size: 0x8, def value: None
 ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*  ___OnServerDataReceived;

/// @brief Field OnServerDataSent, offset: 0x58, size: 0x8, def value: None
 ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,int32_t>*  ___OnServerDataSent;

/// @brief Field OnServerError, offset: 0x60, size: 0x8, def value: None
 ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  ___OnServerError;

/// @brief Field OnServerDisconnected, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnServerDisconnected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Transport, ___OnClientConnected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnClientDataReceived) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnClientDataSent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnClientError) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnClientDisconnected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnServerConnected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnServerDataReceived) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnServerDataSent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnServerError) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::Transport, ___OnServerDisconnected) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Mirror::Transport) == 0x70, "Size mismatch!");

} // namespace end def Mirror
