#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCountDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCountDisplay_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCountDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCountDisplay::*)()>(&::GlobalNamespace::PlayerCountDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180439300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCountDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCountDisplay::*)()>(&::GlobalNamespace::PlayerCountDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::PlayerCountDisplay::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::PlayerCountDisplay::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::PlayerCountDisplay::__cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
inline void GlobalNamespace::PlayerCountDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCountDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCountDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCountDisplay* GlobalNamespace::PlayerCountDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCountDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCountDisplay::PlayerCountDisplay()   {
}
