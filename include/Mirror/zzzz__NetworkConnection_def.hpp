#pragma once
// IWYU pragma private; include "Mirror/NetworkConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConnection)
namespace Mirror {
class Batcher;
}
namespace Mirror {
class NetworkIdentity;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mirror {
class NetworkConnection;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkConnection*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkConnection*, "Mirror", "NetworkConnection");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkConnection
class CORDL_TYPE NetworkConnection : public ::System::Object {
public:
// Declarations
/// @brief Field <identity>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__identity_k__BackingField, put=__cordl_internal_set__identity_k__BackingField)) ::UnityW<::Mirror::NetworkIdentity>  _identity_k__BackingField;

/// @brief Field <remoteTimeStamp>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteTimeStamp_k__BackingField, put=__cordl_internal_set__remoteTimeStamp_k__BackingField)) double_t  _remoteTimeStamp_k__BackingField;

/// @brief Field authenticationData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationData, put=__cordl_internal_set_authenticationData)) ::System::Object*  authenticationData;

/// @brief Field batches, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_batches, put=__cordl_internal_set_batches)) ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>*  batches;

/// @brief Field connectionId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectionId, put=__cordl_internal_set_connectionId)) int32_t  connectionId;

 __declspec(property(get=get_identity, put=set_identity)) ::UnityW<::Mirror::NetworkIdentity>  identity;

/// @brief Field isAuthenticated, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAuthenticated, put=__cordl_internal_set_isAuthenticated)) bool  isAuthenticated;

/// @brief Field isReady, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isReady, put=__cordl_internal_set_isReady)) bool  isReady;

/// @brief Field lastMessageTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastMessageTime, put=__cordl_internal_set_lastMessageTime)) float_t  lastMessageTime;

/// @brief Field owned, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_owned, put=__cordl_internal_set_owned)) ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  owned;

 __declspec(property(get=get_remoteTimeStamp, put=set_remoteTimeStamp)) double_t  remoteTimeStamp;

/// @brief Method Disconnect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method GetBatchForChannelId, addr 0x181542660, size 0x100, virtual false, abstract: false, final false
inline ::Mirror::Batcher* GetBatchForChannelId(int32_t  channelId) ;

/// @brief Method IsAlive, addr 0x181542760, size 0x30, virtual true, abstract: false, final false
inline bool IsAlive(float_t  timeout) ;

static inline ::Mirror::NetworkConnection* New_ctor() ;

static inline ::Mirror::NetworkConnection* New_ctor(int32_t  networkConnectionId) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Send(T  message, int32_t  channelId) ;

/// @brief Method Send, addr 0x181542790, size 0x60, virtual true, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method SendToTransport, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendToTransport(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ToString, addr 0x1815427f0, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Update, addr 0x181542830, size 0x240, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method ValidatePacketSize, addr 0x181542a70, size 0xc0, virtual false, abstract: false, final false
static inline bool ValidatePacketSize(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get__identity_k__BackingField() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get__identity_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__remoteTimeStamp_k__BackingField() const;

constexpr double_t& __cordl_internal_get__remoteTimeStamp_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get_authenticationData() const;

constexpr ::System::Object*& __cordl_internal_get_authenticationData() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>* const& __cordl_internal_get_batches() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>*& __cordl_internal_get_batches() ;

constexpr int32_t const& __cordl_internal_get_connectionId() const;

constexpr int32_t& __cordl_internal_get_connectionId() ;

constexpr bool const& __cordl_internal_get_isAuthenticated() const;

constexpr bool& __cordl_internal_get_isAuthenticated() ;

constexpr bool const& __cordl_internal_get_isReady() const;

constexpr bool& __cordl_internal_get_isReady() ;

constexpr float_t const& __cordl_internal_get_lastMessageTime() const;

constexpr float_t& __cordl_internal_get_lastMessageTime() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>* const& __cordl_internal_get_owned() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*& __cordl_internal_get_owned() ;

constexpr void __cordl_internal_set__identity_k__BackingField(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set__remoteTimeStamp_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set_authenticationData(::System::Object*  value) ;

constexpr void __cordl_internal_set_batches(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>*  value) ;

constexpr void __cordl_internal_set_connectionId(int32_t  value) ;

constexpr void __cordl_internal_set_isAuthenticated(bool  value) ;

constexpr void __cordl_internal_set_isReady(bool  value) ;

constexpr void __cordl_internal_set_lastMessageTime(float_t  value) ;

constexpr void __cordl_internal_set_owned(::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  value) ;

/// @brief Method .ctor, addr 0x181542b60, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181542b30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  networkConnectionId) ;

/// @brief Method get_identity, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkIdentity> get_identity() ;

/// @brief Method get_remoteTimeStamp, addr 0x18051eb10, size 0x10, virtual false, abstract: false, final false
inline double_t get_remoteTimeStamp() ;

/// @brief Method set_identity, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_identity(::Mirror::NetworkIdentity*  value) ;

/// @brief Method set_remoteTimeStamp, addr 0x18051eb30, size 0x10, virtual false, abstract: false, final false
inline void set_remoteTimeStamp(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkConnection(NetworkConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkConnection(NetworkConnection const& ) = delete;

/// @brief Field LocalConnectionId offset 0xffffffff size 0x4
static constexpr int32_t  LocalConnectionId{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18310};

/// @brief Field connectionId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___connectionId;

/// @brief Field isAuthenticated, offset: 0x14, size: 0x1, def value: None
 bool  ___isAuthenticated;

/// @brief Field authenticationData, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___authenticationData;

/// @brief Field isReady, offset: 0x20, size: 0x1, def value: None
 bool  ___isReady;

/// @brief Field lastMessageTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___lastMessageTime;

/// @brief Field <identity>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ____identity_k__BackingField;

/// @brief Field owned, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  ___owned;

/// @brief Field batches, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>*  ___batches;

/// @brief Field <remoteTimeStamp>k__BackingField, offset: 0x40, size: 0x8, def value: None
 double_t  ____remoteTimeStamp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkConnection, ___connectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ___isAuthenticated) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ___authenticationData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ___isReady) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ___lastMessageTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ____identity_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ___owned) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ___batches) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnection, ____remoteTimeStamp_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkConnection) == 0x48, "Size mismatch!");

} // namespace end def Mirror
