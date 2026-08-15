#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ConnectionNegotiator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionNegotiator_1)
namespace Dissonance::Networking::Client {
struct ConnectionState;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class ISendQueue_1;
}
namespace Dissonance::Networking::Client {
class ISession;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Log;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class ConnectionNegotiator_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::ConnectionNegotiator_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::ConnectionNegotiator_1, "Dissonance.Networking.Client", "ConnectionNegotiator`1");
// Dependencies Dissonance.CodecSettings, System.DateTime, System.Nullable`1<T>, System.Object, System.TimeSpan
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.ConnectionNegotiator`1<TPeer>
class CORDL_TYPE ConnectionNegotiator_1 : public ::System::Object {
public:
// Declarations
/// @brief Field HandshakeRequestInterval, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HandshakeRequestInterval, put=setStaticF_HandshakeRequestInterval)) ::System::TimeSpan  HandshakeRequestInterval;

 __declspec(property(get=get_LocalId, put=set_LocalId)) ::System::Nullable_1<uint16_t>  LocalId;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_SessionId, put=set_SessionId)) uint32_t  SessionId;

 __declspec(property(get=get_State)) ::Dissonance::Networking::Client::ConnectionState  State;

/// @brief Field <LocalId>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__LocalId_k__BackingField, put=__cordl_internal_set__LocalId_k__BackingField)) ::System::Nullable_1<uint16_t>  _LocalId_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) uint32_t  _SessionId_k__BackingField;

/// @brief Field _codecSettings, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__codecSettings, put=__cordl_internal_set__codecSettings)) ::Dissonance::CodecSettings  _codecSettings;

/// @brief Field _connectionStateValue, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__connectionStateValue, put=__cordl_internal_set__connectionStateValue)) int32_t  _connectionStateValue;

/// @brief Field _lastHandshakeRequest, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastHandshakeRequest, put=__cordl_internal_set__lastHandshakeRequest)) ::System::DateTime  _lastHandshakeRequest;

/// @brief Field _playerName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerName, put=__cordl_internal_set__playerName)) ::StringW  _playerName;

/// @brief Field _running, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__running, put=__cordl_internal_set__running)) bool  _running;

/// @brief Field _sender, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__sender, put=__cordl_internal_set__sender)) ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  _sender;

/// @brief Convert operator to "::Dissonance::Networking::Client::ISession"
constexpr operator  ::Dissonance::Networking::Client::ISession*() noexcept;

static inline ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>* New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method ReceiveHandshakeResponseHeader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReceiveHandshakeResponseHeader(::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method SendHandshake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendHandshake(::System::DateTime  utcNow) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update(::System::DateTime  utcNow) ;

constexpr ::System::Nullable_1<uint16_t> const& __cordl_internal_get__LocalId_k__BackingField() const;

constexpr ::System::Nullable_1<uint16_t>& __cordl_internal_get__LocalId_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr ::Dissonance::CodecSettings const& __cordl_internal_get__codecSettings() const;

constexpr ::Dissonance::CodecSettings& __cordl_internal_get__codecSettings() ;

constexpr int32_t const& __cordl_internal_get__connectionStateValue() const;

constexpr int32_t& __cordl_internal_get__connectionStateValue() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastHandshakeRequest() const;

constexpr ::System::DateTime& __cordl_internal_get__lastHandshakeRequest() ;

constexpr ::StringW const& __cordl_internal_get__playerName() const;

constexpr ::StringW& __cordl_internal_get__playerName() ;

constexpr bool const& __cordl_internal_get__running() const;

constexpr bool& __cordl_internal_get__running() ;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& __cordl_internal_get__sender() const;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& __cordl_internal_get__sender() ;

constexpr void __cordl_internal_set__LocalId_k__BackingField(::System::Nullable_1<uint16_t>  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__codecSettings(::Dissonance::CodecSettings  value) ;

constexpr void __cordl_internal_set__connectionStateValue(int32_t  value) ;

constexpr void __cordl_internal_set__lastHandshakeRequest(::System::DateTime  value) ;

constexpr void __cordl_internal_set__playerName(::StringW  value) ;

constexpr void __cordl_internal_set__running(bool  value) ;

constexpr void __cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings) ;

static inline ::System::TimeSpan getStaticF_HandshakeRequestInterval() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_LocalId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Nullable_1<uint16_t> get_LocalId() ;

/// @brief Method get_LocalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_LocalName() ;

/// @brief Method get_SessionId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline uint32_t get_SessionId() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Client::ConnectionState get_State() ;

/// @brief Convert to "::Dissonance::Networking::Client::ISession"
constexpr ::Dissonance::Networking::Client::ISession* i___Dissonance__Networking__Client__ISession() noexcept;

static inline void setStaticF_HandshakeRequestInterval(::System::TimeSpan  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_LocalId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_LocalId(::System::Nullable_1<uint16_t>  value) ;

/// @brief Method set_SessionId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_SessionId(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectionNegotiator_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectionNegotiator_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionNegotiator_1(ConnectionNegotiator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionNegotiator_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionNegotiator_1(ConnectionNegotiator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16907};

/// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  ____sender;

/// @brief Field _playerName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____playerName;

/// @brief Field _codecSettings, offset: 0x20, size: 0xc, def value: None
 ::Dissonance::CodecSettings  ____codecSettings;

/// @brief Field _lastHandshakeRequest, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ____lastHandshakeRequest;

/// @brief Field _running, offset: 0x38, size: 0x1, def value: None
 bool  ____running;

/// @brief Field _connectionStateValue, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____connectionStateValue;

/// @brief Field <SessionId>k__BackingField, offset: 0x40, size: 0x4, def value: None
 uint32_t  ____SessionId_k__BackingField;

/// @brief Field <LocalId>k__BackingField, offset: 0x44, size: 0x4, def value: None
 ::System::Nullable_1<uint16_t>  ____LocalId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
