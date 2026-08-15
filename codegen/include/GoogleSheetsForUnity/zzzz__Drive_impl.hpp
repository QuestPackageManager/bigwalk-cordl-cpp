#pragma once
// IWYU pragma private; include "GoogleSheetsForUnity/Drive.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GoogleSheetsForUnity/zzzz__Drive_def.hpp"
#include "GoogleSheetsForUnity/zzzz__ConnectionData_def.hpp"
#include "GoogleSheetsForUnity/zzzz__DriveConnection_def.hpp"
#include "GoogleSheetsForUnity/zzzz__Drive_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GoogleSheetsForUnity::Drive_QueryType::Drive_QueryType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GoogleSheetsForUnity::Drive_QueryType::Drive_QueryType()   {
}
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::createObject{static_cast<int32_t>(0x0)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::createObjects{static_cast<int32_t>(0x1)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::createTable{static_cast<int32_t>(0x2)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::getObjectsByField{static_cast<int32_t>(0x3)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::getCellValue{static_cast<int32_t>(0x4)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::getTable{static_cast<int32_t>(0x5)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::getAllTables{static_cast<int32_t>(0x6)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::updateObjects{static_cast<int32_t>(0x7)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::setCellValue{static_cast<int32_t>(0x8)};
constexpr ::GoogleSheetsForUnity::Drive_QueryType  GoogleSheetsForUnity::Drive_QueryType::deleteObjects{static_cast<int32_t>(0x9)};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive_DataContainer.get_QueryType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GoogleSheetsForUnity::Drive_QueryType (::GoogleSheetsForUnity::Drive_DataContainer::*)()>(&::GoogleSheetsForUnity::Drive_DataContainer::get_QueryType)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1803bf4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive_DataContainer>(),
                        {"get_QueryType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GoogleSheetsForUnity::Drive_QueryType GoogleSheetsForUnity::Drive_DataContainer::get_QueryType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive_DataContainer>(),
                        {"get_QueryType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GoogleSheetsForUnity::Drive_QueryType>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "query", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "objType", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "column", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "row", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "searchField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "searchValue", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GoogleSheetsForUnity::Drive_DataContainer::Drive_DataContainer(::StringW  query, ::StringW  result, ::StringW  msg, ::StringW  payload, ::StringW  objType, ::StringW  column, ::StringW  row, ::StringW  searchField, ::StringW  searchValue, ::StringW  value) noexcept  {
this->query = query;
this->result = result;
this->msg = msg;
this->payload = payload;
this->objType = objType;
this->column = column;
this->row = row;
this->searchField = searchField;
this->searchValue = searchValue;
this->value = value;
}
// Ctor Parameters []
constexpr ::GoogleSheetsForUnity::Drive_DataContainer::Drive_DataContainer()   {
}
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.CreateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::CreateObject)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803c1140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.CreateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::CreateObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803c1220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateObject", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.CreateObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::CreateObjects)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803c12e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.CreateTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::CreateTable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803c17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateTable", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.GetObjectsByField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::GetObjectsByField)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803c1bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetObjectsByField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.GetCellValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::GetCellValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803c1ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetCellValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.GetTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::GoogleSheetsForUnity::Drive::GetTable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803c1cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetTable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.GetAllTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GoogleSheetsForUnity::Drive::GetAllTables)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803c1a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetAllTables", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.UpdateObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW, bool, bool)>(&::GoogleSheetsForUnity::Drive::UpdateObjects)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803c23a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"UpdateObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.SetCellValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::SetCellValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803c1fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"SetCellValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.DeleteObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool)>(&::GoogleSheetsForUnity::Drive::DeleteObjects)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803c1930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"DeleteObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.SetConnectionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GoogleSheetsForUnity::Drive::SetConnectionData)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803c20e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"SetConnectionData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.CompleteForm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::GoogleSheetsForUnity::Drive::CompleteForm)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803c10c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CompleteForm", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.CreateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, bool)>(&::GoogleSheetsForUnity::Drive::CreateRequest)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1803c13c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateRequest", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.ProcessResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, float_t)>(&::GoogleSheetsForUnity::Drive::ProcessResponse)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803c1e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"ProcessResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.HandleError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, float_t)>(&::GoogleSheetsForUnity::Drive::HandleError)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803c1d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"HandleError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GoogleSheetsForUnity::Drive.UpdateStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>)>(&::GoogleSheetsForUnity::Drive::UpdateStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c24e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"UpdateStatus", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GoogleSheetsForUnity::Drive::setStaticF__connectionData(::UnityW<::GoogleSheetsForUnity::ConnectionData>  value)  {
::cordl_internals::setStaticField<::UnityW<::GoogleSheetsForUnity::ConnectionData>, "_connectionData", ::GoogleSheetsForUnity::Drive*>(std::forward<::UnityW<::GoogleSheetsForUnity::ConnectionData>>(value));
}
inline ::UnityW<::GoogleSheetsForUnity::ConnectionData> GoogleSheetsForUnity::Drive::getStaticF__connectionData()  {
return ::cordl_internals::getStaticField<::UnityW<::GoogleSheetsForUnity::ConnectionData>, "_connectionData", ::GoogleSheetsForUnity::Drive*>();
}
inline void GoogleSheetsForUnity::Drive::setStaticF__currentStatus(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_currentStatus", ::GoogleSheetsForUnity::Drive*>(std::forward<::StringW>(value));
}
inline ::StringW GoogleSheetsForUnity::Drive::getStaticF__currentStatus()  {
return ::cordl_internals::getStaticField<::StringW, "_currentStatus", ::GoogleSheetsForUnity::Drive*>();
}
inline void GoogleSheetsForUnity::Drive::setStaticF_debugMode(bool  value)  {
::cordl_internals::setStaticField<bool, "debugMode", ::GoogleSheetsForUnity::Drive*>(std::forward<bool>(value));
}
inline bool GoogleSheetsForUnity::Drive::getStaticF_debugMode()  {
return ::cordl_internals::getStaticField<bool, "debugMode", ::GoogleSheetsForUnity::Drive*>();
}
inline void GoogleSheetsForUnity::Drive::setStaticF_driveConnectorRuntime(::UnityW<::GoogleSheetsForUnity::DriveConnection>  value)  {
::cordl_internals::setStaticField<::UnityW<::GoogleSheetsForUnity::DriveConnection>, "driveConnectorRuntime", ::GoogleSheetsForUnity::Drive*>(std::forward<::UnityW<::GoogleSheetsForUnity::DriveConnection>>(value));
}
inline ::UnityW<::GoogleSheetsForUnity::DriveConnection> GoogleSheetsForUnity::Drive::getStaticF_driveConnectorRuntime()  {
return ::cordl_internals::getStaticField<::UnityW<::GoogleSheetsForUnity::DriveConnection>, "driveConnectorRuntime", ::GoogleSheetsForUnity::Drive*>();
}
inline void GoogleSheetsForUnity::Drive::setStaticF_responseCallback(::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>*, "responseCallback", ::GoogleSheetsForUnity::Drive*>(std::forward<::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>* GoogleSheetsForUnity::Drive::getStaticF_responseCallback()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::GoogleSheetsForUnity::Drive_DataContainer>*, "responseCallback", ::GoogleSheetsForUnity::Drive*>();
}
inline void GoogleSheetsForUnity::Drive::setStaticF_errorResponseCallback(::UnityEngine::Events::UnityAction_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::StringW>*, "errorResponseCallback", ::GoogleSheetsForUnity::Drive*>(std::forward<::UnityEngine::Events::UnityAction_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::StringW>* GoogleSheetsForUnity::Drive::getStaticF_errorResponseCallback()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::StringW>*, "errorResponseCallback", ::GoogleSheetsForUnity::Drive*>();
}
inline void GoogleSheetsForUnity::Drive::CreateObject(::StringW  jsonObject, ::StringW  objTypeName, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jsonObject, objTypeName, runtime);
}
inline void GoogleSheetsForUnity::Drive::CreateObject(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  fields, ::StringW  objTypeName, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateObject", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fields, objTypeName, runtime);
}
inline void GoogleSheetsForUnity::Drive::CreateObjects(::StringW  jsonObjects, ::StringW  objTypeName, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jsonObjects, objTypeName, runtime);
}
inline void GoogleSheetsForUnity::Drive::CreateTable(::ArrayW<::StringW>  headers, ::StringW  tableTypeName, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateTable", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, headers, tableTypeName, runtime);
}
inline void GoogleSheetsForUnity::Drive::GetObjectsByField(::StringW  objTypeName, ::StringW  searchFieldName, ::StringW  searchValue, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetObjectsByField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objTypeName, searchFieldName, searchValue, runtime);
}
inline void GoogleSheetsForUnity::Drive::GetCellValue(::StringW  objTypeName, ::StringW  column, ::StringW  row, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetCellValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objTypeName, column, row, runtime);
}
inline void GoogleSheetsForUnity::Drive::GetTable(::StringW  tableTypeName, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetTable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tableTypeName, runtime);
}
inline void GoogleSheetsForUnity::Drive::GetAllTables(bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"GetAllTables", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runtime);
}
inline void GoogleSheetsForUnity::Drive::UpdateObjects(::StringW  objTypeName, ::StringW  searchFieldName, ::StringW  searchValue, ::StringW  jsonObject, bool  create, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"UpdateObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objTypeName, searchFieldName, searchValue, jsonObject, create, runtime);
}
inline void GoogleSheetsForUnity::Drive::SetCellValue(::StringW  objTypeName, ::StringW  column, ::StringW  row, ::StringW  value, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"SetCellValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objTypeName, column, row, value, runtime);
}
inline void GoogleSheetsForUnity::Drive::DeleteObjects(::StringW  objTypeName, ::StringW  searchFieldName, ::StringW  searchValue, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"DeleteObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objTypeName, searchFieldName, searchValue, runtime);
}
inline void GoogleSheetsForUnity::Drive::SetConnectionData(bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"SetConnectionData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runtime);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GoogleSheetsForUnity::Drive::CompleteForm(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  form)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CompleteForm", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(nullptr, ___internal_method, form);
}
inline void GoogleSheetsForUnity::Drive::CreateRequest(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  dataForm, bool  runtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"CreateRequest", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dataForm, runtime);
}
inline void GoogleSheetsForUnity::Drive::ProcessResponse(::StringW  response, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"ProcessResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, response, time);
}
inline void GoogleSheetsForUnity::Drive::HandleError(::StringW  response, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"HandleError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, response, time);
}
inline void GoogleSheetsForUnity::Drive::UpdateStatus(::ArrayW<::StringW>  statusDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::Drive*>(),
                        {"UpdateStatus", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statusDetails);
}
// Ctor Parameters []
constexpr ::GoogleSheetsForUnity::Drive::Drive()   {
}
