#pragma once
// IWYU pragma private; include "Mirror/ThrottledTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Transport_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrottledTransport)
namespace Mirror {
struct TransportError;
}
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
class ThrottledTransport;
}
// Write type traits
MARK_REF_T(::Mirror::ThrottledTransport*);
DEFINE_IL2CPP_CLASS(::Mirror::ThrottledTransport*, "Mirror", "ThrottledTransport");
// Dependencies Mirror.Transport
namespace Mirror {
// Is value type: false
// CS Name: Mirror.ThrottledTransport
class CORDL_TYPE ThrottledTransport : public ::Mirror::Transport {
public:
// Declarations
/// @brief Field dropUnreliableTraffic, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_dropUnreliableTraffic, put=__cordl_internal_set_dropUnreliableTraffic)) bool  dropUnreliableTraffic;

/// @brief Field inner, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_inner, put=__cordl_internal_set_inner)) ::UnityW<::Mirror::Transport>  inner;

/// @brief Method Available, addr 0x18158d160, size 0x50, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method Awake, addr 0x18158d1b0, size 0x2e0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientConnect, addr 0x18158d490, size 0x30, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x18158d4c0, size 0x30, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x181574b20, size 0x30, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x181588520, size 0x30, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x181574be0, size 0x30, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x181588550, size 0x30, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0x18158d4f0, size 0x50, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method GetBatchThreshold, addr 0x181574ed0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetBatchThreshold(int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0x181574f00, size 0x30, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

/// @brief Method IsReliable, addr 0x18158d540, size 0x10, virtual false, abstract: false, final false
inline bool IsReliable(int32_t  channelId) ;

static inline ::Mirror::ThrottledTransport* New_ctor() ;

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

/// @brief Method ServerStart, addr 0x18158d550, size 0x30, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x1815886d0, size 0x30, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x181575470, size 0x30, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x18158d580, size 0x20, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method <Awake>b__2_0, addr 0x1802fc2c0, size 0x20, virtual false, abstract: false, final false
inline void _Awake_b__2_0() ;

/// @brief Method <Awake>b__2_1, addr 0x18158d5a0, size 0x40, virtual false, abstract: false, final false
inline void _Awake_b__2_1(::System::ArraySegment_1<uint8_t>  data, int32_t  ch) ;

/// @brief Method <Awake>b__2_2, addr 0x18158d5e0, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__2_2(::System::ArraySegment_1<uint8_t>  data, int32_t  ch) ;

/// @brief Method <Awake>b__2_3, addr 0x18158d610, size 0x20, virtual false, abstract: false, final false
inline void _Awake_b__2_3(::Mirror::TransportError  error, ::StringW  msg) ;

/// @brief Method <Awake>b__2_4, addr 0x18158d0d0, size 0x20, virtual false, abstract: false, final false
inline void _Awake_b__2_4() ;

/// @brief Method <Awake>b__2_5, addr 0x180f0f730, size 0x90b0, virtual false, abstract: false, final false
inline void _Awake_b__2_5(int32_t  id) ;

/// @brief Method <Awake>b__2_6, addr 0x18158d630, size 0x40, virtual false, abstract: false, final false
inline void _Awake_b__2_6(int32_t  id, ::System::ArraySegment_1<uint8_t>  data, int32_t  ch) ;

/// @brief Method <Awake>b__2_7, addr 0x18158d670, size 0x40, virtual false, abstract: false, final false
inline void _Awake_b__2_7(int32_t  id, ::System::ArraySegment_1<uint8_t>  data, int32_t  ch) ;

/// @brief Method <Awake>b__2_8, addr 0x18158d6b0, size 0x20, virtual false, abstract: false, final false
inline void _Awake_b__2_8(int32_t  id, ::Mirror::TransportError  error, ::StringW  msg) ;

/// @brief Method <Awake>b__2_9, addr 0x18158d6d0, size 0x20, virtual false, abstract: false, final false
inline void _Awake_b__2_9(int32_t  id) ;

constexpr bool const& __cordl_internal_get_dropUnreliableTraffic() const;

constexpr bool& __cordl_internal_get_dropUnreliableTraffic() ;

constexpr ::UnityW<::Mirror::Transport> const& __cordl_internal_get_inner() const;

constexpr ::UnityW<::Mirror::Transport>& __cordl_internal_get_inner() ;

constexpr void __cordl_internal_set_dropUnreliableTraffic(bool  value) ;

constexpr void __cordl_internal_set_inner(::UnityW<::Mirror::Transport>  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrottledTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrottledTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrottledTransport(ThrottledTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrottledTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrottledTransport(ThrottledTransport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19035};

/// @brief Field inner, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Mirror::Transport>  ___inner;

/// @brief Field dropUnreliableTraffic, offset: 0x78, size: 0x1, def value: None
 bool  ___dropUnreliableTraffic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::ThrottledTransport, ___inner) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::ThrottledTransport, ___dropUnreliableTraffic) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Mirror::ThrottledTransport) == 0x80, "Size mismatch!");

} // namespace end def Mirror
