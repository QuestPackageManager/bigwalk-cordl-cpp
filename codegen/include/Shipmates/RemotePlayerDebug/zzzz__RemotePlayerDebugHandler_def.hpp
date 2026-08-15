#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemotePlayerDebugHandler)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugOperationBase;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugHandler;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*, "Shipmates.RemotePlayerDebug", "RemotePlayerDebugHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.RemotePlayerDebugHandler
class CORDL_TYPE RemotePlayerDebugHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ops, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ops, put=__cordl_internal_set_ops)) ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*  ops;

/// @brief Method Awake, addr 0x1803ac140, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateNew, addr 0x1803ac170, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> CreateNew() ;

/// @brief Method HandleRequest, addr 0x1803ac1c0, size 0x140, virtual false, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* HandleRequest(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  req) ;

static inline ::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>* const& __cordl_internal_get_ops() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*& __cordl_internal_get_ops() ;

constexpr void __cordl_internal_set_ops(::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemotePlayerDebugHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemotePlayerDebugHandler(RemotePlayerDebugHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemotePlayerDebugHandler(RemotePlayerDebugHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5752};

/// @brief Field ops, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*  ___ops;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler, ___ops) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler) == 0x28, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
