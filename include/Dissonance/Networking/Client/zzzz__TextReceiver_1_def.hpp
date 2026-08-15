#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/TextReceiver_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextReceiver_1)
namespace Dissonance::Networking::Client {
class EventQueue;
}
namespace Dissonance::Networking {
template<typename TPeer>
class IClientCollection_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance {
struct ChannelType;
}
namespace Dissonance {
class IRooms;
}
namespace Dissonance {
class Log;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class TextReceiver_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::TextReceiver_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::TextReceiver_1, "Dissonance.Networking.Client", "TextReceiver`1");
// Dependencies System.Object
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.TextReceiver`1<TPeer>
class CORDL_TYPE TextReceiver_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Dissonance::Networking::Client::EventQueue*  _events;

/// @brief Field _peers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__peers, put=__cordl_internal_set__peers)) ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  _peers;

/// @brief Field _rooms, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::Dissonance::IRooms*  _rooms;

/// @brief Method GetTxtMessageRecipient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW GetTxtMessageRecipient(::Dissonance::ChannelType  txtRecipientType, uint16_t  txtRecipient) ;

static inline ::Dissonance::Networking::Client::TextReceiver_1<TPeer>* New_ctor(::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::IRooms*  rooms, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers) ;

/// @brief Method ProcessTextMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ProcessTextMessage(::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

constexpr ::Dissonance::Networking::Client::EventQueue* const& __cordl_internal_get__events() const;

constexpr ::Dissonance::Networking::Client::EventQueue*& __cordl_internal_get__events() ;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& __cordl_internal_get__peers() const;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& __cordl_internal_get__peers() ;

constexpr ::Dissonance::IRooms* const& __cordl_internal_get__rooms() const;

constexpr ::Dissonance::IRooms*& __cordl_internal_get__rooms() ;

constexpr void __cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value) ;

constexpr void __cordl_internal_set__peers(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value) ;

constexpr void __cordl_internal_set__rooms(::Dissonance::IRooms*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::IRooms*  rooms, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextReceiver_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextReceiver_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextReceiver_1(TextReceiver_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextReceiver_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextReceiver_1(TextReceiver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16922};

/// @brief Field _events, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Client::EventQueue*  ____events;

/// @brief Field _rooms, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::IRooms*  ____rooms;

/// @brief Field _peers, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  ____peers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
