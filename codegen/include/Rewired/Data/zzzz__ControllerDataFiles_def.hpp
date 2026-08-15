#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerDataFiles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickTemplateMap_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerDataFiles)
namespace GlobalNamespace {
class TcdPIZMIwGFYJfZZOMhQGedCCqvbA;
}
namespace Rewired::Data::Mapping {
struct HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Platform;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap;
}
namespace Rewired::Data::Mapping {
class IHardwareControllerMap;
}
namespace Rewired::Data::Mapping {
class IHardwareControllerTemplateMap;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2;
}
namespace Rewired {
class BridgedControllerHWInfo;
}
namespace Rewired {
class ControllerTemplateElementIdentifier;
}
namespace Rewired {
class HardwareJoystickMap_InputManager;
}
namespace Rewired {
struct InputPlatform;
}
namespace Rewired {
struct InputSource;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired::Data {
class ControllerDataFiles;
}
// Write type traits
MARK_REF_T(::Rewired::Data::ControllerDataFiles*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerDataFiles*, "Rewired.Data", "ControllerDataFiles");
// Dependencies Rewired.Data.Mapping.HardwareJoystickMap, Rewired.Data.Mapping.HardwareJoystickTemplateMap, UnityEngine.ScriptableObject
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ControllerDataFiles
class CORDL_TYPE ControllerDataFiles : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_DefaultHardwareJoystickMap, put=set_DefaultHardwareJoystickMap)) ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  DefaultHardwareJoystickMap;

 __declspec(property(get=get_HardwareJoystickMaps, put=set_HardwareJoystickMaps)) ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>  HardwareJoystickMaps;

 __declspec(property(get=get_JoystickTemplates, put=set_JoystickTemplates)) ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>  JoystickTemplates;

/// @brief Field SqxZXpvDbsxdSVqLXvODqXCvmiyl, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_SqxZXpvDbsxdSVqLXvODqXCvmiyl, put=__cordl_internal_set_SqxZXpvDbsxdSVqLXvODqXCvmiyl)) bool  SqxZXpvDbsxdSVqLXvODqXCvmiyl;

/// @brief Field defaultHardwareJoystickMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultHardwareJoystickMap, put=__cordl_internal_set_defaultHardwareJoystickMap)) ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  defaultHardwareJoystickMap;

 __declspec(property(get=get_defaultHardwareJoystickMapGuid)) ::System::Guid  defaultHardwareJoystickMapGuid;

/// @brief Field hardwareJoystickMaps, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hardwareJoystickMaps, put=__cordl_internal_set_hardwareJoystickMaps)) ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>  hardwareJoystickMaps;

/// @brief Field joystickTemplates, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystickTemplates, put=__cordl_internal_set_joystickTemplates)) ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>  joystickTemplates;

/// @brief Field oigItoQGCIiUpZBOvoNtIIJygmICA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_oigItoQGCIiUpZBOvoNtIIJygmICA, put=__cordl_internal_set_oigItoQGCIiUpZBOvoNtIIJygmICA)) ::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>*  oigItoQGCIiUpZBOvoNtIIJygmICA;

/// @brief Method GetControllerTemplate, addr 0x18187b1f0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* GetControllerTemplate(::System::Guid  guid) ;

/// @brief Method GetEditorJoystickNames, addr 0x18187b210, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetEditorJoystickNames() ;

/// @brief Method GetHardwareJoystickMap, addr 0x18187b370, size 0x140, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> GetHardwareJoystickMap(::System::Guid  guid) ;

/// @brief Method GetHardwareJoystickOrTemplateMap, addr 0x18187b4b0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::IHardwareControllerMap* GetHardwareJoystickOrTemplateMap(::System::Guid  guid) ;

/// @brief Method GetJoystickGuids, addr 0x18187b530, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<::System::Guid> GetJoystickGuids() ;

/// @brief Method GetJoystickNames, addr 0x18187b690, size 0x110, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetJoystickNames() ;

/// @brief Method GetJoystickTemplate, addr 0x18187b9b0, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> GetJoystickTemplate(::System::Guid  guid) ;

/// @brief Method GetJoystickTemplateGuids, addr 0x18187b7a0, size 0x130, virtual false, abstract: false, final false
inline ::ArrayW<::System::Guid> GetJoystickTemplateGuids() ;

/// @brief Method GetJoystickTemplateNames, addr 0x18187b8d0, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetJoystickTemplateNames() ;

/// @brief Method HFOERZekyIkrKOWqJhYAOjREbvzGb, addr 0x18187bab0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::HardwareJoystickMap_InputManager* HFOERZekyIkrKOWqJhYAOjREbvzGb(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::ControllerDataFiles* New_ctor() ;

constexpr bool const& __cordl_internal_get_SqxZXpvDbsxdSVqLXvODqXCvmiyl() const;

constexpr bool& __cordl_internal_get_SqxZXpvDbsxdSVqLXvODqXCvmiyl() ;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> const& __cordl_internal_get_defaultHardwareJoystickMap() const;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>& __cordl_internal_get_defaultHardwareJoystickMap() ;

constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>> const& __cordl_internal_get_hardwareJoystickMaps() const;

constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>& __cordl_internal_get_hardwareJoystickMaps() ;

constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>> const& __cordl_internal_get_joystickTemplates() const;

constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>& __cordl_internal_get_joystickTemplates() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>* const& __cordl_internal_get_oigItoQGCIiUpZBOvoNtIIJygmICA() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>*& __cordl_internal_get_oigItoQGCIiUpZBOvoNtIIJygmICA() ;

constexpr void __cordl_internal_set_SqxZXpvDbsxdSVqLXvODqXCvmiyl(bool  value) ;

constexpr void __cordl_internal_set_defaultHardwareJoystickMap(::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  value) ;

constexpr void __cordl_internal_set_hardwareJoystickMaps(::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>  value) ;

constexpr void __cordl_internal_set_joystickTemplates(::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>  value) ;

constexpr void __cordl_internal_set_oigItoQGCIiUpZBOvoNtIIJygmICA(::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>*  value) ;

/// @brief Method .ctor, addr 0x18187bae0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method aTbzmaEqtiABFKMRXSsqDEZWpftn, addr 0x18187bb50, size 0x290, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateElementIdentifier* aTbzmaEqtiABFKMRXSsqDEZWpftn(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap*>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method cnrrMZjYSARCRiBZcfxJxKzHztBA, addr 0x18187bde0, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA* cnrrMZjYSARCRiBZcfxJxKzHztBA(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_DefaultHardwareJoystickMap, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> get_DefaultHardwareJoystickMap() ;

/// @brief Method get_HardwareJoystickMaps, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>> get_HardwareJoystickMaps() ;

/// @brief Method get_JoystickTemplates, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>> get_JoystickTemplates() ;

/// @brief Method get_defaultHardwareJoystickMapGuid, addr 0x18187bec0, size 0x80, virtual false, abstract: false, final false
inline ::System::Guid get_defaultHardwareJoystickMapGuid() ;

/// @brief Method hCCZNqEgwtoNEMyxvaOhqhxsojNL, addr 0x18187bf40, size 0xf0, virtual false, abstract: false, final false
inline ::Rewired::HardwareJoystickMap_InputManager* hCCZNqEgwtoNEMyxvaOhqhxsojNL(::Rewired::Data::Mapping::HardwareJoystickMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::Rewired::InputPlatform>  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method kavrrpaoFifjuzIIoiRltFIdjJkiA, addr 0x18187c030, size 0x380, virtual false, abstract: false, final false
inline ::Rewired::HardwareJoystickMap_InputManager* kavrrpaoFifjuzIIoiRltFIdjJkiA(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qbJPYNSxYMoIuNQNCAgHTnjgEAsE, addr 0x18187c3b0, size 0x190, virtual false, abstract: false, final false
inline ::Rewired::HardwareJoystickMap_InputManager* qbJPYNSxYMoIuNQNCAgHTnjgEAsE(::System::Guid  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method set_DefaultHardwareJoystickMap, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_DefaultHardwareJoystickMap(::Rewired::Data::Mapping::HardwareJoystickMap*  value) ;

/// @brief Method set_HardwareJoystickMaps, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_HardwareJoystickMaps(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap*>  value) ;

/// @brief Method set_JoystickTemplates, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_JoystickTemplates(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>  value) ;

/// @brief Method sflcEoDiTzcOQGIoAuITeHCrRMaZ, addr 0x18187c540, size 0x130, virtual false, abstract: false, final false
inline int32_t sflcEoDiTzcOQGIoAuITeHCrRMaZ(::System::Guid  _cordl_fixed_empty_name_whitespace, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj>*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method wsUOtMlGWzrNAurQAYspkRWfZoQF, addr 0x18187c670, size 0x180, virtual false, abstract: false, final false
inline ::Rewired::HardwareJoystickMap_InputManager* wsUOtMlGWzrNAurQAYspkRWfZoQF(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method zXIDjyBTnPqfiPpqOxsluZzMGbim, addr 0x18187c7f0, size 0x60, virtual false, abstract: false, final false
inline void zXIDjyBTnPqfiPpqOxsluZzMGbim() ;

/// @brief Method zmBHvcaKJldcFBiIEjDodTutkiKf, addr 0x18187c850, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* zmBHvcaKJldcFBiIEjDodTutkiKf(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerDataFiles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataFiles", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerDataFiles(ControllerDataFiles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataFiles", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerDataFiles(ControllerDataFiles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2337};

/// @brief Field defaultHardwareJoystickMap, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  ___defaultHardwareJoystickMap;

/// @brief Field hardwareJoystickMaps, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>  ___hardwareJoystickMaps;

/// @brief Field joystickTemplates, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>  ___joystickTemplates;

/// @brief Field SqxZXpvDbsxdSVqLXvODqXCvmiyl, offset: 0x30, size: 0x1, def value: None
 bool  ___SqxZXpvDbsxdSVqLXvODqXCvmiyl;

/// @brief Field oigItoQGCIiUpZBOvoNtIIJygmICA, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>*  ___oigItoQGCIiUpZBOvoNtIIJygmICA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerDataFiles, ___defaultHardwareJoystickMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerDataFiles, ___hardwareJoystickMaps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerDataFiles, ___joystickTemplates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerDataFiles, ___SqxZXpvDbsxdSVqLXvODqXCvmiyl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerDataFiles, ___oigItoQGCIiUpZBOvoNtIIJygmICA) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerDataFiles) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Data
