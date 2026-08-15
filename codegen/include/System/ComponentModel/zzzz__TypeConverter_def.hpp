#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeConverter)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class TypeConverter_SimplePropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter_StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Array;
}
namespace System {
class Attribute;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class TypeConverter_SimplePropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter_StandardValuesCollection;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::TypeConverter*);
MARK_REF_T(::System::ComponentModel::TypeConverter_SimplePropertyDescriptor*);
MARK_REF_T(::System::ComponentModel::TypeConverter_StandardValuesCollection*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeConverter*, "System.ComponentModel", "TypeConverter");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeConverter_SimplePropertyDescriptor*, "System.ComponentModel", "TypeConverter/SimplePropertyDescriptor");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeConverter_StandardValuesCollection*, "System.ComponentModel", "TypeConverter/StandardValuesCollection");
// Dependencies System.ComponentModel.PropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeConverter/SimplePropertyDescriptor
class CORDL_TYPE TypeConverter_SimplePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
// Declarations
 __declspec(property(get=get_ComponentType)) ::System::Type*  ComponentType;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_PropertyType)) ::System::Type*  PropertyType;

/// @brief Field componentType, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentType, put=__cordl_internal_set_componentType)) ::System::Type*  componentType;

/// @brief Field propertyType, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyType, put=__cordl_internal_set_propertyType)) ::System::Type*  propertyType;

/// @brief Method CanResetValue, addr 0x181e1bbd0, size 0x100, virtual true, abstract: false, final false
inline bool CanResetValue(::System::Object*  component) ;

static inline ::System::ComponentModel::TypeConverter_SimplePropertyDescriptor* New_ctor(::System::Type*  componentType, ::StringW  name, ::System::Type*  propertyType) ;

static inline ::System::ComponentModel::TypeConverter_SimplePropertyDescriptor* New_ctor(::System::Type*  componentType, ::StringW  name, ::System::Type*  propertyType, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method ResetValue, addr 0x181e1bcd0, size 0xd0, virtual true, abstract: false, final false
inline void ResetValue(::System::Object*  component) ;

/// @brief Method ShouldSerializeValue, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool ShouldSerializeValue(::System::Object*  component) ;

constexpr ::System::Type* const& __cordl_internal_get_componentType() const;

constexpr ::System::Type*& __cordl_internal_get_componentType() ;

constexpr ::System::Type* const& __cordl_internal_get_propertyType() const;

constexpr ::System::Type*& __cordl_internal_get_propertyType() ;

constexpr void __cordl_internal_set_componentType(::System::Type*  value) ;

constexpr void __cordl_internal_set_propertyType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x181e1be10, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  componentType, ::StringW  name, ::System::Type*  propertyType) ;

/// @brief Method .ctor, addr 0x181e1bda0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  componentType, ::StringW  name, ::System::Type*  propertyType, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method get_ComponentType, addr 0x1802e5800, size 0x10, virtual true, abstract: false, final false
inline ::System::Type* get_ComponentType() ;

/// @brief Method get_IsReadOnly, addr 0x181e1be90, size 0x60, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_PropertyType, addr 0x180312ea0, size 0x10, virtual true, abstract: false, final false
inline ::System::Type* get_PropertyType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeConverter_SimplePropertyDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter_SimplePropertyDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeConverter_SimplePropertyDescriptor(TypeConverter_SimplePropertyDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter_SimplePropertyDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeConverter_SimplePropertyDescriptor(TypeConverter_SimplePropertyDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11775};

/// @brief Field componentType, offset: 0x88, size: 0x8, def value: None
 ::System::Type*  ___componentType;

/// @brief Field propertyType, offset: 0x90, size: 0x8, def value: None
 ::System::Type*  ___propertyType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeConverter_SimplePropertyDescriptor, ___componentType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeConverter_SimplePropertyDescriptor, ___propertyType) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeConverter_SimplePropertyDescriptor) == 0x98, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeConverter/StandardValuesCollection
class CORDL_TYPE TypeConverter_StandardValuesCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::System::Object*  Item[];

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Field valueArray, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueArray, put=__cordl_internal_set_valueArray)) ::System::Array*  valueArray;

