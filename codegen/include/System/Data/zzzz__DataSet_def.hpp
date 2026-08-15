#pragma once
// IWYU pragma private; include "System/Data/DataSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "System/Data/zzzz__SerializationFormat_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataSet)
namespace System::ComponentModel {
class ISite;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Data {
class DataRelationCollection;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
class DataRowCreatedEventHandler;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataSetClearEventhandler;
}
namespace System::Data {
class DataTableCollection;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManager;
}
namespace System::Data {
class MergeFailedEventArgs;
}
namespace System::Data {
class MergeFailedEventHandler;
}
namespace System::Data {
struct MissingSchemaAction;
}
namespace System::Data {
class PropertyCollection;
}
namespace System::Data {
struct SchemaFormat;
}
namespace System::Data {
struct SchemaSerializationMode;
}
namespace System::Data {
struct SerializationFormat;
}
namespace System::Data {
struct XmlReadMode;
}
namespace System::Data {
struct XmlWriteMode;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataSet;
}
// Write type traits
MARK_REF_T(::System::Data::DataSet*);
DEFINE_IL2CPP_CLASS(::System::Data::DataSet*, "System.Data", "DataSet");
// Dependencies System.ComponentModel.MarshalByValueComponent, System.Data.SerializationFormat
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataSet
class CORDL_TYPE DataSet : public ::System::ComponentModel::MarshalByValueComponent {
public:
// Declarations
 __declspec(property(get=get_CaseSensitive, put=set_CaseSensitive)) bool  CaseSensitive;

/// @brief Field ClearFunctionCalled, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClearFunctionCalled, put=__cordl_internal_set_ClearFunctionCalled)) ::System::Data::DataSetClearEventhandler*  ClearFunctionCalled;

/// @brief Field DataRowCreated, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataRowCreated, put=__cordl_internal_set_DataRowCreated)) ::System::Data::DataRowCreatedEventHandler*  DataRowCreated;

 __declspec(property(get=get_DataSetName, put=set_DataSetName)) ::StringW  DataSetName;

 __declspec(property(get=get_EnforceConstraints, put=set_EnforceConstraints)) bool  EnforceConstraints;

 __declspec(property(get=get_ExtendedProperties)) ::System::Data::PropertyCollection*  ExtendedProperties;

 __declspec(property(get=get_Locale, put=set_Locale)) ::System::Globalization::CultureInfo*  Locale;

 __declspec(property(get=get_MainTableName, put=set_MainTableName)) ::StringW  MainTableName;

/// @brief Field MergeFailed, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_MergeFailed, put=__cordl_internal_set_MergeFailed)) ::System::Data::MergeFailedEventHandler*  MergeFailed;

 __declspec(property(get=get_Namespace, put=set_Namespace)) ::StringW  Namespace;

 __declspec(property(get=get_ObjectID)) int32_t  ObjectID;

 __declspec(property(get=get_Prefix, put=set_Prefix)) ::StringW  Prefix;

/// @brief Field PropertyChanging, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropertyChanging, put=__cordl_internal_set_PropertyChanging)) ::System::ComponentModel::PropertyChangedEventHandler*  PropertyChanging;

 __declspec(property(get=get_Relations)) ::System::Data::DataRelationCollection*  Relations;

 __declspec(property(get=get_RemotingFormat, put=set_RemotingFormat)) ::System::Data::SerializationFormat  RemotingFormat;

 __declspec(property(get=get_SchemaSerializationMode)) ::System::Data::SchemaSerializationMode  SchemaSerializationMode;

 __declspec(property(get=get_Site)) ::System::ComponentModel::ISite*  Site;

