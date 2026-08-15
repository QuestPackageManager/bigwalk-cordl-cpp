#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerSetSelector_Editor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerSetSelector_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerSetSelector_Editor)
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace Rewired {
struct ControllerSetSelector_Type;
}
namespace Rewired {
class ControllerSetSelector;
}
namespace Rewired {
struct ControllerType;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data {
class ControllerSetSelector_Editor;
}
// Write type traits
MARK_REF_T(::Rewired::Data::ControllerSetSelector_Editor*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerSetSelector_Editor*, "Rewired.Data", "ControllerSetSelector_Editor");
// Dependencies Rewired.ControllerSetSelector::Type, Rewired.ControllerType, System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ControllerSetSelector_Editor
class CORDL_TYPE ControllerSetSelector_Editor : public ::System::Object {
public:
// Declarations
/// @brief Field _controllerId, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerId, put=__cordl_internal_set__controllerId)) int32_t  _controllerId;

/// @brief Field _controllerTemplateTypeGuidString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerTemplateTypeGuidString, put=__cordl_internal_set__controllerTemplateTypeGuidString)) ::StringW  _controllerTemplateTypeGuidString;

/// @brief Field _controllerType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerType, put=__cordl_internal_set__controllerType)) ::Rewired::ControllerType  _controllerType;

/// @brief Field _customControllerSourceId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__customControllerSourceId, put=__cordl_internal_set__customControllerSourceId)) int32_t  _customControllerSourceId;

/// @brief Field _deviceInstanceGuidString, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__deviceInstanceGuidString, put=__cordl_internal_set__deviceInstanceGuidString)) ::StringW  _deviceInstanceGuidString;

/// @brief Field _hardwareIdentifier, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardwareIdentifier, put=__cordl_internal_set__hardwareIdentifier)) ::StringW  _hardwareIdentifier;

/// @brief Field _hardwareTypeGuidString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardwareTypeGuidString, put=__cordl_internal_set__hardwareTypeGuidString)) ::StringW  _hardwareTypeGuidString;

/// @brief Field _type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::Rewired::ControllerSetSelector_Type  _type;

 __declspec(property(get=get_controllerId, put=set_controllerId)) int32_t  controllerId;

 __declspec(property(get=get_controllerTemplateTypeGuid, put=set_controllerTemplateTypeGuid)) ::System::Guid  controllerTemplateTypeGuid;

 __declspec(property(get=get_controllerTemplateTypeGuidString, put=set_controllerTemplateTypeGuidString)) ::StringW  controllerTemplateTypeGuidString;

 __declspec(property(get=get_controllerType, put=set_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_customControllerSourceId, put=set_customControllerSourceId)) int32_t  customControllerSourceId;

