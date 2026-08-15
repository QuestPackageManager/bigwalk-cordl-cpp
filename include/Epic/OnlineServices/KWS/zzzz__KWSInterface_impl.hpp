#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/KWSInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__KWSInterface_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__AddNotifyPermissionsUpdateReceivedOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__CopyPermissionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__CreateUserOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__GetPermissionByKeyOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__GetPermissionsCountOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__KWSPermissionStatus_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnCreateUserCallback_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnPermissionsUpdateReceivedCallback_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnQueryAgeGateCallback_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnQueryPermissionsCallback_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnRequestPermissionsCallback_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnUpdateParentEmailCallback_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionStatus_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__QueryAgeGateOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__QueryPermissionsOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__RequestPermissionsOptions_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__UpdateParentEmailOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)()>(&::Epic::OnlineServices::KWS::KWSInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::KWS::KWSInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.AddNotifyPermissionsUpdateReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>, ::System::Object*, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback*)>(&::Epic::OnlineServices::KWS::KWSInterface::AddNotifyPermissionsUpdateReceived)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805179a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"AddNotifyPermissionsUpdateReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.CopyPermissionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatus>>)>(&::Epic::OnlineServices::KWS::KWSInterface::CopyPermissionByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180517b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"CopyPermissionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatus>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.CreateUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::CreateUserOptions>, ::System::Object*, ::Epic::OnlineServices::KWS::OnCreateUserCallback*)>(&::Epic::OnlineServices::KWS::KWSInterface::CreateUser)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180517c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"CreateUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CreateUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnCreateUserCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.GetPermissionByKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>, ::by_ref<::Epic::OnlineServices::KWS::KWSPermissionStatus>)>(&::Epic::OnlineServices::KWS::KWSInterface::GetPermissionByKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180517ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"GetPermissionByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::KWSPermissionStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.GetPermissionsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::GetPermissionsCountOptions>)>(&::Epic::OnlineServices::KWS::KWSInterface::GetPermissionsCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180517f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"GetPermissionsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::GetPermissionsCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.QueryAgeGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateOptions>, ::System::Object*, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*)>(&::Epic::OnlineServices::KWS::KWSInterface::QueryAgeGate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180517fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"QueryAgeGate", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.QueryPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsOptions>, ::System::Object*, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallback*)>(&::Epic::OnlineServices::KWS::KWSInterface::QueryPermissions)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180518180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"QueryPermissions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnQueryPermissionsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.RemoveNotifyPermissionsUpdateReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)(uint64_t)>(&::Epic::OnlineServices::KWS::KWSInterface::RemoveNotifyPermissionsUpdateReceived)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180518380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"RemoveNotifyPermissionsUpdateReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.RequestPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsOptions>, ::System::Object*, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallback*)>(&::Epic::OnlineServices::KWS::KWSInterface::RequestPermissions)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1805183b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"RequestPermissions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnRequestPermissionsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::KWSInterface.UpdateParentEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::KWSInterface::*)(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailOptions>, ::System::Object*, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback*)>(&::Epic::OnlineServices::KWS::KWSInterface::UpdateParentEmail)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1805185f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"UpdateParentEmail", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::KWSInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::KWS::KWSInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::KWS::KWSInterface::AddNotifyPermissionsUpdateReceived(::by_ref<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"AddNotifyPermissionsUpdateReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::KWS::KWSInterface::CopyPermissionByIndex(::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatus>>  outPermission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"CopyPermissionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::KWS::PermissionStatus>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPermission);
}
inline void Epic::OnlineServices::KWS::KWSInterface::CreateUser(::by_ref<::Epic::OnlineServices::KWS::CreateUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnCreateUserCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"CreateUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CreateUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnCreateUserCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::KWS::KWSInterface::GetPermissionByKey(::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>  options, ::by_ref<::Epic::OnlineServices::KWS::KWSPermissionStatus>  outPermission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"GetPermissionByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::KWSPermissionStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPermission);
}
inline int32_t Epic::OnlineServices::KWS::KWSInterface::GetPermissionsCount(::by_ref<::Epic::OnlineServices::KWS::GetPermissionsCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"GetPermissionsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::GetPermissionsCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::KWS::KWSInterface::QueryAgeGate(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"QueryAgeGate", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::KWS::KWSInterface::QueryPermissions(::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"QueryPermissions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnQueryPermissionsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::KWS::KWSInterface::RemoveNotifyPermissionsUpdateReceived(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"RemoveNotifyPermissionsUpdateReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::KWS::KWSInterface::RequestPermissions(::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"RequestPermissions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnRequestPermissionsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::KWS::KWSInterface::UpdateParentEmail(::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::KWSInterface*>(),
                        {"UpdateParentEmail", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::KWS::OnUpdateParentEmailCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::KWS::KWSInterface* Epic::OnlineServices::KWS::KWSInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::KWS::KWSInterface*>());
}
inline ::Epic::OnlineServices::KWS::KWSInterface* Epic::OnlineServices::KWS::KWSInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::KWS::KWSInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::KWSInterface::KWSInterface()   {
}