 __declspec(property(get=get_Tables)) ::System::Data::DataTableCollection*  Tables;

/// @brief Field _caseSensitive, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__caseSensitive, put=__cordl_internal_set__caseSensitive)) bool  _caseSensitive;

/// @brief Field _culture, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__culture, put=__cordl_internal_set__culture)) ::System::Globalization::CultureInfo*  _culture;

/// @brief Field _cultureUserSet, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__cultureUserSet, put=__cordl_internal_set__cultureUserSet)) bool  _cultureUserSet;

/// @brief Field _dataSetName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataSetName, put=__cordl_internal_set__dataSetName)) ::StringW  _dataSetName;

/// @brief Field _datasetPrefix, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__datasetPrefix, put=__cordl_internal_set__datasetPrefix)) ::StringW  _datasetPrefix;

/// @brief Field _defaultViewManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultViewManager, put=__cordl_internal_set__defaultViewManager)) ::System::Data::DataViewManager*  _defaultViewManager;

/// @brief Field _defaultViewManagerLock, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultViewManagerLock, put=__cordl_internal_set__defaultViewManagerLock)) ::System::Object*  _defaultViewManagerLock;

/// @brief Field _enforceConstraints, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__enforceConstraints, put=__cordl_internal_set__enforceConstraints)) bool  _enforceConstraints;

/// @brief Field _extendedProperties, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__extendedProperties, put=__cordl_internal_set__extendedProperties)) ::System::Data::PropertyCollection*  _extendedProperties;

/// @brief Field _fEnableCascading, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get__fEnableCascading, put=__cordl_internal_set__fEnableCascading)) bool  _fEnableCascading;

/// @brief Field _fInLoadDiffgram, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get__fInLoadDiffgram, put=__cordl_internal_set__fInLoadDiffgram)) bool  _fInLoadDiffgram;

/// @brief Field _fInReadXml, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__fInReadXml, put=__cordl_internal_set__fInReadXml)) bool  _fInReadXml;

/// @brief Field _fInitInProgress, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__fInitInProgress, put=__cordl_internal_set__fInitInProgress)) bool  _fInitInProgress;

/// @brief Field _fIsSchemaLoading, offset 0x6e, size 0x1 
 __declspec(property(get=__cordl_internal_get__fIsSchemaLoading, put=__cordl_internal_set__fIsSchemaLoading)) bool  _fIsSchemaLoading;

/// @brief Field _fTopLevelTable, offset 0x6b, size 0x1 
 __declspec(property(get=__cordl_internal_get__fTopLevelTable, put=__cordl_internal_set__fTopLevelTable)) bool  _fTopLevelTable;

/// @brief Field _mainTableName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainTableName, put=__cordl_internal_set__mainTableName)) ::StringW  _mainTableName;

/// @brief Field _namespaceURI, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__namespaceURI, put=__cordl_internal_set__namespaceURI)) ::StringW  _namespaceURI;

/// @brief Field _objectID, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__objectID, put=__cordl_internal_set__objectID)) int32_t  _objectID;

/// @brief Field _relationCollection, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__relationCollection, put=__cordl_internal_set__relationCollection)) ::System::Data::DataRelationCollection*  _relationCollection;

/// @brief Field _remotingFormat, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__remotingFormat, put=__cordl_internal_set__remotingFormat)) ::System::Data::SerializationFormat  _remotingFormat;

/// @brief Field _tableCollection, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tableCollection, put=__cordl_internal_set__tableCollection)) ::System::Data::DataTableCollection*  _tableCollection;

/// @brief Field _udtIsWrapped, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get__udtIsWrapped, put=__cordl_internal_set__udtIsWrapped)) bool  _udtIsWrapped;

/// @brief Field _useDataSetSchemaOnly, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__useDataSetSchemaOnly, put=__cordl_internal_set__useDataSetSchemaOnly)) bool  _useDataSetSchemaOnly;

/// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_objectTypeCount, put=setStaticF_s_objectTypeCount)) int32_t  s_objectTypeCount;

/// @brief Field s_schemaTypeForWSDL, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_schemaTypeForWSDL, put=setStaticF_s_schemaTypeForWSDL)) ::System::Xml::Schema::XmlSchemaComplexType*  s_schemaTypeForWSDL;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr operator  ::System::Xml::Serialization::IXmlSerializable*() noexcept;

/// @brief Method Clear, addr 0x181b6d290, size 0x150, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x181b6d3e0, size 0xc10, virtual true, abstract: false, final false
inline ::System::Data::DataSet* Clone() ;

/// @brief Method DeserializeDataSet, addr 0x181b6e700, size 0x180, virtual false, abstract: false, final false
inline void DeserializeDataSet(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context, ::System::Data::SerializationFormat  remotingFormat, ::System::Data::SchemaSerializationMode  schemaSerializationMode) ;

/// @brief Method DeserializeDataSetData, addr 0x181b6dff0, size 0x160, virtual false, abstract: false, final false
inline void DeserializeDataSetData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context, ::System::Data::SerializationFormat  remotingFormat) ;

/// @brief Method DeserializeDataSetProperties, addr 0x181b6e150, size 0x200, virtual false, abstract: false, final false
inline void DeserializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method DeserializeDataSetSchema, addr 0x181b6e350, size 0x3b0, virtual false, abstract: false, final false
inline void DeserializeDataSetSchema(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context, ::System::Data::SerializationFormat  remotingFormat, ::System::Data::SchemaSerializationMode  schemaSerializationMode) ;

/// @brief Method DeserializeRelations, addr 0x181b6e880, size 0x4a0, virtual false, abstract: false, final false
inline void DeserializeRelations(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method EnableConstraints, addr 0x181b6ed20, size 0x4b0, virtual false, abstract: false, final false
inline void EnableConstraints() ;

/// @brief Method EstimatedXmlStringSize, addr 0x181b6f1d0, size 0x140, virtual false, abstract: false, final false
inline int32_t EstimatedXmlStringSize() ;

/// @brief Method FailedEnableConstraints, addr 0x181b6f310, size 0x20, virtual false, abstract: false, final false
inline void FailedEnableConstraints() ;

/// @brief Method FindTable, addr 0x181b6f330, size 0x100, virtual false, abstract: false, final false
inline ::System::Data::DataTable* FindTable(::System::Data::DataTable*  baseTable, ::ArrayW<::System::ComponentModel::PropertyDescriptor*>  props, int32_t  propStart) ;

/// @brief Method GetDataSetSchema, addr 0x181b6f430, size 0x230, virtual false, abstract: false, final false
static inline ::System::Xml::Schema::XmlSchemaComplexType* GetDataSetSchema(::System::Xml::Schema::XmlSchemaSet*  schemaSet) ;

/// @brief Method GetObjectData, addr 0x181b6f660, size 0x30, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetRemotingDiffGram, addr 0x181b6f690, size 0xd0, virtual false, abstract: false, final false
inline ::StringW GetRemotingDiffGram(::System::Data::DataTable*  table) ;

/// @brief Method GetXmlSchemaForRemoting, addr 0x181b6f760, size 0x140, virtual false, abstract: false, final false
inline ::StringW GetXmlSchemaForRemoting(::System::Data::DataTable*  table) ;

/// @brief Method InferSchema, addr 0x181b6f8a0, size 0x250, virtual false, abstract: false, final false
inline void InferSchema(::System::Xml::XmlDocument*  xdoc, ::ArrayW<::StringW>  excludedNamespaces, ::System::Data::XmlReadMode  mode) ;

/// @brief Method InitializeDerivedDataSet, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void InitializeDerivedDataSet() ;

/// @brief Method IsEmpty, addr 0x181b6faf0, size 0x150, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method Merge, addr 0x181b6fc40, size 0x100, virtual false, abstract: false, final false
inline void Merge(::System::Data::DataSet*  dataSet) ;

/// @brief Method Merge, addr 0x181b6fd40, size 0x1a0, virtual false, abstract: false, final false
inline void Merge(::System::Data::DataSet*  dataSet, bool  preserveChanges, ::System::Data::MissingSchemaAction  missingSchemaAction) ;

/// @brief Method MoveToElement, addr 0x181b5d3d0, size 0xe0, virtual false, abstract: false, final false
inline bool MoveToElement(::System::Xml::XmlReader*  reader, int32_t  depth) ;

/// @brief Method MoveToElement, addr 0x181b6fee0, size 0x90, virtual false, abstract: false, final false
static inline void MoveToElement(::System::Xml::XmlReader*  reader) ;

static inline ::System::Data::DataSet* New_ctor() ;

static inline ::System::Data::DataSet* New_ctor(::StringW  dataSetName) ;

static inline ::System::Data::DataSet* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Data::DataSet* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context, bool  ConstructSchema) ;

/// @brief Method OnClearFunctionCalled, addr 0x181b6ff70, size 0x30, virtual false, abstract: false, final false
inline void OnClearFunctionCalled(::System::Data::DataTable*  table) ;

/// @brief Method OnDataRowCreated, addr 0x181b6ffa0, size 0x30, virtual false, abstract: false, final false
inline void OnDataRowCreated(::System::Data::DataRow*  row) ;

/// @brief Method OnMergeFailed, addr 0x181b6ffd0, size 0x50, virtual false, abstract: false, final false
inline void OnMergeFailed(::System::Data::MergeFailedEventArgs*  mfevent) ;

/// @brief Method OnPropertyChanging, addr 0x181b70020, size 0x30, virtual true, abstract: false, final false
inline void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs*  pcevent) ;

