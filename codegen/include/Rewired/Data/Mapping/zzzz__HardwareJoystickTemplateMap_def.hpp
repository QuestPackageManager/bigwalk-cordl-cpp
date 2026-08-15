#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareJoystickTemplateMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__HardwareControllerTemplateMap_def.hpp"
#include "Rewired/Data/zzzz__ControllerTemplateElementIdentifier_Editor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareJoystickTemplateMap)
namespace GlobalNamespace {
class TcdPIZMIwGFYJfZZOMhQGedCCqvbA;
}
namespace GlobalNamespace {
class smFerTUgMidkgqEycQsjiJLyrhyp;
}
namespace Rewired::Data::Mapping {
class ControllerMap_Editor;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_ElementIdentifierMap;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_Entry;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_SpecialElementEntry;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR;
}
namespace Rewired::Data::Mapping {
class IControllerTemplateMapSpecialElement_Internal;
}
namespace Rewired::Data::Mapping {
class IHardwareControllerMap_Internal;
}
namespace Rewired::Data::Mapping {
class IHardwareControllerMap;
}
namespace Rewired::Data::Mapping {
class IHardwareControllerTemplateMap_Internal;
}
namespace Rewired::Data::Mapping {
class IHardwareControllerTemplateMap;
}
namespace Rewired::Interfaces {
class IControllerElementIdentifierCommon_Internal;
}
namespace Rewired::Interfaces {
class IControllerTemplateElementIdentifier;
}
namespace Rewired {
class ControllerTemplateElementIdentifier;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_ElementIdentifierMap;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_Entry;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_SpecialElementEntry;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::HardwareJoystickTemplateMap*);
MARK_REF_T(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*);
MARK_REF_T(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*);
MARK_REF_T(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*);
MARK_REF_T(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*);
MARK_REF_T(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareJoystickTemplateMap*, "Rewired.Data.Mapping", "HardwareJoystickTemplateMap");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*, "Rewired.Data.Mapping", "HardwareJoystickTemplateMap/ElementIdentifierMap");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*, "Rewired.Data.Mapping", "HardwareJoystickTemplateMap/Entry");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*, "Rewired.Data.Mapping", "HardwareJoystickTemplateMap/RpnblzeGtMojzbxcsttNKsljzyUEA");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*, "Rewired.Data.Mapping", "HardwareJoystickTemplateMap/SpecialElementEntry");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*, "Rewired.Data.Mapping", "HardwareJoystickTemplateMap/jWlQtbffEjdinvHWbxMWenpKSmVR");
// Dependencies System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareJoystickTemplateMap/Entry
class CORDL_TYPE HardwareJoystickTemplateMap_Entry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_JoystickGuid)) ::System::Guid  JoystickGuid;

/// @brief Field elementIdentifierMappings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementIdentifierMappings, put=__cordl_internal_set_elementIdentifierMappings)) ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*  elementIdentifierMappings;

/// @brief Field fileGuid, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileGuid, put=__cordl_internal_set_fileGuid)) ::StringW  fileGuid;

/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field joystickGuid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystickGuid, put=__cordl_internal_set_joystickGuid)) ::StringW  joystickGuid;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method GetElementIdentifierMap, addr 0x1818d0690, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* GetElementIdentifierMap(int32_t  templateId) ;

/// @brief Method GetElementIdentifierMaps, addr 0x1818d0720, size 0xb0, virtual false, abstract: false, final false
inline void GetElementIdentifierMaps(int32_t  templateId, ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*  results) ;

/// @brief Method GetJoystickElementId, addr 0x1818d07d0, size 0x90, virtual false, abstract: false, final false
inline int32_t GetJoystickElementId(int32_t  templateElementId) ;

/// @brief Method GetTemplateElementId, addr 0x1818d0860, size 0x90, virtual false, abstract: false, final false
inline int32_t GetTemplateElementId(int32_t  joystickElementId) ;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* New_ctor() ;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* New_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>* const& __cordl_internal_get_elementIdentifierMappings() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*& __cordl_internal_get_elementIdentifierMappings() ;

constexpr ::StringW const& __cordl_internal_get_fileGuid() const;

constexpr ::StringW& __cordl_internal_get_fileGuid() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_joystickGuid() const;

constexpr ::StringW& __cordl_internal_get_joystickGuid() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_elementIdentifierMappings(::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*  value) ;

