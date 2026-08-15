#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerUseWeaponData.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponData_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.get_PlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_PlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_PlayerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.set_PlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_PlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_PlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.get_PlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_PlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_PlayerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.set_PlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_PlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_PlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.get_PlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_PlayerViewRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051e8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_PlayerViewRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.set_PlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_PlayerViewRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_PlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.get_IsPlayerViewZoomed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_IsPlayerViewZoomed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_IsPlayerViewZoomed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.set_IsPlayerViewZoomed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)(bool)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_IsPlayerViewZoomed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_IsPlayerViewZoomed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.get_IsMeleeAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_IsMeleeAttack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_IsMeleeAttack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.set_IsMeleeAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)(bool)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_IsMeleeAttack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_IsMeleeAttack", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.get_WeaponName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_WeaponName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_WeaponName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData.set_WeaponName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_WeaponName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_WeaponName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_PlayerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_PlayerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_PlayerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_PlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_PlayerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_PlayerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_PlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_PlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_PlayerViewRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_PlayerViewRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_PlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_PlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_IsPlayerViewZoomed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_IsPlayerViewZoomed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_IsPlayerViewZoomed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_IsPlayerViewZoomed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_IsMeleeAttack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_IsMeleeAttack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_IsMeleeAttack(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_IsMeleeAttack", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::get_WeaponName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"get_WeaponName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::set_WeaponName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>(),
                        {"set_WeaponName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsPlayerViewZoomed_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsMeleeAttack_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_WeaponName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::LogPlayerUseWeaponData(::System::IntPtr  _PlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _PlayerViewRotation_k__BackingField, bool  _IsPlayerViewZoomed_k__BackingField, bool  _IsMeleeAttack_k__BackingField, ::Epic::OnlineServices::Utf8String*  _WeaponName_k__BackingField) noexcept  {
this->_PlayerHandle_k__BackingField = _PlayerHandle_k__BackingField;
this->_PlayerPosition_k__BackingField = _PlayerPosition_k__BackingField;
this->_PlayerViewRotation_k__BackingField = _PlayerViewRotation_k__BackingField;
this->_IsPlayerViewZoomed_k__BackingField = _IsPlayerViewZoomed_k__BackingField;
this->_IsMeleeAttack_k__BackingField = _IsMeleeAttack_k__BackingField;
this->_WeaponName_k__BackingField = _WeaponName_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData::LogPlayerUseWeaponData()   {
}