/// @brief Method OnRemoveRelation, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRemoveRelation(::System::Data::DataRelation*  relation) ;

/// @brief Method OnRemoveRelationHack, addr 0x181b70050, size 0x20, virtual false, abstract: false, final false
inline void OnRemoveRelationHack(::System::Data::DataRelation*  relation) ;

/// @brief Method OnRemoveTable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRemoveTable(::System::Data::DataTable*  table) ;

/// @brief Method OnRemovedTable, addr 0x181b70070, size 0x20, virtual false, abstract: false, final false
inline void OnRemovedTable(::System::Data::DataTable*  table) ;

/// @brief Method RaiseMergeFailed, addr 0x181b70090, size 0xc0, virtual false, abstract: false, final false
inline void RaiseMergeFailed(::System::Data::DataTable*  table, ::StringW  conflict, ::System::Data::MissingSchemaAction  missingSchemaAction) ;

/// @brief Method RaisePropertyChanging, addr 0x181b70150, size 0x60, virtual false, abstract: false, final false
inline void RaisePropertyChanging(::StringW  name) ;

/// @brief Method ReadEndElement, addr 0x181b5ea60, size 0xd0, virtual false, abstract: false, final false
inline void ReadEndElement(::System::Xml::XmlReader*  reader) ;

/// @brief Method ReadXDRSchema, addr 0x181b701b0, size 0x120, virtual false, abstract: false, final false
inline void ReadXDRSchema(::System::Xml::XmlReader*  reader) ;

