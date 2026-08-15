#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemotePlayerDebugReceiver)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugHandler;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugReceiver;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*, "Shipmates.RemotePlayerDebug", "RemotePlayerDebugReceiver");
// Dependencies System.Object
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.RemotePlayerDebugReceiver
class CORDL_TYPE RemotePlayerDebugReceiver : public ::System::Object {
public:
// Declarations
/// @brief Field _handler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__handler, put=setStaticF__handler)) ::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>  _handler;

/// @brief Field _isInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isInitialized, put=setStaticF__isInitialized)) bool  _isInitialized;

/// @brief Method GetHandler, addr 0x1803d0620, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> GetHandler() ;

/// @brief Method OnConnection, addr 0x1803d0690, size 0x50, virtual false, abstract: false, final false
static inline void OnConnection(int32_t  playerId) ;

/// @brief Method OnDisconnection, addr 0x1803d06e0, size 0x50, virtual false, abstract: false, final false
static inline void OnDisconnection(int32_t  playerId) ;

/// @brief Method OnRequestFromEditor, addr 0x1803d0730, size 0x1a0, virtual false, abstract: false, final false
static inline void OnRequestFromEditor(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method Setup, addr 0x1803d08d0, size 0x150, virtual false, abstract: false, final false
static inline void Setup() ;

static inline ::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> getStaticF__handler() ;

static inline bool getStaticF__isInitialized() ;

static inline void setStaticF__handler(::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>  value) ;

static inline void setStaticF__isInitialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemotePlayerDebugReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugReceiver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemotePlayerDebugReceiver(RemotePlayerDebugReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugReceiver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemotePlayerDebugReceiver(RemotePlayerDebugReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
