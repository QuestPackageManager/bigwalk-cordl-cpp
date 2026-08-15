#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/CrossPlatformInputManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__CrossPlatformInputManager_def.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__CrossPlatformInputManager_def.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__VirtualInput_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod::CrossPlatformInputManager_ActiveInputMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod::CrossPlatformInputManager_ActiveInputMethod()   {
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod  Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod::Hardware{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod  Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod::Touch{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::set_name)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.get_matchWithInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_matchWithInputManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_matchWithInputManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.set_matchWithInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)(bool)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::set_matchWithInputManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"set_matchWithInputManager", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac23f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)(::StringW, bool)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac23c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ac2300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"Remove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)(float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.get_GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_GetValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_GetValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis.get_GetValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_GetValueRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_GetValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_get__name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr ::StringW const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_get__name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_set__name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name_k__BackingField = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_get_m_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
constexpr float_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_get_m_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_set_m_Value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Value = value;
}
constexpr bool& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_get__matchWithInputManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchWithInputManager_k__BackingField;
}
constexpr bool const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_get__matchWithInputManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchWithInputManager_k__BackingField;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::__cordl_internal_set__matchWithInputManager_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matchWithInputManager_k__BackingField = value;
}
inline ::StringW Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_matchWithInputManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_matchWithInputManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::set_matchWithInputManager(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"set_matchWithInputManager", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::_ctor(::StringW  name, bool  matchToInputSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, matchToInputSettings);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::Remove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"Remove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::Update(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_GetValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_GetValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::get_GetValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(),
                        {"get_GetValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(name));
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::New_ctor(::StringW  name, bool  matchToInputSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(name, matchToInputSettings));
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis::CrossPlatformInputManager_VirtualAxis()   {
}
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::set_name)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.get_matchWithInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_matchWithInputManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_matchWithInputManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.set_matchWithInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)(bool)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::set_matchWithInputManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"set_matchWithInputManager", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac2540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)(::StringW, bool)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac2500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::Pressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac2410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.Released
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::Released)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac2440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"Released", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::Remove)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac2460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"Remove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.get_GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_GetButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_GetButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.get_GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_GetButtonDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac2570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_GetButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton.get_GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_GetButtonUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac2590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_GetButtonUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get__name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr ::StringW const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get__name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_set__name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name_k__BackingField = value;
}
constexpr bool& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get__matchWithInputManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchWithInputManager_k__BackingField;
}
constexpr bool const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get__matchWithInputManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchWithInputManager_k__BackingField;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_set__matchWithInputManager_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matchWithInputManager_k__BackingField = value;
}
constexpr int32_t& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get_m_LastPressedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPressedFrame;
}
constexpr int32_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get_m_LastPressedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPressedFrame;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_set_m_LastPressedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPressedFrame = value;
}
constexpr int32_t& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get_m_ReleasedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleasedFrame;
}
constexpr int32_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get_m_ReleasedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleasedFrame;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_set_m_ReleasedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReleasedFrame = value;
}
constexpr bool& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get_m_Pressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pressed;
}
constexpr bool const& Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_get_m_Pressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pressed;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::__cordl_internal_set_m_Pressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pressed = value;
}
inline ::StringW Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_matchWithInputManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_matchWithInputManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::set_matchWithInputManager(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"set_matchWithInputManager", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::_ctor(::StringW  name, bool  matchToInputSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, matchToInputSettings);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::Released()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"Released", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::Remove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"Remove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_GetButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_GetButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_GetButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_GetButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::get_GetButtonUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(),
                        {"get_GetButtonUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(name));
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::New_ctor(::StringW  name, bool  matchToInputSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>(name, matchToInputSettings));
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton::CrossPlatformInputManager_VirtualButton()   {
}
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SwitchActiveInputMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SwitchActiveInputMethod)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181abdd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SwitchActiveInputMethod", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.AxisExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::AxisExists)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"AxisExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.ButtonExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::ButtonExists)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"ButtonExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.RegisterVirtualAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::RegisterVirtualAxis)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181abd700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"RegisterVirtualAxis", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.RegisterVirtualButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::RegisterVirtualButton)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181abd840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"RegisterVirtualButton", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.UnRegisterVirtualAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::UnRegisterVirtualAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181abdda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"UnRegisterVirtualAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.UnRegisterVirtualButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::UnRegisterVirtualButton)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181abde40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"UnRegisterVirtualButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.VirtualAxisReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxisReference)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181abdec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"VirtualAxisReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetAxis)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181abd4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.GetAxisRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetAxisRaw)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181abd470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, bool)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetAxis)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetAxis", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetButton)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetButtonDown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetButtonUp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetButtonUp", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetButtonDown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetButtonDown", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetButtonUp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abdb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetButtonUp", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetAxisPositive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxisPositive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxisPositive", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetAxisNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxisNegative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxisNegative", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetAxisZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxisZero)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxisZero", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxis)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxis", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.get_mousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::get_mousePosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abe020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"get_mousePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetVirtualMousePositionX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetVirtualMousePositionX)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abdbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetVirtualMousePositionX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetVirtualMousePositionY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetVirtualMousePositionY)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abdc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetVirtualMousePositionY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager.SetVirtualMousePositionZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetVirtualMousePositionZ)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abdcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetVirtualMousePositionZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::setStaticF_activeInput(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  value)  {
::cordl_internals::setStaticField<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*, "activeInput", ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(std::forward<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(value));
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::getStaticF_activeInput()  {
return ::cordl_internals::getStaticField<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*, "activeInput", ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>();
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::setStaticF_s_TouchInput(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  value)  {
::cordl_internals::setStaticField<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*, "s_TouchInput", ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(std::forward<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(value));
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::getStaticF_s_TouchInput()  {
return ::cordl_internals::getStaticField<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*, "s_TouchInput", ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>();
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::setStaticF_s_HardwareInput(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  value)  {
::cordl_internals::setStaticField<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*, "s_HardwareInput", ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(std::forward<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(value));
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::getStaticF_s_HardwareInput()  {
return ::cordl_internals::getStaticField<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*, "s_HardwareInput", ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>();
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SwitchActiveInputMethod(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod  activeInputMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SwitchActiveInputMethod", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, activeInputMethod);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::AxisExists(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"AxisExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::ButtonExists(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"ButtonExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::RegisterVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"RegisterVirtualAxis", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, axis);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::RegisterVirtualButton(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"RegisterVirtualButton", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, button);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::UnRegisterVirtualAxis(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"UnRegisterVirtualAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::UnRegisterVirtualButton(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"UnRegisterVirtualButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxisReference(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"VirtualAxisReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(nullptr, ___internal_method, name);
}
inline float_t Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetAxis(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, name);
}
inline float_t Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetAxisRaw(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, name);
}
inline float_t Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetAxis(::StringW  name, bool  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetAxis", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, name, raw);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetButton(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetButtonDown(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::GetButtonUp(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"GetButtonUp", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetButtonDown(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetButtonDown", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetButtonUp(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetButtonUp", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxisPositive(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxisPositive", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxisNegative(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxisNegative", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxisZero(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxisZero", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetAxis(::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetAxis", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline ::UnityEngine::Vector3 Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::get_mousePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"get_mousePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetVirtualMousePositionX(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetVirtualMousePositionX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetVirtualMousePositionY(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetVirtualMousePositionY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::SetVirtualMousePositionZ(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*>(),
                        {"SetVirtualMousePositionZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::CrossPlatformInputManager()   {
}
