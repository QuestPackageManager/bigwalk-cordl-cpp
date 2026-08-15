#pragma once
// IWYU pragma private; include "Rewired/ControllerSetSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerSetSelector)
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace Rewired {
struct ControllerSetSelector_Type;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class IControllerTemplate;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace Rewired {
struct ControllerSetSelector_Type;
}
namespace Rewired {
class ControllerSetSelector;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerSetSelector_Type);
MARK_REF_T(::Rewired::ControllerSetSelector*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerSetSelector_Type, "Rewired", "ControllerSetSelector/Type");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerSetSelector*, "Rewired", "ControllerSetSelector");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerSetSelector/Type
struct CORDL_TYPE ControllerSetSelector_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerSetSelector_Type_Unwrapped
enum struct __ControllerSetSelector_Type_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_ControllerType = static_cast<int32_t>(0x1),
__E_HardwareType = static_cast<int32_t>(0x2),
__E_ControllerTemplateType = static_cast<int32_t>(0x3),
__E_PersistentControllerInstance = static_cast<int32_t>(0x4),
__E_SessionControllerInstance = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerSetSelector_Type_Unwrapped () const noexcept {
return static_cast<__ControllerSetSelector_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerSetSelector_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControllerSetSelector_Type(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::Rewired::ControllerSetSelector_Type const All;

/// @brief Field ControllerTemplateType value: I32(3)
static ::Rewired::ControllerSetSelector_Type const ControllerTemplateType;

/// @brief Field ControllerType value: I32(1)
static ::Rewired::ControllerSetSelector_Type const ControllerType;

/// @brief Field HardwareType value: I32(2)
static ::Rewired::ControllerSetSelector_Type const HardwareType;

/// @brief Field PersistentControllerInstance value: I32(4)
static ::Rewired::ControllerSetSelector_Type const PersistentControllerInstance;

/// @brief Field SessionControllerInstance value: I32(5)
static ::Rewired::ControllerSetSelector_Type const SessionControllerInstance;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerSetSelector_Type, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerSetSelector_Type) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerSetSelector::Type, Rewired.ControllerType, System.Guid, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerSetSelector
class CORDL_TYPE ControllerSetSelector : public ::System::Object {
public:
// Declarations
using Type = ::Rewired::ControllerSetSelector_Type;

 __declspec(property(get=IkQGkQAlevuQmkjqsTpXAyLPULYqA)) bool  ZSterSvUYBNtWLIivTApoidxMmgE;

/// @brief Field _controllerId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerId, put=__cordl_internal_set__controllerId)) int32_t  _controllerId;

/// @brief Field _controllerType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerType, put=__cordl_internal_set__controllerType)) ::Rewired::ControllerType  _controllerType;

/// @brief Field _guid, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__guid, put=__cordl_internal_set__guid)) ::StringW  _guid;

/// @brief Field _hardwareIdentifier, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardwareIdentifier, put=__cordl_internal_set__hardwareIdentifier)) ::StringW  _hardwareIdentifier;

/// @brief Field _type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::Rewired::ControllerSetSelector_Type  _type;

 __declspec(property(get=get_controllerId, put=set_controllerId)) int32_t  controllerId;

 __declspec(property(get=get_controllerTemplateTypeGuid, put=set_controllerTemplateTypeGuid)) ::System::Guid  controllerTemplateTypeGuid;

 __declspec(property(get=get_controllerType, put=set_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_deviceInstanceGuid, put=set_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

 __declspec(property(get=get_hardwareIdentifier, put=set_hardwareIdentifier)) ::StringW  hardwareIdentifier;

 __declspec(property(get=get_hardwareTypeGuid, put=set_hardwareTypeGuid)) ::System::Guid  hardwareTypeGuid;

/// @brief Field sQPfAnXKMaXkEoOuHkkXcehLcliU, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_sQPfAnXKMaXkEoOuHkkXcehLcliU, put=__cordl_internal_set_sQPfAnXKMaXkEoOuHkkXcehLcliU)) ::System::Guid  sQPfAnXKMaXkEoOuHkkXcehLcliU;

 __declspec(property(get=get_type, put=set_type)) ::Rewired::ControllerSetSelector_Type  type;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method IkQGkQAlevuQmkjqsTpXAyLPULYqA, addr 0x1814bcdc0, size 0x90, virtual false, abstract: false, final false
inline bool IkQGkQAlevuQmkjqsTpXAyLPULYqA() ;

/// @brief Method Matches, addr 0x18183e500, size 0x200, virtual false, abstract: false, final false
inline bool Matches(::Rewired::Controller*  controller) ;

static inline ::Rewired::ControllerSetSelector* New_ctor() ;

static inline ::Rewired::ControllerSetSelector* New_ctor(::Rewired::ControllerSetSelector*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerSetSelector* New_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerSetSelector* New_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method PgvElNZFUOSaEuBnnluhbhACJJMQ, addr 0x18183e700, size 0x50, virtual false, abstract: false, final false
inline void PgvElNZFUOSaEuBnnluhbhACJJMQ() ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x18183e750, size 0x80, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

/// @brief Method SelectAll, addr 0x18183e7d0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectAll() ;

/// @brief Method SelectControllerTemplateType, addr 0x18183e8e0, size 0x210, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectControllerTemplateType(::Rewired::IControllerTemplate*  controllerTemplate) ;

/// @brief Method SelectControllerTemplateType, addr 0x18183e800, size 0xe0, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectControllerTemplateType(::Rewired::ControllerType  controllerType, ::System::Guid  controllerTemplateTypeGuid) ;

/// @brief Method SelectControllerType, addr 0x18183eaf0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectControllerType(::Rewired::ControllerType  controllerType) ;

/// @brief Method SelectHardwareType, addr 0x18183ec10, size 0x120, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectHardwareType(::Rewired::Controller*  controller) ;

/// @brief Method SelectHardwareType, addr 0x18183eb20, size 0xf0, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectHardwareType(::Rewired::ControllerType  controllerType, ::System::Guid  hardwareTypeGuid, ::StringW  hardwareIdentifier) ;

/// @brief Method SelectPersistentControllerInstance, addr 0x18183ee10, size 0x110, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectPersistentControllerInstance(::Rewired::Controller*  controller) ;

/// @brief Method SelectPersistentControllerInstance, addr 0x18183ed30, size 0xe0, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectPersistentControllerInstance(::Rewired::ControllerType  controllerType, ::System::Guid  deviceInstanceGuid) ;

/// @brief Method SelectSessionControllerInstance, addr 0x18183ef20, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectSessionControllerInstance(::Rewired::Controller*  controller) ;

/// @brief Method SelectSessionControllerInstance, addr 0x18183ef80, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::ControllerSetSelector* SelectSessionControllerInstance(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method ToString, addr 0x18183efc0, size 0x170, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x18183f130, size 0x50, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr int32_t const& __cordl_internal_get__controllerId() const;

constexpr int32_t& __cordl_internal_get__controllerId() ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get__controllerType() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get__controllerType() ;

constexpr ::StringW const& __cordl_internal_get__guid() const;

constexpr ::StringW& __cordl_internal_get__guid() ;

constexpr ::StringW const& __cordl_internal_get__hardwareIdentifier() const;

constexpr ::StringW& __cordl_internal_get__hardwareIdentifier() ;

constexpr ::Rewired::ControllerSetSelector_Type const& __cordl_internal_get__type() const;

constexpr ::Rewired::ControllerSetSelector_Type& __cordl_internal_get__type() ;

constexpr ::System::Guid const& __cordl_internal_get_sQPfAnXKMaXkEoOuHkkXcehLcliU() const;

constexpr ::System::Guid& __cordl_internal_get_sQPfAnXKMaXkEoOuHkkXcehLcliU() ;

constexpr void __cordl_internal_set__controllerId(int32_t  value) ;

constexpr void __cordl_internal_set__controllerType(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set__guid(::StringW  value) ;

constexpr void __cordl_internal_set__hardwareIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set__type(::Rewired::ControllerSetSelector_Type  value) ;

constexpr void __cordl_internal_set_sQPfAnXKMaXkEoOuHkkXcehLcliU(::System::Guid  value) ;

/// @brief Method .ctor, addr 0x1814fa6e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18183f190, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerSetSelector*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18183f180, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18183f200, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method get_controllerId, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerTemplateTypeGuid, addr 0x18183f280, size 0x30, virtual false, abstract: false, final false
inline ::System::Guid get_controllerTemplateTypeGuid() ;

/// @brief Method get_controllerType, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_deviceInstanceGuid, addr 0x18183f2b0, size 0x30, virtual false, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_hardwareIdentifier, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_hardwareIdentifier() ;

/// @brief Method get_hardwareTypeGuid, addr 0x18183f2e0, size 0x30, virtual false, abstract: false, final false
inline ::System::Guid get_hardwareTypeGuid() ;

/// @brief Method get_type, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerSetSelector_Type get_type() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_controllerId, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_controllerId(int32_t  value) ;

/// @brief Method set_controllerTemplateTypeGuid, addr 0x18183f310, size 0x90, virtual false, abstract: false, final false
inline void set_controllerTemplateTypeGuid(::System::Guid  value) ;

/// @brief Method set_controllerType, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_controllerType(::Rewired::ControllerType  value) ;

/// @brief Method set_deviceInstanceGuid, addr 0x18183f3a0, size 0x90, virtual false, abstract: false, final false
inline void set_deviceInstanceGuid(::System::Guid  value) ;

/// @brief Method set_hardwareIdentifier, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_hardwareIdentifier(::StringW  value) ;

/// @brief Method set_hardwareTypeGuid, addr 0x18183f430, size 0x90, virtual false, abstract: false, final false
inline void set_hardwareTypeGuid(::System::Guid  value) ;

/// @brief Method set_type, addr 0x18183f4c0, size 0x70, virtual false, abstract: false, final false
inline void set_type(::Rewired::ControllerSetSelector_Type  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerSetSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerSetSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerSetSelector(ControllerSetSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerSetSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerSetSelector(ControllerSetSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1760};

/// @brief Field _type, offset: 0x10, size: 0x4, def value: None
 ::Rewired::ControllerSetSelector_Type  ____type;

/// @brief Field _controllerType, offset: 0x14, size: 0x4, def value: None
 ::Rewired::ControllerType  ____controllerType;

/// @brief Field _guid, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____guid;

/// @brief Field _hardwareIdentifier, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____hardwareIdentifier;

/// @brief Field _controllerId, offset: 0x28, size: 0x4, def value: None
 int32_t  ____controllerId;

/// @brief Field sQPfAnXKMaXkEoOuHkkXcehLcliU, offset: 0x2c, size: 0x10, def value: None
 ::System::Guid  ___sQPfAnXKMaXkEoOuHkkXcehLcliU;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerSetSelector, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerSetSelector, ____controllerType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerSetSelector, ____guid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerSetSelector, ____hardwareIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerSetSelector, ____controllerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerSetSelector, ___sQPfAnXKMaXkEoOuHkkXcehLcliU) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerSetSelector) == 0x40, "Size mismatch!");

} // namespace end def Rewired
