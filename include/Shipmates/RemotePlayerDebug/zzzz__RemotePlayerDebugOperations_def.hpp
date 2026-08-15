#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugOperations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemotePlayerDebugOperations)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugOperationBase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugOperations;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations*, "Shipmates.RemotePlayerDebug", "RemotePlayerDebugOperations");
// Dependencies System.Object
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.RemotePlayerDebugOperations
class CORDL_TYPE RemotePlayerDebugOperations : public ::System::Object {
public:
// Declarations
/// @brief Method AddOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T AddOperation(::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*  dict) ;

/// @brief Method CreateOperations, addr 0x1803d03b0, size 0x270, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>* CreateOperations() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemotePlayerDebugOperations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugOperations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemotePlayerDebugOperations(RemotePlayerDebugOperations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugOperations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemotePlayerDebugOperations(RemotePlayerDebugOperations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
