#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveNameDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaveNameDisplay_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveNameDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveNameDisplay::*)()>(&::GlobalNamespace::SaveNameDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043d520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveNameDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveNameDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveNameDisplay::*)()>(&::GlobalNamespace::SaveNameDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveNameDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::SaveNameDisplay::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::SaveNameDisplay::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::SaveNameDisplay::__cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
inline void GlobalNamespace::SaveNameDisplay::setStaticF_saveName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "saveName", ::GlobalNamespace::SaveNameDisplay*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SaveNameDisplay::getStaticF_saveName()  {
return ::cordl_internals::getStaticField<::StringW, "saveName", ::GlobalNamespace::SaveNameDisplay*>();
}
inline void GlobalNamespace::SaveNameDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveNameDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaveNameDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveNameDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaveNameDisplay* GlobalNamespace::SaveNameDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaveNameDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveNameDisplay::SaveNameDisplay()   {
}
