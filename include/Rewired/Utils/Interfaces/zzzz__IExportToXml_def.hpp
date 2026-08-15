#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IExportToXml.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExportToXml)
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace Rewired::Utils::Interfaces {
class IExportToXml;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Interfaces::IExportToXml*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Interfaces::IExportToXml*, "Rewired.Utils.Interfaces", "IExportToXml");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IExportToXml
class CORDL_TYPE IExportToXml {
public:
// Declarations
 __declspec(property(get=get_writesOwnElementTag)) bool  writesOwnElementTag;

/// @brief Method WriteXml, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteXml(::System::Xml::XmlWriter*  writer) ;

/// @brief Method get_writesOwnElementTag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_writesOwnElementTag() ;

// Ctor Parameters [CppParam { name: "", ty: "IExportToXml", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExportToXml(IExportToXml const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3077};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
