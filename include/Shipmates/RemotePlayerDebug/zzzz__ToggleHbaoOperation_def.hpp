#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleHbaoOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemoteVolumeDebugOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleHbaoOperation)
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleHbaoOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*, "Shipmates.RemotePlayerDebug", "ToggleHbaoOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemoteVolumeDebugOperationBase`1<T>
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleHbaoOperation
class CORDL_TYPE ToggleHbaoOperation : public ::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO>> {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803b3e30, size 0x140, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleHbaoOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b3f70, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleHbaoOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleHbaoOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleHbaoOperation(ToggleHbaoOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleHbaoOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleHbaoOperation(ToggleHbaoOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleHbaoOperation) == 0x28, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