/// @brief Field values, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::System::Collections::ICollection*  values;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method CopyTo, addr 0x181e1b8c0, size 0x30, virtual false, abstract: false, final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x180a130b0, size 0x200, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* New_ctor(::System::Collections::ICollection*  values) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x181e1b8c0, size 0x30, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_Count, addr 0x181e1bef0, size 0x30, virtual true, abstract: false, final true
inline int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x180a130b0, size 0x200, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Array* const& __cordl_internal_get_valueArray() const;

constexpr ::System::Array*& __cordl_internal_get_valueArray() ;

constexpr ::System::Collections::ICollection* const& __cordl_internal_get_values() const;

constexpr ::System::Collections::ICollection*& __cordl_internal_get_values() ;

constexpr void __cordl_internal_set_valueArray(::System::Array*  value) ;

constexpr void __cordl_internal_set_values(::System::Collections::ICollection*  value) ;

/// @brief Method .ctor, addr 0x181e1bf20, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::ICollection*  values) ;

/// @brief Method get_Count, addr 0x181e1bef0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x181e1bfb0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeConverter_StandardValuesCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter_StandardValuesCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeConverter_StandardValuesCollection(TypeConverter_StandardValuesCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter_StandardValuesCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeConverter_StandardValuesCollection(TypeConverter_StandardValuesCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11776};

/// @brief Field values, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::ICollection*  ___values;

/// @brief Field valueArray, offset: 0x18, size: 0x8, def value: None
 ::System::Array*  ___valueArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeConverter_StandardValuesCollection, ___values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeConverter_StandardValuesCollection, ___valueArray) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeConverter_StandardValuesCollection) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeConverter
class CORDL_TYPE TypeConverter : public ::System::Object {
public:
// Declarations
using SimplePropertyDescriptor = ::System::ComponentModel::TypeConverter_SimplePropertyDescriptor;

using StandardValuesCollection = ::System::ComponentModel::TypeConverter_StandardValuesCollection;

/// @brief Field useCompatibleTypeConversion, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useCompatibleTypeConversion, put=setStaticF_useCompatibleTypeConversion)) bool  useCompatibleTypeConversion;

/// @brief Method CanConvertFrom, addr 0x181e1c710, size 0x30, virtual true, abstract: false, final false
inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  sourceType) ;

/// @brief Method CanConvertFrom, addr 0x181e1c740, size 0x20, virtual false, abstract: false, final false
inline bool CanConvertFrom(::System::Type*  sourceType) ;

/// @brief Method CanConvertTo, addr 0x181e1c780, size 0x30, virtual true, abstract: false, final false
inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  destinationType) ;

/// @brief Method CanConvertTo, addr 0x181e1c760, size 0x20, virtual false, abstract: false, final false
inline bool CanConvertTo(::System::Type*  destinationType) ;

/// @brief Method ConvertFrom, addr 0x181e1c940, size 0x40, virtual true, abstract: false, final false
inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method ConvertFrom, addr 0x181e1c8f0, size 0x50, virtual false, abstract: false, final false
inline ::System::Object* ConvertFrom(::System::Object*  value) ;

/// @brief Method ConvertFromInvariantString, addr 0x181e1c800, size 0x60, virtual false, abstract: false, final false
inline ::System::Object* ConvertFromInvariantString(::System::ComponentModel::ITypeDescriptorContext*  context, ::StringW  text) ;

/// @brief Method ConvertFromInvariantString, addr 0x181e1c7b0, size 0x50, virtual false, abstract: false, final false
inline ::System::Object* ConvertFromInvariantString(::StringW  text) ;

/// @brief Method ConvertFromString, addr 0x181dc3140, size 0x20, virtual false, abstract: false, final false
inline ::System::Object* ConvertFromString(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::StringW  text) ;

/// @brief Method ConvertFromString, addr 0x181e1c860, size 0x60, virtual false, abstract: false, final false
inline ::System::Object* ConvertFromString(::System::ComponentModel::ITypeDescriptorContext*  context, ::StringW  text) ;

/// @brief Method ConvertFromString, addr 0x181e1c8c0, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* ConvertFromString(::StringW  text) ;

