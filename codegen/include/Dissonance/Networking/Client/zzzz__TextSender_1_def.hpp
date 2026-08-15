#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/TextSender_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextSender_1)
namespace Dissonance::Networking::Client {
template<typename TPeer>
class ISendQueue_1;
}
namespace Dissonance::Networking::Client {
class ISession;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
template<typename TPeer>
class IClientCollection_1;
}
namespace Dissonance {
struct ChannelType;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class TextSender_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::TextSender_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::TextSender_1, "Dissonance.Networking.Client", "TextSender`1");
// Dependencies System.Object
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.TextSender`1<TPeer>
class CORDL_TYPE TextSender_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _peers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__peers, put=__cordl_internal_set__peers)) ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  _peers;

/// @brief Field _sender, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sender, put=__cordl_internal_set__sender)) ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  _sender;

/// @brief Field _session, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__session, put=__cordl_internal_set__session)) ::Dissonance::Networking::Client::ISession*  _session;

/// @brief Field _tmpClients, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpClients, put=__cordl_internal_set__tmpClients)) ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  _tmpClients;

/// @brief Field _tmpDests, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpDests, put=__cordl_internal_set__tmpDests)) ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  _tmpDests;

static inline ::Dissonance::Networking::Client::TextSender_1<TPeer>* New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Send(::StringW  data, ::Dissonance::ChannelType  type, ::StringW  recipient) ;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& __cordl_internal_get__peers() const;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& __cordl_internal_get__peers() ;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& __cordl_internal_get__sender() const;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& __cordl_internal_get__sender() ;

constexpr ::Dissonance::Networking::Client::ISession* const& __cordl_internal_get__session() const;

constexpr ::Dissonance::Networking::Client::ISession*& __cordl_internal_get__session() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& __cordl_internal_get__tmpClients() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& __cordl_internal_get__tmpClients() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& __cordl_internal_get__tmpDests() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& __cordl_internal_get__tmpDests() ;

constexpr void __cordl_internal_set__peers(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value) ;

constexpr void __cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value) ;

constexpr void __cordl_internal_set__tmpClients(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

constexpr void __cordl_internal_set__tmpDests(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextSender_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextSender_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextSender_1(TextSender_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextSender_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextSender_1(TextSender_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16923};

/// @brief Field _session, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISession*  ____session;

/// @brief Field _sender, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  ____sender;

/// @brief Field _peers, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  ____peers;

/// @brief Field _tmpDests, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  ____tmpDests;

/// @brief Field _tmpClients, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  ____tmpClients;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
