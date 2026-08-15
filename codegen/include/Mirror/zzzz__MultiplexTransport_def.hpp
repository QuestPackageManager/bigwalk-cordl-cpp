#pragma once
// IWYU pragma private; include "Mirror/MultiplexTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplexTransport)
namespace Mirror {
class MultiplexTransport___c__DisplayClass22_0;
}
namespace Mirror {
struct TransportError;
}
namespace Mirror {
class Transport;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
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
class MultiplexTransport;
}
namespace Mirror {
class MultiplexTransport___c__DisplayClass22_0;
}
// Write type traits
MARK_REF_T(::Mirror::MultiplexTransport*);
MARK_REF_T(::Mirror::MultiplexTransport___c__DisplayClass22_0*);
DEFINE_IL2CPP_CLASS(::Mirror::MultiplexTransport*, "Mirror", "MultiplexTransport");
DEFINE_IL2CPP_CLASS(::Mirror::MultiplexTransport___c__DisplayClass22_0*, "Mirror", "MultiplexTransport/<>c__DisplayClass22_0");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.MultiplexTransport/<>c__DisplayClass22_0
class CORDL_TYPE MultiplexTransport___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::MultiplexTransport>  __4__this;

/// @brief Field transportIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_transportIndex, put=__cordl_internal_set_transportIndex)) int32_t  transportIndex;

static inline ::Mirror::MultiplexTransport___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <AddServerCallbacks>b__0, addr 0x18158eb00, size 0xd0, virtual false, abstract: false, final false
inline void _AddServerCallbacks_b__0(int32_t  originalConnectionId) ;

/// @brief Method <AddServerCallbacks>b__1, addr 0x18158ebd0, size 0xc0, virtual false, abstract: false, final false
inline void _AddServerCallbacks_b__1(int32_t  originalConnectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channel) ;

/// @brief Method <AddServerCallbacks>b__2, addr 0x18158ec90, size 0xb0, virtual false, abstract: false, final false
inline void _AddServerCallbacks_b__2(int32_t  originalConnectionId, ::Mirror::TransportError  error, ::StringW  reason) ;

/// @brief Method <AddServerCallbacks>b__3, addr 0x18158ed40, size 0x130, virtual false, abstract: false, final false
inline void _AddServerCallbacks_b__3(int32_t  originalConnectionId) ;

constexpr ::UnityW<::Mirror::MultiplexTransport> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::MultiplexTransport>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_transportIndex() const;

constexpr int32_t& __cordl_internal_get_transportIndex() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::MultiplexTransport>  value) ;

