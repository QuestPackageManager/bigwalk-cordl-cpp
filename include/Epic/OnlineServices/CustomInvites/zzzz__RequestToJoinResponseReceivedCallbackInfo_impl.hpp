#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RequestToJoinResponseReceivedCallbackInfo.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponse_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponseReceivedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponse_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)()>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.get_FromUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)()>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_FromUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_FromUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.set_FromUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_FromUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_FromUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.get_ToUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)()>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_ToUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_ToUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.set_ToUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_ToUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_ToUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.get_Response
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::RequestToJoinResponse (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)()>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_Response)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_Response", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.set_Response
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)(::Epic::OnlineServices::CustomInvites::RequestToJoinResponse)>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_Response)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_Response", {}, {::i2c::type_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)()>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::*)()>(&::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_FromUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_FromUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_FromUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_FromUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_ToUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_ToUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_ToUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_ToUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::get_Response()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"get_Response", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::RequestToJoinResponse>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::set_Response(::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"set_Response", {}, {::i2c::type_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FromUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ToUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Response_k__BackingField", ty: "::Epic::OnlineServices::CustomInvites::RequestToJoinResponse", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::RequestToJoinResponseReceivedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _FromUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ToUserId_k__BackingField, ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  _Response_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_FromUserId_k__BackingField = _FromUserId_k__BackingField;
this->_ToUserId_k__BackingField = _ToUserId_k__BackingField;
this->_Response_k__BackingField = _Response_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo::RequestToJoinResponseReceivedCallbackInfo()   {
}
