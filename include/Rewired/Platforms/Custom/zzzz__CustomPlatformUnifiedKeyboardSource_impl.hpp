#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformUnifiedKeyboardSource.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedControllerSource_impl.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedKeyboardSource_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedKeyboardSource_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__IndexedDictionary_2_def.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
// Ctor Parameters [CppParam { name: "keyCode", ty: "::Rewired::KeyboardKeyCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key(::Rewired::KeyboardKeyCode  keyCode, ::StringW  label) noexcept  {
this->keyCode = keyCode;
this->label = label;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap.mHSRJkrekcLwHAtmwRpYGcdHdUNU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::mHSRJkrekcLwHAtmwRpYGcdHdUNU)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"mHSRJkrekcLwHAtmwRpYGcdHdUNU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap.zrOvCiSOYvbsLAfZxMPWovZOFrLY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)(bool)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::zrOvCiSOYvbsLAfZxMPWovZOFrLY)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"zrOvCiSOYvbsLAfZxMPWovZOFrLY", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181882040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181881fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)(::Rewired::KeyboardKeyCode)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181881c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Get", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Set)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181881dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Set", {}, {::i2c::type_of<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key> (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Get)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181881cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::*)(::System::Collections::Generic::ICollection_1<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>*)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Set)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181881e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Set", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>*& Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::__cordl_internal_get_WywyELccNOIqYAeEorUwyFVyQMaMA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WywyELccNOIqYAeEorUwyFVyQMaMA;
}
constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>* const& Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::__cordl_internal_get_WywyELccNOIqYAeEorUwyFVyQMaMA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WywyELccNOIqYAeEorUwyFVyQMaMA;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::__cordl_internal_set_WywyELccNOIqYAeEorUwyFVyQMaMA(::Rewired::Utils::Classes::Data::IndexedDictionary_2<int32_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WywyELccNOIqYAeEorUwyFVyQMaMA = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::__cordl_internal_get_ZEuSTWflvbKDGXoiRUhvibTTkggW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZEuSTWflvbKDGXoiRUhvibTTkggW;
}
constexpr bool const& Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::__cordl_internal_get_ZEuSTWflvbKDGXoiRUhvibTTkggW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZEuSTWflvbKDGXoiRUhvibTTkggW;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::__cordl_internal_set_ZEuSTWflvbKDGXoiRUhvibTTkggW(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZEuSTWflvbKDGXoiRUhvibTTkggW = value;
}
inline bool Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::mHSRJkrekcLwHAtmwRpYGcdHdUNU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"mHSRJkrekcLwHAtmwRpYGcdHdUNU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::zrOvCiSOYvbsLAfZxMPWovZOFrLY(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"zrOvCiSOYvbsLAfZxMPWovZOFrLY", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::_ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Get(::Rewired::KeyboardKeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Get", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>(this, ___internal_method, keyCode);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Set(::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Set", {}, {::i2c::type_of<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::ArrayW<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key> Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::Set(::System::Collections::Generic::ICollection_1<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>*  keys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(),
                        {"Set", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Rewired::Platforms::Custom::KeyPropertyMap_CustomPlatformUnifiedKeyboardSource_Key>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys);
}
inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>());
}
inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::New_ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18187fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource.get_keyPropertyMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::get_keyPropertyMap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187fbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"get_keyPropertyMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource.set_keyPropertyMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::*)(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::set_keyPropertyMap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187fc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"set_keyPropertyMap", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource.SetKeyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::*)(::Rewired::KeyboardKeyCode, bool)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::SetKeyValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18187fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"SetKeyValue", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource.WWgsRFnzSkRIyJAYgqHIyMrEkAjW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::WWgsRFnzSkRIyJAYgqHIyMrEkAjW)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource.CjpEwktykuVJGJJEGvkulMRYcKLHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::CjpEwktykuVJGJJEGvkulMRYcKLHA)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18187f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"CjpEwktykuVJGJJEGvkulMRYcKLHA", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*& Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::__cordl_internal_get_HVuZBkIWMLLCvNWASPdRpvTWosiK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HVuZBkIWMLLCvNWASPdRpvTWosiK;
}
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* const& Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::__cordl_internal_get_HVuZBkIWMLLCvNWASPdRpvTWosiK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HVuZBkIWMLLCvNWASPdRpvTWosiK;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::__cordl_internal_set_HVuZBkIWMLLCvNWASPdRpvTWosiK(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HVuZBkIWMLLCvNWASPdRpvTWosiK = value;
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap* Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::get_keyPropertyMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"get_keyPropertyMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::set_keyPropertyMap(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"set_keyPropertyMap", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource_KeyPropertyMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::SetKeyValue(::Rewired::KeyboardKeyCode  keyCode, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"SetKeyValue", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyCode, value);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::WWgsRFnzSkRIyJAYgqHIyMrEkAjW()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::CjpEwktykuVJGJJEGvkulMRYcKLHA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>(),
                        {"CjpEwktykuVJGJJEGvkulMRYcKLHA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource* Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource::CustomPlatformUnifiedKeyboardSource()   {
}
