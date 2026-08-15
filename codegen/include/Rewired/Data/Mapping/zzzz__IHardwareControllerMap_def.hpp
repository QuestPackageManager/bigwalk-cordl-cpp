#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IHardwareControllerMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHardwareControllerMap)
// Forward declare root types
namespace Rewired::Data::Mapping {
class IHardwareControllerMap;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::IHardwareControllerMap*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::IHardwareControllerMap*, "Rewired.Data.Mapping", "IHardwareControllerMap");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.IHardwareControllerMap
class CORDL_TYPE IHardwareControllerMap {
public:
// Declarations
/// @brief Method ContainsElementIdentifier, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ContainsElementIdentifier(int32_t  id) ;

/// @brief Method GetElementIdentifierIds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<int32_t> GetElementIdentifierIds() ;

/// @brief Method GetElementIdentifierNames, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> GetElementIdentifierNames() ;

/// @brief Method GetMappableElementIdentifierInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetMappableElementIdentifierInfo(::by_ref<::ArrayW<::StringW>>  names, ::by_ref<::ArrayW<int32_t>>  ids) ;

// Ctor Parameters [CppParam { name: "", ty: "IHardwareControllerMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHardwareControllerMap(IHardwareControllerMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data::Mapping
