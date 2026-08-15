#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackV2Info.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2Info_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)(::System::Object*)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.get_AchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_AchievementId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_AchievementId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.set_AchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_AchievementId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_AchievementId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.get_UnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_UnlockTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_UnlockTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.set_UnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_UnlockTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_UnlockTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_UserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_AchievementId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_AchievementId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_AchievementId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_AchievementId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::get_UnlockTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"get_UnlockTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"set_UnlockTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_UnlockTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::OnAchievementsUnlockedCallbackV2Info(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_UserId_k__BackingField = _UserId_k__BackingField;
this->_AchievementId_k__BackingField = _AchievementId_k__BackingField;
this->_UnlockTime_k__BackingField = _UnlockTime_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info::OnAchievementsUnlockedCallbackV2Info()   {
}
