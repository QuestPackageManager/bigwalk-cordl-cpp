#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionInfo.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionState_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionInfo_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionState_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.get_SessionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)()>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::get_SessionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_SessionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.set_SessionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::set_SessionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_SessionName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)()>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnlineSessionState (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)()>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)(::Epic::OnlineServices::Sessions::OnlineSessionState)>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::set_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_State", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::OnlineSessionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.get_SessionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo> (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)()>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::get_SessionDetails)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804bd920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_SessionDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfo.set_SessionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionInfo::*)(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>)>(&::Epic::OnlineServices::Sessions::ActiveSessionInfo::set_SessionDetails)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804bd960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_SessionDetails", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::ActiveSessionInfo::get_SessionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_SessionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::ActiveSessionInfo::set_SessionName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_SessionName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Sessions::ActiveSessionInfo::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::ActiveSessionInfo::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Sessions::OnlineSessionState Epic::OnlineServices::Sessions::ActiveSessionInfo::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnlineSessionState>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::ActiveSessionInfo::set_State(::Epic::OnlineServices::Sessions::OnlineSessionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_State", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::OnlineSessionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo> Epic::OnlineServices::Sessions::ActiveSessionInfo::get_SessionDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"get_SessionDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::ActiveSessionInfo::set_SessionDetails(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfo>(),
                        {"set_SessionDetails", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_State_k__BackingField", ty: "::Epic::OnlineServices::Sessions::OnlineSessionState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SessionDetails_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionInfo::ActiveSessionInfo(::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Sessions::OnlineSessionState  _State_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  _SessionDetails_k__BackingField) noexcept  {
this->_SessionName_k__BackingField = _SessionName_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_State_k__BackingField = _State_k__BackingField;
this->_SessionDetails_k__BackingField = _SessionDetails_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionInfo::ActiveSessionInfo()   {
}