/// @brief Method ReadXSDSchema, addr 0x181b702d0, size 0x260, virtual false, abstract: false, final false
inline void ReadXSDSchema(::System::Xml::XmlReader*  reader, bool  denyResolving) ;

/// @brief Method ReadXml, addr 0x181b739c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader*  reader) ;

/// @brief Method ReadXml, addr 0x181b72a20, size 0xfa0, virtual false, abstract: false, final false
inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader*  reader, bool  denyResolving) ;

/// @brief Method ReadXml, addr 0x181b71de0, size 0x20, virtual false, abstract: false, final false
inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader*  reader, ::System::Data::XmlReadMode  mode) ;

/// @brief Method ReadXml, addr 0x181b71e00, size 0xc20, virtual false, abstract: false, final false
inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader*  reader, ::System::Data::XmlReadMode  mode, bool  denyResolving) ;

/// @brief Method ReadXmlDiffgram, addr 0x181b70530, size 0xde0, virtual false, abstract: false, final false
inline void ReadXmlDiffgram(::System::Xml::XmlReader*  reader) ;

/// @brief Method ReadXmlSchema, addr 0x181b71310, size 0x10, virtual false, abstract: false, final false
inline void ReadXmlSchema(::System::Xml::XmlReader*  reader) ;

/// @brief Method ReadXmlSchema, addr 0x181b71320, size 0x810, virtual false, abstract: false, final false
inline void ReadXmlSchema(::System::Xml::XmlReader*  reader, bool  denyResolving) ;

/// @brief Method ReadXmlSerializable, addr 0x181b71b30, size 0x2b0, virtual true, abstract: false, final false
inline void ReadXmlSerializable(::System::Xml::XmlReader*  reader) ;

