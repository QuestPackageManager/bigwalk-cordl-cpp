#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleMaxLightOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleMaxLightOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleMaxLightOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleMaxLightOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleMaxLightOperation*, "Shipmates.RemotePlayerDebug", "ToggleMaxLightOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleMaxLightOperation
class CORDL_TYPE ToggleMaxLightOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field _defaultMaxLightCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultMaxLightCount, put=__cordl_internal_set__defaultMaxLightCount)) int32_t  _defaultMaxLightCount;

/// @brief Field _initialized, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Method Execute, addr 0x1803b40e0, size 0x170, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleMaxLightOperation* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__defaultMaxLightCount() const;

constexpr int32_t& __cordl_internal_get__defaultMaxLightCount() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr void __cordl_internal_set__defaultMaxLightCount(int32_t  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b4250, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleMaxLightOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleMaxLightOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleMaxLightOperation(ToggleMaxLightOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleMaxLightOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleMaxLightOperation(ToggleMaxLightOperation const& ) = delete;

/// @brief Field RequestName offset 0xffffffff size 0x8
static constexpr ::ConstString  RequestName{u"toggle-max-light"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5743};

/// @brief Field _defaultMaxLightCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ____defaultMaxLightCount;

/// @brief Field _initialized, offset: 0x14, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleMaxLightOperation, ____defaultMaxLightCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleMaxLightOperation, ____initialized) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleMaxLightOperation) == 0x18, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
