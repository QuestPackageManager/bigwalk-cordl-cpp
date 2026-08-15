#pragma once
// IWYU pragma private; include "System/Data/Common/SqlConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SqlConvert)
namespace System::Data::Common {
struct StorageType;
}
namespace System::Data::SqlTypes {
struct SqlBinary;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlByte;
}
namespace System::Data::SqlTypes {
class SqlBytes;
}
namespace System::Data::SqlTypes {
class SqlChars;
}
namespace System::Data::SqlTypes {
struct SqlDateTime;
}
namespace System::Data::SqlTypes {
struct SqlDecimal;
}
namespace System::Data::SqlTypes {
struct SqlDouble;
}
namespace System::Data::SqlTypes {
struct SqlGuid;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
}
namespace System::Data::SqlTypes {
struct SqlInt32;
}
namespace System::Data::SqlTypes {
struct SqlInt64;
}
namespace System::Data::SqlTypes {
struct SqlMoney;
}
namespace System::Data::SqlTypes {
struct SqlSingle;
}
namespace System::Data::SqlTypes {
struct SqlString;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
class SqlConvert;
}
// Write type traits
MARK_REF_T(::System::Data::Common::SqlConvert*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::SqlConvert*, "System.Data.Common", "SqlConvert");
// Dependencies System.Object
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlConvert
class CORDL_TYPE SqlConvert : public ::System::Object {
public:
// Declarations
/// @brief Method ChangeType2, addr 0x181bfb710, size 0x1490, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType2(::System::Object*  value, ::System::Data::Common::StorageType  stype, ::System::Type*  type, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ChangeTypeForDefaultValue, addr 0x181bfcba0, size 0x150, virtual false, abstract: false, final false
static inline ::System::Object* ChangeTypeForDefaultValue(::System::Object*  value, ::System::Type*  type, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ChangeTypeForXML, addr 0x181bfccf0, size 0x1810, virtual false, abstract: false, final false
static inline ::System::Object* ChangeTypeForXML(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method ConvertStringToDateTimeOffset, addr 0x181bfe500, size 0x20, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset ConvertStringToDateTimeOffset(::StringW  value, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ConvertToSqlBinary, addr 0x181bfe520, size 0x1d0, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBinary ConvertToSqlBinary(::System::Object*  value) ;

/// @brief Method ConvertToSqlBoolean, addr 0x181bfe6f0, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean ConvertToSqlBoolean(::System::Object*  value) ;

/// @brief Method ConvertToSqlByte, addr 0x181bfe8b0, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlByte ConvertToSqlByte(::System::Object*  value) ;

/// @brief Method ConvertToSqlBytes, addr 0x181bfea70, size 0x150, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBytes* ConvertToSqlBytes(::System::Object*  value) ;

/// @brief Method ConvertToSqlChars, addr 0x181bfebc0, size 0x150, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlChars* ConvertToSqlChars(::System::Object*  value) ;

/// @brief Method ConvertToSqlDateTime, addr 0x181bfed10, size 0x220, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDateTime ConvertToSqlDateTime(::System::Object*  value) ;

/// @brief Method ConvertToSqlDecimal, addr 0x181bfef30, size 0x710, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDecimal ConvertToSqlDecimal(::System::Object*  value) ;

/// @brief Method ConvertToSqlDouble, addr 0x181bff640, size 0x820, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDouble ConvertToSqlDouble(::System::Object*  value) ;

/// @brief Method ConvertToSqlGuid, addr 0x181bffe60, size 0x1d0, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlGuid ConvertToSqlGuid(::System::Object*  value) ;

/// @brief Method ConvertToSqlInt16, addr 0x181c00030, size 0x280, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 ConvertToSqlInt16(::System::Object*  value) ;

/// @brief Method ConvertToSqlInt32, addr 0x181c002b0, size 0x380, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt32 ConvertToSqlInt32(::System::Object*  value) ;

/// @brief Method ConvertToSqlInt64, addr 0x181c00630, size 0x440, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 ConvertToSqlInt64(::System::Object*  value) ;

/// @brief Method ConvertToSqlMoney, addr 0x181c00a70, size 0x670, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlMoney ConvertToSqlMoney(::System::Object*  value) ;

/// @brief Method ConvertToSqlSingle, addr 0x181c010e0, size 0x6c0, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlSingle ConvertToSqlSingle(::System::Object*  value) ;

/// @brief Method ConvertToSqlString, addr 0x181c017a0, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlString ConvertToSqlString(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SqlConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SqlConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SqlConvert(SqlConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SqlConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SqlConvert(SqlConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::Common::SqlConvert) == 0x10, "Size mismatch!");

} // namespace end def System::Data::Common
