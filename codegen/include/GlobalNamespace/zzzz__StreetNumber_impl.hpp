#pragma once
// IWYU pragma private; include "GlobalNamespace/StreetNumber.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StreetNumber_def.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StreetNumber.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreetNumber::*)()>(&::GlobalNamespace::StreetNumber::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180408f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreetNumber*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StreetNumber.GetHouseNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::SaveablePropName)>(&::GlobalNamespace::StreetNumber::GetHouseNumber)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180408fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreetNumber*>(),
                        {"GetHouseNumber", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StreetNumber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreetNumber::*)()>(&::GlobalNamespace::StreetNumber::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreetNumber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SaveablePropName& GlobalNamespace::StreetNumber::__cordl_internal_get_saveablePropName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveablePropName;
}
constexpr ::GlobalNamespace::SaveablePropName const& GlobalNamespace::StreetNumber::__cordl_internal_get_saveablePropName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveablePropName;
}
constexpr void GlobalNamespace::StreetNumber::__cordl_internal_set_saveablePropName(::GlobalNamespace::SaveablePropName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveablePropName = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::StreetNumber::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::StreetNumber::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::StreetNumber::__cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
inline void GlobalNamespace::StreetNumber::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreetNumber*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StreetNumber::GetHouseNumber(::GlobalNamespace::SaveablePropName  gourdSaveName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreetNumber*>(),
                        {"GetHouseNumber", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gourdSaveName);
}
inline void GlobalNamespace::StreetNumber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreetNumber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StreetNumber* GlobalNamespace::StreetNumber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StreetNumber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StreetNumber::StreetNumber()   {
}
