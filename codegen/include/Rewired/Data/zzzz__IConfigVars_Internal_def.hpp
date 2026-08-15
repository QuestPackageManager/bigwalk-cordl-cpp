#pragma once
// IWYU pragma private; include "Rewired/Data/IConfigVars_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IConfigVars_Internal)
namespace Rewired::Utils::Classes::Data {
template<typename TKey>
class KeyedGetSetValueStore_1;
}
// Forward declare root types
namespace Rewired::Data {
class IConfigVars_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::Data::IConfigVars_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::IConfigVars_Internal*, "Rewired.Data", "IConfigVars_Internal");
// Dependencies 
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.IConfigVars_Internal
class CORDL_TYPE IConfigVars_Internal {
public:
// Declarations
 __declspec(property(get=get_values)) ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*  values;

/// @brief Method get_values, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* get_values() ;

// Ctor Parameters [CppParam { name: "", ty: "IConfigVars_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConfigVars_Internal(IConfigVars_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data
