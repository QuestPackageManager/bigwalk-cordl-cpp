#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IHardwareControllerTemplateMap_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHardwareControllerTemplateMap_Internal)
namespace GlobalNamespace {
class smFerTUgMidkgqEycQsjiJLyrhyp;
}
namespace Rewired::Data::Mapping {
class IControllerTemplateMapSpecialElement_Internal;
}
namespace Rewired::Interfaces {
class IControllerTemplateElementIdentifier;
}
namespace Rewired {
class Controller;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class IHardwareControllerTemplateMap_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*, "Rewired.Data.Mapping", "IHardwareControllerTemplateMap_Internal");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal
class CORDL_TYPE IHardwareControllerTemplateMap_Internal {
public:
// Declarations
 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_typeGuid)) ::System::Guid  typeGuid;

 __declspec(property(get=get_typeKey)) ::StringW  typeKey;

/// @brief Method GetAxisTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* GetAxisTarget(::Rewired::Controller*  controller, int32_t  elementIdentifierId) ;

/// @brief Method GetButtonTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* GetButtonTarget(::Rewired::Controller*  controller, int32_t  elementIdentifierId) ;

/// @brief Method GetElementIdentifierCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetElementIdentifierCount() ;

/// @brief Method GetSpecialTemplateElementByElementIdentifierId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* GetSpecialTemplateElementByElementIdentifierId(int32_t  id) ;

/// @brief Method GetTemplateElementIdentifier, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IControllerTemplateElementIdentifier* GetTemplateElementIdentifier(int32_t  index) ;

/// @brief Method GetTemplateElementIdentifierById, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IControllerTemplateElementIdentifier* GetTemplateElementIdentifierById(int32_t  elementIdentifierId) ;

/// @brief Method get_name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_typeGuid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Guid get_typeGuid() ;

/// @brief Method get_typeKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_typeKey() ;

// Ctor Parameters [CppParam { name: "", ty: "IHardwareControllerTemplateMap_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHardwareControllerTemplateMap_Internal(IHardwareControllerTemplateMap_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data::Mapping
