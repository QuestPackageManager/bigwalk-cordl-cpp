#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IExportToJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExportToJson)
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Interfaces {
class IExportToJson;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Interfaces::IExportToJson*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Interfaces::IExportToJson*, "Rewired.Utils.Interfaces", "IExportToJson");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IExportToJson
class CORDL_TYPE IExportToJson {
public:
// Declarations
/// @brief Method WriteJson, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteJson(::System::Text::StringBuilder*  stringBuilder, ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*  appendValueDelegate) ;

// Ctor Parameters [CppParam { name: "", ty: "IExportToJson", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExportToJson(IExportToJson const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3078};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
