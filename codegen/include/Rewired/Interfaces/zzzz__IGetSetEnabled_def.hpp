#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IGetSetEnabled.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGetSetEnabled)
// Forward declare root types
namespace Rewired::Interfaces {
class IGetSetEnabled;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IGetSetEnabled*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IGetSetEnabled*, "Rewired.Interfaces", "IGetSetEnabled");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IGetSetEnabled
class CORDL_TYPE IGetSetEnabled {
public:
// Declarations
 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

/// @brief Method get_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method set_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_enabled(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IGetSetEnabled", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGetSetEnabled(IGetSetEnabled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
