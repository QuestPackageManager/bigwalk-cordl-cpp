#pragma once
// IWYU pragma private; include "Rewired/Utils/EnumTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumTools)
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils {
class EnumTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::EnumTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::EnumTools*, "Rewired.Utils", "EnumTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.EnumTools
class CORDL_TYPE EnumTools : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertByName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnumFrom,typename TEnumTo>
static inline bool ConvertByName(TEnumFrom  convertFrom, ::by_ref<TEnumTo>  value) ;

/// @brief Method GetIntValues, addr 0x1819036b0, size 0x20, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> GetIntValues(::System::Type*  enumType) ;

/// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
static inline ::StringW GetName(TEnum  value) ;

/// @brief Method GetUnderlyingType, addr 0x1819036d0, size 0x70, virtual false, abstract: false, final false
static inline ::System::Type* GetUnderlyingType(::System::Type*  type) ;

/// @brief Method IsEnum, addr 0x181903740, size 0x50, virtual false, abstract: false, final false
static inline bool IsEnum(::System::Type*  type) ;

/// @brief Method IsValidUnderlyingType, addr 0x181903790, size 0xe0, virtual false, abstract: false, final false
static inline bool IsValidUnderlyingType(::System::Type*  underlyingType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumTools(EnumTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumTools(EnumTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2917};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::EnumTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
