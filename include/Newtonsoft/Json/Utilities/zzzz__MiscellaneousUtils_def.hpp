#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MiscellaneousUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MiscellaneousUtils)
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class MiscellaneousUtils;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::MiscellaneousUtils*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::MiscellaneousUtils*, "Newtonsoft.Json.Utilities", "MiscellaneousUtils");
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.MiscellaneousUtils
class CORDL_TYPE MiscellaneousUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ByteArrayCompare, addr 0x1817c6000, size 0x80, virtual false, abstract: false, final false
static inline int32_t ByteArrayCompare(::ArrayW<uint8_t>  a1, ::ArrayW<uint8_t>  a2) ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0x1817c6080, size 0x90, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* CreateArgumentOutOfRangeException(::StringW  paramName, ::System::Object*  actualValue, ::StringW  message) ;

/// @brief Method GetLocalName, addr 0x1817c6110, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetLocalName(::StringW  qualifiedName) ;

/// @brief Method GetPrefix, addr 0x1817c61d0, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetPrefix(::StringW  qualifiedName) ;

/// @brief Method GetQualifiedNameParts, addr 0x1817c6290, size 0xc0, virtual false, abstract: false, final false
static inline void GetQualifiedNameParts(::StringW  qualifiedName, ::by_ref<::StringW>  prefix, ::by_ref<::StringW>  localName) ;

/// @brief Method GetRegexOptions, addr 0x1817c6350, size 0x90, virtual false, abstract: false, final false
static inline ::System::Text::RegularExpressions::RegexOptions GetRegexOptions(::StringW  optionsText) ;

/// @brief Method ToString, addr 0x1817c63e0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value) ;

/// @brief Method ValueEquals, addr 0x1817c6430, size 0x240, virtual false, abstract: false, final false
static inline bool ValueEquals(::System::Object*  objA, ::System::Object*  objB) ;

/// @brief Method Assert, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MiscellaneousUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MiscellaneousUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MiscellaneousUtils(MiscellaneousUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MiscellaneousUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MiscellaneousUtils(MiscellaneousUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13643};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Utilities::MiscellaneousUtils) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
