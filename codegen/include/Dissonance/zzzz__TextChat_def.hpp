#pragma once
// IWYU pragma private; include "Dissonance/TextChat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextChat)
namespace Dissonance::Networking {
class ICommsNetwork;
}
namespace Dissonance::Networking {
struct TextMessage;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Dissonance {
class TextChat;
}
// Write type traits
MARK_REF_T(::Dissonance::TextChat*);
DEFINE_IL2CPP_CLASS(::Dissonance::TextChat*, "Dissonance", "TextChat");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.TextChat
class CORDL_TYPE TextChat : public ::System::Object {
public:
// Declarations
/// @brief Field MessageReceived, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessageReceived, put=__cordl_internal_set_MessageReceived)) ::System::Action_1<::Dissonance::Networking::TextMessage>*  MessageReceived;

/// @brief Field _getNetwork, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__getNetwork, put=__cordl_internal_set__getNetwork)) ::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  _getNetwork;

static inline ::Dissonance::TextChat* New_ctor(::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  getNetwork) ;

/// @brief Method OnMessageReceived, addr 0x1805d15d0, size 0x40, virtual false, abstract: false, final false
inline void OnMessageReceived(::Dissonance::Networking::TextMessage  obj) ;

/// @brief Method Send, addr 0x1805d1610, size 0xa0, virtual false, abstract: false, final false
inline void Send(::StringW  roomName, ::StringW  message) ;

/// @brief Method Whisper, addr 0x1805d16b0, size 0xa0, virtual false, abstract: false, final false
inline void Whisper(::StringW  playerName, ::StringW  message) ;

constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>* const& __cordl_internal_get_MessageReceived() const;

constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>*& __cordl_internal_get_MessageReceived() ;

constexpr ::System::Func_1<::Dissonance::Networking::ICommsNetwork*>* const& __cordl_internal_get__getNetwork() const;

constexpr ::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*& __cordl_internal_get__getNetwork() ;

constexpr void __cordl_internal_set_MessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

constexpr void __cordl_internal_set__getNetwork(::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  value) ;

/// @brief Method .ctor, addr 0x1805d1750, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  getNetwork) ;

/// @brief Method add_MessageReceived, addr 0x1805d1780, size 0x90, virtual false, abstract: false, final false
inline void add_MessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method remove_MessageReceived, addr 0x1805d1810, size 0x90, virtual false, abstract: false, final false
inline void remove_MessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextChat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextChat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextChat(TextChat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextChat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextChat(TextChat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16826};

/// @brief Field _getNetwork, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  ____getNetwork;

/// @brief Field MessageReceived, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::TextMessage>*  ___MessageReceived;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::TextChat, ____getNetwork) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::TextChat, ___MessageReceived) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::TextChat) == 0x20, "Size mismatch!");

} // namespace end def Dissonance