constexpr void __cordl_internal_set_fileGuid(::StringW  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_joystickGuid(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818d08f0, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_JoystickGuid, addr 0x1818d0a30, size 0xb0, virtual false, abstract: false, final false
inline ::System::Guid get_JoystickGuid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickTemplateMap_Entry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickTemplateMap_Entry(HardwareJoystickTemplateMap_Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickTemplateMap_Entry(HardwareJoystickTemplateMap_Entry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2647};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field joystickGuid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___joystickGuid;

/// @brief Field fileGuid, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___fileGuid;

/// @brief Field elementIdentifierMappings, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*  ___elementIdentifierMappings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry, ___joystickGuid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry, ___fileGuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry, ___elementIdentifierMappings) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareJoystickTemplateMap/ElementIdentifierMap
class CORDL_TYPE HardwareJoystickTemplateMap_ElementIdentifierMap : public ::System::Object {
public:
// Declarations
/// @brief Field joystickId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_joystickId, put=__cordl_internal_set_joystickId)) int32_t  joystickId;

/// @brief Field joystickId2, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_joystickId2, put=__cordl_internal_set_joystickId2)) int32_t  joystickId2;

/// @brief Field splitAxis, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_splitAxis, put=__cordl_internal_set_splitAxis)) bool  splitAxis;

/// @brief Field templateId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_templateId, put=__cordl_internal_set_templateId)) int32_t  templateId;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* New_ctor() ;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* New_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_joystickId() const;

constexpr int32_t& __cordl_internal_get_joystickId() ;

constexpr int32_t const& __cordl_internal_get_joystickId2() const;

constexpr int32_t& __cordl_internal_get_joystickId2() ;

constexpr bool const& __cordl_internal_get_splitAxis() const;

constexpr bool& __cordl_internal_get_splitAxis() ;

constexpr int32_t const& __cordl_internal_get_templateId() const;

constexpr int32_t& __cordl_internal_get_templateId() ;

constexpr void __cordl_internal_set_joystickId(int32_t  value) ;

constexpr void __cordl_internal_set_joystickId2(int32_t  value) ;

constexpr void __cordl_internal_set_splitAxis(bool  value) ;

constexpr void __cordl_internal_set_templateId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818d03b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickTemplateMap_ElementIdentifierMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_ElementIdentifierMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickTemplateMap_ElementIdentifierMap(HardwareJoystickTemplateMap_ElementIdentifierMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_ElementIdentifierMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickTemplateMap_ElementIdentifierMap(HardwareJoystickTemplateMap_ElementIdentifierMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2648};

/// @brief Field templateId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___templateId;

/// @brief Field joystickId, offset: 0x14, size: 0x4, def value: None
 int32_t  ___joystickId;

/// @brief Field joystickId2, offset: 0x18, size: 0x4, def value: None
 int32_t  ___joystickId2;

/// @brief Field splitAxis, offset: 0x1c, size: 0x1, def value: None
 bool  ___splitAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap, ___templateId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap, ___joystickId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap, ___joystickId2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap, ___splitAxis) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareJoystickTemplateMap/SpecialElementEntry
class CORDL_TYPE HardwareJoystickTemplateMap_SpecialElementEntry : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::StringW  data;

/// @brief Field elementIdentifierId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementIdentifierId, put=__cordl_internal_set_elementIdentifierId)) int32_t  elementIdentifierId;

/// @brief Convert operator to "::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal"
constexpr operator  ::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*() noexcept;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry* New_ctor() ;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry* New_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.Data.Mapping.IControllerTemplateMapSpecialElement_Internal.GetMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T Rewired_Data_Mapping_IControllerTemplateMapSpecialElement_Internal_GetMapping() ;

constexpr ::StringW const& __cordl_internal_get_data() const;

constexpr ::StringW& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_elementIdentifierId() const;

constexpr int32_t& __cordl_internal_get_elementIdentifierId() ;

constexpr void __cordl_internal_set_data(::StringW  value) ;

constexpr void __cordl_internal_set_elementIdentifierId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802ecc00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818d57c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal"
constexpr ::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* i___Rewired__Data__Mapping__IControllerTemplateMapSpecialElement_Internal() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickTemplateMap_SpecialElementEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_SpecialElementEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickTemplateMap_SpecialElementEntry(HardwareJoystickTemplateMap_SpecialElementEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_SpecialElementEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickTemplateMap_SpecialElementEntry(HardwareJoystickTemplateMap_SpecialElementEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2649};

/// @brief Field elementIdentifierId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___elementIdentifierId;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry, ___elementIdentifierId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareJoystickTemplateMap/jWlQtbffEjdinvHWbxMWenpKSmVR
class CORDL_TYPE HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR : public ::System::Object {
public:
// Declarations
/// @brief Field IxbEfYGPGpeqDXOkYZXnIBMBHciJ, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_IxbEfYGPGpeqDXOkYZXnIBMBHciJ, put=__cordl_internal_set_IxbEfYGPGpeqDXOkYZXnIBMBHciJ)) ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  IxbEfYGPGpeqDXOkYZXnIBMBHciJ;

/// @brief Field MbSBYwnlZsPEvcdlnjyVfHLypjnO, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MbSBYwnlZsPEvcdlnjyVfHLypjnO, put=__cordl_internal_set_MbSBYwnlZsPEvcdlnjyVfHLypjnO)) ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*  MbSBYwnlZsPEvcdlnjyVfHLypjnO;

/// @brief Field NAbqNkwrYyYULFbEQVkSyhUhQgdH, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_NAbqNkwrYyYULFbEQVkSyhUhQgdH, put=__cordl_internal_set_NAbqNkwrYyYULFbEQVkSyhUhQgdH)) int32_t  NAbqNkwrYyYULFbEQVkSyhUhQgdH;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__get_Current)) ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*  System_Collections_Generic_IEnumerator_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field ogQyicDdABIOThTUOtCkXUOzkJQU, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ogQyicDdABIOThTUOtCkXUOzkJQU, put=__cordl_internal_set_ogQyicDdABIOThTUOtCkXUOzkJQU)) int32_t  ogQyicDdABIOThTUOtCkXUOzkJQU;

/// @brief Field ueUxXYcsYQDliDCThopuefdDhaTq, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ueUxXYcsYQDliDCThopuefdDhaTq, put=__cordl_internal_set_ueUxXYcsYQDliDCThopuefdDhaTq)) int32_t  ueUxXYcsYQDliDCThopuefdDhaTq;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1818d56b0, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.Interfaces.IControllerElementIdentifierCommon_Internal>.GetEnumerator, addr 0x1818d6510, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* System_Collections_Generic_IEnumerable_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.Interfaces.IControllerElementIdentifierCommon_Internal>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* System_Collections_Generic_IEnumerator_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1818d6510, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> const& __cordl_internal_get_IxbEfYGPGpeqDXOkYZXnIBMBHciJ() const;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>& __cordl_internal_get_IxbEfYGPGpeqDXOkYZXnIBMBHciJ() ;

constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* const& __cordl_internal_get_MbSBYwnlZsPEvcdlnjyVfHLypjnO() const;

constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*& __cordl_internal_get_MbSBYwnlZsPEvcdlnjyVfHLypjnO() ;

constexpr int32_t const& __cordl_internal_get_NAbqNkwrYyYULFbEQVkSyhUhQgdH() const;

constexpr int32_t& __cordl_internal_get_NAbqNkwrYyYULFbEQVkSyhUhQgdH() ;

constexpr int32_t const& __cordl_internal_get_ogQyicDdABIOThTUOtCkXUOzkJQU() const;

constexpr int32_t& __cordl_internal_get_ogQyicDdABIOThTUOtCkXUOzkJQU() ;

constexpr int32_t const& __cordl_internal_get_ueUxXYcsYQDliDCThopuefdDhaTq() const;

constexpr int32_t& __cordl_internal_get_ueUxXYcsYQDliDCThopuefdDhaTq() ;

constexpr void __cordl_internal_set_IxbEfYGPGpeqDXOkYZXnIBMBHciJ(::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  value) ;

constexpr void __cordl_internal_set_MbSBYwnlZsPEvcdlnjyVfHLypjnO(::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*  value) ;

constexpr void __cordl_internal_set_NAbqNkwrYyYULFbEQVkSyhUhQgdH(int32_t  value) ;

constexpr void __cordl_internal_set_ogQyicDdABIOThTUOtCkXUOzkJQU(int32_t  value) ;

constexpr void __cordl_internal_set_ueUxXYcsYQDliDCThopuefdDhaTq(int32_t  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* i___System__Collections__Generic__IEnumerable_1___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* i___System__Collections__Generic__IEnumerator_1___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR(HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR(HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2650};

/// @brief Field ueUxXYcsYQDliDCThopuefdDhaTq, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ueUxXYcsYQDliDCThopuefdDhaTq;

/// @brief Field MbSBYwnlZsPEvcdlnjyVfHLypjnO, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*  ___MbSBYwnlZsPEvcdlnjyVfHLypjnO;

/// @brief Field ogQyicDdABIOThTUOtCkXUOzkJQU, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ogQyicDdABIOThTUOtCkXUOzkJQU;

/// @brief Field IxbEfYGPGpeqDXOkYZXnIBMBHciJ, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  ___IxbEfYGPGpeqDXOkYZXnIBMBHciJ;

/// @brief Field NAbqNkwrYyYULFbEQVkSyhUhQgdH, offset: 0x30, size: 0x4, def value: None
 int32_t  ___NAbqNkwrYyYULFbEQVkSyhUhQgdH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR, ___ueUxXYcsYQDliDCThopuefdDhaTq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR, ___MbSBYwnlZsPEvcdlnjyVfHLypjnO) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR, ___ogQyicDdABIOThTUOtCkXUOzkJQU) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR, ___IxbEfYGPGpeqDXOkYZXnIBMBHciJ) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR, ___NAbqNkwrYyYULFbEQVkSyhUhQgdH) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareJoystickTemplateMap/RpnblzeGtMojzbxcsttNKsljzyUEA
class CORDL_TYPE HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA : public ::System::Object {
public:
// Declarations
/// @brief Field EJMGfibUDiYawHRgqXHUFPQPDLT, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_EJMGfibUDiYawHRgqXHUFPQPDLT, put=__cordl_internal_set_EJMGfibUDiYawHRgqXHUFPQPDLT)) int32_t  EJMGfibUDiYawHRgqXHUFPQPDLT;

/// @brief Field HicvGIcWCvEhMewBvDgRCODpGWCd, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_HicvGIcWCvEhMewBvDgRCODpGWCd, put=__cordl_internal_set_HicvGIcWCvEhMewBvDgRCODpGWCd)) int32_t  HicvGIcWCvEhMewBvDgRCODpGWCd;

/// @brief Field JzStZrDzenZRJRfHpurrFHgiyciC, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_JzStZrDzenZRJRfHpurrFHgiyciC, put=__cordl_internal_set_JzStZrDzenZRJRfHpurrFHgiyciC)) ::Rewired::ControllerTemplateElementIdentifier*  JzStZrDzenZRJRfHpurrFHgiyciC;

/// @brief Field RoOkNbJphflwjzlvxcgMVFVEpfOr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoOkNbJphflwjzlvxcgMVFVEpfOr, put=__cordl_internal_set_RoOkNbJphflwjzlvxcgMVFVEpfOr)) ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  RoOkNbJphflwjzlvxcgMVFVEpfOr;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerTemplateElementIdentifier__get_Current)) ::Rewired::ControllerTemplateElementIdentifier*  System_Collections_Generic_IEnumerator_Rewired_ControllerTemplateElementIdentifier__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field UDuhWqfXXcBQjqPdIcssWLHaEgefA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_UDuhWqfXXcBQjqPdIcssWLHaEgefA, put=__cordl_internal_set_UDuhWqfXXcBQjqPdIcssWLHaEgefA)) int32_t  UDuhWqfXXcBQjqPdIcssWLHaEgefA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1818d56b0, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerTemplateElementIdentifier>.GetEnumerator, addr 0x1818d5740, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>* System_Collections_Generic_IEnumerable_Rewired_ControllerTemplateElementIdentifier__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerTemplateElementIdentifier>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerTemplateElementIdentifier* System_Collections_Generic_IEnumerator_Rewired_ControllerTemplateElementIdentifier__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1818d5740, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_EJMGfibUDiYawHRgqXHUFPQPDLT() const;

constexpr int32_t& __cordl_internal_get_EJMGfibUDiYawHRgqXHUFPQPDLT() ;

constexpr int32_t const& __cordl_internal_get_HicvGIcWCvEhMewBvDgRCODpGWCd() const;

constexpr int32_t& __cordl_internal_get_HicvGIcWCvEhMewBvDgRCODpGWCd() ;

constexpr ::Rewired::ControllerTemplateElementIdentifier* const& __cordl_internal_get_JzStZrDzenZRJRfHpurrFHgiyciC() const;

constexpr ::Rewired::ControllerTemplateElementIdentifier*& __cordl_internal_get_JzStZrDzenZRJRfHpurrFHgiyciC() ;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> const& __cordl_internal_get_RoOkNbJphflwjzlvxcgMVFVEpfOr() const;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>& __cordl_internal_get_RoOkNbJphflwjzlvxcgMVFVEpfOr() ;

constexpr int32_t const& __cordl_internal_get_UDuhWqfXXcBQjqPdIcssWLHaEgefA() const;

constexpr int32_t& __cordl_internal_get_UDuhWqfXXcBQjqPdIcssWLHaEgefA() ;

constexpr void __cordl_internal_set_EJMGfibUDiYawHRgqXHUFPQPDLT(int32_t  value) ;

constexpr void __cordl_internal_set_HicvGIcWCvEhMewBvDgRCODpGWCd(int32_t  value) ;

constexpr void __cordl_internal_set_JzStZrDzenZRJRfHpurrFHgiyciC(::Rewired::ControllerTemplateElementIdentifier*  value) ;

constexpr void __cordl_internal_set_RoOkNbJphflwjzlvxcgMVFVEpfOr(::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  value) ;

constexpr void __cordl_internal_set_UDuhWqfXXcBQjqPdIcssWLHaEgefA(int32_t  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerTemplateElementIdentifier__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerTemplateElementIdentifier__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA(HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA(HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2651};

/// @brief Field UDuhWqfXXcBQjqPdIcssWLHaEgefA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___UDuhWqfXXcBQjqPdIcssWLHaEgefA;

/// @brief Field JzStZrDzenZRJRfHpurrFHgiyciC, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ControllerTemplateElementIdentifier*  ___JzStZrDzenZRJRfHpurrFHgiyciC;

/// @brief Field EJMGfibUDiYawHRgqXHUFPQPDLT, offset: 0x20, size: 0x4, def value: None
 int32_t  ___EJMGfibUDiYawHRgqXHUFPQPDLT;

/// @brief Field RoOkNbJphflwjzlvxcgMVFVEpfOr, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  ___RoOkNbJphflwjzlvxcgMVFVEpfOr;

/// @brief Field HicvGIcWCvEhMewBvDgRCODpGWCd, offset: 0x30, size: 0x4, def value: None
 int32_t  ___HicvGIcWCvEhMewBvDgRCODpGWCd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA, ___UDuhWqfXXcBQjqPdIcssWLHaEgefA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA, ___JzStZrDzenZRJRfHpurrFHgiyciC) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA, ___EJMGfibUDiYawHRgqXHUFPQPDLT) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA, ___RoOkNbJphflwjzlvxcgMVFVEpfOr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA, ___HicvGIcWCvEhMewBvDgRCODpGWCd) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies Rewired.Data.ControllerTemplateElementIdentifier_Editor, Rewired.Data.Mapping.HardwareControllerTemplateMap, Rewired.Data.Mapping.HardwareJoystickTemplateMap::SpecialElementEntry
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareJoystickTemplateMap
class CORDL_TYPE HardwareJoystickTemplateMap : public ::Rewired::Data::Mapping::HardwareControllerTemplateMap {
public:
// Declarations
using ElementIdentifierMap = ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap;

using Entry = ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry;

using RpnblzeGtMojzbxcsttNKsljzyUEA = ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA;

using SpecialElementEntry = ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry;

using jWlQtbffEjdinvHWbxMWenpKSmVR = ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR;

 __declspec(property(get=get_ClassName)) ::StringW  ClassName;

 __declspec(property(get=get_ControllerName)) ::StringW  ControllerName;

/// @brief Field CwddgzEsulKrUmuJbKlZJkeEQQBwA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_CwddgzEsulKrUmuJbKlZJkeEQQBwA, put=__cordl_internal_set_CwddgzEsulKrUmuJbKlZJkeEQQBwA)) ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  CwddgzEsulKrUmuJbKlZJkeEQQBwA;

 __declspec(property(get=get_ElementIdentifiers)) ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>*  ElementIdentifiers;

 __declspec(property(get=get_Guid)) ::System::Guid  Guid;

 __declspec(property(get=get_Key)) ::StringW  Key;

 __declspec(property(get=Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers)) ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*  Rewired_Data_Mapping_IHardwareControllerMap_Internal_ElementIdentifiers;

 __declspec(property(get=Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_controllerType)) ::Rewired::ControllerType  Rewired_Data_Mapping_IHardwareControllerMap_Internal_controllerType;

 __declspec(property(get=Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeGuid)) ::System::Guid  Rewired_Data_Mapping_IHardwareControllerMap_Internal_typeGuid;

 __declspec(property(get=Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeKey)) ::StringW  Rewired_Data_Mapping_IHardwareControllerMap_Internal_typeKey;

 __declspec(property(get=Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_name)) ::StringW  Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_name;

 __declspec(property(get=Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeGuid)) ::System::Guid  Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_typeGuid;

 __declspec(property(get=Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeKey)) ::StringW  Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_typeKey;

 __declspec(property(get=SofZmvsxvbEqzAtEgtNhsLvzfHTeA)) ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  SeFqGWjFwfsBnfrAHGcDIGImzQpw;

/// @brief Field className, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_className, put=__cordl_internal_set_className)) ::StringW  className;

/// @brief Field controllerName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerName, put=__cordl_internal_set_controllerName)) ::StringW  controllerName;

/// @brief Field description, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_description, put=__cordl_internal_set_description)) ::StringW  description;

 __declspec(property(get=get_elementIdentifierCount)) int32_t  elementIdentifierCount;

/// @brief Field elementIdentifierIdCounter, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementIdentifierIdCounter, put=__cordl_internal_set_elementIdentifierIdCounter)) int32_t  elementIdentifierIdCounter;

/// @brief Field elementIdentifiers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementIdentifiers, put=__cordl_internal_set_elementIdentifiers)) ::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>  elementIdentifiers;

/// @brief Field joystickIdCounter, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_joystickIdCounter, put=__cordl_internal_set_joystickIdCounter)) int32_t  joystickIdCounter;

/// @brief Field joysticks, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_joysticks, put=__cordl_internal_set_joysticks)) ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  joysticks;

/// @brief Field specialElements, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_specialElements, put=__cordl_internal_set_specialElements)) ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>  specialElements;

/// @brief Field templateGuid, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateGuid, put=__cordl_internal_set_templateGuid)) ::StringW  templateGuid;

/// @brief Field templateKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateKey, put=__cordl_internal_set_templateKey)) ::StringW  templateKey;

/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerMap"
constexpr operator  ::Rewired::Data::Mapping::IHardwareControllerMap*() noexcept;

/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerMap_Internal"
constexpr operator  ::Rewired::Data::Mapping::IHardwareControllerMap_Internal*() noexcept;

/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap"
constexpr operator  ::Rewired::Data::Mapping::IHardwareControllerTemplateMap*() noexcept;

/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal"
constexpr operator  ::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*() noexcept;

/// @brief Method ContainsElementIdentifier, addr 0x1818d0d20, size 0x50, virtual true, abstract: false, final false
inline bool ContainsElementIdentifier(int32_t  id) ;

/// @brief Method DioTOORdsHMFGxscxpRgeIipVtVk, addr 0x1818d0d70, size 0x1d0, virtual false, abstract: false, final false
inline ::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA* DioTOORdsHMFGxscxpRgeIipVtVk() ;

/// @brief Method ECgcWRmrEuRoiiDFlXngQOwGvzlR, addr 0x1818d0f40, size 0x50, virtual false, abstract: false, final false
static inline int32_t ECgcWRmrEuRoiiDFlXngQOwGvzlR(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method GetElementIdentifier, addr 0x1818d1220, size 0x60, virtual true, abstract: false, final false
inline ::Rewired::ControllerTemplateElementIdentifier* GetElementIdentifier(int32_t  id) ;

/// @brief Method GetElementIdentifierAtIndex, addr 0x1818d0f90, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateElementIdentifier* GetElementIdentifierAtIndex(int32_t  index) ;

/// @brief Method GetElementIdentifierIds, addr 0x1818d0fd0, size 0x90, virtual true, abstract: false, final true
inline ::ArrayW<int32_t> GetElementIdentifierIds() ;

/// @brief Method GetElementIdentifierNames, addr 0x1818d1060, size 0xc0, virtual true, abstract: false, final true
inline ::ArrayW<::StringW> GetElementIdentifierNames() ;

/// @brief Method GetElementIdentifierScriptingNames, addr 0x1818d1120, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetElementIdentifierScriptingNames(bool  useAlternate) ;

/// @brief Method GetJoystickFileGuidString, addr 0x1818d1280, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetJoystickFileGuidString(int32_t  joystickId) ;

/// @brief Method GetJoystickGuid, addr 0x1818d1300, size 0xc0, virtual false, abstract: false, final false
inline ::System::Guid GetJoystickGuid(int32_t  joystickId) ;

/// @brief Method GetJoystickId, addr 0x1818d13c0, size 0x120, virtual false, abstract: false, final false
inline int32_t GetJoystickId(::System::Guid  guid) ;

/// @brief Method GetJoystickIds, addr 0x18188bfd0, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetJoystickIds() ;

/// @brief Method GetJoystickNames, addr 0x18188c060, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetJoystickNames() ;

/// @brief Method GetMappableElementIdentifierInfo, addr 0x1818d14e0, size 0x1f0, virtual true, abstract: false, final true
inline int32_t GetMappableElementIdentifierInfo(::by_ref<::ArrayW<::StringW>>  names, ::by_ref<::ArrayW<int32_t>>  ids) ;

/// @brief Method GetNonMappableElementIdentifierInfo, addr 0x1818d16d0, size 0x1f0, virtual false, abstract: false, final false
inline int32_t GetNonMappableElementIdentifierInfo(::by_ref<::ArrayW<::StringW>>  names, ::by_ref<::ArrayW<int32_t>>  ids) ;

/// @brief Method GetSpecialElementsOrig, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*> GetSpecialElementsOrig() ;

static inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap* New_ctor() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerMap_Internal.GetElementIdentifier, addr 0x1818b16a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired_Data_Mapping_IHardwareControllerMap_Internal_GetElementIdentifier(int32_t  id) ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_ElementIdentifiers, addr 0x1818d18c0, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_controllerType, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerType Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_controllerType() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_name, addr 0x1803f5370, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_name() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_typeGuid, addr 0x1818d1910, size 0x30, virtual true, abstract: false, final true
inline ::System::Guid Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeGuid() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_typeKey, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeKey() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetAxisTarget, addr 0x1818d1940, size 0x90, virtual true, abstract: false, final true
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetAxisTarget(::Rewired::Controller*  controller, int32_t  elementIdentifierId) ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetButtonTarget, addr 0x1818d19d0, size 0x90, virtual true, abstract: false, final true
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetButtonTarget(::Rewired::Controller*  controller, int32_t  elementIdentifierId) ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetElementIdentifierCount, addr 0x18188d390, size 0x20, virtual true, abstract: false, final true
inline int32_t Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetElementIdentifierCount() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetSpecialTemplateElementByElementIdentifierId, addr 0x1818d1a60, size 0x60, virtual true, abstract: false, final true
inline ::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetSpecialTemplateElementByElementIdentifierId(int32_t  id) ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetTemplateElementIdentifier, addr 0x1818d1ac0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifier(int32_t  index) ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetTemplateElementIdentifierById, addr 0x1818b16a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifierById(int32_t  elementIdentifierId) ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_name, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_name() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_typeGuid, addr 0x1818d1910, size 0x30, virtual true, abstract: false, final true
inline ::System::Guid Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeGuid() ;

/// @brief Method Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_typeKey, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeKey() ;

/// @brief Method SofZmvsxvbEqzAtEgtNhsLvzfHTeA, addr 0x1818d1ae0, size 0x60, virtual false, abstract: false, final false
inline ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>* SofZmvsxvbEqzAtEgtNhsLvzfHTeA() ;

/// @brief Method WypJiWkaqWhTzXLBglKnZSonXAfE, addr 0x1818d1b40, size 0x250, virtual false, abstract: false, final false
static inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* WypJiWkaqWhTzXLBglKnZSonXAfE(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*  _cordl_fixed_empty_name_whitespace, ::Rewired::Controller*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>* const& __cordl_internal_get_CwddgzEsulKrUmuJbKlZJkeEQQBwA() const;

constexpr ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*& __cordl_internal_get_CwddgzEsulKrUmuJbKlZJkeEQQBwA() ;

constexpr ::StringW const& __cordl_internal_get_className() const;

constexpr ::StringW& __cordl_internal_get_className() ;

constexpr ::StringW const& __cordl_internal_get_controllerName() const;

constexpr ::StringW& __cordl_internal_get_controllerName() ;

constexpr ::StringW const& __cordl_internal_get_description() const;

constexpr ::StringW& __cordl_internal_get_description() ;

constexpr int32_t const& __cordl_internal_get_elementIdentifierIdCounter() const;

constexpr int32_t& __cordl_internal_get_elementIdentifierIdCounter() ;

constexpr ::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*> const& __cordl_internal_get_elementIdentifiers() const;

constexpr ::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>& __cordl_internal_get_elementIdentifiers() ;

constexpr int32_t const& __cordl_internal_get_joystickIdCounter() const;

constexpr int32_t& __cordl_internal_get_joystickIdCounter() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>* const& __cordl_internal_get_joysticks() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*& __cordl_internal_get_joysticks() ;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*> const& __cordl_internal_get_specialElements() const;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>& __cordl_internal_get_specialElements() ;

constexpr ::StringW const& __cordl_internal_get_templateGuid() const;

constexpr ::StringW& __cordl_internal_get_templateGuid() ;

constexpr ::StringW const& __cordl_internal_get_templateKey() const;

constexpr ::StringW& __cordl_internal_get_templateKey() ;

constexpr void __cordl_internal_set_CwddgzEsulKrUmuJbKlZJkeEQQBwA(::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  value) ;

constexpr void __cordl_internal_set_className(::StringW  value) ;

constexpr void __cordl_internal_set_controllerName(::StringW  value) ;

constexpr void __cordl_internal_set_description(::StringW  value) ;

constexpr void __cordl_internal_set_elementIdentifierIdCounter(int32_t  value) ;

constexpr void __cordl_internal_set_elementIdentifiers(::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>  value) ;

constexpr void __cordl_internal_set_joystickIdCounter(int32_t  value) ;

constexpr void __cordl_internal_set_joysticks(::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  value) ;

constexpr void __cordl_internal_set_specialElements(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>  value) ;

constexpr void __cordl_internal_set_templateGuid(::StringW  value) ;

constexpr void __cordl_internal_set_templateKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818d1d90, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method fKZZwXdvABkRiYuLUBNGCkltcIal, addr 0x1818d1dd0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ControllerTemplateElementIdentifier* fKZZwXdvABkRiYuLUBNGCkltcIal(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method fPuUVKzCnYhNNZWtkZWvqrcHOghU, addr 0x1818d1e30, size 0x1b0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* fPuUVKzCnYhNNZWtkZWvqrcHOghU(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*  _cordl_fixed_empty_name_whitespace, ::Rewired::Controller*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_ClassName, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ClassName() ;

/// @brief Method get_ControllerName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ControllerName() ;

/// @brief Method get_ElementIdentifiers, addr 0x1818d1fe0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>* get_ElementIdentifiers() ;

/// @brief Method get_Guid, addr 0x18188d3d0, size 0x50, virtual true, abstract: false, final false
inline ::System::Guid get_Guid() ;

/// @brief Method get_Key, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_elementIdentifierCount, addr 0x18188d390, size 0x20, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierCount() ;

/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerMap"
constexpr ::Rewired::Data::Mapping::IHardwareControllerMap* i___Rewired__Data__Mapping__IHardwareControllerMap() noexcept;

/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerMap_Internal"
constexpr ::Rewired::Data::Mapping::IHardwareControllerMap_Internal* i___Rewired__Data__Mapping__IHardwareControllerMap_Internal() noexcept;

/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap"
constexpr ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* i___Rewired__Data__Mapping__IHardwareControllerTemplateMap() noexcept;

/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal"
constexpr ::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal* i___Rewired__Data__Mapping__IHardwareControllerTemplateMap_Internal() noexcept;

/// @brief Method pWNgkCMijglXRRZUJAqwuxyqPTAt, addr 0x1818d2030, size 0x50, virtual false, abstract: false, final false
static inline bool pWNgkCMijglXRRZUJAqwuxyqPTAt(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method wGAySeXojRqJTslxSAqkKRdcXFWsA, addr 0x1818d2080, size 0xd0, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* wGAySeXojRqJTslxSAqkKRdcXFWsA(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zRfuwajAoMvzCJBOlGVOXPtQUCJk, addr 0x1818d2150, size 0x770, virtual false, abstract: false, final false
inline bool zRfuwajAoMvzCJBOlGVOXPtQUCJk(::Rewired::Data::Mapping::ControllerMap_Editor*  _cordl_fixed_empty_name_whitespace, ::Rewired::Data::Mapping::HardwareJoystickMap*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickTemplateMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickTemplateMap(HardwareJoystickTemplateMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickTemplateMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickTemplateMap(HardwareJoystickTemplateMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2652};

/// @brief Field controllerName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___controllerName;

/// @brief Field description, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___description;

/// @brief Field templateGuid, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___templateGuid;

/// @brief Field templateKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___templateKey;

/// @brief Field className, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___className;

/// @brief Field elementIdentifiers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>  ___elementIdentifiers;

/// @brief Field joysticks, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  ___joysticks;

/// @brief Field specialElements, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>  ___specialElements;

/// @brief Field elementIdentifierIdCounter, offset: 0x58, size: 0x4, def value: None
 int32_t  ___elementIdentifierIdCounter;

/// @brief Field joystickIdCounter, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___joystickIdCounter;

/// @brief Field CwddgzEsulKrUmuJbKlZJkeEQQBwA, offset: 0x60, size: 0x8, def value: None
 ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  ___CwddgzEsulKrUmuJbKlZJkeEQQBwA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___controllerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___description) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___templateGuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___templateKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___className) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___elementIdentifiers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___joysticks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___specialElements) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___elementIdentifierIdCounter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___joystickIdCounter) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap, ___CwddgzEsulKrUmuJbKlZJkeEQQBwA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareJoystickTemplateMap) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