/// @brief Method ConvertTo, addr 0x181e1cc10, size 0x180, virtual true, abstract: false, final false
inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value, ::System::Type*  destinationType) ;

/// @brief Method ConvertTo, addr 0x181e1cbe0, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* ConvertTo(::System::Object*  value, ::System::Type*  destinationType) ;

/// @brief Method ConvertToInvariantString, addr 0x181e1c9c0, size 0x50, virtual false, abstract: false, final false
inline ::StringW ConvertToInvariantString(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value) ;

/// @brief Method ConvertToInvariantString, addr 0x181e1c980, size 0x40, virtual false, abstract: false, final false
inline ::StringW ConvertToInvariantString(::System::Object*  value) ;

/// @brief Method ConvertToString, addr 0x181e1caa0, size 0xa0, virtual false, abstract: false, final false
inline ::StringW ConvertToString(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method ConvertToString, addr 0x181e1cb40, size 0xa0, virtual false, abstract: false, final false
inline ::StringW ConvertToString(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value) ;

/// @brief Method ConvertToString, addr 0x181e1ca10, size 0x90, virtual false, abstract: false, final false
inline ::StringW ConvertToString(::System::Object*  value) ;

/// @brief Method CreateInstance, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Collections::IDictionary*  propertyValues) ;

/// @brief Method CreateInstance, addr 0x181e1cd90, size 0x20, virtual false, abstract: false, final false
inline ::System::Object* CreateInstance(::System::Collections::IDictionary*  propertyValues) ;

/// @brief Method GetConvertFromException, addr 0x181e1cdb0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Exception* GetConvertFromException(::System::Object*  value) ;

/// @brief Method GetConvertToException, addr 0x181e1ce80, size 0xf0, virtual false, abstract: false, final false
inline ::System::Exception* GetConvertToException(::System::Object*  value, ::System::Type*  destinationType) ;

/// @brief Method GetCreateInstanceSupported, addr 0x181190890, size 0x330, virtual false, abstract: false, final false
inline bool GetCreateInstanceSupported() ;

/// @brief Method GetCreateInstanceSupported, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetProperties, addr 0x181e1d020, size 0xa0, virtual false, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value) ;

/// @brief Method GetProperties, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method GetProperties, addr 0x181e1cf90, size 0x90, virtual false, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object*  value) ;

/// @brief Method GetPropertiesSupported, addr 0x181e1cf70, size 0x20, virtual false, abstract: false, final false
inline bool GetPropertiesSupported() ;

/// @brief Method GetPropertiesSupported, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValues, addr 0x181e1d0e0, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::ICollection* GetStandardValues() ;

/// @brief Method GetStandardValues, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesExclusive, addr 0x181808a70, size 0x20, virtual false, abstract: false, final false
inline bool GetStandardValuesExclusive() ;

/// @brief Method GetStandardValuesExclusive, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesSupported, addr 0x181e1d0c0, size 0x20, virtual false, abstract: false, final false
inline bool GetStandardValuesSupported() ;

/// @brief Method GetStandardValuesSupported, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method IsValid, addr 0x181e1d120, size 0xc0, virtual true, abstract: false, final false
inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value) ;

/// @brief Method IsValid, addr 0x181e1d100, size 0x20, virtual false, abstract: false, final false
inline bool IsValid(::System::Object*  value) ;

static inline ::System::ComponentModel::TypeConverter* New_ctor() ;

/// @brief Method SortProperties, addr 0x181e1d1e0, size 0x30, virtual false, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* SortProperties(::System::ComponentModel::PropertyDescriptorCollection*  props, ::ArrayW<::StringW>  names) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_useCompatibleTypeConversion() ;

/// @brief Method get_UseCompatibleTypeConversion, addr 0x181e1d210, size 0x20, virtual false, abstract: false, final false
static inline bool get_UseCompatibleTypeConversion() ;

static inline void setStaticF_useCompatibleTypeConversion(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeConverter(TypeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeConverter(TypeConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11777};

/// @brief Field s_UseCompatibleTypeConverterBehavior offset 0xffffffff size 0x8
static constexpr ::ConstString  s_UseCompatibleTypeConverterBehavior{u"UseCompatibleTypeConverterBehavior"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::TypeConverter) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
