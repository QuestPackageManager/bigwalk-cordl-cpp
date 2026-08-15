#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/SerializedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializedObject)
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class IndexedDictionary_2;
}
namespace Rewired::Utils::Classes::Data {
class QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_Enumerator;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_FieldOptions;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_Field;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_ObjectType;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject_XmlInfo;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA;
}
namespace Rewired::Utils::Classes::Data {
class XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum;
}
namespace Rewired::Utils::Classes::Data {
class XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR;
}
namespace Rewired::Utils::Interfaces {
template<typename TKey,typename TValue>
class IAddKeyValue_2;
}
namespace Rewired::Utils::Interfaces {
template<typename TValue>
class IAddValue_1;
}
namespace Rewired::Utils::Interfaces {
class IExportToJson;
}
namespace Rewired::Utils::Interfaces {
class IExportToXml;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_FieldOptions;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_ObjectType;
}
namespace Rewired::Utils::Classes::Data {
class QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject_XmlInfo;
}
namespace Rewired::Utils::Classes::Data {
class XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum;
}
namespace Rewired::Utils::Classes::Data {
class XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_Enumerator;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_Field;
}
namespace Rewired::Utils::Classes::Data {
struct SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions);
MARK_VAL_T(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType);
MARK_REF_T(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*);
MARK_REF_T(::Rewired::Utils::Classes::Data::SerializedObject*);
MARK_REF_T(::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*);
MARK_REF_T(::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*);
MARK_REF_T(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*);
MARK_REF_T(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*);
MARK_REF_T(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*);
MARK_VAL_T(::Rewired::Utils::Classes::Data::SerializedObject_Enumerator);
MARK_VAL_T(::Rewired::Utils::Classes::Data::SerializedObject_Field);
MARK_VAL_T(::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions, "Rewired.Utils.Classes.Data", "SerializedObject/FieldOptions");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType, "Rewired.Utils.Classes.Data", "SerializedObject/ObjectType");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*, "Rewired.Utils.Classes.Data", "SerializedObject/QonKKWwvAzsHtRhImDbiCQeumAyC/pgIjpeCjaZIPofLXOTLwFWrjhzVIA");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject*, "Rewired.Utils.Classes.Data", "SerializedObject");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*, "Rewired.Utils.Classes.Data", "SerializedObject/IfzoBYvrtNyuCRIDQpKxVoebHMBB");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*, "Rewired.Utils.Classes.Data", "SerializedObject/QonKKWwvAzsHtRhImDbiCQeumAyC");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*, "Rewired.Utils.Classes.Data", "SerializedObject/XmlInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*, "Rewired.Utils.Classes.Data", "SerializedObject/XmlInfo/EIbzonhokcWItxlOhzMShqYbkqum");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*, "Rewired.Utils.Classes.Data", "SerializedObject/XmlInfo/pdArFNlAFDEuXPMAnTRIYfiqnMBR");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_Enumerator, "Rewired.Utils.Classes.Data", "SerializedObject/Enumerator");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_Field, "Rewired.Utils.Classes.Data", "SerializedObject/Field");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA, "Rewired.Utils.Classes.Data", "SerializedObject/dCzgkoqCBPABJqqLiGjLhUagaSkiA");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/ObjectType
struct CORDL_TYPE SerializedObject_ObjectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SerializedObject_ObjectType_Unwrapped
enum struct __SerializedObject_ObjectType_Unwrapped : int32_t {
__E_Object = static_cast<int32_t>(0x0),
__E_List = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SerializedObject_ObjectType_Unwrapped () const noexcept {
return static_cast<__SerializedObject_ObjectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_ObjectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SerializedObject_ObjectType(int32_t  value__) noexcept;

/// @brief Field List value: I32(1)
static ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType const List;

/// @brief Field Object value: I32(0)
static ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType const Object;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/FieldOptions
struct CORDL_TYPE SerializedObject_FieldOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SerializedObject_FieldOptions_Unwrapped
enum struct __SerializedObject_FieldOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ExculdeFromXml = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SerializedObject_FieldOptions_Unwrapped () const noexcept {
return static_cast<__SerializedObject_FieldOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_FieldOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SerializedObject_FieldOptions(int32_t  value__) noexcept;

/// @brief Field ExculdeFromXml value: I32(1)
static ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions const ExculdeFromXml;

/// @brief Field None value: I32(0)
static ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3023};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies Rewired.Utils.Classes.Data.SerializedObject::FieldOptions
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/dCzgkoqCBPABJqqLiGjLhUagaSkiA
struct CORDL_TYPE SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA {
public:
// Declarations
/// @brief Method YCotGxHDdWbqRUHJLatQKhizyXGS, addr 0x181959140, size 0x170, virtual true, abstract: false, final false
inline ::StringW YCotGxHDdWbqRUHJLatQKhizyXGS() ;

/// @brief Method .ctor, addr 0x180fb4d10, size 0x9bb0, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  _cordl_fixed_empty_name_whitespace_param_2) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA() ;

// Ctor Parameters [CppParam { name: "OVamNmXCXUboNRNDLhPcfFhJJELRA", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "dKmuhlDyWpOxoVZYKKayZUchraDx", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "mpcRoFFqKUaVvGkWCpkSwrDLHxjW", ty: "::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions", modifiers: "", def_value: None }]
constexpr SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA(::System::Type*  OVamNmXCXUboNRNDLhPcfFhJJELRA, ::System::Object*  dKmuhlDyWpOxoVZYKKayZUchraDx, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  mpcRoFFqKUaVvGkWCpkSwrDLHxjW) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3024};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field OVamNmXCXUboNRNDLhPcfFhJJELRA, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  OVamNmXCXUboNRNDLhPcfFhJJELRA;

/// @brief Field dKmuhlDyWpOxoVZYKKayZUchraDx, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  dKmuhlDyWpOxoVZYKKayZUchraDx;

/// @brief Field mpcRoFFqKUaVvGkWCpkSwrDLHxjW, offset: 0x10, size: 0x4, def value: None
 ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  mpcRoFFqKUaVvGkWCpkSwrDLHxjW;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA, OVamNmXCXUboNRNDLhPcfFhJJELRA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA, dKmuhlDyWpOxoVZYKKayZUchraDx) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA, mpcRoFFqKUaVvGkWCpkSwrDLHxjW) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies Rewired.Utils.Classes.Data.SerializedObject::FieldOptions
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/Field
struct CORDL_TYPE SerializedObject_Field {
public:
// Declarations
/// @brief Method ToString, addr 0x1819523b0, size 0x160, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x181952510, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Type*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  _cordl_fixed_empty_name_whitespace_param_3) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_Field() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions", modifiers: "", def_value: None }]
constexpr SerializedObject_Field(::StringW  name, ::System::Object*  value, ::System::Type*  type, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  options) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  value;

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  type;

/// @brief Field options, offset: 0x18, size: 0x4, def value: None
 ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_Field, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_Field, value) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_Field, type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_Field, options) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_Field) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/XmlInfo/pdArFNlAFDEuXPMAnTRIYfiqnMBR
