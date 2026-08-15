#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IHardwareControllerMap_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHardwareControllerMap_Internal)
namespace Rewired::Interfaces {
class IControllerElementIdentifierCommon_Internal;
}
namespace Rewired {
struct ControllerType;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class IHardwareControllerMap_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::IHardwareControllerMap_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::IHardwareControllerMap_Internal*, "Rewired.Data.Mapping", "IHardwareControllerMap_Internal");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.IHardwareControllerMap_Internal
class CORDL_TYPE IHardwareControllerMap_Internal {
public:
// Declarations
 __declspec(property(get=get_ElementIdentifiers)) ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*  ElementIdentifiers;

 __declspec(property(get=get_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_typeGuid)) ::System::Guid  typeGuid;

 __declspec(property(get=get_typeKey)) ::StringW  typeKey;

/// @brief Method GetElementIdentifier, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* GetElementIdentifier(int32_t  id) ;

/// @brief Method get_ElementIdentifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* get_ElementIdentifiers() ;

/// @brief Method get_controllerType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_typeGuid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Guid get_typeGuid() ;

/// @brief Method get_typeKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_typeKey() ;

// Ctor Parameters [CppParam { name: "", ty: "IHardwareControllerMap_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHardwareControllerMap_Internal(IHardwareControllerMap_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data::Mapping