constexpr void __cordl_internal_set_transportIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplexTransport___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplexTransport___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplexTransport___c__DisplayClass22_0(MultiplexTransport___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplexTransport___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplexTransport___c__DisplayClass22_0(MultiplexTransport___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19032};

/// @brief Field transportIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___transportIndex;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Mirror::MultiplexTransport>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::MultiplexTransport___c__DisplayClass22_0, ___transportIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::MultiplexTransport___c__DisplayClass22_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::MultiplexTransport___c__DisplayClass22_0) == 0x20, "Size mismatch!");

} // namespace end def Mirror
// Dependencies Mirror.Transport
namespace Mirror {
// Is value type: false
// CS Name: Mirror.MultiplexTransport
class CORDL_TYPE MultiplexTransport : public ::Mirror::Transport {
public:
// Declarations
using __c__DisplayClass22_0 = ::Mirror::MultiplexTransport___c__DisplayClass22_0;

/// @brief Field available, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_available, put=__cordl_internal_set_available)) ::UnityW<::Mirror::Transport>  available;

/// @brief Field multiplexedToOriginalId, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiplexedToOriginalId, put=__cordl_internal_set_multiplexedToOriginalId)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*  multiplexedToOriginalId;

/// @brief Field nextMultiplexedId, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextMultiplexedId, put=__cordl_internal_set_nextMultiplexedId)) int32_t  nextMultiplexedId;

/// @brief Field originalToMultiplexedId, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalToMultiplexedId, put=__cordl_internal_set_originalToMultiplexedId)) ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  originalToMultiplexedId;

/// @brief Field transports, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_transports, put=__cordl_internal_set_transports)) ::ArrayW<::UnityW<::Mirror::Transport>>  transports;

/// @brief Method AddServerCallbacks, addr 0x181588700, size 0x190, virtual false, abstract: false, final false
inline void AddServerCallbacks() ;

/// @brief Method AddToLookup, addr 0x181588890, size 0x90, virtual false, abstract: false, final false
inline int32_t AddToLookup(int32_t  originalConnectionId, int32_t  transportIndex) ;

/// @brief Method Available, addr 0x181588920, size 0x80, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method Awake, addr 0x1815889a0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientConnect, addr 0x181588b00, size 0x110, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x1815889d0, size 0x130, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x181588c10, size 0x30, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x181588c40, size 0x20, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x181588c60, size 0x60, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x181588cc0, size 0x60, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0x181588d20, size 0x40, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0x181588d60, size 0x90, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

/// @brief Method MultiplexId, addr 0x181588df0, size 0x50, virtual false, abstract: false, final false
inline int32_t MultiplexId(int32_t  originalConnectionId, int32_t  transportIndex) ;

static inline ::Mirror::MultiplexTransport* New_ctor() ;

/// @brief Method OnDisable, addr 0x181588e40, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181588ea0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OriginalId, addr 0x181588f00, size 0x50, virtual false, abstract: false, final false
inline void OriginalId(int32_t  multiplexId, ::by_ref<int32_t>  originalConnectionId, ::by_ref<int32_t>  transportIndex) ;

/// @brief Method RemoveFromLookup, addr 0x181588f50, size 0x90, virtual false, abstract: false, final false
inline void RemoveFromLookup(int32_t  originalConnectionId, int32_t  transportIndex) ;

/// @brief Method ServerActive, addr 0x181588fe0, size 0x80, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x181589060, size 0x60, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x1815890c0, size 0x60, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x181589120, size 0x60, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerLateUpdate, addr 0x181589180, size 0x60, virtual true, abstract: false, final false
inline void ServerLateUpdate() ;

/// @brief Method ServerSend, addr 0x1815891e0, size 0x90, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x181589270, size 0x1d0, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x181589440, size 0x60, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x1815894a0, size 0x40, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x1815894e0, size 0x60, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method ToString, addr 0x181589540, size 0xc0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityW<::Mirror::Transport> const& __cordl_internal_get_available() const;

constexpr ::UnityW<::Mirror::Transport>& __cordl_internal_get_available() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>* const& __cordl_internal_get_multiplexedToOriginalId() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*& __cordl_internal_get_multiplexedToOriginalId() ;

constexpr int32_t const& __cordl_internal_get_nextMultiplexedId() const;

constexpr int32_t& __cordl_internal_get_nextMultiplexedId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>* const& __cordl_internal_get_originalToMultiplexedId() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*& __cordl_internal_get_originalToMultiplexedId() ;

constexpr ::ArrayW<::UnityW<::Mirror::Transport>> const& __cordl_internal_get_transports() const;

constexpr ::ArrayW<::UnityW<::Mirror::Transport>>& __cordl_internal_get_transports() ;

constexpr void __cordl_internal_set_available(::UnityW<::Mirror::Transport>  value) ;

constexpr void __cordl_internal_set_multiplexedToOriginalId(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*  value) ;

constexpr void __cordl_internal_set_nextMultiplexedId(int32_t  value) ;

constexpr void __cordl_internal_set_originalToMultiplexedId(::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_transports(::ArrayW<::UnityW<::Mirror::Transport>>  value) ;

/// @brief Method .ctor, addr 0x181589600, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplexTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplexTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplexTransport(MultiplexTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplexTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplexTransport(MultiplexTransport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19033};

/// @brief Field transports, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Mirror::Transport>>  ___transports;

/// @brief Field available, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Mirror::Transport>  ___available;

/// @brief Field originalToMultiplexedId, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  ___originalToMultiplexedId;

/// @brief Field multiplexedToOriginalId, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*  ___multiplexedToOriginalId;

/// @brief Field nextMultiplexedId, offset: 0x90, size: 0x4, def value: None
 int32_t  ___nextMultiplexedId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::MultiplexTransport, ___transports) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::MultiplexTransport, ___available) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::MultiplexTransport, ___originalToMultiplexedId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::MultiplexTransport, ___multiplexedToOriginalId) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::MultiplexTransport, ___nextMultiplexedId) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Mirror::MultiplexTransport) == 0x98, "Size mismatch!");

} // namespace end def Mirror
