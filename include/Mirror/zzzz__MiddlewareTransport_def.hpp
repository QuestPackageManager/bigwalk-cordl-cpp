#pragma once
// IWYU pragma private; include "Mirror/MiddlewareTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Transport_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MiddlewareTransport)
namespace Mirror {
class Transport;
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
class MiddlewareTransport;
}
// Write type traits
MARK_REF_T(::Mirror::MiddlewareTransport*);
DEFINE_IL2CPP_CLASS(::Mirror::MiddlewareTransport*, "Mirror", "MiddlewareTransport");
// Dependencies Mirror.Transport
namespace Mirror {
// Is value type: false
// CS Name: Mirror.MiddlewareTransport
class CORDL_TYPE MiddlewareTransport : public ::Mirror::Transport {
public:
// Declarations
/// @brief Field inner, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_inner, put=__cordl_internal_set_inner)) ::UnityW<::Mirror::Transport>  inner;

/// @brief Method Available, addr 0x181574960, size 0x30, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method ClientConnect, addr 0x181588470, size 0xb0, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnected, addr 0x181574b20, size 0x30, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x181588520, size 0x30, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x181574be0, size 0x30, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x181588550, size 0x30, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0x181588580, size 0x40, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method GetBatchThreshold, addr 0x181574ed0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetBatchThreshold(int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0x181574f00, size 0x30, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

static inline ::Mirror::MiddlewareTransport* New_ctor() ;

/// @brief Method ServerActive, addr 0x181574fa0, size 0x30, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x181574fd0, size 0x30, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x181575000, size 0x30, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x181575030, size 0x30, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerLateUpdate, addr 0x1815885c0, size 0x30, virtual true, abstract: false, final false
inline void ServerLateUpdate() ;

/// @brief Method ServerSend, addr 0x1815885f0, size 0x40, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x181588630, size 0xa0, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x1815886d0, size 0x30, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x181575470, size 0x30, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x1815754a0, size 0x30, virtual true, abstract: false, final false
inline void Shutdown() ;

constexpr ::UnityW<::Mirror::Transport> const& __cordl_internal_get_inner() const;

constexpr ::UnityW<::Mirror::Transport>& __cordl_internal_get_inner() ;

constexpr void __cordl_internal_set_inner(::UnityW<::Mirror::Transport>  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MiddlewareTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MiddlewareTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MiddlewareTransport(MiddlewareTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MiddlewareTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MiddlewareTransport(MiddlewareTransport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19031};

/// @brief Field inner, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Mirror::Transport>  ___inner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::MiddlewareTransport, ___inner) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::MiddlewareTransport) == 0x78, "Size mismatch!");

} // namespace end def Mirror
