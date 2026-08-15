#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleRocksOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleRocksOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleRocksOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleRocksOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleRocksOperation*, "Shipmates.RemotePlayerDebug", "ToggleRocksOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleRocksOperation
class CORDL_TYPE ToggleRocksOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field _currentRocksEnabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentRocksEnabled, put=__cordl_internal_set__currentRocksEnabled)) bool  _currentRocksEnabled;

/// @brief Field _disabledRocks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledRocks, put=__cordl_internal_set__disabledRocks)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  _disabledRocks;

/// @brief Method Execute, addr 0x1803b47c0, size 0x380, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleRocksOperation* New_ctor() ;

constexpr bool const& __cordl_internal_get__currentRocksEnabled() const;

constexpr bool& __cordl_internal_get__currentRocksEnabled() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__disabledRocks() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__disabledRocks() ;

constexpr void __cordl_internal_set__currentRocksEnabled(bool  value) ;

constexpr void __cordl_internal_set__disabledRocks(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x1803b4b40, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b4b90, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleRocksOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleRocksOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleRocksOperation(ToggleRocksOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleRocksOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleRocksOperation(ToggleRocksOperation const& ) = delete;

/// @brief Field RequestName offset 0xffffffff size 0x8
static constexpr ::ConstString  RequestName{u"toggle-rocks"};

/// @brief Field ShaderName offset 0xffffffff size 0x8
static constexpr ::ConstString  ShaderName{u"househouse/hhRock"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5745};

/// @brief Field _currentRocksEnabled, offset: 0x10, size: 0x1, def value: None
 bool  ____currentRocksEnabled;

/// @brief Field _disabledRocks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ____disabledRocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleRocksOperation, ____currentRocksEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleRocksOperation, ____disabledRocks) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleRocksOperation) == 0x20, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
