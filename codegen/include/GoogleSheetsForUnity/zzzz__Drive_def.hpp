#pragma once
// IWYU pragma private; include "GoogleSheetsForUnity/Drive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Drive)
namespace GoogleSheetsForUnity {
class ConnectionData;
}
namespace GoogleSheetsForUnity {
class DriveConnection;
}
namespace GoogleSheetsForUnity {
struct Drive_DataContainer;
}
namespace GoogleSheetsForUnity {
struct Drive_QueryType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace GoogleSheetsForUnity {
struct Drive_QueryType;
}
namespace GoogleSheetsForUnity {
class Drive;
}
namespace GoogleSheetsForUnity {
struct Drive_DataContainer;
}
// Write type traits
MARK_VAL_T(::GoogleSheetsForUnity::Drive_QueryType);
MARK_REF_T(::GoogleSheetsForUnity::Drive*);
MARK_VAL_T(::GoogleSheetsForUnity::Drive_DataContainer);
DEFINE_IL2CPP_CLASS(::GoogleSheetsForUnity::Drive_QueryType, "GoogleSheetsForUnity", "Drive/QueryType");
DEFINE_IL2CPP_CLASS(::GoogleSheetsForUnity::Drive*, "GoogleSheetsForUnity", "Drive");
DEFINE_IL2CPP_CLASS(::GoogleSheetsForUnity::Drive_DataContainer, "GoogleSheetsForUnity", "Drive/DataContainer");
// Dependencies 
namespace GoogleSheetsForUnity {
// Is value type: true
// CS Name: GoogleSheetsForUnity.Drive/QueryType
struct CORDL_TYPE Drive_QueryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Drive_QueryType_Unwrapped
enum struct __Drive_QueryType_Unwrapped : int32_t {
__E_createObject = static_cast<int32_t>(0x0),
__E_createObjects = static_cast<int32_t>(0x1),
__E_createTable = static_cast<int32_t>(0x2),
__E_getObjectsByField = static_cast<int32_t>(0x3),
__E_getCellValue = static_cast<int32_t>(0x4),
__E_getTable = static_cast<int32_t>(0x5),
__E_getAllTables = static_cast<int32_t>(0x6),
__E_updateObjects = static_cast<int32_t>(0x7),
__E_setCellValue = static_cast<int32_t>(0x8),
__E_deleteObjects = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Drive_QueryType_Unwrapped () const noexcept {
return static_cast<__Drive_QueryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Drive_QueryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Drive_QueryType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field createObject value: I32(0)
static ::GoogleSheetsForUnity::Drive_QueryType const createObject;

/// @brief Field createObjects value: I32(1)
static ::GoogleSheetsForUnity::Drive_QueryType const createObjects;

/// @brief Field createTable value: I32(2)
static ::GoogleSheetsForUnity::Drive_QueryType const createTable;

/// @brief Field deleteObjects value: I32(9)
static ::GoogleSheetsForUnity::Drive_QueryType const deleteObjects;

/// @brief Field getAllTables value: I32(6)
static ::GoogleSheetsForUnity::Drive_QueryType const getAllTables;

/// @brief Field getCellValue value: I32(4)
static ::GoogleSheetsForUnity::Drive_QueryType const getCellValue;

/// @brief Field getObjectsByField value: I32(3)
static ::GoogleSheetsForUnity::Drive_QueryType const getObjectsByField;

/// @brief Field getTable value: I32(5)
static ::GoogleSheetsForUnity::Drive_QueryType const getTable;

/// @brief Field setCellValue value: I32(8)
static ::GoogleSheetsForUnity::Drive_QueryType const setCellValue;

/// @brief Field updateObjects value: I32(7)
static ::GoogleSheetsForUnity::Drive_QueryType const updateObjects;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GoogleSheetsForUnity::Drive_QueryType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GoogleSheetsForUnity::Drive_QueryType) == 0x4, "Size mismatch!");

} // namespace end def GoogleSheetsForUnity
// Dependencies 
namespace GoogleSheetsForUnity {
// Is value type: true
// CS Name: GoogleSheetsForUnity.Drive/DataContainer
struct CORDL_TYPE Drive_DataContainer {
public:
// Declarations
 __declspec(property(get=get_QueryType)) ::GoogleSheetsForUnity::Drive_QueryType  QueryType;

/// @brief Method get_QueryType, addr 0x1803bf4a0, size 0x320, virtual false, abstract: false, final false
inline ::GoogleSheetsForUnity::Drive_QueryType get_QueryType() ;

// Ctor Parameters []
// @brief default ctor
constexpr Drive_DataContainer() ;

// Ctor Parameters [CppParam { name: "query", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "result", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "column", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "row", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "searchField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "searchValue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr Drive_DataContainer(::StringW  query, ::StringW  result, ::StringW  msg, ::StringW  payload, ::StringW  objType, ::StringW  column, ::StringW  row, ::StringW  searchField, ::StringW  searchValue, ::StringW  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field query, offset: 0x0, size: 0x8, def value: None
 ::StringW  query;

/// @brief Field result, offset: 0x8, size: 0x8, def value: None
 ::StringW  result;

/// @brief Field msg, offset: 0x10, size: 0x8, def value: None
 ::StringW  msg;

/// @brief Field payload, offset: 0x18, size: 0x8, def value: None
 ::StringW  payload;

/// @brief Field objType, offset: 0x20, size: 0x8, def value: None
 ::StringW  objType;

/// @brief Field column, offset: 0x28, size: 0x8, def value: None
 ::StringW  column;

/// @brief Field row, offset: 0x30, size: 0x8, def value: None
 ::StringW  row;

/// @brief Field searchField, offset: 0x38, size: 0x8, def value: None
 ::StringW  searchField;

/// @brief Field searchValue, offset: 0x40, size: 0x8, def value: None
 ::StringW  searchValue;

/// @brief Field value, offset: 0x48, size: 0x8, def value: None
 ::StringW  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, query) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, result) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, msg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, payload) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, objType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, column) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, row) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, searchField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, searchValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::Drive_DataContainer, value) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GoogleSheetsForUnity::Drive_DataContainer) == 0x50, "Size mismatch!");

} // namespace end def GoogleSheetsForUnity
// Dependencies System.Object
namespace GoogleSheetsForUnity {
// Is value type: false
// CS Name: GoogleSheetsForUnity.Drive
class CORDL_TYPE Drive : public ::System::Object {
public:
// Declarations
using DataContainer = ::GoogleSheetsForUnity::Drive_DataContainer;

using QueryType = ::GoogleSheetsForUnity::Drive_QueryType;

/// @brief Field _connectionData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__connectionData, put=setStaticF__connectionData)) ::UnityW<::GoogleSheetsForUnity::ConnectionData>  _connectionData;

/// @brief Field _currentStatus, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__currentStatus, put=setStaticF__currentStatus)) ::StringW  _currentStatus;

/// @brief Field debugMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_debugMode, put=setStaticF_debugMode)) bool  debugMode;

/// @brief Field driveConnectorRuntime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_driveConnectorRuntime, put=setStaticF_driveConnectorRuntime)) ::UnityW<::GoogleSheetsForUnity::DriveConnection>  driveConnectorRuntime;

/// @brief Field errorResponseCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_errorResponseCallback, put=setStaticF_errorResponseCallback)) ::UnityEngine::Events::UnityAction_1<::StringW>*  errorResponseCallback;

/// @brief Field responseCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_responseCallback, put=setStaticF_responseCallback)) ::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>*  responseCallback;

/// @brief Method CompleteForm, addr 0x1803c10c0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* CompleteForm(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  form) ;

/// @brief Method CreateObject, addr 0x1803c1220, size 0xc0, virtual false, abstract: false, final false
static inline void CreateObject(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  fields, ::StringW  objTypeName, bool  runtime) ;

/// @brief Method CreateObject, addr 0x1803c1140, size 0xe0, virtual false, abstract: false, final false
static inline void CreateObject(::StringW  jsonObject, ::StringW  objTypeName, bool  runtime) ;

/// @brief Method CreateObjects, addr 0x1803c12e0, size 0xe0, virtual false, abstract: false, final false
static inline void CreateObjects(::StringW  jsonObjects, ::StringW  objTypeName, bool  runtime) ;

/// @brief Method CreateRequest, addr 0x1803c13c0, size 0x410, virtual false, abstract: false, final false
static inline void CreateRequest(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  dataForm, bool  runtime) ;

/// @brief Method CreateTable, addr 0x1803c17d0, size 0x160, virtual false, abstract: false, final false
static inline void CreateTable(::ArrayW<::StringW>  headers, ::StringW  tableTypeName, bool  runtime) ;

/// @brief Method DeleteObjects, addr 0x1803c1930, size 0x100, virtual false, abstract: false, final false
static inline void DeleteObjects(::StringW  objTypeName, ::StringW  searchFieldName, ::StringW  searchValue, bool  runtime) ;

/// @brief Method GetAllTables, addr 0x1803c1a30, size 0x90, virtual false, abstract: false, final false
static inline void GetAllTables(bool  runtime) ;

/// @brief Method GetCellValue, addr 0x1803c1ac0, size 0x100, virtual false, abstract: false, final false
static inline void GetCellValue(::StringW  objTypeName, ::StringW  column, ::StringW  row, bool  runtime) ;

/// @brief Method GetObjectsByField, addr 0x1803c1bc0, size 0x100, virtual false, abstract: false, final false
static inline void GetObjectsByField(::StringW  objTypeName, ::StringW  searchFieldName, ::StringW  searchValue, bool  runtime) ;

/// @brief Method GetTable, addr 0x1803c1cc0, size 0xb0, virtual false, abstract: false, final false
static inline void GetTable(::StringW  tableTypeName, bool  runtime) ;

/// @brief Method HandleError, addr 0x1803c1d70, size 0xd0, virtual false, abstract: false, final false
static inline void HandleError(::StringW  response, float_t  time) ;

/// @brief Method ProcessResponse, addr 0x1803c1e40, size 0x180, virtual false, abstract: false, final false
static inline void ProcessResponse(::StringW  response, float_t  time) ;

/// @brief Method SetCellValue, addr 0x1803c1fc0, size 0x120, virtual false, abstract: false, final false
static inline void SetCellValue(::StringW  objTypeName, ::StringW  column, ::StringW  row, ::StringW  value, bool  runtime) ;

/// @brief Method SetConnectionData, addr 0x1803c20e0, size 0x2c0, virtual false, abstract: false, final false
static inline void SetConnectionData(bool  runtime) ;

/// @brief Method UpdateObjects, addr 0x1803c23a0, size 0x140, virtual false, abstract: false, final false
static inline void UpdateObjects(::StringW  objTypeName, ::StringW  searchFieldName, ::StringW  searchValue, ::StringW  jsonObject, bool  create, bool  runtime) ;

/// @brief Method UpdateStatus, addr 0x1803c24e0, size 0x60, virtual false, abstract: false, final false
static inline void UpdateStatus(::ArrayW<::StringW>  statusDetails) ;

static inline ::UnityW<::GoogleSheetsForUnity::ConnectionData> getStaticF__connectionData() ;

static inline ::StringW getStaticF__currentStatus() ;

static inline bool getStaticF_debugMode() ;

static inline ::UnityW<::GoogleSheetsForUnity::DriveConnection> getStaticF_driveConnectorRuntime() ;

static inline ::UnityEngine::Events::UnityAction_1<::StringW>* getStaticF_errorResponseCallback() ;

static inline ::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>* getStaticF_responseCallback() ;

static inline void setStaticF__connectionData(::UnityW<::GoogleSheetsForUnity::ConnectionData>  value) ;

static inline void setStaticF__currentStatus(::StringW  value) ;

static inline void setStaticF_debugMode(bool  value) ;

static inline void setStaticF_driveConnectorRuntime(::UnityW<::GoogleSheetsForUnity::DriveConnection>  value) ;

static inline void setStaticF_errorResponseCallback(::UnityEngine::Events::UnityAction_1<::StringW>*  value) ;

static inline void setStaticF_responseCallback(::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Drive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Drive", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Drive(Drive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Drive", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Drive(Drive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GoogleSheetsForUnity::Drive) == 0x10, "Size mismatch!");

} // namespace end def GoogleSheetsForUnity
