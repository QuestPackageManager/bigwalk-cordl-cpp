#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/RemoteProcedureCalls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteProcedureCalls)
namespace Mirror::RemoteCalls {
class Invoker;
}
namespace Mirror::RemoteCalls {
class RemoteCallDelegate;
}
namespace Mirror::RemoteCalls {
struct RemoteCallType;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Mirror::RemoteCalls {
class RemoteProcedureCalls;
}
// Write type traits
MARK_REF_T(::Mirror::RemoteCalls::RemoteProcedureCalls*);
DEFINE_IL2CPP_CLASS(::Mirror::RemoteCalls::RemoteProcedureCalls*, "Mirror.RemoteCalls", "RemoteProcedureCalls");
// Dependencies System.Object
namespace Mirror::RemoteCalls {
// Is value type: false
// CS Name: Mirror.RemoteCalls.RemoteProcedureCalls
class CORDL_TYPE RemoteProcedureCalls : public ::System::Object {
public:
// Declarations
/// @brief Field remoteCallDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_remoteCallDelegates, put=setStaticF_remoteCallDelegates)) ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>*  remoteCallDelegates;

/// @brief Method CheckIfDelegateExists, addr 0x1815978f0, size 0x1d0, virtual false, abstract: false, final false
static inline bool CheckIfDelegateExists(::System::Type*  componentType, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*  func, uint16_t  functionHash) ;

/// @brief Method CommandRequiresAuthority, addr 0x181597ac0, size 0x80, virtual false, abstract: false, final false
static inline bool CommandRequiresAuthority(uint16_t  cmdHash) ;

/// @brief Method GetDelegate, addr 0x181597b40, size 0x80, virtual false, abstract: false, final false
static inline ::Mirror::RemoteCalls::RemoteCallDelegate* GetDelegate(uint16_t  functionHash) ;

/// @brief Method GetInvokerForHash, addr 0x181597bc0, size 0xa0, virtual false, abstract: false, final false
static inline bool GetInvokerForHash(uint16_t  functionHash, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::by_ref<::Mirror::RemoteCalls::Invoker*>  invoker) ;

/// @brief Method Invoke, addr 0x181597c60, size 0x100, virtual false, abstract: false, final false
static inline bool Invoke(uint16_t  functionHash, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkBehaviour*  component, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method RegisterCommand, addr 0x181597d60, size 0x30, virtual false, abstract: false, final false
static inline void RegisterCommand(::System::Type*  componentType, ::StringW  functionFullName, ::Mirror::RemoteCalls::RemoteCallDelegate*  func, bool  requiresAuthority) ;

/// @brief Method RegisterDelegate, addr 0x181597d90, size 0x110, virtual false, abstract: false, final false
static inline uint16_t RegisterDelegate(::System::Type*  componentType, ::StringW  functionFullName, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*  func, bool  cmdRequiresAuthority) ;

/// @brief Method RegisterRpc, addr 0x181597ea0, size 0x30, virtual false, abstract: false, final false
static inline void RegisterRpc(::System::Type*  componentType, ::StringW  functionFullName, ::Mirror::RemoteCalls::RemoteCallDelegate*  func) ;

/// @brief Method RemoveDelegate, addr 0x181597ed0, size 0x60, virtual false, abstract: false, final false
static inline void RemoveDelegate(uint16_t  hash) ;

static inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>* getStaticF_remoteCallDelegates() ;

static inline void setStaticF_remoteCallDelegates(::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteProcedureCalls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCalls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCalls(RemoteProcedureCalls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCalls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCalls(RemoteProcedureCalls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::RemoteCalls::RemoteProcedureCalls) == 0x10, "Size mismatch!");

} // namespace end def Mirror::RemoteCalls
