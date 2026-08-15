#pragma once
// IWYU pragma private; include "Dissonance/Networking/ClientInfo_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientInfo_1)
namespace Dissonance::Networking::Client {
class PeerVoiceReceiver;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::ClientInfo_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::ClientInfo_1, "Dissonance.Networking", "ClientInfo`1");
// Dependencies Dissonance.CodecSettings, System.Object
namespace Dissonance::Networking {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.ClientInfo`1<TPeer>
class CORDL_TYPE ClientInfo_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CodecSettings)) ::Dissonance::CodecSettings  CodecSettings;

 __declspec(property(get=get_Connection, put=set_Connection)) TPeer  Connection;

 __declspec(property(get=get_IsConnected, put=set_IsConnected)) bool  IsConnected;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_PlayerId)) uint16_t  PlayerId;

 __declspec(property(get=get_PlayerName)) ::StringW  PlayerName;

 __declspec(property(get=get_Rooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms;

 __declspec(property(get=get_VoiceReceiver, put=set_VoiceReceiver)) ::Dissonance::Networking::Client::PeerVoiceReceiver*  VoiceReceiver;

/// @brief Field <CodecSettings>k__BackingField, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__CodecSettings_k__BackingField, put=__cordl_internal_set__CodecSettings_k__BackingField)) ::Dissonance::CodecSettings  _CodecSettings_k__BackingField;

/// @brief Field <Connection>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Connection_k__BackingField, put=__cordl_internal_set__Connection_k__BackingField)) TPeer  _Connection_k__BackingField;

/// @brief Field <IsConnected>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsConnected_k__BackingField, put=__cordl_internal_set__IsConnected_k__BackingField)) bool  _IsConnected_k__BackingField;

/// @brief Field <PlayerId>k__BackingField, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get__PlayerId_k__BackingField, put=__cordl_internal_set__PlayerId_k__BackingField)) uint16_t  _PlayerId_k__BackingField;

/// @brief Field <PlayerName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerName_k__BackingField, put=__cordl_internal_set__PlayerName_k__BackingField)) ::StringW  _PlayerName_k__BackingField;

/// @brief Field <Rooms>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rooms_k__BackingField, put=__cordl_internal_set__Rooms_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  _Rooms_k__BackingField;

/// @brief Field <VoiceReceiver>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__VoiceReceiver_k__BackingField, put=__cordl_internal_set__VoiceReceiver_k__BackingField)) ::Dissonance::Networking::Client::PeerVoiceReceiver*  _VoiceReceiver_k__BackingField;

/// @brief Field _rooms, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::System::Collections::Generic::List_1<::StringW>*  _rooms;

/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>"
constexpr operator  ::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*() noexcept;

/// @brief Method AddRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool AddRoom(::StringW  roomName) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::Networking::ClientInfo_1<TPeer>*  other) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Dissonance::Networking::ClientInfo_1<TPeer>* New_ctor(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings, TPeer  connection) ;

/// @brief Method RemoveRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RemoveRoom(::StringW  roomName) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Dissonance::CodecSettings const& __cordl_internal_get__CodecSettings_k__BackingField() const;

constexpr ::Dissonance::CodecSettings& __cordl_internal_get__CodecSettings_k__BackingField() ;

constexpr TPeer const& __cordl_internal_get__Connection_k__BackingField() const;

constexpr TPeer& __cordl_internal_get__Connection_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsConnected_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsConnected_k__BackingField() ;

constexpr uint16_t const& __cordl_internal_get__PlayerId_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__PlayerId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayerName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayerName_k__BackingField() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& __cordl_internal_get__Rooms_k__BackingField() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& __cordl_internal_get__Rooms_k__BackingField() ;

constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver* const& __cordl_internal_get__VoiceReceiver_k__BackingField() const;

constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver*& __cordl_internal_get__VoiceReceiver_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__rooms() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__rooms() ;

constexpr void __cordl_internal_set__CodecSettings_k__BackingField(::Dissonance::CodecSettings  value) ;

constexpr void __cordl_internal_set__Connection_k__BackingField(TPeer  value) ;

constexpr void __cordl_internal_set__IsConnected_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PlayerId_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set__PlayerName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Rooms_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__VoiceReceiver_k__BackingField(::Dissonance::Networking::Client::PeerVoiceReceiver*  value) ;

constexpr void __cordl_internal_set__rooms(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings, TPeer  connection) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_CodecSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::CodecSettings get_CodecSettings() ;

/// @brief Method get_Connection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TPeer get_Connection() ;

/// @brief Method get_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_PlayerId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint16_t get_PlayerId() ;

/// @brief Method get_PlayerName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_PlayerName() ;

/// @brief Method get_Rooms, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_Rooms() ;

/// @brief Method get_VoiceReceiver, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Client::PeerVoiceReceiver* get_VoiceReceiver() ;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>"
constexpr ::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* i___System__IEquatable_1___Dissonance__Networking__ClientInfo_1_TPeer___() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_Connection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Connection(TPeer  value) ;

/// @brief Method set_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_IsConnected(bool  value) ;

/// @brief Method set_VoiceReceiver, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_VoiceReceiver(::Dissonance::Networking::Client::PeerVoiceReceiver*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientInfo_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientInfo_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientInfo_1(ClientInfo_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientInfo_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientInfo_1(ClientInfo_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16877};

/// @brief Field _rooms, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____rooms;

/// @brief Field <PlayerName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____PlayerName_k__BackingField;

/// @brief Field <PlayerId>k__BackingField, offset: 0x20, size: 0x2, def value: None
 uint16_t  ____PlayerId_k__BackingField;

/// @brief Field <CodecSettings>k__BackingField, offset: 0x24, size: 0xc, def value: None
 ::Dissonance::CodecSettings  ____CodecSettings_k__BackingField;

/// @brief Field <Rooms>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  ____Rooms_k__BackingField;

/// @brief Field <Connection>k__BackingField, offset: 0x38, size: 0x8, def value: None
 TPeer  ____Connection_k__BackingField;

/// @brief Field <IsConnected>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsConnected_k__BackingField;

/// @brief Field <VoiceReceiver>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Networking::Client::PeerVoiceReceiver*  ____VoiceReceiver_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