class CORDL_TYPE XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR : public ::System::Object {
public:
// Declarations
static inline ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR(XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR(XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies Rewired.Utils.Classes.Data.SerializedObject::XmlInfo::pdArFNlAFDEuXPMAnTRIYfiqnMBR
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/XmlInfo/EIbzonhokcWItxlOhzMShqYbkqum
class CORDL_TYPE XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum : public ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR {
public:
// Declarations
/// @brief Field MoqWiacccBdtfzvYmfVmOmgBOLwp, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MoqWiacccBdtfzvYmfVmOmgBOLwp, put=__cordl_internal_set_MoqWiacccBdtfzvYmfVmOmgBOLwp)) ::StringW  MoqWiacccBdtfzvYmfVmOmgBOLwp;

/// @brief Field XikMYYEhzWTAwDsKOgNRgbQoxfTI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_XikMYYEhzWTAwDsKOgNRgbQoxfTI, put=__cordl_internal_set_XikMYYEhzWTAwDsKOgNRgbQoxfTI)) ::StringW  XikMYYEhzWTAwDsKOgNRgbQoxfTI;

/// @brief Field sfvuudZUcpMjvpyicimlkoeRpLgL, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sfvuudZUcpMjvpyicimlkoeRpLgL, put=__cordl_internal_set_sfvuudZUcpMjvpyicimlkoeRpLgL)) ::StringW  sfvuudZUcpMjvpyicimlkoeRpLgL;

/// @brief Field xiAeMznhhfCJObJPxQsGGQqeTAuB, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_xiAeMznhhfCJObJPxQsGGQqeTAuB, put=__cordl_internal_set_xiAeMznhhfCJObJPxQsGGQqeTAuB)) ::StringW  xiAeMznhhfCJObJPxQsGGQqeTAuB;

static inline ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MoqWiacccBdtfzvYmfVmOmgBOLwp() const;

constexpr ::StringW& __cordl_internal_get_MoqWiacccBdtfzvYmfVmOmgBOLwp() ;

constexpr ::StringW const& __cordl_internal_get_XikMYYEhzWTAwDsKOgNRgbQoxfTI() const;

constexpr ::StringW& __cordl_internal_get_XikMYYEhzWTAwDsKOgNRgbQoxfTI() ;

constexpr ::StringW const& __cordl_internal_get_sfvuudZUcpMjvpyicimlkoeRpLgL() const;

constexpr ::StringW& __cordl_internal_get_sfvuudZUcpMjvpyicimlkoeRpLgL() ;

constexpr ::StringW const& __cordl_internal_get_xiAeMznhhfCJObJPxQsGGQqeTAuB() const;

constexpr ::StringW& __cordl_internal_get_xiAeMznhhfCJObJPxQsGGQqeTAuB() ;

constexpr void __cordl_internal_set_MoqWiacccBdtfzvYmfVmOmgBOLwp(::StringW  value) ;

constexpr void __cordl_internal_set_XikMYYEhzWTAwDsKOgNRgbQoxfTI(::StringW  value) ;

constexpr void __cordl_internal_set_sfvuudZUcpMjvpyicimlkoeRpLgL(::StringW  value) ;

constexpr void __cordl_internal_set_xiAeMznhhfCJObJPxQsGGQqeTAuB(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method doGFsGdYkNFLwvSdIzpSHbudzFXM, addr 0x181951e20, size 0xa0, virtual true, abstract: false, final false
inline ::StringW doGFsGdYkNFLwvSdIzpSHbudzFXM() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum(XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum(XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3027};

/// @brief Field MoqWiacccBdtfzvYmfVmOmgBOLwp, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MoqWiacccBdtfzvYmfVmOmgBOLwp;

/// @brief Field xiAeMznhhfCJObJPxQsGGQqeTAuB, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___xiAeMznhhfCJObJPxQsGGQqeTAuB;

/// @brief Field XikMYYEhzWTAwDsKOgNRgbQoxfTI, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___XikMYYEhzWTAwDsKOgNRgbQoxfTI;

/// @brief Field sfvuudZUcpMjvpyicimlkoeRpLgL, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___sfvuudZUcpMjvpyicimlkoeRpLgL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum, ___MoqWiacccBdtfzvYmfVmOmgBOLwp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum, ___xiAeMznhhfCJObJPxQsGGQqeTAuB) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum, ___XikMYYEhzWTAwDsKOgNRgbQoxfTI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum, ___sfvuudZUcpMjvpyicimlkoeRpLgL) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/XmlInfo
class CORDL_TYPE SerializedObject_XmlInfo : public ::System::Object {
public:
// Declarations
using EIbzonhokcWItxlOhzMShqYbkqum = ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum;

using pdArFNlAFDEuXPMAnTRIYfiqnMBR = ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR;

 __declspec(property(get=get_attributes)) ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*  attributes;

/// @brief Field rfvGthmhPcBYXNbBieTpjbCjsYAFA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rfvGthmhPcBYXNbBieTpjbCjsYAFA, put=__cordl_internal_set_rfvGthmhPcBYXNbBieTpjbCjsYAFA)) ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*  rfvGthmhPcBYXNbBieTpjbCjsYAFA;

static inline ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* New_ctor() ;

/// @brief Method ToString, addr 0x181959030, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>* const& __cordl_internal_get_rfvGthmhPcBYXNbBieTpjbCjsYAFA() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*& __cordl_internal_get_rfvGthmhPcBYXNbBieTpjbCjsYAFA() ;

constexpr void __cordl_internal_set_rfvGthmhPcBYXNbBieTpjbCjsYAFA(::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_attributes, addr 0x1819590e0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>* get_attributes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_XmlInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject_XmlInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedObject_XmlInfo(SerializedObject_XmlInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject_XmlInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedObject_XmlInfo(SerializedObject_XmlInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3028};

/// @brief Field rfvGthmhPcBYXNbBieTpjbCjsYAFA, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*  ___rfvGthmhPcBYXNbBieTpjbCjsYAFA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo, ___rfvGthmhPcBYXNbBieTpjbCjsYAFA) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies Rewired.Utils.Classes.Data.SerializedObject::Field
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/Enumerator
struct CORDL_TYPE SerializedObject_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Rewired::Utils::Classes::Data::SerializedObject_Field  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x181951ec0, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x181952060, size 0x50, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1819520b0, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x1819520f0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Current, addr 0x1805cab30, size 0x150, virtual true, abstract: false, final true
inline ::Rewired::Utils::Classes::Data::SerializedObject_Field get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>* i___System__Collections__Generic__IEnumerator_1___Rewired__Utils__Classes__Data__SerializedObject_Field_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_Enumerator() ;

// Ctor Parameters [CppParam { name: "uKbldhzWzObojxMbVwjlWwxtTCyb", ty: "::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*", modifiers: "", def_value: None }, CppParam { name: "zJixmRTGEXvLuWaAdOltQEzauOcp", ty: "::Rewired::Utils::Classes::Data::SerializedObject_Field", modifiers: "", def_value: None }, CppParam { name: "FeerKYsjNyYcyoRpfAblusousUmg", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>>*", modifiers: "", def_value: None }]
constexpr SerializedObject_Enumerator(::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*  uKbldhzWzObojxMbVwjlWwxtTCyb, ::Rewired::Utils::Classes::Data::SerializedObject_Field  zJixmRTGEXvLuWaAdOltQEzauOcp, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>>*  FeerKYsjNyYcyoRpfAblusousUmg) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3029};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field uKbldhzWzObojxMbVwjlWwxtTCyb, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*  uKbldhzWzObojxMbVwjlWwxtTCyb;

/// @brief Field zJixmRTGEXvLuWaAdOltQEzauOcp, offset: 0x8, size: 0x20, def value: None
 ::Rewired::Utils::Classes::Data::SerializedObject_Field  zJixmRTGEXvLuWaAdOltQEzauOcp;

/// @brief Field FeerKYsjNyYcyoRpfAblusousUmg, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>>*  FeerKYsjNyYcyoRpfAblusousUmg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_Enumerator, uKbldhzWzObojxMbVwjlWwxtTCyb) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_Enumerator, zJixmRTGEXvLuWaAdOltQEzauOcp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_Enumerator, FeerKYsjNyYcyoRpfAblusousUmg) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_Enumerator) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/QonKKWwvAzsHtRhImDbiCQeumAyC/pgIjpeCjaZIPofLXOTLwFWrjhzVIA
class CORDL_TYPE QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA : public ::System::Object {
public:
// Declarations
/// @brief Field EQVfxIEEgojBKvDtULYRkmJOsuqJA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EQVfxIEEgojBKvDtULYRkmJOsuqJA, put=__cordl_internal_set_EQVfxIEEgojBKvDtULYRkmJOsuqJA)) ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  EQVfxIEEgojBKvDtULYRkmJOsuqJA;

/// @brief Field HdNdsoYAtrFSvdxCOcNJREpSvDyR, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_HdNdsoYAtrFSvdxCOcNJREpSvDyR, put=__cordl_internal_set_HdNdsoYAtrFSvdxCOcNJREpSvDyR)) ::StringW  HdNdsoYAtrFSvdxCOcNJREpSvDyR;

/// @brief Field TjskuIWdaDRUICVcUMKSoAXiiOIO, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TjskuIWdaDRUICVcUMKSoAXiiOIO, put=__cordl_internal_set_TjskuIWdaDRUICVcUMKSoAXiiOIO)) ::StringW  TjskuIWdaDRUICVcUMKSoAXiiOIO;

/// @brief Field TxSLgmThmlctaMVOOrpNAkCRlprO, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TxSLgmThmlctaMVOOrpNAkCRlprO, put=__cordl_internal_set_TxSLgmThmlctaMVOOrpNAkCRlprO)) ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>*  TxSLgmThmlctaMVOOrpNAkCRlprO;

/// @brief Field tgcrVNGhozeXECdfPpgJCuUKhxVe, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tgcrVNGhozeXECdfPpgJCuUKhxVe, put=__cordl_internal_set_tgcrVNGhozeXECdfPpgJCuUKhxVe)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  tgcrVNGhozeXECdfPpgJCuUKhxVe;

 __declspec(property(get=swZgejItMVMIEXfKpHGTewCHPuyi)) int32_t  ulROtCCCtwFOOBMTOKIHBLwIyMLVb;

 __declspec(property(get=RIiErasIBdwFqIqbfJThlVSOvAmf)) int32_t  zBopTpxkthCNdUVfOHojLElCGfRCA;

/// @brief Method MSfPjQUqlxjvNqQQwTMDuZqimoSG, addr 0x181959310, size 0xd0, virtual false, abstract: false, final false
inline void MSfPjQUqlxjvNqQQwTMDuZqimoSG(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NDsgvmxjAmPobiQIiBaFkquZtDVl, addr 0x1819593e0, size 0xd0, virtual false, abstract: false, final false
inline bool NDsgvmxjAmPobiQIiBaFkquZtDVl(::StringW  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method OmXEQmfTTYCuOaQRibGrnEufjXwMA, addr 0x1819594b0, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* OmXEQmfTTYCuOaQRibGrnEufjXwMA(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method PkSFxcJmOHnBUYWIrrqvEpKkqrzq, addr 0x181959560, size 0x4d0, virtual false, abstract: false, final false
inline ::StringW PkSFxcJmOHnBUYWIrrqvEpKkqrzq(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method RIiErasIBdwFqIqbfJThlVSOvAmf, addr 0x1818b5910, size 0x20, virtual false, abstract: false, final false
inline int32_t RIiErasIBdwFqIqbfJThlVSOvAmf() ;

constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* const& __cordl_internal_get_EQVfxIEEgojBKvDtULYRkmJOsuqJA() const;

constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*& __cordl_internal_get_EQVfxIEEgojBKvDtULYRkmJOsuqJA() ;

constexpr ::StringW const& __cordl_internal_get_HdNdsoYAtrFSvdxCOcNJREpSvDyR() const;

constexpr ::StringW& __cordl_internal_get_HdNdsoYAtrFSvdxCOcNJREpSvDyR() ;

constexpr ::StringW const& __cordl_internal_get_TjskuIWdaDRUICVcUMKSoAXiiOIO() const;

constexpr ::StringW& __cordl_internal_get_TjskuIWdaDRUICVcUMKSoAXiiOIO() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>* const& __cordl_internal_get_TxSLgmThmlctaMVOOrpNAkCRlprO() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>*& __cordl_internal_get_TxSLgmThmlctaMVOOrpNAkCRlprO() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_tgcrVNGhozeXECdfPpgJCuUKhxVe() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_tgcrVNGhozeXECdfPpgJCuUKhxVe() ;

constexpr void __cordl_internal_set_EQVfxIEEgojBKvDtULYRkmJOsuqJA(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  value) ;

constexpr void __cordl_internal_set_HdNdsoYAtrFSvdxCOcNJREpSvDyR(::StringW  value) ;

constexpr void __cordl_internal_set_TjskuIWdaDRUICVcUMKSoAXiiOIO(::StringW  value) ;

constexpr void __cordl_internal_set_TxSLgmThmlctaMVOOrpNAkCRlprO(::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>*  value) ;

constexpr void __cordl_internal_set_tgcrVNGhozeXECdfPpgJCuUKhxVe(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x181959a30, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method aFTbDdEAnCXIKBLvJPnqKhFrUCvFA, addr 0x181959b20, size 0x20, virtual true, abstract: false, final false
inline ::StringW aFTbDdEAnCXIKBLvJPnqKhFrUCvFA() ;

/// @brief Method dkRCanKooUYrZTUJfOgcFNIWuyAzA, addr 0x181959b40, size 0xe0, virtual false, abstract: false, final false
inline ::System::Object* dkRCanKooUYrZTUJfOgcFNIWuyAzA() ;

/// @brief Method fDaiythbuvPiHfwicmYwIwNRDmhF, addr 0x181959c20, size 0xe0, virtual false, abstract: false, final false
inline void fDaiythbuvPiHfwicmYwIwNRDmhF(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method swZgejItMVMIEXfKpHGTewCHPuyi, addr 0x181959d00, size 0x20, virtual false, abstract: false, final false
inline int32_t swZgejItMVMIEXfKpHGTewCHPuyi() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA(QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA(QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3030};

/// @brief Field TjskuIWdaDRUICVcUMKSoAXiiOIO, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___TjskuIWdaDRUICVcUMKSoAXiiOIO;

/// @brief Field EQVfxIEEgojBKvDtULYRkmJOsuqJA, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  ___EQVfxIEEgojBKvDtULYRkmJOsuqJA;

/// @brief Field HdNdsoYAtrFSvdxCOcNJREpSvDyR, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___HdNdsoYAtrFSvdxCOcNJREpSvDyR;

/// @brief Field tgcrVNGhozeXECdfPpgJCuUKhxVe, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___tgcrVNGhozeXECdfPpgJCuUKhxVe;

/// @brief Field TxSLgmThmlctaMVOOrpNAkCRlprO, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>*  ___TxSLgmThmlctaMVOOrpNAkCRlprO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA, ___TjskuIWdaDRUICVcUMKSoAXiiOIO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA, ___EQVfxIEEgojBKvDtULYRkmJOsuqJA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA, ___HdNdsoYAtrFSvdxCOcNJREpSvDyR) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA, ___tgcrVNGhozeXECdfPpgJCuUKhxVe) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA, ___TxSLgmThmlctaMVOOrpNAkCRlprO) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/QonKKWwvAzsHtRhImDbiCQeumAyC
class CORDL_TYPE SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC : public ::System::Object {
public:
// Declarations
using pgIjpeCjaZIPofLXOTLwFWrjhzVIA = ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA;

 __declspec(property(get=HaivsvpvLEIQpkpMzHwcEKOFkhdJA)) ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  ZrDJavzppPBsBcdbKKMUyprzQjOH;

 __declspec(property(get=aMzVdjmuhTtaZItzAOMgyLvSKRJA)) bool  kNxkRgEiGlZqQkEfVkBALDjUuTJl;

/// @brief Field oKIwpuBxgwIczFJLAtxQTzDRuysN, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_oKIwpuBxgwIczFJLAtxQTzDRuysN, put=__cordl_internal_set_oKIwpuBxgwIczFJLAtxQTzDRuysN)) ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  oKIwpuBxgwIczFJLAtxQTzDRuysN;

/// @brief Method HaivsvpvLEIQpkpMzHwcEKOFkhdJA, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* HaivsvpvLEIQpkpMzHwcEKOFkhdJA() ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* const& __cordl_internal_get_oKIwpuBxgwIczFJLAtxQTzDRuysN() const;

constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*& __cordl_internal_get_oKIwpuBxgwIczFJLAtxQTzDRuysN() ;

constexpr void __cordl_internal_set_oKIwpuBxgwIczFJLAtxQTzDRuysN(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  value) ;

/// @brief Method .ctor, addr 0x181957500, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aMzVdjmuhTtaZItzAOMgyLvSKRJA, addr 0x180541a80, size 0x10, virtual false, abstract: false, final false
inline bool aMzVdjmuhTtaZItzAOMgyLvSKRJA() ;

/// @brief Method dCpwnjByXBNKHqvSzjvtXagleMdx, addr 0x181957670, size 0x2c0, virtual false, abstract: false, final false
inline void dCpwnjByXBNKHqvSzjvtXagleMdx(::System::Xml::XmlReader*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ucIGQdKpkOLnVLgZhGUUDwANmjEkA, addr 0x181957930, size 0x40, virtual true, abstract: false, final false
inline ::StringW ucIGQdKpkOLnVLgZhGUUDwANmjEkA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC(SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC(SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3031};

/// @brief Field oKIwpuBxgwIczFJLAtxQTzDRuysN, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  ___oKIwpuBxgwIczFJLAtxQTzDRuysN;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC, ___oKIwpuBxgwIczFJLAtxQTzDRuysN) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializedObject/IfzoBYvrtNyuCRIDQpKxVoebHMBB
class CORDL_TYPE SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*  __9;

/// @brief Field <>9__63_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__63_0, put=setStaticF___9__63_0)) ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  __9__63_0;

/// @brief Field <>9__63_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__63_1, put=setStaticF___9__63_1)) ::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*  __9__63_1;

/// @brief Field <>9__63_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__63_2, put=setStaticF___9__63_2)) ::System::Func_2<::System::Reflection::PropertyInfo*,bool>*  __9__63_2;

/// @brief Field <>9__63_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__63_3, put=setStaticF___9__63_3)) ::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>*  __9__63_3;

/// @brief Method AGuFPibLwarbwjpkIQdRKKKPOLzOA, addr 0x181943e70, size 0x100, virtual false, abstract: false, final false
inline bool AGuFPibLwarbwjpkIQdRKKKPOLzOA(::System::Reflection::FieldInfo*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB* New_ctor() ;

/// @brief Method ZOYMkcsrZnjDdZRKsbFTndAhdPbJA, addr 0x181943c90, size 0xa0, virtual false, abstract: false, final false
inline bool ZOYMkcsrZnjDdZRKsbFTndAhdPbJA(::System::Reflection::PropertyInfo*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* getStaticF___9__63_0() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,::StringW>* getStaticF___9__63_1() ;

static inline ::System::Func_2<::System::Reflection::PropertyInfo*,bool>* getStaticF___9__63_2() ;

static inline ::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>* getStaticF___9__63_3() ;

/// @brief Method jbCkxYYatPHzRMJngJWUgZayFhVk, addr 0x181943d30, size 0x140, virtual false, abstract: false, final false
inline ::StringW jbCkxYYatPHzRMJngJWUgZayFhVk(::System::Reflection::PropertyInfo*  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF___9(::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*  value) ;

static inline void setStaticF___9__63_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

static inline void setStaticF___9__63_1(::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*  value) ;

static inline void setStaticF___9__63_2(::System::Func_2<::System::Reflection::PropertyInfo*,bool>*  value) ;

static inline void setStaticF___9__63_3(::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>*  value) ;

/// @brief Method zbwLvwPIjMAoLEASszYyiSsuypaW, addr 0x181943d30, size 0x140, virtual false, abstract: false, final false
inline ::StringW zbwLvwPIjMAoLEASszYyiSsuypaW(::System::Reflection::FieldInfo*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB(SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB(SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies Rewired.Utils.Classes.Data.SerializedObject::ObjectType, System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.SerializedObject
class CORDL_TYPE SerializedObject : public ::System::Object {
public:
// Declarations
using Enumerator = ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator;

using Field = ::Rewired::Utils::Classes::Data::SerializedObject_Field;

using FieldOptions = ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions;

using IfzoBYvrtNyuCRIDQpKxVoebHMBB = ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB;

using ObjectType = ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType;

using QonKKWwvAzsHtRhImDbiCQeumAyC = ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC;

using XmlInfo = ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo;

using dCzgkoqCBPABJqqLiGjLhUagaSkiA = ::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA;

/// @brief Field HzvMZZQMIIGOxIBFQaEcqkvTJGts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_HzvMZZQMIIGOxIBFQaEcqkvTJGts, put=__cordl_internal_set_HzvMZZQMIIGOxIBFQaEcqkvTJGts)) ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*  HzvMZZQMIIGOxIBFQaEcqkvTJGts;

/// @brief Field IXlXrfnpbJRAxZGzflKOTKgDEgfO, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IXlXrfnpbJRAxZGzflKOTKgDEgfO, put=setStaticF_IXlXrfnpbJRAxZGzflKOTKgDEgfO)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>*  IXlXrfnpbJRAxZGzflKOTKgDEgfO;

 __declspec(property(get=get_Item)) ::Rewired::Utils::Classes::Data::SerializedObject_Field  Item[];

/// @brief Field JlJsXaBeSVKtJAabkqthUtMzkZir, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_JlJsXaBeSVKtJAabkqthUtMzkZir, put=__cordl_internal_set_JlJsXaBeSVKtJAabkqthUtMzkZir)) ::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*  JlJsXaBeSVKtJAabkqthUtMzkZir;

/// @brief Field LIJtDXrCtpniwJyypfrOOQsHKHLj, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LIJtDXrCtpniwJyypfrOOQsHKHLj, put=__cordl_internal_set_LIJtDXrCtpniwJyypfrOOQsHKHLj)) ::System::Type*  LIJtDXrCtpniwJyypfrOOQsHKHLj;

 __declspec(property(get=AYsuUgSjEQHxEsLKkIMPPINBuiFC)) bool  Rewired_Utils_Interfaces_IExportToXml_writesOwnElementTag;

/// @brief Field ULFDgFTlDvNTIvWQlJlytpsgyzSC, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ULFDgFTlDvNTIvWQlJlytpsgyzSC, put=__cordl_internal_set_ULFDgFTlDvNTIvWQlJlytpsgyzSC)) ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  ULFDgFTlDvNTIvWQlJlytpsgyzSC;

/// @brief Field VXeCNNwfoBgzLijxlaEzBuNeRoMkb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VXeCNNwfoBgzLijxlaEzBuNeRoMkb, put=setStaticF_VXeCNNwfoBgzLijxlaEzBuNeRoMkb)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>*  VXeCNNwfoBgzLijxlaEzBuNeRoMkb;

 __declspec(property(get=LzhemtGfeNQftjwVUFjynVBQvPBmA)) bool  allowDuplicateKeys;

 __declspec(property(get=get_count)) int32_t  count;

 __declspec(property(get=get_objectType, put=set_objectType)) ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  objectType;

 __declspec(property(get=get_type)) ::System::Type*  type;

 __declspec(property(get=get_xmlInfo, put=set_xmlInfo)) ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*  xmlInfo;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>"
constexpr operator  ::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>"
constexpr operator  ::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExportToJson"
constexpr operator  ::Rewired::Utils::Interfaces::IExportToJson*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExportToXml"
constexpr operator  ::Rewired::Utils::Interfaces::IExportToXml*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AYsuUgSjEQHxEsLKkIMPPINBuiFC, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool AYsuUgSjEQHxEsLKkIMPPINBuiFC() ;

/// @brief Method Add, addr 0x181932f80, size 0x70, virtual false, abstract: false, final false
inline void Add(::StringW  fieldName, ::System::Object*  value) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Add(::StringW  fieldName, T  value, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  options) ;

/// @brief Method Add, addr 0x181932db0, size 0x1d0, virtual false, abstract: false, final false
inline void Add(::System::Type*  type, ::StringW  fieldName, ::System::Object*  value, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  options) ;

/// @brief Method CZNgpJIXHkqYYIbKQiszYlGeMoxJ, addr 0x181932ff0, size 0x90, virtual false, abstract: false, final false
inline void CZNgpJIXHkqYYIbKQiszYlGeMoxJ(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Contains, addr 0x181933080, size 0x60, virtual false, abstract: false, final false
inline bool Contains(::StringW  fieldName) ;

/// @brief Method FromJson, addr 0x1819330e0, size 0xb0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::SerializedObject* FromJson(::System::Type*  type, ::StringW  jsonString) ;

/// @brief Method FromXml, addr 0x181933190, size 0x170, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::SerializedObject* FromXml(::System::Type*  type, ::StringW  xmlString) ;

/// @brief Method GetDataType, addr 0x181933300, size 0x80, virtual false, abstract: false, final false
inline ::System::Type* GetDataType(::StringW  fieldName) ;

/// @brief Method GetEntry, addr 0x181933380, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject_Field GetEntry(::StringW  fieldName) ;

/// @brief Method GetOriginalValue, addr 0x181933420, size 0x40, virtual false, abstract: false, final false
inline ::System::Object* GetOriginalValue(::StringW  fieldName) ;

/// @brief Method GetOriginalValue, addr 0x1819333f0, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* GetOriginalValue(int32_t  index) ;

/// @brief Method GetOriginalValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetOriginalValue(::StringW  fieldName) ;

/// @brief Method GetOriginalValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetOriginalValue(int32_t  index) ;

/// @brief Method JJYbNHkQIICPWIlUUQxdTAuamUeCb, addr 0x181933460, size 0x6440, virtual false, abstract: false, final false
static inline bool JJYbNHkQIICPWIlUUQxdTAuamUeCb(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_2, ::System::Globalization::NumberStyles  _cordl_fixed_empty_name_whitespace_param_3, ::System::Globalization::CultureInfo*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method KqHsOeTlWRnIQnMQOdaKeXBQDgtjA, addr 0x1819398a0, size 0x2f0, virtual false, abstract: false, final false
inline void KqHsOeTlWRnIQnMQOdaKeXBQDgtjA(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LzhemtGfeNQftjwVUFjynVBQvPBmA, addr 0x181939b90, size 0x10, virtual false, abstract: false, final false
inline bool LzhemtGfeNQftjwVUFjynVBQvPBmA() ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::Utils::Classes::Data::SerializedObject* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Remove, addr 0x181939ba0, size 0x60, virtual false, abstract: false, final false
inline bool Remove(::StringW  fieldName) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.Utils.Classes.Data.SerializedObject.Field>.GetEnumerator, addr 0x181939c00, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>* System_Collections_Generic_IEnumerable_Rewired_Utils_Classes_Data_SerializedObject_Field__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181939c00, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToJsonString, addr 0x181930110, size 0x60, virtual false, abstract: false, final false
inline ::StringW ToJsonString() ;

/// @brief Method ToString, addr 0x181939c70, size 0x2f0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToXmlString, addr 0x181939f60, size 0x270, virtual false, abstract: false, final false
inline ::StringW ToXmlString(bool  writeDocumentTag) ;

/// @brief Method TryGetDeserializedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetDeserializedValue(::StringW  fieldName, ::by_ref<T>  value) ;

/// @brief Method TryGetDeserializedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetDeserializedValue(int32_t  index, ::by_ref<T>  value) ;

/// @brief Method TryGetDeserializedValueByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetDeserializedValueByRef(::StringW  fieldName, ::by_ref<T>  value) ;

/// @brief Method TryGetDeserializedValueByRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetDeserializedValueByRef(int32_t  index, ::by_ref<T>  value) ;

/// @brief Method TryGetOriginalValue, addr 0x18193a1d0, size 0xa0, virtual false, abstract: false, final false
inline bool TryGetOriginalValue(::StringW  fieldName, ::by_ref<::System::Object*>  value) ;

/// @brief Method YTudIHGfTUhWrJilLMhbYgtsqPD, addr 0x18193a270, size 0x60, virtual true, abstract: false, final true
inline void YTudIHGfTUhWrJilLMhbYgtsqPD(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* const& __cordl_internal_get_HzvMZZQMIIGOxIBFQaEcqkvTJGts() const;

constexpr ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*& __cordl_internal_get_HzvMZZQMIIGOxIBFQaEcqkvTJGts() ;

constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>* const& __cordl_internal_get_JlJsXaBeSVKtJAabkqthUtMzkZir() const;

constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*& __cordl_internal_get_JlJsXaBeSVKtJAabkqthUtMzkZir() ;

constexpr ::System::Type* const& __cordl_internal_get_LIJtDXrCtpniwJyypfrOOQsHKHLj() const;

constexpr ::System::Type*& __cordl_internal_get_LIJtDXrCtpniwJyypfrOOQsHKHLj() ;

constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType const& __cordl_internal_get_ULFDgFTlDvNTIvWQlJlytpsgyzSC() const;

constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType& __cordl_internal_get_ULFDgFTlDvNTIvWQlJlytpsgyzSC() ;

constexpr void __cordl_internal_set_HzvMZZQMIIGOxIBFQaEcqkvTJGts(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*  value) ;

constexpr void __cordl_internal_set_JlJsXaBeSVKtJAabkqthUtMzkZir(::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*  value) ;

constexpr void __cordl_internal_set_LIJtDXrCtpniwJyypfrOOQsHKHLj(::System::Type*  value) ;

constexpr void __cordl_internal_set_ULFDgFTlDvNTIvWQlJlytpsgyzSC(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  value) ;

/// @brief Method .ctor, addr 0x18193a390, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18193a370, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18193a450, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x18193a510, size 0x270, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x18193a3f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method cCCdgGEEwCOvgbDkFtVCxVhFXtYp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
static inline bool cCCdgGEEwCOvgbDkFtVCxVhFXtYp(::System::Object*  _cordl_fixed_empty_name_whitespace, ::by_ref<>  _cordl_fixed_empty_name_whitespace_param_1, ::System::Globalization::NumberStyles  _cordl_fixed_empty_name_whitespace_param_2, ::System::Globalization::CultureInfo*  _cordl_fixed_empty_name_whitespace_param_3) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>* getStaticF_IXlXrfnpbJRAxZGzflKOTKgDEgfO() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>* getStaticF_VXeCNNwfoBgzLijxlaEzBuNeRoMkb() ;

/// @brief Method get_Item, addr 0x18193a780, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject_Field get_Item(int32_t  index) ;

/// @brief Method get_count, addr 0x180a0ad50, size 0x5160, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_objectType, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType get_objectType() ;

/// @brief Method get_type, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_type() ;

/// @brief Method get_xmlInfo, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* get_xmlInfo() ;

/// @brief Method hCdBdHAocweorjLTeOobuZnUMwMdA, addr 0x18193a810, size 0x220, virtual true, abstract: false, final true
inline void hCdBdHAocweorjLTeOobuZnUMwMdA(::System::Text::StringBuilder*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>"
constexpr ::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>* i___Rewired__Utils__Interfaces__IAddKeyValue_2___StringW___System__Object__() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>"
constexpr ::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>* i___Rewired__Utils__Interfaces__IAddValue_1___System__Object__() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::IExportToJson"
constexpr ::Rewired::Utils::Interfaces::IExportToJson* i___Rewired__Utils__Interfaces__IExportToJson() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::IExportToXml"
constexpr ::Rewired::Utils::Interfaces::IExportToXml* i___Rewired__Utils__Interfaces__IExportToXml() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>* i___System__Collections__Generic__IEnumerable_1___Rewired__Utils__Classes__Data__SerializedObject_Field_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method nlSaixTdBVnhiedckGmgYKxvAhGR, addr 0x181932f80, size 0x70, virtual true, abstract: false, final true
inline void nlSaixTdBVnhiedckGmgYKxvAhGR(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline void setStaticF_IXlXrfnpbJRAxZGzflKOTKgDEgfO(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>*  value) ;

static inline void setStaticF_VXeCNNwfoBgzLijxlaEzBuNeRoMkb(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>*  value) ;

/// @brief Method set_objectType, addr 0x18193aa30, size 0x40, virtual false, abstract: false, final false
inline void set_objectType(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  value) ;

/// @brief Method set_xmlInfo, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_xmlInfo(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*  value) ;

/// @brief Method tqIQMsqdoBUCJZqfvAOuZBkChCBC, addr 0x181932ff0, size 0x90, virtual true, abstract: false, final true
inline void tqIQMsqdoBUCJZqfvAOuZBkChCBC(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zOYBedUtfdakcplgwWvhtzcbDkDE, addr 0x18193aa70, size 0x8d0, virtual false, abstract: false, final false
static inline bool zOYBedUtfdakcplgwWvhtzcbDkDE(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_2, ::System::Globalization::NumberStyles  _cordl_fixed_empty_name_whitespace_param_3, ::System::Globalization::CultureInfo*  _cordl_fixed_empty_name_whitespace_param_4) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializedObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedObject(SerializedObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedObject(SerializedObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3033};

/// @brief Field JlJsXaBeSVKtJAabkqthUtMzkZir, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*  ___JlJsXaBeSVKtJAabkqthUtMzkZir;

/// @brief Field HzvMZZQMIIGOxIBFQaEcqkvTJGts, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*  ___HzvMZZQMIIGOxIBFQaEcqkvTJGts;

/// @brief Field LIJtDXrCtpniwJyypfrOOQsHKHLj, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___LIJtDXrCtpniwJyypfrOOQsHKHLj;

/// @brief Field ULFDgFTlDvNTIvWQlJlytpsgyzSC, offset: 0x28, size: 0x4, def value: None
 ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  ___ULFDgFTlDvNTIvWQlJlytpsgyzSC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject, ___JlJsXaBeSVKtJAabkqthUtMzkZir) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject, ___HzvMZZQMIIGOxIBFQaEcqkvTJGts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject, ___LIJtDXrCtpniwJyypfrOOQsHKHLj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializedObject, ___ULFDgFTlDvNTIvWQlJlytpsgyzSC) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializedObject) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
