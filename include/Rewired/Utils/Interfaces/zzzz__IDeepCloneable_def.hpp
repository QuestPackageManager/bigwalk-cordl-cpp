#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IDeepCloneable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDeepCloneable)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Interfaces::IDeepCloneable*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Interfaces::IDeepCloneable*, "Rewired.Utils.Interfaces", "IDeepCloneable");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IDeepCloneable
class CORDL_TYPE IDeepCloneable {
public:
// Declarations
/// @brief Method DeepClone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* DeepClone() ;

// Ctor Parameters [CppParam { name: "", ty: "IDeepCloneable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDeepCloneable(IDeepCloneable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3068};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