 __declspec(property(get=get_deviceInstanceGuid, put=set_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

 __declspec(property(get=get_deviceInstanceGuidString, put=set_deviceInstanceGuidString)) ::StringW  deviceInstanceGuidString;

 __declspec(property(get=get_hardwareIdentifier, put=set_hardwareIdentifier)) ::StringW  hardwareIdentifier;

 __declspec(property(get=get_hardwareTypeGuid, put=set_hardwareTypeGuid)) ::System::Guid  hardwareTypeGuid;

 __declspec(property(get=get_hardwareTypeGuidString, put=set_hardwareTypeGuidString)) ::StringW  hardwareTypeGuidString;

 __declspec(property(get=get_type, put=set_type)) ::Rewired::ControllerSetSelector_Type  type;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Method CFKlvMAIVRqLbuarixdSItQprGim, addr 0x1818a1c20, size 0x160, virtual false, abstract: false, final false
inline ::Rewired::ControllerSetSelector* CFKlvMAIVRqLbuarixdSItQprGim() ;

static inline ::Rewired::Data::ControllerSetSelector_Editor* New_ctor() ;

static inline ::Rewired::Data::ControllerSetSelector_Editor* New_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::ControllerSetSelector_Editor* New_ctor(::Rewired::Data::ControllerSetSelector_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x1818a1d80, size 0xa0, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

constexpr int32_t const& __cordl_internal_get__controllerId() const;

constexpr int32_t& __cordl_internal_get__controllerId() ;

constexpr ::StringW const& __cordl_internal_get__controllerTemplateTypeGuidString() const;

constexpr ::StringW& __cordl_internal_get__controllerTemplateTypeGuidString() ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get__controllerType() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get__controllerType() ;

constexpr int32_t const& __cordl_internal_get__customControllerSourceId() const;

constexpr int32_t& __cordl_internal_get__customControllerSourceId() ;

constexpr ::StringW const& __cordl_internal_get__deviceInstanceGuidString() const;

constexpr ::StringW& __cordl_internal_get__deviceInstanceGuidString() ;

constexpr ::StringW const& __cordl_internal_get__hardwareIdentifier() const;

constexpr ::StringW& __cordl_internal_get__hardwareIdentifier() ;

constexpr ::StringW const& __cordl_internal_get__hardwareTypeGuidString() const;

constexpr ::StringW& __cordl_internal_get__hardwareTypeGuidString() ;

constexpr ::Rewired::ControllerSetSelector_Type const& __cordl_internal_get__type() const;

constexpr ::Rewired::ControllerSetSelector_Type& __cordl_internal_get__type() ;

constexpr void __cordl_internal_set__controllerId(int32_t  value) ;

constexpr void __cordl_internal_set__controllerTemplateTypeGuidString(::StringW  value) ;

constexpr void __cordl_internal_set__controllerType(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set__customControllerSourceId(int32_t  value) ;

constexpr void __cordl_internal_set__deviceInstanceGuidString(::StringW  value) ;

constexpr void __cordl_internal_set__hardwareIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set__hardwareTypeGuidString(::StringW  value) ;

constexpr void __cordl_internal_set__type(::Rewired::ControllerSetSelector_Type  value) ;

/// @brief Method .ctor, addr 0x1818a1f10, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818a1e20, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818a1e80, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::ControllerSetSelector_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_controllerId, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerTemplateTypeGuid, addr 0x18188d3d0, size 0x50, virtual false, abstract: false, final false
inline ::System::Guid get_controllerTemplateTypeGuid() ;

/// @brief Method get_controllerTemplateTypeGuidString, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_controllerTemplateTypeGuidString() ;

/// @brief Method get_controllerType, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_customControllerSourceId, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_customControllerSourceId() ;

/// @brief Method get_deviceInstanceGuid, addr 0x1818a1f70, size 0x50, virtual false, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_deviceInstanceGuidString, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_deviceInstanceGuidString() ;

/// @brief Method get_hardwareIdentifier, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_hardwareIdentifier() ;

/// @brief Method get_hardwareTypeGuid, addr 0x1818a1fc0, size 0x50, virtual false, abstract: false, final false
inline ::System::Guid get_hardwareTypeGuid() ;

/// @brief Method get_hardwareTypeGuidString, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_hardwareTypeGuidString() ;

/// @brief Method get_type, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerSetSelector_Type get_type() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Method set_controllerId, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void set_controllerId(int32_t  value) ;

/// @brief Method set_controllerTemplateTypeGuid, addr 0x18188d760, size 0x30, virtual false, abstract: false, final false
inline void set_controllerTemplateTypeGuid(::System::Guid  value) ;

/// @brief Method set_controllerTemplateTypeGuidString, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_controllerTemplateTypeGuidString(::StringW  value) ;

/// @brief Method set_controllerType, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_controllerType(::Rewired::ControllerType  value) ;

/// @brief Method set_customControllerSourceId, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void set_customControllerSourceId(int32_t  value) ;

/// @brief Method set_deviceInstanceGuid, addr 0x1818a2010, size 0x30, virtual false, abstract: false, final false
inline void set_deviceInstanceGuid(::System::Guid  value) ;

/// @brief Method set_deviceInstanceGuidString, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_deviceInstanceGuidString(::StringW  value) ;

/// @brief Method set_hardwareIdentifier, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_hardwareIdentifier(::StringW  value) ;

/// @brief Method set_hardwareTypeGuid, addr 0x1818a2040, size 0x30, virtual false, abstract: false, final false
inline void set_hardwareTypeGuid(::System::Guid  value) ;

/// @brief Method set_hardwareTypeGuidString, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_hardwareTypeGuidString(::StringW  value) ;

/// @brief Method set_type, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_type(::Rewired::ControllerSetSelector_Type  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerSetSelector_Editor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerSetSelector_Editor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerSetSelector_Editor(ControllerSetSelector_Editor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerSetSelector_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerSetSelector_Editor(ControllerSetSelector_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2419};

/// @brief Field _type, offset: 0x10, size: 0x4, def value: None
 ::Rewired::ControllerSetSelector_Type  ____type;

/// @brief Field _controllerType, offset: 0x14, size: 0x4, def value: None
 ::Rewired::ControllerType  ____controllerType;

/// @brief Field _hardwareTypeGuidString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____hardwareTypeGuidString;

/// @brief Field _hardwareIdentifier, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____hardwareIdentifier;

/// @brief Field _controllerTemplateTypeGuidString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____controllerTemplateTypeGuidString;

/// @brief Field _deviceInstanceGuidString, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____deviceInstanceGuidString;

/// @brief Field _customControllerSourceId, offset: 0x38, size: 0x4, def value: None
 int32_t  ____customControllerSourceId;

/// @brief Field _controllerId, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____controllerId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____controllerType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____hardwareTypeGuidString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____hardwareIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____controllerTemplateTypeGuidString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____deviceInstanceGuidString) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____customControllerSourceId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerSetSelector_Editor, ____controllerId) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerSetSelector_Editor) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Data
