#pragma once
// IWYU pragma private; include "GlobalNamespace/PingDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PingDisplay_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PingDisplay.RefreshLocalizedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingDisplay::*)()>(&::GlobalNamespace::PingDisplay::RefreshLocalizedValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180439230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"RefreshLocalizedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingDisplay::*)()>(&::GlobalNamespace::PingDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180439110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingDisplay::*)()>(&::GlobalNamespace::PingDisplay::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180439020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingDisplay.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingDisplay::*)()>(&::GlobalNamespace::PingDisplay::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180439270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingDisplay::*)()>(&::GlobalNamespace::PingDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::PingDisplay::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::PingDisplay::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::PingDisplay::__cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
constexpr ::StringW& GlobalNamespace::PingDisplay::__cordl_internal_get_localizationKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationKey;
}
constexpr ::StringW const& GlobalNamespace::PingDisplay::__cordl_internal_get_localizationKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationKey;
}
constexpr void GlobalNamespace::PingDisplay::__cordl_internal_set_localizationKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizationKey = value;
}
constexpr ::StringW& GlobalNamespace::PingDisplay::__cordl_internal_get__localizedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedValue;
}
constexpr ::StringW const& GlobalNamespace::PingDisplay::__cordl_internal_get__localizedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedValue;
}
constexpr void GlobalNamespace::PingDisplay::__cordl_internal_set__localizedValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localizedValue = value;
}
inline void GlobalNamespace::PingDisplay::RefreshLocalizedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"RefreshLocalizedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PingDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PingDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PingDisplay::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PingDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PingDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PingDisplay* GlobalNamespace::PingDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PingDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingDisplay::PingDisplay()   {
}
