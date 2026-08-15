#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleLandmarksOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleLandmarksOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleLandmarksOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleLandmarksOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleLandmarksOperation*, "Shipmates.RemotePlayerDebug", "ToggleLandmarksOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleLandmarksOperation
class CORDL_TYPE ToggleLandmarksOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field _currentLandmarksEnabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentLandmarksEnabled, put=__cordl_internal_set__currentLandmarksEnabled)) bool  _currentLandmarksEnabled;

/// @brief Method Execute, addr 0x1803b3f80, size 0x150, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleLandmarksOperation* New_ctor() ;

constexpr bool const& __cordl_internal_get__currentLandmarksEnabled() const;

constexpr bool& __cordl_internal_get__currentLandmarksEnabled() ;

constexpr void __cordl_internal_set__currentLandmarksEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b40d0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleLandmarksOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleLandmarksOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleLandmarksOperation(ToggleLandmarksOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleLandmarksOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleLandmarksOperation(ToggleLandmarksOperation const& ) = delete;

/// @brief Field RequestName offset 0xffffffff size 0x8
static constexpr ::ConstString  RequestName{u"toggle-landmarks"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5742};

/// @brief Field _currentLandmarksEnabled, offset: 0x10, size: 0x1, def value: None
 bool  ____currentLandmarksEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleLandmarksOperation, ____currentLandmarksEnabled) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleLandmarksOperation) == 0x18, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
