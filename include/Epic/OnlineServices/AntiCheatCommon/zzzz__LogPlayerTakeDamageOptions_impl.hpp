#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerTakeDamageOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageResult_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageSource_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageType_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponData_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerTakeDamageOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageResult_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageSource_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageType_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponData_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_VictimPlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_VictimPlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_VictimPlayerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_VictimPlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_VictimPlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_VictimPlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_VictimPlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_VictimPlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_VictimPlayerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_VictimPlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_VictimPlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_VictimPlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_VictimPlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_VictimPlayerViewRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051e8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_VictimPlayerViewRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_VictimPlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_VictimPlayerViewRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_VictimPlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_AttackerPlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_AttackerPlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c8fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_AttackerPlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_AttackerPlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_AttackerPlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerViewRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerViewRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_AttackerPlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerViewRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_IsHitscanAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_IsHitscanAttack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_IsHitscanAttack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_IsHitscanAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(bool)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_IsHitscanAttack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_IsHitscanAttack", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_HasLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_HasLineOfSight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_HasLineOfSight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_HasLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(bool)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_HasLineOfSight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_HasLineOfSight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_IsCriticalHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_IsCriticalHit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_IsCriticalHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_IsCriticalHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(bool)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_IsCriticalHit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_IsCriticalHit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_HitBoneId_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_HitBoneId_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_HitBoneId_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_HitBoneId_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_HitBoneId_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_HitBoneId_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_DamageTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageTaken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageTaken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_DamageTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(float_t)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageTaken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageTaken", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_HealthRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_HealthRemaining)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_HealthRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_HealthRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(float_t)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_HealthRemaining)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_HealthRemaining", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_DamageSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_DamageSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageSource", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_DamageType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_DamageType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_DamageResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_DamageResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageResult", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_PlayerUseWeaponData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_PlayerUseWeaponData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18051e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_PlayerUseWeaponData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_PlayerUseWeaponData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_PlayerUseWeaponData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051e990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_PlayerUseWeaponData", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_TimeSincePlayerUseWeaponMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_TimeSincePlayerUseWeaponMs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_TimeSincePlayerUseWeaponMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_TimeSincePlayerUseWeaponMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_TimeSincePlayerUseWeaponMs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_TimeSincePlayerUseWeaponMs", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_DamagePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamagePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamagePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_DamagePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamagePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamagePosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.get_AttackerPlayerViewPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerViewPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerViewPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions.set_AttackerPlayerViewPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerViewPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerViewPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_VictimPlayerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_VictimPlayerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_VictimPlayerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_VictimPlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_VictimPlayerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_VictimPlayerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_VictimPlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_VictimPlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_VictimPlayerViewRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_VictimPlayerViewRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_VictimPlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_VictimPlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerViewRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerViewRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_IsHitscanAttack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_IsHitscanAttack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_IsHitscanAttack(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_IsHitscanAttack", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_HasLineOfSight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_HasLineOfSight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_HasLineOfSight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_HasLineOfSight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_IsCriticalHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_IsCriticalHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_IsCriticalHit(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_IsCriticalHit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_HitBoneId_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_HitBoneId_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_HitBoneId_DEPRECATED(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_HitBoneId_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageTaken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageTaken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageTaken(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageTaken", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_HealthRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_HealthRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_HealthRemaining(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_HealthRemaining", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageSource(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageSource", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamageResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamageResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamageResult(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamageResult", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData> Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_PlayerUseWeaponData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_PlayerUseWeaponData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_PlayerUseWeaponData(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_PlayerUseWeaponData", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_TimeSincePlayerUseWeaponMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_TimeSincePlayerUseWeaponMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_TimeSincePlayerUseWeaponMs(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_TimeSincePlayerUseWeaponMs", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_DamagePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_DamagePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_DamagePosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_DamagePosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::get_AttackerPlayerViewPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"get_AttackerPlayerViewPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::set_AttackerPlayerViewPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>(),
                        {"set_AttackerPlayerViewPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_VictimPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_VictimPlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_VictimPlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AttackerPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AttackerPlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AttackerPlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsHitscanAttack_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_HasLineOfSight_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsCriticalHit_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_HitBoneId_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DamageTaken_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_HealthRemaining_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DamageSource_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DamageType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DamageResult_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerUseWeaponData_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TimeSincePlayerUseWeaponMs_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DamagePosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AttackerPlayerViewPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::LogPlayerTakeDamageOptions(::System::IntPtr  _VictimPlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _VictimPlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _VictimPlayerViewRotation_k__BackingField, ::System::IntPtr  _AttackerPlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _AttackerPlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _AttackerPlayerViewRotation_k__BackingField, bool  _IsHitscanAttack_k__BackingField, bool  _HasLineOfSight_k__BackingField, bool  _IsCriticalHit_k__BackingField, uint32_t  _HitBoneId_DEPRECATED_k__BackingField, float_t  _DamageTaken_k__BackingField, float_t  _HealthRemaining_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  _DamageSource_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  _DamageType_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  _DamageResult_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  _PlayerUseWeaponData_k__BackingField, uint32_t  _TimeSincePlayerUseWeaponMs_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _DamagePosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _AttackerPlayerViewPosition_k__BackingField) noexcept  {
this->_VictimPlayerHandle_k__BackingField = _VictimPlayerHandle_k__BackingField;
this->_VictimPlayerPosition_k__BackingField = _VictimPlayerPosition_k__BackingField;
this->_VictimPlayerViewRotation_k__BackingField = _VictimPlayerViewRotation_k__BackingField;
this->_AttackerPlayerHandle_k__BackingField = _AttackerPlayerHandle_k__BackingField;
this->_AttackerPlayerPosition_k__BackingField = _AttackerPlayerPosition_k__BackingField;
this->_AttackerPlayerViewRotation_k__BackingField = _AttackerPlayerViewRotation_k__BackingField;
this->_IsHitscanAttack_k__BackingField = _IsHitscanAttack_k__BackingField;
this->_HasLineOfSight_k__BackingField = _HasLineOfSight_k__BackingField;
this->_IsCriticalHit_k__BackingField = _IsCriticalHit_k__BackingField;
this->_HitBoneId_DEPRECATED_k__BackingField = _HitBoneId_DEPRECATED_k__BackingField;
this->_DamageTaken_k__BackingField = _DamageTaken_k__BackingField;
this->_HealthRemaining_k__BackingField = _HealthRemaining_k__BackingField;
this->_DamageSource_k__BackingField = _DamageSource_k__BackingField;
this->_DamageType_k__BackingField = _DamageType_k__BackingField;
this->_DamageResult_k__BackingField = _DamageResult_k__BackingField;
this->_PlayerUseWeaponData_k__BackingField = _PlayerUseWeaponData_k__BackingField;
this->_TimeSincePlayerUseWeaponMs_k__BackingField = _TimeSincePlayerUseWeaponMs_k__BackingField;
this->_DamagePosition_k__BackingField = _DamagePosition_k__BackingField;
this->_AttackerPlayerViewPosition_k__BackingField = _AttackerPlayerViewPosition_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions::LogPlayerTakeDamageOptions()   {
}
