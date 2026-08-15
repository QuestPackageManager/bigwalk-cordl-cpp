#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerTickOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerMovementState_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerTickOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerMovementState_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.get_PlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.set_PlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.get_PlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.set_PlayerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.get_PlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerViewRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051e8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerViewRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.set_PlayerViewRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerViewRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.get_IsPlayerViewZoomed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_IsPlayerViewZoomed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_IsPlayerViewZoomed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.set_IsPlayerViewZoomed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)(bool)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_IsPlayerViewZoomed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_IsPlayerViewZoomed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.get_PlayerHealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerHealth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerHealth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.set_PlayerHealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)(float_t)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerHealth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerHealth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.get_PlayerMovementState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerMovementState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerMovementState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.set_PlayerMovementState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerMovementState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerMovementState", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.get_PlayerViewPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerViewPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerViewPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions.set_PlayerViewPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerViewPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerViewPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerViewRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerViewRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerViewRotation", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_IsPlayerViewZoomed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_IsPlayerViewZoomed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_IsPlayerViewZoomed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_IsPlayerViewZoomed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerHealth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerHealth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerHealth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerHealth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerMovementState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerMovementState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerMovementState(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerMovementState", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::get_PlayerViewPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"get_PlayerViewPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::set_PlayerViewPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>(),
                        {"set_PlayerViewPosition", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsPlayerViewZoomed_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerHealth_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerMovementState_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerViewPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::LogPlayerTickOptions(::System::IntPtr  _PlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _PlayerViewRotation_k__BackingField, bool  _IsPlayerViewZoomed_k__BackingField, float_t  _PlayerHealth_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  _PlayerMovementState_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerViewPosition_k__BackingField) noexcept  {
this->_PlayerHandle_k__BackingField = _PlayerHandle_k__BackingField;
this->_PlayerPosition_k__BackingField = _PlayerPosition_k__BackingField;
this->_PlayerViewRotation_k__BackingField = _PlayerViewRotation_k__BackingField;
this->_IsPlayerViewZoomed_k__BackingField = _IsPlayerViewZoomed_k__BackingField;
this->_PlayerHealth_k__BackingField = _PlayerHealth_k__BackingField;
this->_PlayerMovementState_k__BackingField = _PlayerMovementState_k__BackingField;
this->_PlayerViewPosition_k__BackingField = _PlayerViewPosition_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions::LogPlayerTickOptions()   {
}
