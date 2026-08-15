#pragma once
// IWYU pragma private; include "Rewired/ControllerIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerIdentifier)
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
struct ControllerIdentifier;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerIdentifier);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerIdentifier, "Rewired", "ControllerIdentifier");
// Dependencies Rewired.ControllerType, System.Guid
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerIdentifier
struct CORDL_TYPE ControllerIdentifier {
public:
// Declarations
 __declspec(property(get=get_controllerId, put=set_controllerId)) int32_t  controllerId;

 __declspec(property(get=get_controllerType, put=set_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_deviceInstanceGuid, put=set_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

 __declspec(property(get=get_hardwareIdentifier, put=set_hardwareIdentifier)) ::StringW  hardwareIdentifier;

 __declspec(property(get=get_hardwareTypeGuid, put=set_hardwareTypeGuid)) ::System::Guid  hardwareTypeGuid;

/// @brief Method .ctor, addr 0x18183de70, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Blank, addr 0x18183df00, size 0x110, virtual false, abstract: false, final false
static inline ::Rewired::ControllerIdentifier get_Blank() ;

/// @brief Method get_controllerId, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerType, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_deviceInstanceGuid, addr 0x1802f41b0, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_hardwareIdentifier, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_hardwareIdentifier() ;

/// @brief Method get_hardwareTypeGuid, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_hardwareTypeGuid() ;

/// @brief Method set_controllerId, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_controllerId(int32_t  value) ;

/// @brief Method set_controllerType, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_controllerType(::Rewired::ControllerType  value) ;

/// @brief Method set_deviceInstanceGuid, addr 0x1815b93b0, size 0x10, virtual false, abstract: false, final false
inline void set_deviceInstanceGuid(::System::Guid  value) ;

/// @brief Method set_hardwareIdentifier, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_hardwareIdentifier(::StringW  value) ;

/// @brief Method set_hardwareTypeGuid, addr 0x18051e9e0, size 0x10, virtual false, abstract: false, final false
inline void set_hardwareTypeGuid(::System::Guid  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerIdentifier() ;

// Ctor Parameters [CppParam { name: "ffTaUjBBBUxTyxYxciansJzCJuJe", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "oFtWUbTgyXPUhFeqTpbQPcNnwKuV", ty: "::Rewired::ControllerType", modifiers: "", def_value: None }, CppParam { name: "SIEtplRZhLVsVDSdGRHLylWKIZpF", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "BmrybQzSbvWomFZOQeIvrOcsvxyD", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "FJThuqAUDZAuRgGtaiCJegEgWNbp", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr ControllerIdentifier(int32_t  ffTaUjBBBUxTyxYxciansJzCJuJe, ::Rewired::ControllerType  oFtWUbTgyXPUhFeqTpbQPcNnwKuV, ::System::Guid  SIEtplRZhLVsVDSdGRHLylWKIZpF, ::StringW  BmrybQzSbvWomFZOQeIvrOcsvxyD, ::System::Guid  FJThuqAUDZAuRgGtaiCJegEgWNbp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field ffTaUjBBBUxTyxYxciansJzCJuJe, offset: 0x0, size: 0x4, def value: None
 int32_t  ffTaUjBBBUxTyxYxciansJzCJuJe;

/// @brief Field oFtWUbTgyXPUhFeqTpbQPcNnwKuV, offset: 0x4, size: 0x4, def value: None
 ::Rewired::ControllerType  oFtWUbTgyXPUhFeqTpbQPcNnwKuV;

/// @brief Field SIEtplRZhLVsVDSdGRHLylWKIZpF, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  SIEtplRZhLVsVDSdGRHLylWKIZpF;

/// @brief Field BmrybQzSbvWomFZOQeIvrOcsvxyD, offset: 0x18, size: 0x8, def value: None
 ::StringW  BmrybQzSbvWomFZOQeIvrOcsvxyD;

/// @brief Field FJThuqAUDZAuRgGtaiCJegEgWNbp, offset: 0x20, size: 0x10, def value: None
 ::System::Guid  FJThuqAUDZAuRgGtaiCJegEgWNbp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerIdentifier, ffTaUjBBBUxTyxYxciansJzCJuJe) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerIdentifier, oFtWUbTgyXPUhFeqTpbQPcNnwKuV) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerIdentifier, SIEtplRZhLVsVDSdGRHLylWKIZpF) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerIdentifier, BmrybQzSbvWomFZOQeIvrOcsvxyD) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerIdentifier, FJThuqAUDZAuRgGtaiCJegEgWNbp) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerIdentifier) == 0x30, "Size mismatch!");

} // namespace end def Rewired
