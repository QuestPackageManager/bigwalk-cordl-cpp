#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsUtils)
namespace Mono::Btls {
class MonoBtlsX509Name;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsUtils;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsUtils*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsUtils*, "Mono.Btls", "MonoBtlsUtils");
// Dependencies System.Object
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsUtils
class CORDL_TYPE MonoBtlsUtils : public ::System::Object {
public:
// Declarations
/// @brief Field emailOid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_emailOid, put=setStaticF_emailOid)) ::ArrayW<uint8_t>  emailOid;

/// @brief Method AppendEntry, addr 0x181db6df0, size 0x4f0, virtual false, abstract: false, final false
static inline bool AppendEntry(::System::Text::StringBuilder*  sb, ::Mono::Btls::MonoBtlsX509Name*  name, int32_t  index, ::StringW  separator, bool  quotes) ;

/// @brief Method Compare, addr 0x181db72e0, size 0x60, virtual false, abstract: false, final false
static inline bool Compare(::ArrayW<uint8_t>  a, ::ArrayW<uint8_t>  b) ;

/// @brief Method FormatName, addr 0x181db7340, size 0x100, virtual false, abstract: false, final false
static inline ::StringW FormatName(::Mono::Btls::MonoBtlsX509Name*  name, bool  reversed, ::StringW  separator, bool  quotes) ;

static inline ::ArrayW<uint8_t> getStaticF_emailOid() ;

static inline void setStaticF_emailOid(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsUtils(MonoBtlsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsUtils(MonoBtlsUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsUtils) == 0x10, "Size mismatch!");

} // namespace end def Mono::Btls