/// @brief Method Reset, addr 0x181b739d0, size 0x1d0, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method RestoreEnforceConstraints, addr 0x1803de5b0, size 0x10, virtual false, abstract: false, final false
inline void RestoreEnforceConstraints(bool  value) ;

/// @brief Method SerializeDataSet, addr 0x181b73cb0, size 0x6d0, virtual false, abstract: false, final false
inline void SerializeDataSet(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context, ::System::Data::SerializationFormat  remotingFormat) ;

/// @brief Method SerializeDataSetProperties, addr 0x181b73ba0, size 0x110, virtual false, abstract: false, final false
inline void SerializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method SerializeRelations, addr 0x181b74380, size 0x3d0, virtual false, abstract: false, final false
inline void SerializeRelations(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method SetLocaleValue, addr 0x181b74750, size 0x5d0, virtual false, abstract: false, final false
inline void SetLocaleValue(::System::Globalization::CultureInfo*  value, bool  userSet) ;

/// @brief Method ShouldSerializeLocale, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool ShouldSerializeLocale() ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x181b74d20, size 0x120, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema() ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x181b74e40, size 0x120, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader*  reader) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x181b74f60, size 0x50, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter*  writer) ;

/// @brief Method TopLevelTables, addr 0x181b74fb0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::System::Data::DataTable*> TopLevelTables() ;

/// @brief Method TopLevelTables, addr 0x181b74fc0, size 0x1e0, virtual false, abstract: false, final false
inline ::ArrayW<::System::Data::DataTable*> TopLevelTables(bool  forSchema) ;

/// @brief Method ValidateCaseConstraint, addr 0x181b751a0, size 0x320, virtual false, abstract: false, final false
inline bool ValidateCaseConstraint() ;

/// @brief Method ValidateLocaleConstraint, addr 0x181b754c0, size 0x380, virtual false, abstract: false, final false
inline bool ValidateLocaleConstraint() ;

/// @brief Method WriteXml, addr 0x181b759f0, size 0x180, virtual false, abstract: false, final false
inline void WriteXml(::System::Xml::XmlWriter*  writer, ::System::Data::XmlWriteMode  mode) ;

/// @brief Method WriteXmlSchema, addr 0x181b75840, size 0x1b0, virtual false, abstract: false, final false
inline void WriteXmlSchema(::System::Xml::XmlWriter*  writer, ::System::Data::SchemaFormat  schemaFormat, ::System::Converter_2<::System::Type*,::StringW>*  multipleTargetConverter) ;

constexpr ::System::Data::DataSetClearEventhandler* const& __cordl_internal_get_ClearFunctionCalled() const;

constexpr ::System::Data::DataSetClearEventhandler*& __cordl_internal_get_ClearFunctionCalled() ;

constexpr ::System::Data::DataRowCreatedEventHandler* const& __cordl_internal_get_DataRowCreated() const;

constexpr ::System::Data::DataRowCreatedEventHandler*& __cordl_internal_get_DataRowCreated() ;

constexpr ::System::Data::MergeFailedEventHandler* const& __cordl_internal_get_MergeFailed() const;

constexpr ::System::Data::MergeFailedEventHandler*& __cordl_internal_get_MergeFailed() ;

constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& __cordl_internal_get_PropertyChanging() const;

constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanging() ;

constexpr bool const& __cordl_internal_get__caseSensitive() const;

constexpr bool& __cordl_internal_get__caseSensitive() ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture() ;

constexpr bool const& __cordl_internal_get__cultureUserSet() const;

constexpr bool& __cordl_internal_get__cultureUserSet() ;

constexpr ::StringW const& __cordl_internal_get__dataSetName() const;

constexpr ::StringW& __cordl_internal_get__dataSetName() ;

constexpr ::StringW const& __cordl_internal_get__datasetPrefix() const;

constexpr ::StringW& __cordl_internal_get__datasetPrefix() ;

constexpr ::System::Data::DataViewManager* const& __cordl_internal_get__defaultViewManager() const;

constexpr ::System::Data::DataViewManager*& __cordl_internal_get__defaultViewManager() ;

constexpr ::System::Object* const& __cordl_internal_get__defaultViewManagerLock() const;

constexpr ::System::Object*& __cordl_internal_get__defaultViewManagerLock() ;

constexpr bool const& __cordl_internal_get__enforceConstraints() const;

constexpr bool& __cordl_internal_get__enforceConstraints() ;

constexpr ::System::Data::PropertyCollection* const& __cordl_internal_get__extendedProperties() const;

constexpr ::System::Data::PropertyCollection*& __cordl_internal_get__extendedProperties() ;

constexpr bool const& __cordl_internal_get__fEnableCascading() const;

constexpr bool& __cordl_internal_get__fEnableCascading() ;

constexpr bool const& __cordl_internal_get__fInLoadDiffgram() const;

constexpr bool& __cordl_internal_get__fInLoadDiffgram() ;

constexpr bool const& __cordl_internal_get__fInReadXml() const;

constexpr bool& __cordl_internal_get__fInReadXml() ;

constexpr bool const& __cordl_internal_get__fInitInProgress() const;

constexpr bool& __cordl_internal_get__fInitInProgress() ;

constexpr bool const& __cordl_internal_get__fIsSchemaLoading() const;

constexpr bool& __cordl_internal_get__fIsSchemaLoading() ;

constexpr bool const& __cordl_internal_get__fTopLevelTable() const;

constexpr bool& __cordl_internal_get__fTopLevelTable() ;

constexpr ::StringW const& __cordl_internal_get__mainTableName() const;

constexpr ::StringW& __cordl_internal_get__mainTableName() ;

constexpr ::StringW const& __cordl_internal_get__namespaceURI() const;

constexpr ::StringW& __cordl_internal_get__namespaceURI() ;

constexpr int32_t const& __cordl_internal_get__objectID() const;

constexpr int32_t& __cordl_internal_get__objectID() ;

constexpr ::System::Data::DataRelationCollection* const& __cordl_internal_get__relationCollection() const;

constexpr ::System::Data::DataRelationCollection*& __cordl_internal_get__relationCollection() ;

constexpr ::System::Data::SerializationFormat const& __cordl_internal_get__remotingFormat() const;

constexpr ::System::Data::SerializationFormat& __cordl_internal_get__remotingFormat() ;

constexpr ::System::Data::DataTableCollection* const& __cordl_internal_get__tableCollection() const;

constexpr ::System::Data::DataTableCollection*& __cordl_internal_get__tableCollection() ;

constexpr bool const& __cordl_internal_get__udtIsWrapped() const;

constexpr bool& __cordl_internal_get__udtIsWrapped() ;

constexpr bool const& __cordl_internal_get__useDataSetSchemaOnly() const;

constexpr bool& __cordl_internal_get__useDataSetSchemaOnly() ;

constexpr void __cordl_internal_set_ClearFunctionCalled(::System::Data::DataSetClearEventhandler*  value) ;

constexpr void __cordl_internal_set_DataRowCreated(::System::Data::DataRowCreatedEventHandler*  value) ;

constexpr void __cordl_internal_set_MergeFailed(::System::Data::MergeFailedEventHandler*  value) ;

constexpr void __cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__caseSensitive(bool  value) ;

constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__cultureUserSet(bool  value) ;

constexpr void __cordl_internal_set__dataSetName(::StringW  value) ;

constexpr void __cordl_internal_set__datasetPrefix(::StringW  value) ;

constexpr void __cordl_internal_set__defaultViewManager(::System::Data::DataViewManager*  value) ;

constexpr void __cordl_internal_set__defaultViewManagerLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__enforceConstraints(bool  value) ;

constexpr void __cordl_internal_set__extendedProperties(::System::Data::PropertyCollection*  value) ;

constexpr void __cordl_internal_set__fEnableCascading(bool  value) ;

constexpr void __cordl_internal_set__fInLoadDiffgram(bool  value) ;

constexpr void __cordl_internal_set__fInReadXml(bool  value) ;

constexpr void __cordl_internal_set__fInitInProgress(bool  value) ;

constexpr void __cordl_internal_set__fIsSchemaLoading(bool  value) ;

constexpr void __cordl_internal_set__fTopLevelTable(bool  value) ;

constexpr void __cordl_internal_set__mainTableName(::StringW  value) ;

constexpr void __cordl_internal_set__namespaceURI(::StringW  value) ;

constexpr void __cordl_internal_set__objectID(int32_t  value) ;

constexpr void __cordl_internal_set__relationCollection(::System::Data::DataRelationCollection*  value) ;

constexpr void __cordl_internal_set__remotingFormat(::System::Data::SerializationFormat  value) ;

constexpr void __cordl_internal_set__tableCollection(::System::Data::DataTableCollection*  value) ;

constexpr void __cordl_internal_set__udtIsWrapped(bool  value) ;

constexpr void __cordl_internal_set__useDataSetSchemaOnly(bool  value) ;

/// @brief Method .ctor, addr 0x181b75b70, size 0x190, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181b75ff0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  dataSetName) ;

/// @brief Method .ctor, addr 0x181b75fc0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x181b75d00, size 0x2c0, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context, bool  ConstructSchema) ;

static inline int32_t getStaticF_s_objectTypeCount() ;

static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_s_schemaTypeForWSDL() ;

/// @brief Method get_CaseSensitive, addr 0x18165d5a0, size 0x10, virtual false, abstract: false, final false
inline bool get_CaseSensitive() ;

/// @brief Method get_DataSetName, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_DataSetName() ;

/// @brief Method get_EnforceConstraints, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_EnforceConstraints() ;

/// @brief Method get_ExtendedProperties, addr 0x181b76020, size 0x50, virtual false, abstract: false, final false
inline ::System::Data::PropertyCollection* get_ExtendedProperties() ;

/// @brief Method get_Locale, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_Locale() ;

/// @brief Method get_MainTableName, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_MainTableName() ;

/// @brief Method get_Namespace, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Namespace() ;

/// @brief Method get_ObjectID, addr 0x180310fd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ObjectID() ;

/// @brief Method get_Prefix, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_Relations, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Data::DataRelationCollection* get_Relations() ;

/// @brief Method get_RemotingFormat, addr 0x1803becf0, size 0x10, virtual false, abstract: false, final false
inline ::System::Data::SerializationFormat get_RemotingFormat() ;

/// @brief Method get_SchemaSerializationMode, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::System::Data::SchemaSerializationMode get_SchemaSerializationMode() ;

/// @brief Method get_Site, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final false
inline ::System::ComponentModel::ISite* get_Site() ;

/// @brief Method get_Tables, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Data::DataTableCollection* get_Tables() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() noexcept;

static inline void setStaticF_s_objectTypeCount(int32_t  value) ;

static inline void setStaticF_s_schemaTypeForWSDL(::System::Xml::Schema::XmlSchemaComplexType*  value) ;

/// @brief Method set_CaseSensitive, addr 0x181b76070, size 0x1f0, virtual false, abstract: false, final false
inline void set_CaseSensitive(bool  value) ;

/// @brief Method set_DataSetName, addr 0x181b76260, size 0xf0, virtual false, abstract: false, final false
inline void set_DataSetName(::StringW  value) ;

/// @brief Method set_EnforceConstraints, addr 0x181b76350, size 0xf0, virtual false, abstract: false, final false
inline void set_EnforceConstraints(bool  value) ;

/// @brief Method set_Locale, addr 0x181b76440, size 0x100, virtual false, abstract: false, final false
inline void set_Locale(::System::Globalization::CultureInfo*  value) ;

/// @brief Method set_MainTableName, addr 0x1803d5ad0, size 0x10, virtual false, abstract: false, final false
inline void set_MainTableName(::StringW  value) ;

/// @brief Method set_Namespace, addr 0x181b76540, size 0x310, virtual false, abstract: false, final false
inline void set_Namespace(::StringW  value) ;

/// @brief Method set_Prefix, addr 0x181b76850, size 0x100, virtual false, abstract: false, final false
inline void set_Prefix(::StringW  value) ;

/// @brief Method set_RemotingFormat, addr 0x181b76950, size 0xa0, virtual false, abstract: false, final false
inline void set_RemotingFormat(::System::Data::SerializationFormat  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataSet(DataSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataSet(DataSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13939};

/// @brief Field _defaultViewManager, offset: 0x20, size: 0x8, def value: None
 ::System::Data::DataViewManager*  ____defaultViewManager;

/// @brief Field _tableCollection, offset: 0x28, size: 0x8, def value: None
 ::System::Data::DataTableCollection*  ____tableCollection;

/// @brief Field _relationCollection, offset: 0x30, size: 0x8, def value: None
 ::System::Data::DataRelationCollection*  ____relationCollection;

/// @brief Field _extendedProperties, offset: 0x38, size: 0x8, def value: None
 ::System::Data::PropertyCollection*  ____extendedProperties;

/// @brief Field _dataSetName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____dataSetName;

/// @brief Field _datasetPrefix, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____datasetPrefix;

/// @brief Field _namespaceURI, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____namespaceURI;

/// @brief Field _enforceConstraints, offset: 0x58, size: 0x1, def value: None
 bool  ____enforceConstraints;

/// @brief Field _caseSensitive, offset: 0x59, size: 0x1, def value: None
 bool  ____caseSensitive;

/// @brief Field _culture, offset: 0x60, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____culture;

/// @brief Field _cultureUserSet, offset: 0x68, size: 0x1, def value: None
 bool  ____cultureUserSet;

/// @brief Field _fInReadXml, offset: 0x69, size: 0x1, def value: None
 bool  ____fInReadXml;

/// @brief Field _fInLoadDiffgram, offset: 0x6a, size: 0x1, def value: None
 bool  ____fInLoadDiffgram;

/// @brief Field _fTopLevelTable, offset: 0x6b, size: 0x1, def value: None
 bool  ____fTopLevelTable;

/// @brief Field _fInitInProgress, offset: 0x6c, size: 0x1, def value: None
 bool  ____fInitInProgress;

/// @brief Field _fEnableCascading, offset: 0x6d, size: 0x1, def value: None
 bool  ____fEnableCascading;

/// @brief Field _fIsSchemaLoading, offset: 0x6e, size: 0x1, def value: None
 bool  ____fIsSchemaLoading;

/// @brief Field _mainTableName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____mainTableName;

/// @brief Field _remotingFormat, offset: 0x78, size: 0x4, def value: None
 ::System::Data::SerializationFormat  ____remotingFormat;

/// @brief Field _defaultViewManagerLock, offset: 0x80, size: 0x8, def value: None
 ::System::Object*  ____defaultViewManagerLock;

/// @brief Field _objectID, offset: 0x88, size: 0x4, def value: None
 int32_t  ____objectID;

/// @brief Field _useDataSetSchemaOnly, offset: 0x8c, size: 0x1, def value: None
 bool  ____useDataSetSchemaOnly;

/// @brief Field _udtIsWrapped, offset: 0x8d, size: 0x1, def value: None
 bool  ____udtIsWrapped;

/// @brief Field PropertyChanging, offset: 0x90, size: 0x8, def value: None
 ::System::ComponentModel::PropertyChangedEventHandler*  ___PropertyChanging;

/// @brief Field MergeFailed, offset: 0x98, size: 0x8, def value: None
 ::System::Data::MergeFailedEventHandler*  ___MergeFailed;

/// @brief Field DataRowCreated, offset: 0xa0, size: 0x8, def value: None
 ::System::Data::DataRowCreatedEventHandler*  ___DataRowCreated;

/// @brief Field ClearFunctionCalled, offset: 0xa8, size: 0x8, def value: None
 ::System::Data::DataSetClearEventhandler*  ___ClearFunctionCalled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataSet, ____defaultViewManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____tableCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____relationCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____extendedProperties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____dataSetName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____datasetPrefix) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____namespaceURI) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____enforceConstraints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____caseSensitive) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____culture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____cultureUserSet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fInReadXml) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fInLoadDiffgram) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fTopLevelTable) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fInitInProgress) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fEnableCascading) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fIsSchemaLoading) == 0x6e, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____mainTableName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____remotingFormat) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____defaultViewManagerLock) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____objectID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____useDataSetSchemaOnly) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____udtIsWrapped) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___PropertyChanging) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___MergeFailed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___DataRowCreated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___ClearFunctionCalled) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataSet) == 0xb0, "Size mismatch!");

} // namespace end def System::Data
