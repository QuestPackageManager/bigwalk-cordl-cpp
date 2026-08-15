#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FPSDisplay_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FPSDisplay.RefreshLocalizedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSDisplay::*)()>(&::GlobalNamespace::FPSDisplay::RefreshLocalizedValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804325d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"RefreshLocalizedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSDisplay::*)()>(&::GlobalNamespace::FPSDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804324b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSDisplay::*)()>(&::GlobalNamespace::FPSDisplay::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804323c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSDisplay.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSDisplay::*)()>(&::GlobalNamespace::FPSDisplay::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180432610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSDisplay.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSDisplay::*)()>(&::GlobalNamespace::FPSDisplay::Update)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180432660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSDisplay::*)()>(&::GlobalNamespace::FPSDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::FPSDisplay::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::FPSDisplay::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::FPSDisplay::__cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::FPSDisplay::__cordl_internal_get_fpsValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsValues;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::FPSDisplay::__cordl_internal_get_fpsValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsValues;
}
constexpr void GlobalNamespace::FPSDisplay::__cordl_internal_set_fpsValues(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fpsValues = value;
}
constexpr int32_t& GlobalNamespace::FPSDisplay::__cordl_internal_get__fpsIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fpsIndex;
}
constexpr int32_t const& GlobalNamespace::FPSDisplay::__cordl_internal_get__fpsIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fpsIndex;
}
constexpr void GlobalNamespace::FPSDisplay::__cordl_internal_set__fpsIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fpsIndex = value;
}
constexpr ::StringW& GlobalNamespace::FPSDisplay::__cordl_internal_get_localizationKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationKey;
}
constexpr ::StringW const& GlobalNamespace::FPSDisplay::__cordl_internal_get_localizationKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationKey;
}
constexpr void GlobalNamespace::FPSDisplay::__cordl_internal_set_localizationKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizationKey = value;
}
constexpr ::StringW& GlobalNamespace::FPSDisplay::__cordl_internal_get__localizedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedValue;
}
constexpr ::StringW const& GlobalNamespace::FPSDisplay::__cordl_internal_get__localizedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedValue;
}
constexpr void GlobalNamespace::FPSDisplay::__cordl_internal_set__localizedValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localizedValue = value;
}
inline void GlobalNamespace::FPSDisplay::RefreshLocalizedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"RefreshLocalizedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FPSDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FPSDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FPSDisplay::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FPSDisplay::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FPSDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FPSDisplay* GlobalNamespace::FPSDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FPSDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FPSDisplay::FPSDisplay()   {
}
